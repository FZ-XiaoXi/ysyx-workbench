// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VysyxSoCFull__Syms.h"


VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_sub__TOP__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1704,0,"externalPins_gpio_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1705,0,"externalPins_gpio_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1706,0,"externalPins_gpio_seg_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1707,0,"externalPins_gpio_seg_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1708,0,"externalPins_gpio_seg_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1709,0,"externalPins_gpio_seg_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1710,0,"externalPins_gpio_seg_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1711,0,"externalPins_gpio_seg_5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1712,0,"externalPins_gpio_seg_6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1713,0,"externalPins_gpio_seg_7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1714,0,"externalPins_ps2_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1715,0,"externalPins_ps2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1716,0,"externalPins_vga_r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1717,0,"externalPins_vga_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1718,0,"externalPins_vga_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1719,0,"externalPins_vga_hsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1720,0,"externalPins_vga_vsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1721,0,"externalPins_vga_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1722,0,"externalPins_uart_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1723,0,"externalPins_uart_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ysyxSoCFull", VerilatedTracePrefixType::SCOPE_MODULE);
    VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__asic__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+374,0,"externalPins_gpio_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1705,0,"externalPins_gpio_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1706,0,"externalPins_gpio_seg_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1707,0,"externalPins_gpio_seg_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1708,0,"externalPins_gpio_seg_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1709,0,"externalPins_gpio_seg_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1710,0,"externalPins_gpio_seg_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1711,0,"externalPins_gpio_seg_5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1712,0,"externalPins_gpio_seg_6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1713,0,"externalPins_gpio_seg_7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1714,0,"externalPins_ps2_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1715,0,"externalPins_ps2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1716,0,"externalPins_vga_r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1717,0,"externalPins_vga_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1718,0,"externalPins_vga_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1719,0,"externalPins_vga_hsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1720,0,"externalPins_vga_vsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1721,0,"externalPins_vga_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1722,0,"externalPins_uart_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1723,0,"externalPins_uart_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("asic", VerilatedTracePrefixType::SCOPE_MODULE);
    VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__asic__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("bitrev", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1077,0,"sck",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1666,0,"ss",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1078,0,"mosi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1519,0,"miso",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+362,0,"cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1724,0,"next_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1520,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1725,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1859,0,"S_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1860,0,"S_RECV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1861,0,"S_SEND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1521,0,"rev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("flash", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1077,0,"sck",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1667,0,"ss",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1078,0,"mosi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1726,0,"miso",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1667,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1862,0,"cmd_t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1863,0,"addr_t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1864,0,"data_t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1865,0,"err_t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1497,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1498,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1499,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1500,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1501,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1502,0,"ren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+363,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1727,0,"raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+364,0,"data_bswap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("flash_cmd_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1077,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1502,0,"valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1499,0,"cmd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1727,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+363,0,"data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("psram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1728,0,"sck",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1587,0,"ce_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1729,0,"dio",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1730,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1731,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1866,0,"S_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1867,0,"S_SET_CMD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1868,0,"S_SET_ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1869,0,"S_WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1870,0,"S_DINL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1871,0,"S_DINH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1872,0,"S_DOUTL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1873,0,"S_DOUTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+365,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+366,0,"buf_command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+367,0,"buf_addr_in0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+368,0,"buf_addr_in1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+369,0,"buf_addr_in2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+370,0,"buf_addr_in3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+371,0,"buf_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+372,0,"buf_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1732,0,"is_QPI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+373,0,"psram_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1733,0,"dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("sdram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1734,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1079,0,"cke",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1668,0,"cs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1669,0,"ras",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1670,0,"cas",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1671,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1672,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+1673,0,"ba",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1674,0,"dqm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1699,0,"dq",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1735,0,"clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1862,0,"M_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1865,0,"M_ACTIVE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1874,0,"M_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1875,0,"M_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1675,0,"comm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1676,0,"comm_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1688,0,"now_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1736,0,"reg_ba",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1689,0,"cs0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1690,0,"cs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("sdram_32_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1734,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1079,0,"cke",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1689,0,"cs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1669,0,"ras",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1670,0,"cas",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1671,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1672,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+1677,0,"ba",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1674,0,"dqm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1699,0,"dq",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1876,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_sdram_16_H", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1734,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1079,0,"cke",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1689,0,"cs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1669,0,"ras",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1670,0,"cas",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1671,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1672,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+1677,0,"ba",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1678,0,"dqm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1700,0,"dq",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1877,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("reg_active_row", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1437+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 12,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1441,0,"reg_active_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1737,0,"wire_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1675,0,"wire_command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1442,0,"wire_dq_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1691,0,"wire_dq_out_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1443,0,"reg_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBit(c+1444,0,"mode_WB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1445,0,"mode_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1446,0,"mode_CAS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1447,0,"mode_BT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1448,0,"mode_BL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1449,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1692,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1450,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1738,0,"next_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1739,0,"clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1866,0,"S_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1867,0,"S_ACTIVE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1868,0,"S_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1869,0,"S_RCAS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1870,0,"S_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1871,0,"S_STOP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1872,0,"S_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1862,0,"M_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1865,0,"M_ACTIVE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1874,0,"M_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1875,0,"M_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1451,0,"sdram_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_sdram_16_L", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1734,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1079,0,"cke",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1689,0,"cs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1669,0,"ras",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1670,0,"cas",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1671,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1672,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+1677,0,"ba",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1679,0,"dqm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1701,0,"dq",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1878,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("reg_active_row", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1452+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 12,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1456,0,"reg_active_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1740,0,"wire_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1675,0,"wire_command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1457,0,"wire_dq_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1693,0,"wire_dq_out_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1458,0,"reg_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBit(c+1459,0,"mode_WB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1460,0,"mode_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1461,0,"mode_CAS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1462,0,"mode_BT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1463,0,"mode_BL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1464,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1694,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1465,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1741,0,"next_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1739,0,"clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1866,0,"S_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1867,0,"S_ACTIVE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1868,0,"S_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1869,0,"S_RCAS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1870,0,"S_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1871,0,"S_STOP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1872,0,"S_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1862,0,"M_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1865,0,"M_ACTIVE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1874,0,"M_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1875,0,"M_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1466,0,"sdram_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sdram_32_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1734,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1079,0,"cke",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1690,0,"cs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1669,0,"ras",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1670,0,"cas",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1671,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1672,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+1677,0,"ba",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1674,0,"dqm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1699,0,"dq",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1879,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_sdram_16_H", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1734,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1079,0,"cke",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1690,0,"cs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1669,0,"ras",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1670,0,"cas",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1671,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1672,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+1677,0,"ba",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1678,0,"dqm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1700,0,"dq",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1880,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("reg_active_row", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1467+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 12,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1471,0,"reg_active_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1742,0,"wire_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1675,0,"wire_command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1472,0,"wire_dq_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1695,0,"wire_dq_out_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1473,0,"reg_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBit(c+1474,0,"mode_WB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1475,0,"mode_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1476,0,"mode_CAS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1477,0,"mode_BT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1478,0,"mode_BL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1479,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1696,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1480,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1743,0,"next_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1744,0,"clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1866,0,"S_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1867,0,"S_ACTIVE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1868,0,"S_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1869,0,"S_RCAS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1870,0,"S_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1871,0,"S_STOP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1872,0,"S_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1862,0,"M_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1865,0,"M_ACTIVE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1874,0,"M_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1875,0,"M_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1481,0,"sdram_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_sdram_16_L", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1734,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1079,0,"cke",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1690,0,"cs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1669,0,"ras",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1670,0,"cas",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1671,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1672,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+1677,0,"ba",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1679,0,"dqm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1701,0,"dq",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1881,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("reg_active_row", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1482+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 12,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1486,0,"reg_active_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1745,0,"wire_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1675,0,"wire_command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1487,0,"wire_dq_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1697,0,"wire_dq_out_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1488,0,"reg_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBit(c+1489,0,"mode_WB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1490,0,"mode_OP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1491,0,"mode_CAS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1492,0,"mode_BT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1493,0,"mode_BL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1494,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1698,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1495,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1746,0,"next_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1744,0,"clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1866,0,"S_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1867,0,"S_ACTIVE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1868,0,"S_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1869,0,"S_RCAS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1870,0,"S_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1871,0,"S_STOP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1872,0,"S_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1862,0,"M_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1865,0,"M_ACTIVE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1874,0,"M_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1875,0,"M_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1496,0,"sdram_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__asic__cpu__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__asic__luart__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__asic__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__asic__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1077,0,"spi_sck",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1680,0,"spi_ss",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1078,0,"spi_mosi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1747,0,"spi_miso",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1722,0,"uart_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1723,0,"uart_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1728,0,"psram_sck",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1587,0,"psram_ce_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1729,0,"psram_dio",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1734,0,"sdram_clk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1079,0,"sdram_cke",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1668,0,"sdram_cs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1669,0,"sdram_ras",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1670,0,"sdram_cas",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1671,0,"sdram_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1672,0,"sdram_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+1673,0,"sdram_ba",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1674,0,"sdram_dqm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1699,0,"sdram_dq",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+374,0,"gpio_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1705,0,"gpio_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1706,0,"gpio_seg_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1707,0,"gpio_seg_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1708,0,"gpio_seg_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1709,0,"gpio_seg_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1710,0,"gpio_seg_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1711,0,"gpio_seg_5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1712,0,"gpio_seg_6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1713,0,"gpio_seg_7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1714,0,"ps2_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1715,0,"ps2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1716,0,"vga_r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1717,0,"vga_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1718,0,"vga_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1719,0,"vga_hsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1720,0,"vga_vsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1721,0,"vga_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("cpu", VerilatedTracePrefixType::SCOPE_MODULE);
    VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__asic__cpu__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("luart", VerilatedTracePrefixType::SCOPE_MODULE);
    VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__asic__luart__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("apbdelay_delayer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1522,0,"in_paddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+375,0,"in_psel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+376,0,"in_penable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1863,0,"in_pprot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+377,0,"in_pwrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+378,0,"in_pwdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"in_pstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1588,0,"in_pready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1589,0,"in_prdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1590,0,"in_pslverr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1522,0,"out_paddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+375,0,"out_psel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+376,0,"out_penable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1863,0,"out_pprot",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+377,0,"out_pwrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+378,0,"out_pwdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"out_pstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1591,0,"out_pready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1748,0,"out_prdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1749,0,"out_pslverr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1080,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1592,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1081,0,"cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1878,0,"S_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1877,0,"S_WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1881,0,"S_DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1882,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1883,0,"sk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1082,0,"prdata_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1083,0,"pslverr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1084,0,"pready_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("apbxbar", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+375,0,"auto_anon_in_psel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+376,0,"auto_anon_in_penable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"auto_anon_in_pwrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1522,0,"auto_anon_in_paddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1863,0,"auto_anon_in_pprot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+378,0,"auto_anon_in_pwdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"auto_anon_in_pstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1591,0,"auto_anon_in_pready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1749,0,"auto_anon_in_pslverr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1748,0,"auto_anon_in_prdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1523,0,"auto_anon_out_5_psel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1524,0,"auto_anon_out_5_penable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"auto_anon_out_5_pwrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1525,0,"auto_anon_out_5_paddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+1863,0,"auto_anon_out_5_pprot",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+378,0,"auto_anon_out_5_pwdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"auto_anon_out_5_pstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1085,0,"auto_anon_out_5_pready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1876,0,"auto_anon_out_5_pslverr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1884,0,"auto_anon_out_5_prdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1054,0,"auto_anon_out_4_psel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1055,0,"auto_anon_out_4_penable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"auto_anon_out_4_pwrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1526,0,"auto_anon_out_4_paddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBus(c+1863,0,"auto_anon_out_4_pprot",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+378,0,"auto_anon_out_4_pwdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"auto_anon_out_4_pstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+380,0,"auto_anon_out_4_pready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1876,0,"auto_anon_out_4_pslverr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1527,0,"auto_anon_out_4_prdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1056,0,"auto_anon_out_3_psel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1057,0,"auto_anon_out_3_penable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"auto_anon_out_3_pwrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1526,0,"auto_anon_out_3_paddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBus(c+1863,0,"auto_anon_out_3_pprot",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+378,0,"auto_anon_out_3_pwdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"auto_anon_out_3_pstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+381,0,"auto_anon_out_3_pready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1876,0,"auto_anon_out_3_pslverr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1528,0,"auto_anon_out_3_prdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1529,0,"auto_anon_out_2_psel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1058,0,"auto_anon_out_2_penable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"auto_anon_out_2_pwrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1522,0,"auto_anon_out_2_paddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1863,0,"auto_anon_out_2_pprot",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+378,0,"auto_anon_out_2_pwdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"auto_anon_out_2_pstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1750,0,"auto_anon_out_2_pready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1876,0,"auto_anon_out_2_pslverr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1530,0,"auto_anon_out_2_prdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1531,0,"auto_anon_out_1_psel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1532,0,"auto_anon_out_1_penable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"auto_anon_out_1_pwrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1526,0,"auto_anon_out_1_paddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBus(c+1863,0,"auto_anon_out_1_pprot",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+378,0,"auto_anon_out_1_pwdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"auto_anon_out_1_pstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1533,0,"auto_anon_out_1_pready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1876,0,"auto_anon_out_1_pslverr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1751,0,"auto_anon_out_1_prdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1534,0,"auto_anon_out_0_psel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1535,0,"auto_anon_out_0_penable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"auto_anon_out_0_pwrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1525,0,"auto_anon_out_0_paddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+1863,0,"auto_anon_out_0_pprot",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+378,0,"auto_anon_out_0_pwdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"auto_anon_out_0_pstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1086,0,"auto_anon_out_0_pready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1087,0,"auto_anon_out_0_pslverr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1088,0,"auto_anon_out_0_prdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1536,0,"sel_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1537,0,"sel_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1538,0,"sel_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1539,0,"sel_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1540,0,"sel_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1541,0,"sel_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("axi42apb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+382,0,"auto_in_awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+383,0,"auto_in_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+384,0,"auto_in_awid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+385,0,"auto_in_awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+386,0,"auto_in_awlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+387,0,"auto_in_awsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+382,0,"auto_in_wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+388,0,"auto_in_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+389,0,"auto_in_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+390,0,"auto_in_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+391,0,"auto_in_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1061,0,"auto_in_bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+392,0,"auto_in_bid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1593,0,"auto_in_bresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+393,0,"auto_in_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+394,0,"auto_in_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+395,0,"auto_in_arid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+396,0,"auto_in_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+397,0,"auto_in_arlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+398,0,"auto_in_arsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+399,0,"auto_in_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1062,0,"auto_in_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+400,0,"auto_in_rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1063,0,"auto_in_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1593,0,"auto_in_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+375,0,"auto_out_psel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+376,0,"auto_out_penable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"auto_out_pwrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1522,0,"auto_out_paddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+378,0,"auto_out_pwdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"auto_out_pstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1588,0,"auto_out_pready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1590,0,"auto_out_pslverr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1589,0,"auto_out_prdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1061,0,"nodeIn_bvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1062,0,"nodeIn_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+376,0,"nodeOut_penable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+401,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+393,0,"accept_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+382,0,"accept_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+402,0,"is_write_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"is_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1064,0,"casez_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+400,0,"rid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+392,0,"bid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+403,0,"araddr_reg_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+404,0,"awaddr_reg_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+405,0,"wdata_reg_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+406,0,"wstrb_reg_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1594,0,"resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+407,0,"resp_hold_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1593,0,"resp_hold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+408,0,"nodeIn_rdata_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("axi4buf", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+409,0,"auto_in_awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"auto_in_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+410,0,"auto_in_awid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+141,0,"auto_in_awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"auto_in_awsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+142,0,"auto_in_awburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+411,0,"auto_in_wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"auto_in_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+144,0,"auto_in_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"auto_in_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+145,0,"auto_in_wlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"auto_in_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+412,0,"auto_in_bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+413,0,"auto_in_bid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+414,0,"auto_in_bresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+415,0,"auto_in_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"auto_in_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+416,0,"auto_in_arid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+194,0,"auto_in_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"auto_in_arsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+196,0,"auto_in_arburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+59,0,"auto_in_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+417,0,"auto_in_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+418,0,"auto_in_rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+419,0,"auto_in_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+420,0,"auto_in_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+421,0,"auto_in_rlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+382,0,"auto_out_awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+383,0,"auto_out_awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+384,0,"auto_out_awid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+385,0,"auto_out_awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+386,0,"auto_out_awlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+387,0,"auto_out_awsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+382,0,"auto_out_wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+388,0,"auto_out_wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+389,0,"auto_out_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+390,0,"auto_out_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+391,0,"auto_out_bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1061,0,"auto_out_bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+392,0,"auto_out_bid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1593,0,"auto_out_bresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+393,0,"auto_out_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+394,0,"auto_out_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+395,0,"auto_out_arid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+396,0,"auto_out_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+397,0,"auto_out_arlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+398,0,"auto_out_arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+399,0,"auto_out_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1062,0,"auto_out_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+400,0,"auto_out_rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1063,0,"auto_out_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1593,0,"auto_out_rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("nodeIn_bdeq_q", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+391,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1061,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+392,0,"io_enq_bits_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1593,0,"io_enq_bits_resp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+58,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+412,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+413,0,"io_deq_bits_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+414,0,"io_deq_bits_resp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+422,0,"wrap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,0,"wrap_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+424,0,"maybe_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+425,0,"ptr_match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+426,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+427,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1595,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"do_deq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ram_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+423,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1879,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1702,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+428,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+422,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1595,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1702,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1065,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("Memory", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+429+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("nodeIn_rdeq_q", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+399,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1062,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+400,0,"io_enq_bits_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1063,0,"io_enq_bits_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1593,0,"io_enq_bits_resp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+59,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+417,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+418,0,"io_deq_bits_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+419,0,"io_deq_bits_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+420,0,"io_deq_bits_resp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+421,0,"io_deq_bits_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+431,0,"wrap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+432,0,"wrap_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+433,0,"maybe_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"ptr_match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+435,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+436,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1596,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"do_deq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ram_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+432,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1879,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1702,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+437,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declBit(c+431,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1596,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1702,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1066,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->pushPrefix("Memory", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+439+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 38,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("nodeOut_ardeq_q", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+415,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+416,0,"io_enq_bits_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+194,0,"io_enq_bits_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"io_enq_bits_size",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+196,0,"io_enq_bits_burst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+393,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+394,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+395,0,"io_deq_bits_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+396,0,"io_deq_bits_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+397,0,"io_deq_bits_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+398,0,"io_deq_bits_size",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+443,0,"wrap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+444,0,"wrap_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+445,0,"maybe_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+446,0,"ptr_match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+447,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+448,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+449,0,"do_deq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ram_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+444,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1879,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1702,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+450,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declBit(c+443,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1702,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+60,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->pushPrefix("Memory", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+452+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 46,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("nodeOut_awdeq_q", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+409,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+410,0,"io_enq_bits_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+141,0,"io_enq_bits_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"io_enq_bits_size",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+142,0,"io_enq_bits_burst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+382,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+383,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+384,0,"io_deq_bits_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+385,0,"io_deq_bits_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+386,0,"io_deq_bits_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+387,0,"io_deq_bits_size",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+456,0,"wrap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+457,0,"wrap_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+458,0,"maybe_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+459,0,"ptr_match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+460,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+461,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"do_deq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ram_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+457,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1879,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1702,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+463,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declBit(c+456,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1702,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1752,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->pushPrefix("Memory", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+465+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 46,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("nodeOut_wdeq_q", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+411,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+144,0,"io_enq_bits_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"io_enq_bits_strb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+145,0,"io_enq_bits_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+382,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+388,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+389,0,"io_deq_bits_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+390,0,"io_deq_bits_strb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+469,0,"wrap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+470,0,"wrap_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+471,0,"maybe_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+472,0,"ptr_match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+473,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+474,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+475,0,"do_deq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ram_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+470,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1879,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1702,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+476,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+469,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1702,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1754,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->pushPrefix("Memory", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+478+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 35,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("axi4delay_delayer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+331,0,"in_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"in_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1866,0,"in_arid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+201,0,"in_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"in_arlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+202,0,"in_arsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+203,0,"in_arburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+204,0,"in_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1597,0,"in_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1756,0,"in_rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1757,0,"in_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1758,0,"in_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1598,0,"in_rlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+332,0,"in_awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"in_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"in_awid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+150,0,"in_awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"in_awlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"in_awsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+151,0,"in_awburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+333,0,"in_wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"in_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"in_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"in_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+154,0,"in_wlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"in_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1089,0,"in_bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1090,0,"in_bid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1091,0,"in_bresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+331,0,"out_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"out_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1866,0,"out_arid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+201,0,"out_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"out_arlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+202,0,"out_arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+203,0,"out_arburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+204,0,"out_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1092,0,"out_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1093,0,"out_rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1094,0,"out_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1878,0,"out_rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1095,0,"out_rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+332,0,"out_awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"out_awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"out_awid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+150,0,"out_awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"out_awlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"out_awsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+151,0,"out_awburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+333,0,"out_wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"out_wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"out_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"out_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+154,0,"out_wlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"out_bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1096,0,"out_bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1093,0,"out_bid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1878,0,"out_bresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1878,0,"S_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1877,0,"S_WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1881,0,"S_DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1880,0,"S_DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1882,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1883,0,"sk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("out_rvalid_w", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBit(c+1097+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_rvalid_w", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBit(c+482+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_rready_w", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBit(c+206+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_rid_w", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1105+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_rid_w", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+490+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_rdata_w", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1113+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_rdata_w", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+498+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_rresp_w", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+3+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_rresp_w", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+506+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("out_rlast_w", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBit(c+1121+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("in_rlast_w", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBit(c+514+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBus(c+1129,0,"rcnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1130,0,"rrcnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1131,0,"wstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+214,0,"wnext_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1132,0,"wcnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1089,0,"bvalid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1090,0,"bid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1091,0,"bresp_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("inst_u0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+215,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"in_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"in_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+522,0,"in_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+523,0,"in_rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+524,0,"in_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+525,0,"in_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+526,0,"in_rlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1133,0,"out_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1134,0,"out_rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1135,0,"out_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1878,0,"out_rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1136,0,"out_rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1878,0,"S_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1877,0,"S_WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1881,0,"S_DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1880,0,"S_DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1882,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1883,0,"sk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1503,0,"rstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+323,0,"rnext_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1504,0,"rcnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+522,0,"rvalid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+523,0,"rid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+524,0,"rdata_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+525,0,"rresp_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+526,0,"rlast_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("inst_u1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+215,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"in_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"in_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+527,0,"in_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+528,0,"in_rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+529,0,"in_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+530,0,"in_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+531,0,"in_rlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1137,0,"out_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1138,0,"out_rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1139,0,"out_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1878,0,"out_rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1140,0,"out_rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1878,0,"S_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1877,0,"S_WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1881,0,"S_DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1880,0,"S_DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1882,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1883,0,"sk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1505,0,"rstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+324,0,"rnext_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1506,0,"rcnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+527,0,"rvalid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+528,0,"rid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+529,0,"rdata_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+530,0,"rresp_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+531,0,"rlast_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("inst_u2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+215,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"in_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"in_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"in_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+533,0,"in_rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+534,0,"in_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+535,0,"in_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+536,0,"in_rlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1141,0,"out_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1142,0,"out_rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1143,0,"out_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1878,0,"out_rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1144,0,"out_rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1878,0,"S_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1877,0,"S_WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1881,0,"S_DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1880,0,"S_DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1882,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1883,0,"sk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1507,0,"rstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+325,0,"rnext_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1508,0,"rcnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+532,0,"rvalid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+533,0,"rid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+534,0,"rdata_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+535,0,"rresp_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+536,0,"rlast_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("inst_u3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+215,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"in_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"in_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+537,0,"in_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+538,0,"in_rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+539,0,"in_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+540,0,"in_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+541,0,"in_rlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1145,0,"out_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1146,0,"out_rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1147,0,"out_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1878,0,"out_rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1148,0,"out_rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1878,0,"S_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1877,0,"S_WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1881,0,"S_DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1880,0,"S_DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1882,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1883,0,"sk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1509,0,"rstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+326,0,"rnext_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1510,0,"rcnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+537,0,"rvalid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+538,0,"rid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+539,0,"rdata_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+540,0,"rresp_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+541,0,"rlast_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("inst_u4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+215,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"in_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"in_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+542,0,"in_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+543,0,"in_rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+544,0,"in_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+545,0,"in_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+546,0,"in_rlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1149,0,"out_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1150,0,"out_rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1151,0,"out_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1878,0,"out_rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1152,0,"out_rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1878,0,"S_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1877,0,"S_WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1881,0,"S_DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1880,0,"S_DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1882,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1883,0,"sk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1511,0,"rstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+327,0,"rnext_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1512,0,"rcnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+542,0,"rvalid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+543,0,"rid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+544,0,"rdata_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+545,0,"rresp_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+546,0,"rlast_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("inst_u5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+215,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"in_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"in_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+547,0,"in_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+548,0,"in_rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+549,0,"in_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+550,0,"in_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+551,0,"in_rlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1153,0,"out_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1154,0,"out_rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1155,0,"out_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1878,0,"out_rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1156,0,"out_rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1878,0,"S_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1877,0,"S_WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1881,0,"S_DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1880,0,"S_DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1882,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1883,0,"sk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1513,0,"rstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+328,0,"rnext_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1514,0,"rcnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+547,0,"rvalid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+548,0,"rid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+549,0,"rdata_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+550,0,"rresp_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+551,0,"rlast_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("inst_u6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+215,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"in_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"in_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+552,0,"in_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+553,0,"in_rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+554,0,"in_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+555,0,"in_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+556,0,"in_rlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1157,0,"out_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1158,0,"out_rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1159,0,"out_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1878,0,"out_rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1160,0,"out_rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1878,0,"S_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1877,0,"S_WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1881,0,"S_DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1880,0,"S_DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1882,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1883,0,"sk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1515,0,"rstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+329,0,"rnext_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1516,0,"rcnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+552,0,"rvalid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+553,0,"rid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+554,0,"rdata_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+555,0,"rresp_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+556,0,"rlast_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("inst_u7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+215,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"in_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"in_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+557,0,"in_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+558,0,"in_rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+559,0,"in_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+560,0,"in_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+561,0,"in_rlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1161,0,"out_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1162,0,"out_rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1163,0,"out_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1878,0,"out_rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1164,0,"out_rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1878,0,"S_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1877,0,"S_WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1881,0,"S_DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1880,0,"S_DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1882,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1883,0,"sk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1517,0,"rstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+330,0,"rnext_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1518,0,"rcnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+557,0,"rvalid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+558,0,"rid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+559,0,"rdata_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+560,0,"rresp_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+561,0,"rlast_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("axi4frag", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+562,0,"auto_in_awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"auto_in_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"auto_in_awid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+150,0,"auto_in_awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"auto_in_awlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"auto_in_awsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+151,0,"auto_in_awburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+563,0,"auto_in_wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"auto_in_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"auto_in_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"auto_in_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+154,0,"auto_in_wlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"auto_in_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+564,0,"auto_in_bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+565,0,"auto_in_bid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+566,0,"auto_in_bresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+567,0,"auto_in_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+224,0,"auto_in_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1866,0,"auto_in_arid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+201,0,"auto_in_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"auto_in_arlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+202,0,"auto_in_arsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+203,0,"auto_in_arburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+225,0,"auto_in_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+568,0,"auto_in_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+569,0,"auto_in_rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+570,0,"auto_in_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+571,0,"auto_in_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+572,0,"auto_in_rlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"auto_out_awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"auto_out_awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+410,0,"auto_out_awid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+141,0,"auto_out_awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"auto_out_awsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+142,0,"auto_out_awburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+573,0,"auto_out_awecho_real_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"auto_out_wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"auto_out_wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+144,0,"auto_out_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"auto_out_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+145,0,"auto_out_wlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"auto_out_bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+574,0,"auto_out_bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+565,0,"auto_out_bid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+575,0,"auto_out_bresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+576,0,"auto_out_becho_real_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+229,0,"auto_out_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+230,0,"auto_out_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+416,0,"auto_out_arid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+194,0,"auto_out_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"auto_out_arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+196,0,"auto_out_arburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+159,0,"auto_out_arecho_real_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+225,0,"auto_out_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+568,0,"auto_out_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+569,0,"auto_out_rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+570,0,"auto_out_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+571,0,"auto_out_rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+577,0,"auto_out_recho_real_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"auto_out_rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"nodeOut_wvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+579,0,"w_idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"in_awready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+580,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+581,0,"r_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+582,0,"r_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+160,0,"len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+232,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+583,0,"busy_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+584,0,"r_addr_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+585,0,"r_len_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+586,0,"len_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+161,0,"addr_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+587,0,"wbeats_latched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"nodeOut_awvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"wbeats_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+588,0,"w_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+163,0,"w_todo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+145,0,"w_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"nodeOut_bready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+589,0,"error_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+590,0,"error_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+591,0,"error_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+592,0,"error_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+593,0,"error_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+594,0,"error_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+595,0,"error_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+596,0,"error_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+597,0,"error_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+598,0,"error_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+599,0,"error_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+600,0,"error_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+601,0,"error_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+602,0,"error_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+603,0,"error_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+604,0,"error_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+605,0,"casez_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("deq_q", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+567,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+224,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1866,0,"io_enq_bits_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+201,0,"io_enq_bits_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"io_enq_bits_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+202,0,"io_enq_bits_size",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+203,0,"io_enq_bits_burst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+233,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+230,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+416,0,"io_deq_bits_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+234,0,"io_deq_bits_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+164,0,"io_deq_bits_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+195,0,"io_deq_bits_size",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+196,0,"io_deq_bits_burst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+606,0,"ram",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declBit(c+608,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+230,0,"io_deq_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("deq_q_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+562,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"io_enq_bits_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+150,0,"io_enq_bits_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"io_enq_bits_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"io_enq_bits_size",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+151,0,"io_enq_bits_burst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+236,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+410,0,"io_deq_bits_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+166,0,"io_deq_bits_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+609,0,"io_deq_bits_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+12,0,"io_deq_bits_size",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+142,0,"io_deq_bits_burst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+610,0,"ram",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declBit(c+612,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"io_deq_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("in_wdeq_q", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+563,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"io_enq_bits_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"io_enq_bits_strb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+154,0,"io_enq_bits_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+144,0,"io_deq_bits_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"io_deq_bits_strb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1759,0,"io_deq_bits_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+613,0,"ram",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declBit(c+615,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"io_deq_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("axi4ram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"auto_in_awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"auto_in_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+410,0,"auto_in_awid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+169,0,"auto_in_awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+1760,0,"auto_in_wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"auto_in_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+144,0,"auto_in_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"auto_in_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+241,0,"auto_in_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+616,0,"auto_in_bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+617,0,"auto_in_bid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+618,0,"auto_in_bresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+242,0,"auto_in_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+243,0,"auto_in_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+416,0,"auto_in_arid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+244,0,"auto_in_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+245,0,"auto_in_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+619,0,"auto_in_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+620,0,"auto_in_rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+621,0,"auto_in_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+622,0,"auto_in_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+242,0,"nodeIn_arready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"nodeIn_awready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"w_sel0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+616,0,"w_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+617,0,"w_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+623,0,"r_sel1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+624,0,"w_sel1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+619,0,"r_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+620,0,"r_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+246,0,"ren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+625,0,"rdata_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+626,0,"rdata_r0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+627,0,"rdata_r1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+628,0,"rdata_r2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+629,0,"rdata_r3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("mem_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+247,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+246,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1702,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+630,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+248,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1702,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+144,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"W0_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("axi4xbar", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+334,0,"auto_anon_in_awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"auto_anon_in_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"auto_anon_in_awid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+150,0,"auto_anon_in_awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"auto_anon_in_awlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"auto_anon_in_awsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+151,0,"auto_anon_in_awburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+335,0,"auto_anon_in_wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"auto_anon_in_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"auto_anon_in_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"auto_anon_in_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+154,0,"auto_anon_in_wlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"auto_anon_in_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1599,0,"auto_anon_in_bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1600,0,"auto_anon_in_bid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1601,0,"auto_anon_in_bresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+336,0,"auto_anon_in_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"auto_anon_in_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1866,0,"auto_anon_in_arid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+201,0,"auto_anon_in_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"auto_anon_in_arlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+202,0,"auto_anon_in_arsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+203,0,"auto_anon_in_arburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+19,0,"auto_anon_in_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1602,0,"auto_anon_in_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1603,0,"auto_anon_in_rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1604,0,"auto_anon_in_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1605,0,"auto_anon_in_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1606,0,"auto_anon_in_rlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+332,0,"auto_anon_out_1_awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"auto_anon_out_1_awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"auto_anon_out_1_awid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+150,0,"auto_anon_out_1_awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"auto_anon_out_1_awlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"auto_anon_out_1_awsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+151,0,"auto_anon_out_1_awburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+333,0,"auto_anon_out_1_wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"auto_anon_out_1_wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"auto_anon_out_1_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"auto_anon_out_1_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+154,0,"auto_anon_out_1_wlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"auto_anon_out_1_bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1089,0,"auto_anon_out_1_bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1090,0,"auto_anon_out_1_bid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1091,0,"auto_anon_out_1_bresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+331,0,"auto_anon_out_1_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"auto_anon_out_1_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1866,0,"auto_anon_out_1_arid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+201,0,"auto_anon_out_1_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"auto_anon_out_1_arlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+202,0,"auto_anon_out_1_arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+203,0,"auto_anon_out_1_arburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+204,0,"auto_anon_out_1_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1597,0,"auto_anon_out_1_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1756,0,"auto_anon_out_1_rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1757,0,"auto_anon_out_1_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1758,0,"auto_anon_out_1_rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1598,0,"auto_anon_out_1_rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+562,0,"auto_anon_out_0_awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"auto_anon_out_0_awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"auto_anon_out_0_awid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+150,0,"auto_anon_out_0_awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"auto_anon_out_0_awlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"auto_anon_out_0_awsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+151,0,"auto_anon_out_0_awburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+563,0,"auto_anon_out_0_wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"auto_anon_out_0_wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"auto_anon_out_0_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"auto_anon_out_0_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+154,0,"auto_anon_out_0_wlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"auto_anon_out_0_bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+564,0,"auto_anon_out_0_bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+565,0,"auto_anon_out_0_bid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+566,0,"auto_anon_out_0_bresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+567,0,"auto_anon_out_0_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+224,0,"auto_anon_out_0_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1866,0,"auto_anon_out_0_arid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+201,0,"auto_anon_out_0_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"auto_anon_out_0_arlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+202,0,"auto_anon_out_0_arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+203,0,"auto_anon_out_0_arburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+225,0,"auto_anon_out_0_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+568,0,"auto_anon_out_0_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+569,0,"auto_anon_out_0_rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+570,0,"auto_anon_out_0_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+571,0,"auto_anon_out_0_rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+572,0,"auto_anon_out_0_rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1599,0,"in_0_bvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1602,0,"in_0_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+337,0,"in_0_wready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"in_0_awready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1761,0,"in_0_arready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+334,0,"anonIn_awready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"anonIn_arready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"requestARIO_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"requestARIO_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"requestAWIO_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"requestAWIO_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1885,0,"arSel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+11,0,"awSel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1607,0,"rSel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1608,0,"bSel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+631,0,"arFIFOMap_0_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+632,0,"arFIFOMap_0_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+633,0,"awFIFOMap_0_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+634,0,"awFIFOMap_0_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+635,0,"arFIFOMap_1_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1886,0,"arFIFOMap_1_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+636,0,"awFIFOMap_1_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+637,0,"awFIFOMap_1_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+638,0,"arFIFOMap_2_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1887,0,"arFIFOMap_2_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+639,0,"awFIFOMap_2_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+640,0,"awFIFOMap_2_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+641,0,"arFIFOMap_3_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1888,0,"arFIFOMap_3_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+642,0,"awFIFOMap_3_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+643,0,"awFIFOMap_3_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+644,0,"arFIFOMap_4_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1889,0,"arFIFOMap_4_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+645,0,"awFIFOMap_4_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+646,0,"awFIFOMap_4_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+647,0,"arFIFOMap_5_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1890,0,"arFIFOMap_5_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+648,0,"awFIFOMap_5_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+649,0,"awFIFOMap_5_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+650,0,"arFIFOMap_6_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1891,0,"arFIFOMap_6_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+651,0,"awFIFOMap_6_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+652,0,"awFIFOMap_6_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+653,0,"arFIFOMap_7_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1892,0,"arFIFOMap_7_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+654,0,"awFIFOMap_7_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+655,0,"awFIFOMap_7_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"arFIFOMap_8_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1893,0,"arFIFOMap_8_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+657,0,"awFIFOMap_8_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+658,0,"awFIFOMap_8_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+659,0,"arFIFOMap_9_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1894,0,"arFIFOMap_9_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+660,0,"awFIFOMap_9_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+661,0,"awFIFOMap_9_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+662,0,"arFIFOMap_10_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1895,0,"arFIFOMap_10_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+663,0,"awFIFOMap_10_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+664,0,"awFIFOMap_10_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+665,0,"arFIFOMap_11_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1896,0,"arFIFOMap_11_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+666,0,"awFIFOMap_11_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+667,0,"awFIFOMap_11_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+668,0,"arFIFOMap_12_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1897,0,"arFIFOMap_12_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+669,0,"awFIFOMap_12_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+670,0,"awFIFOMap_12_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+671,0,"arFIFOMap_13_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1898,0,"arFIFOMap_13_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+672,0,"awFIFOMap_13_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+673,0,"awFIFOMap_13_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+674,0,"arFIFOMap_14_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1899,0,"arFIFOMap_14_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+675,0,"awFIFOMap_14_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+676,0,"awFIFOMap_14_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+677,0,"arFIFOMap_15_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1900,0,"arFIFOMap_15_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+678,0,"awFIFOMap_15_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+679,0,"awFIFOMap_15_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"casez_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"in_0_arvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+680,0,"latched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"casez_tmp_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"in_0_awvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"awIn_0_io_enq_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"in_0_wvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+681,0,"idle_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1609,0,"anyValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1610,0,"readys_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+682,0,"readys_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1611,0,"readys_unready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1612,0,"readys_readys",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1613,0,"prefixOR_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1614,0,"winner_2_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+683,0,"state_2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+684,0,"state_2_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1615,0,"muxState_2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1616,0,"muxState_2_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+685,0,"idle_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1617,0,"anyValid_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1618,0,"readys_valid_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+686,0,"readys_mask_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1619,0,"readys_unready_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1620,0,"readys_readys_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1621,0,"winner_3_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1622,0,"winner_3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+687,0,"state_3_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+688,0,"state_3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1623,0,"muxState_3_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1624,0,"muxState_3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("awIn_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+689,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+177,0,"io_enq_bits",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+339,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+178,0,"io_deq_bits",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+690,0,"wrap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+691,0,"wrap_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+692,0,"maybe_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+693,0,"ptr_match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+694,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+695,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"io_deq_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+340,0,"do_deq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ram_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+691,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1879,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1702,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+696,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+690,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1702,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+177,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("Memory", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+697+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("axi4xbar_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"auto_anon_in_awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"auto_anon_in_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+410,0,"auto_anon_in_awid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+141,0,"auto_anon_in_awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"auto_anon_in_awsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+142,0,"auto_anon_in_awburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+227,0,"auto_anon_in_wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"auto_anon_in_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+144,0,"auto_anon_in_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"auto_anon_in_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+145,0,"auto_anon_in_wlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"auto_anon_in_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+574,0,"auto_anon_in_bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+565,0,"auto_anon_in_bid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+575,0,"auto_anon_in_bresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+255,0,"auto_anon_in_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"auto_anon_in_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+416,0,"auto_anon_in_arid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+194,0,"auto_anon_in_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"auto_anon_in_arsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+196,0,"auto_anon_in_arburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+225,0,"auto_anon_in_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+568,0,"auto_anon_in_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+569,0,"auto_anon_in_rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+570,0,"auto_anon_in_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+571,0,"auto_anon_in_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+578,0,"auto_anon_in_rlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"auto_anon_out_2_awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"auto_anon_out_2_awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+410,0,"auto_anon_out_2_awid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+169,0,"auto_anon_out_2_awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+1760,0,"auto_anon_out_2_wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"auto_anon_out_2_wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+144,0,"auto_anon_out_2_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"auto_anon_out_2_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+241,0,"auto_anon_out_2_bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+616,0,"auto_anon_out_2_bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+617,0,"auto_anon_out_2_bid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+618,0,"auto_anon_out_2_bresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+242,0,"auto_anon_out_2_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+243,0,"auto_anon_out_2_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+416,0,"auto_anon_out_2_arid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+244,0,"auto_anon_out_2_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBit(c+245,0,"auto_anon_out_2_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+619,0,"auto_anon_out_2_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+620,0,"auto_anon_out_2_rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+621,0,"auto_anon_out_2_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+622,0,"auto_anon_out_2_rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+180,0,"auto_anon_out_1_awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"auto_anon_out_1_wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+699,0,"auto_anon_out_1_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"auto_anon_out_1_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+416,0,"auto_anon_out_1_arid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+258,0,"auto_anon_out_1_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBit(c+63,0,"auto_anon_out_1_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+700,0,"auto_anon_out_1_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+701,0,"auto_anon_out_1_rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+702,0,"auto_anon_out_1_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+409,0,"auto_anon_out_0_awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"auto_anon_out_0_awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+410,0,"auto_anon_out_0_awid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+141,0,"auto_anon_out_0_awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"auto_anon_out_0_awsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+142,0,"auto_anon_out_0_awburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+411,0,"auto_anon_out_0_wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"auto_anon_out_0_wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+144,0,"auto_anon_out_0_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"auto_anon_out_0_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+145,0,"auto_anon_out_0_wlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"auto_anon_out_0_bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+412,0,"auto_anon_out_0_bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+413,0,"auto_anon_out_0_bid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+414,0,"auto_anon_out_0_bresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+415,0,"auto_anon_out_0_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"auto_anon_out_0_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+416,0,"auto_anon_out_0_arid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+194,0,"auto_anon_out_0_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"auto_anon_out_0_arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+196,0,"auto_anon_out_0_arburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+59,0,"auto_anon_out_0_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+417,0,"auto_anon_out_0_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+418,0,"auto_anon_out_0_rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+419,0,"auto_anon_out_0_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+420,0,"auto_anon_out_0_rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+421,0,"auto_anon_out_0_rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+574,0,"in_0_bvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+568,0,"in_0_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+259,0,"in_0_wready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"in_0_awready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"in_0_arready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"anonIn_awready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"requestARIO_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+262,0,"requestARIO_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"requestARIO_0_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"requestAWIO_0_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"requestAWIO_0_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"requestAWIO_0_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+703,0,"arSel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+704,0,"awSel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+705,0,"rSel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+706,0,"bSel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+707,0,"arFIFOMap_0_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+708,0,"awFIFOMap_0_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+709,0,"arFIFOMap_1_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+710,0,"awFIFOMap_1_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+711,0,"arFIFOMap_2_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+712,0,"awFIFOMap_2_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+713,0,"arFIFOMap_3_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+714,0,"awFIFOMap_3_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+715,0,"arFIFOMap_4_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+716,0,"awFIFOMap_4_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+717,0,"arFIFOMap_5_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+718,0,"awFIFOMap_5_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+719,0,"arFIFOMap_6_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+720,0,"awFIFOMap_6_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+721,0,"arFIFOMap_7_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+722,0,"awFIFOMap_7_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+723,0,"arFIFOMap_8_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+724,0,"awFIFOMap_8_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+725,0,"arFIFOMap_9_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+726,0,"awFIFOMap_9_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+727,0,"arFIFOMap_10_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+728,0,"awFIFOMap_10_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+729,0,"arFIFOMap_11_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+730,0,"awFIFOMap_11_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+731,0,"arFIFOMap_12_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+732,0,"awFIFOMap_12_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+733,0,"arFIFOMap_13_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+734,0,"awFIFOMap_13_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+735,0,"arFIFOMap_14_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+736,0,"awFIFOMap_14_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+737,0,"arFIFOMap_15_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+738,0,"awFIFOMap_15_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+739,0,"latched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"in_0_awvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"awIn_0_io_enq_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"in_0_wvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+740,0,"idle_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+741,0,"anyValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+742,0,"readys_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+743,0,"readys_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+744,0,"readys_unready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+745,0,"readys_readys",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+746,0,"prefixOR_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+747,0,"winner_3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+748,0,"winner_3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+749,0,"state_3_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+750,0,"state_3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+751,0,"state_3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+752,0,"muxState_3_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+753,0,"muxState_3_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+754,0,"muxState_3_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+755,0,"idle_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+756,0,"anyValid_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+757,0,"readys_valid_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+758,0,"readys_mask_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+759,0,"readys_unready_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+760,0,"readys_readys_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+761,0,"winner_4_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+762,0,"winner_4_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+763,0,"state_4_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+764,0,"state_4_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+765,0,"muxState_4_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+766,0,"muxState_4_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("awIn_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+767,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+188,0,"io_enq_bits",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+264,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+190,0,"io_deq_bits",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+768,0,"wrap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+769,0,"wrap_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+770,0,"maybe_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+771,0,"ptr_match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+772,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+773,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"io_deq_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"do_deq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ram_ext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+769,0,"R0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1879,0,"R0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1702,0,"R0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+774,0,"R0_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+768,0,"W0_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"W0_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1702,0,"W0_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+188,0,"W0_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("Memory", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+775+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("axi4yank", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"auto_in_awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"auto_in_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+410,0,"auto_in_awid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+141,0,"auto_in_awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"auto_in_awsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+142,0,"auto_in_awburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+573,0,"auto_in_awecho_real_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"auto_in_wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"auto_in_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+144,0,"auto_in_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"auto_in_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+145,0,"auto_in_wlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"auto_in_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+574,0,"auto_in_bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+565,0,"auto_in_bid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+575,0,"auto_in_bresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+576,0,"auto_in_becho_real_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+229,0,"auto_in_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+230,0,"auto_in_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+416,0,"auto_in_arid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+194,0,"auto_in_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"auto_in_arsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+196,0,"auto_in_arburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+159,0,"auto_in_arecho_real_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+225,0,"auto_in_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+568,0,"auto_in_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+569,0,"auto_in_rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+570,0,"auto_in_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+571,0,"auto_in_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+577,0,"auto_in_recho_real_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+578,0,"auto_in_rlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"auto_out_awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"auto_out_awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+410,0,"auto_out_awid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+141,0,"auto_out_awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"auto_out_awsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+142,0,"auto_out_awburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+227,0,"auto_out_wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"auto_out_wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+144,0,"auto_out_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"auto_out_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+145,0,"auto_out_wlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"auto_out_bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+574,0,"auto_out_bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+565,0,"auto_out_bid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+575,0,"auto_out_bresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+255,0,"auto_out_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"auto_out_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+416,0,"auto_out_arid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+194,0,"auto_out_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"auto_out_arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+196,0,"auto_out_arburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+225,0,"auto_out_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+568,0,"auto_out_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+569,0,"auto_out_rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+570,0,"auto_out_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+571,0,"auto_out_rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+578,0,"auto_out_rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+777,0,"casez_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+778,0,"casez_tmp_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+577,0,"casez_tmp_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+779,0,"casez_tmp_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+780,0,"casez_tmp_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"casez_tmp_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("Queue1_BundleMap", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+781,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"io_enq_bits_real_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+782,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+783,0,"io_deq_bits_real_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+782,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+783,0,"ram_real_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("Queue1_BundleMap_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+784,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"io_enq_bits_real_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+786,0,"io_deq_bits_real_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+786,0,"ram_real_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+268,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("Queue1_BundleMap_10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+787,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"io_enq_bits_real_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+788,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+789,0,"io_deq_bits_real_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+788,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+789,0,"ram_real_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("Queue1_BundleMap_11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+790,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"io_enq_bits_real_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+791,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+792,0,"io_deq_bits_real_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+791,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+792,0,"ram_real_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("Queue1_BundleMap_12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+793,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"io_enq_bits_real_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+794,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+795,0,"io_deq_bits_real_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+794,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+795,0,"ram_real_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("Queue1_BundleMap_13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+796,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"io_enq_bits_real_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+797,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+798,0,"io_deq_bits_real_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+797,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+798,0,"ram_real_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("Queue1_BundleMap_14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+799,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"io_enq_bits_real_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+800,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+801,0,"io_deq_bits_real_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+800,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+801,0,"ram_real_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+273,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("Queue1_BundleMap_15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+802,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"io_enq_bits_real_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+803,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+804,0,"io_deq_bits_real_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+803,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+804,0,"ram_real_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("Queue1_BundleMap_16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+805,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+573,0,"io_enq_bits_real_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+806,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+807,0,"io_deq_bits_real_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+806,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+807,0,"ram_real_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("Queue1_BundleMap_17", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+808,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+573,0,"io_enq_bits_real_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+809,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+810,0,"io_deq_bits_real_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+809,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+810,0,"ram_real_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+276,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("Queue1_BundleMap_18", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+811,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+573,0,"io_enq_bits_real_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+812,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+813,0,"io_deq_bits_real_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+812,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+813,0,"ram_real_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("Queue1_BundleMap_19", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+814,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+573,0,"io_enq_bits_real_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+815,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+816,0,"io_deq_bits_real_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+815,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+816,0,"ram_real_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("Queue1_BundleMap_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+817,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"io_enq_bits_real_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+818,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+819,0,"io_deq_bits_real_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+818,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+819,0,"ram_real_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("Queue1_BundleMap_20", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+820,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+573,0,"io_enq_bits_real_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+821,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+822,0,"io_deq_bits_real_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+821,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+822,0,"ram_real_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+280,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("Queue1_BundleMap_21", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+823,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+573,0,"io_enq_bits_real_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+824,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+825,0,"io_deq_bits_real_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+824,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+825,0,"ram_real_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("Queue1_BundleMap_22", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+826,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+573,0,"io_enq_bits_real_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+827,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+828,0,"io_deq_bits_real_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+827,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+828,0,"ram_real_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("Queue1_BundleMap_23", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+829,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+573,0,"io_enq_bits_real_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+830,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+831,0,"io_deq_bits_real_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+830,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+831,0,"ram_real_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+283,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("Queue1_BundleMap_24", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+573,0,"io_enq_bits_real_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+833,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+834,0,"io_deq_bits_real_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+833,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+834,0,"ram_real_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+284,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("Queue1_BundleMap_25", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+835,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+573,0,"io_enq_bits_real_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+836,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+837,0,"io_deq_bits_real_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+836,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+837,0,"ram_real_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+285,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("Queue1_BundleMap_26", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+838,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+573,0,"io_enq_bits_real_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+839,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+840,0,"io_deq_bits_real_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+839,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+840,0,"ram_real_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("Queue1_BundleMap_27", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+841,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+573,0,"io_enq_bits_real_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+842,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+843,0,"io_deq_bits_real_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+842,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+843,0,"ram_real_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+287,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("Queue1_BundleMap_28", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+844,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+573,0,"io_enq_bits_real_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+845,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+846,0,"io_deq_bits_real_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+845,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+846,0,"ram_real_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+288,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("Queue1_BundleMap_29", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+847,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+573,0,"io_enq_bits_real_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+848,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+849,0,"io_deq_bits_real_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+848,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+849,0,"ram_real_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+289,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("Queue1_BundleMap_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+850,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"io_enq_bits_real_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+851,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+852,0,"io_deq_bits_real_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+851,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+852,0,"ram_real_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+290,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("Queue1_BundleMap_30", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+853,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+573,0,"io_enq_bits_real_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+854,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+855,0,"io_deq_bits_real_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+854,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+855,0,"ram_real_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+291,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("Queue1_BundleMap_31", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+573,0,"io_enq_bits_real_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+857,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+858,0,"io_deq_bits_real_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+857,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+858,0,"ram_real_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+292,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("Queue1_BundleMap_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+859,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"io_enq_bits_real_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+860,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+861,0,"io_deq_bits_real_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+860,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+861,0,"ram_real_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("Queue1_BundleMap_5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+862,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"io_enq_bits_real_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+863,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+864,0,"io_deq_bits_real_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+863,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+864,0,"ram_real_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+294,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("Queue1_BundleMap_6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+865,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"io_enq_bits_real_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"io_deq_bits_real_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+866,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+867,0,"ram_real_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+295,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("Queue1_BundleMap_7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+868,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"io_enq_bits_real_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+869,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+870,0,"io_deq_bits_real_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+869,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+870,0,"ram_real_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+296,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("Queue1_BundleMap_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+871,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"io_enq_bits_real_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+872,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+873,0,"io_deq_bits_real_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+872,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+873,0,"ram_real_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+297,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("Queue1_BundleMap_9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+874,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"io_enq_bits_real_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+875,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"io_deq_bits_real_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+875,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+876,0,"ram_real_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+298,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("cpu_reset_chain", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"io_d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+877,0,"io_q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("output_chain", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"io_d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+877,0,"io_q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+877,0,"sync_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+878,0,"sync_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+879,0,"sync_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+880,0,"sync_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+881,0,"sync_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"sync_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+883,0,"sync_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+884,0,"sync_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+885,0,"sync_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+886,0,"sync_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("lgpio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1056,0,"auto_in_psel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1057,0,"auto_in_penable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"auto_in_pwrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1526,0,"auto_in_paddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBus(c+1863,0,"auto_in_pprot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+378,0,"auto_in_pwdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"auto_in_pstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+381,0,"auto_in_pready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1876,0,"auto_in_pslverr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1528,0,"auto_in_prdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+374,0,"gpio_bundle_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1705,0,"gpio_bundle_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1706,0,"gpio_bundle_seg_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1707,0,"gpio_bundle_seg_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1708,0,"gpio_bundle_seg_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1709,0,"gpio_bundle_seg_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1710,0,"gpio_bundle_seg_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1711,0,"gpio_bundle_seg_5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1712,0,"gpio_bundle_seg_6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1713,0,"gpio_bundle_seg_7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("mgpio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1542,0,"in_paddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1056,0,"in_psel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1057,0,"in_penable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1863,0,"in_pprot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+377,0,"in_pwrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+378,0,"in_pwdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"in_pstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+381,0,"in_pready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1528,0,"in_prdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1876,0,"in_pslverr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+374,0,"gpio_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1705,0,"gpio_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1706,0,"gpio_seg_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1707,0,"gpio_seg_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1708,0,"gpio_seg_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1709,0,"gpio_seg_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1710,0,"gpio_seg_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1711,0,"gpio_seg_5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1712,0,"gpio_seg_6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1713,0,"gpio_seg_7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+887,0,"gpio_seg_reg_input",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("gpio_reg_decode", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+888+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+374,0,"gpio_out_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1528,0,"reg_prdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+896,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1543,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1878,0,"S_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1877,0,"S_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1881,0,"S_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("lkeyboard", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1054,0,"auto_in_psel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1055,0,"auto_in_penable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"auto_in_pwrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1526,0,"auto_in_paddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBus(c+1863,0,"auto_in_pprot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+378,0,"auto_in_pwdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"auto_in_pstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+380,0,"auto_in_pready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1876,0,"auto_in_pslverr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1527,0,"auto_in_prdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1714,0,"ps2_bundle_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1715,0,"ps2_bundle_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mps2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1542,0,"in_paddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1054,0,"in_psel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1055,0,"in_penable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1863,0,"in_pprot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+377,0,"in_pwrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+378,0,"in_pwdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"in_pstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+380,0,"in_pready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1527,0,"in_prdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1876,0,"in_pslverr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1714,0,"ps2_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1715,0,"ps2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+897,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1059,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1878,0,"S_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1877,0,"S_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("ps2_data_fifo", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1544+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 8,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1552,0,"ps2_data_fifo_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+898,0,"ps2_data_fifo_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1553,0,"ps2_data_fifo_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+899,0,"ps2_data_fifo_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+900,0,"pop_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+901,0,"ps2_clk_record",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+902,0,"ps2_clk_fall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1762,0,"cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1901,0,"next_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1763,0,"ps2_data_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("lmrom", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"auto_in_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"auto_in_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+699,0,"auto_in_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"auto_in_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+416,0,"auto_in_arid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+258,0,"auto_in_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBit(c+63,0,"auto_in_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+700,0,"auto_in_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+701,0,"auto_in_rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+702,0,"auto_in_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+700,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+702,0,"nodeIn_rdata_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+701,0,"nodeIn_rid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("mrom", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+299,0,"raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+300,0,"ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+301,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("lpsram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1529,0,"auto_in_psel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1058,0,"auto_in_penable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"auto_in_pwrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1522,0,"auto_in_paddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1863,0,"auto_in_pprot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+378,0,"auto_in_pwdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"auto_in_pstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1750,0,"auto_in_pready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1876,0,"auto_in_pslverr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1530,0,"auto_in_prdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1728,0,"qspi_bundle_sck",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1587,0,"qspi_bundle_ce_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1729,0,"qspi_bundle_dio",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("mpsram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1522,0,"in_paddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1529,0,"in_psel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1058,0,"in_penable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1863,0,"in_pprot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+377,0,"in_pwrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+378,0,"in_pwdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"in_pstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1750,0,"in_pready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1530,0,"in_prdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1876,0,"in_pslverr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1728,0,"qspi_sck",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1587,0,"qspi_ce_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1729,0,"qspi_dio",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1729,0,"din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1625,0,"dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1626,0,"douten",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1764,0,"ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1522,0,"adr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+378,0,"dat_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1530,0,"dat_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1529,0,"cyc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1529,0,"stb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1764,0,"ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1728,0,"sck",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1587,0,"ce_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1729,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1625,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1626,0,"douten",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1878,0,"ST_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1877,0,"ST_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1881,0,"ST_WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1860,0,"CONFIG_IS_QPI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1165,0,"mr_sck",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1166,0,"mr_ce_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1729,0,"mr_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1167,0,"mr_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1168,0,"mr_doe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1169,0,"mw_sck",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1170,0,"mw_ce_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1729,0,"mw_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1627,0,"mw_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1171,0,"mw_doe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1172,0,"qpi_sck",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1173,0,"qpi_ce_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1902,0,"qpi_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1174,0,"qpi_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1175,0,"qpi_doe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1628,0,"mr_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1176,0,"mr_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1629,0,"mw_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1630,0,"mw_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1177,0,"qpi_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1178,0,"qpi_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1529,0,"wb_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1554,0,"wb_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1555,0,"wb_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1179,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1631,0,"nstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+903,0,"size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+904,0,"byte0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+905,0,"byte1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+906,0,"byte2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+907,0,"byte3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+908,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("MR", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1879,0,"is_use_qpi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1702,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1765,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1556,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+1628,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1874,0,"size",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1176,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1530,0,"line",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1165,0,"sck",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1166,0,"ce_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1729,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1167,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1168,0,"douten",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1903,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1904,0,"READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1905,0,"FINAL_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1180,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1766,0,"nstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1181,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1182,0,"saddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1557+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1906,0,"CMD_EBH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1183,0,"byte_index_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1184,0,"byte_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("MW", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1879,0,"is_use_qpi",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1702,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1765,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1561,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+908,0,"line",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+903,0,"size",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1629,0,"wr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1630,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1169,0,"sck",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1170,0,"ce_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1729,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1627,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1171,0,"douten",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1903,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1904,0,"WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+909,0,"FINAL_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1185,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1767,0,"nstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1186,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1187,0,"saddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1907,0,"CMD_38H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("QPI", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1765,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1177,0,"fire",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1178,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1172,0,"sck",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1173,0,"ce_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1902,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1174,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1175,0,"douten",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1903,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1904,0,"FIRE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1908,0,"FINAL_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1188,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1189,0,"nstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1190,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1909,0,"saddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1910,0,"CMD_35H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("lsdram_axi", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+332,0,"auto_in_awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"auto_in_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"auto_in_awid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+150,0,"auto_in_awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"auto_in_awlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"auto_in_awsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+151,0,"auto_in_awburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+333,0,"auto_in_wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"auto_in_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"auto_in_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"auto_in_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+154,0,"auto_in_wlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"auto_in_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1096,0,"auto_in_bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1093,0,"auto_in_bid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1878,0,"auto_in_bresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+331,0,"auto_in_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"auto_in_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1866,0,"auto_in_arid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+201,0,"auto_in_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"auto_in_arlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+202,0,"auto_in_arsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+203,0,"auto_in_arburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+204,0,"auto_in_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1092,0,"auto_in_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1093,0,"auto_in_rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1094,0,"auto_in_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1878,0,"auto_in_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1095,0,"auto_in_rlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1734,0,"sdram_bundle_clk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1079,0,"sdram_bundle_cke",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1668,0,"sdram_bundle_cs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1669,0,"sdram_bundle_ras",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1670,0,"sdram_bundle_cas",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1671,0,"sdram_bundle_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1672,0,"sdram_bundle_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+1673,0,"sdram_bundle_ba",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1674,0,"sdram_bundle_dqm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1699,0,"sdram_bundle_dq",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("msdram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+332,0,"in_awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"in_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"in_awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"in_awid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"in_awlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"in_awsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+151,0,"in_awburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+333,0,"in_wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"in_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"in_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"in_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+154,0,"in_wlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"in_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1096,0,"in_bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1878,0,"in_bresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1093,0,"in_bid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+331,0,"in_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"in_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+201,0,"in_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1866,0,"in_arid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+148,0,"in_arlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+202,0,"in_arsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+203,0,"in_arburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+204,0,"in_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1092,0,"in_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1878,0,"in_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1094,0,"in_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1095,0,"in_rlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1093,0,"in_rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1734,0,"sdram_clk",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1079,0,"sdram_cke",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1668,0,"sdram_cs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1669,0,"sdram_ras",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1670,0,"sdram_cas",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1671,0,"sdram_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1672,0,"sdram_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+1673,0,"sdram_ba",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1674,0,"sdram_dqm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1699,0,"sdram_dq",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1191,0,"sdram_dout_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1192,0,"sdram_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("u_sdram_axi", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"inport_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"inport_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"inport_awid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"inport_awlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+151,0,"inport_awburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+152,0,"inport_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"inport_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"inport_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+154,0,"inport_wlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"inport_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"inport_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+201,0,"inport_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1866,0,"inport_arid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+148,0,"inport_arlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+203,0,"inport_arburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+204,0,"inport_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1699,0,"sdram_data_input_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+332,0,"inport_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+333,0,"inport_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1096,0,"inport_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1878,0,"inport_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1093,0,"inport_bid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+331,0,"inport_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1092,0,"inport_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1094,0,"inport_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1878,0,"inport_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1093,0,"inport_rid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1095,0,"inport_rlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1734,0,"sdram_clk_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1079,0,"sdram_cke_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1668,0,"sdram_cs_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1669,0,"sdram_ras_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1670,0,"sdram_cas_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1671,0,"sdram_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1674,0,"sdram_dqm_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1672,0,"sdram_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+1673,0,"sdram_ba_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1192,0,"sdram_data_output_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1191,0,"sdram_data_out_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1911,0,"SDRAM_MHZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1912,0,"SDRAM_ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1913,0,"SDRAM_COL_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1861,0,"SDRAM_READ_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+342,0,"ram_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+343,0,"ram_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+302,0,"ram_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1681,0,"ram_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"ram_write_data_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1193,0,"ram_read_data_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1768,0,"ram_len_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1194,0,"ram_ack_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1876,0,"ram_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_axi", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"axi_awvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"axi_awaddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"axi_awid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"axi_awlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+151,0,"axi_awburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+152,0,"axi_wvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"axi_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"axi_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+154,0,"axi_wlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"axi_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"axi_arvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+201,0,"axi_araddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1866,0,"axi_arid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+148,0,"axi_arlen_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+203,0,"axi_arburst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+204,0,"axi_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1681,0,"ram_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1194,0,"ram_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1876,0,"ram_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1193,0,"ram_read_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+332,0,"axi_awready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+333,0,"axi_wready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1096,0,"axi_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1878,0,"axi_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1093,0,"axi_bid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+331,0,"axi_arready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1092,0,"axi_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1094,0,"axi_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1878,0,"axi_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1093,0,"axi_rid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1095,0,"axi_rlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+343,0,"ram_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+302,0,"ram_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1768,0,"ram_len_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+342,0,"ram_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"ram_write_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1195,0,"calculate_addr_next__Vstatic__mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1196,0,"req_len_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1197,0,"req_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1198,0,"req_rd_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1199,0,"req_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1200,0,"req_id_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1201,0,"req_axburst_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1202,0,"req_axlen_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1203,0,"req_prio_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1204,0,"req_hold_rd_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"req_hold_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1206,0,"req_fifo_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+344,0,"req_push_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1769,0,"req_in_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+1207,0,"req_out_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1208,0,"req_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+303,0,"resp_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1209,0,"resp_is_write_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1210,0,"resp_is_read_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1095,0,"resp_is_last_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1093,0,"resp_id_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1211,0,"resp_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1212,0,"write_prio_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1213,0,"read_prio_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+304,0,"write_active_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+302,0,"read_active_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+342,0,"addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1770,0,"wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+302,0,"rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_requests", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1914,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1915,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1861,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1702,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1769,0,"data_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+344,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+303,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1208,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+1206,0,"accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1207,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1916,0,"COUNT_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ram", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1214+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1218,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1219,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1220,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_response", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1917,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1915,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1861,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1702,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1193,0,"data_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1194,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+303,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1094,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1221,0,"accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1211,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1916,0,"COUNT_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ram", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1222+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1226,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1227,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1228,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+343,0,"inport_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+302,0,"inport_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1768,0,"inport_len_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+342,0,"inport_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"inport_write_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1699,0,"sdram_data_input_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1681,0,"inport_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1194,0,"inport_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1876,0,"inport_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1193,0,"inport_read_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1734,0,"sdram_clk_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1079,0,"sdram_cke_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1668,0,"sdram_cs_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1669,0,"sdram_ras_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1670,0,"sdram_cas_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1671,0,"sdram_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1674,0,"sdram_dqm_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1672,0,"sdram_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+1673,0,"sdram_ba_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1192,0,"sdram_data_output_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1191,0,"sdram_data_out_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1911,0,"SDRAM_MHZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1912,0,"SDRAM_ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1913,0,"SDRAM_COL_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1861,0,"SDRAM_READ_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1916,0,"SDRAM_BANK_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1915,0,"SDRAM_DQM_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1918,0,"SDRAM_BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1919,0,"SDRAM_ROW_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1920,0,"SDRAM_REFRESH_CNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1921,0,"SDRAM_START_DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1922,0,"SDRAM_REFRESH_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1915,0,"CMD_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1873,0,"CMD_NOP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1869,0,"CMD_ACTIVE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1871,0,"CMD_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1870,0,"CMD_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1872,0,"CMD_TERMINATE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1868,0,"CMD_PRECHARGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1867,0,"CMD_REFRESH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1866,0,"CMD_LOAD_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1923,0,"MODE_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+1915,0,"STATE_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1866,0,"STATE_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1867,0,"STATE_DELAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1868,0,"STATE_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1869,0,"STATE_ACTIVATE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1870,0,"STATE_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1871,0,"STATE_READ_WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1872,0,"STATE_WRITE0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1924,0,"STATE_PRECHARGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1925,0,"STATE_REFRESH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1926,0,"AUTO_PRECHARGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1926,0,"ALL_BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1917,0,"SDRAM_DATA_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1926,0,"CYCLE_TIME_NS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1861,0,"SDRAM_TRCD_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1861,0,"SDRAM_TRP_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1914,0,"SDRAM_TRFC_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+342,0,"ram_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+343,0,"ram_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+302,0,"ram_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1681,0,"ram_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"ram_write_data_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1193,0,"ram_read_data_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1194,0,"ram_ack_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+345,0,"ram_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1682,0,"command_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1672,0,"addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+1192,0,"data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1229,0,"data_rd_en_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1674,0,"dqm_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1079,0,"cke_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1673,0,"bank_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1230,0,"data_buffer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1231,0,"dqm_buffer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1699,0,"sdram_data_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1232,0,"refresh_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1233,0,"row_open_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("active_row_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1234+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 12,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1683,0,"state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+346,0,"next_state_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+347,0,"target_state_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1242,0,"target_state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1243,0,"delay_state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+348,0,"addr_col_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+349,0,"addr_row_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+350,0,"addr_bank_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1915,0,"DELAY_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1244,0,"delay_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+351,0,"delay_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1927,0,"REFRESH_CNT_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1684,0,"refresh_timer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+1245,0,"sample_data0_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1193,0,"sample_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1246,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1247,0,"rd_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1194,0,"ack_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1685,0,"dbg_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("lspi", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1534,0,"auto_in_psel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1535,0,"auto_in_penable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"auto_in_pwrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1525,0,"auto_in_paddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+1863,0,"auto_in_pprot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+378,0,"auto_in_pwdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"auto_in_pstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1086,0,"auto_in_pready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1087,0,"auto_in_pslverr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1088,0,"auto_in_prdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1077,0,"spi_bundle_sck",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1680,0,"spi_bundle_ss",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1078,0,"spi_bundle_mosi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1747,0,"spi_bundle_miso",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mspi", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1928,0,"flash_addr_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1929,0,"flash_addr_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1918,0,"spi_ss_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1562,0,"in_paddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1534,0,"in_psel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1535,0,"in_penable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1863,0,"in_pprot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+377,0,"in_pwrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+378,0,"in_pwdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"in_pstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1086,0,"in_pready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1088,0,"in_prdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1087,0,"in_pslverr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1077,0,"spi_sck",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1680,0,"spi_ss",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1078,0,"spi_mosi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1747,0,"spi_miso",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1930,0,"spi_irq_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1563,0,"is_XIP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1248,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1632,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1859,0,"S_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1860,0,"S_XIP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1861,0,"S_SPI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1633,0,"xipmaster_psel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1249,0,"xipmaster_pready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1250,0,"xipmaster_prdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1251,0,"xipmaster_pslverr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1252,0,"xipmaster_irq_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1253,0,"xipslv_paddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1254,0,"xipslv_psel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1255,0,"xipslv_penable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1931,0,"xipslv_pprot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1256,0,"xipslv_pwrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1634,0,"xipslv_pwdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1257,0,"xipslv_pstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1635,0,"xipslv_pready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1636,0,"xipslv_prdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1876,0,"xipslv_pslverr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1637,0,"xipslv_irq_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1638,0,"spictrl_paddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1639,0,"spictrl_psel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1640,0,"spictrl_penable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1641,0,"spictrl_pprot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1642,0,"spictrl_pwrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1643,0,"spictrl_pwdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1644,0,"spictrl_pstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1258,0,"spictrl_pready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1259,0,"spictrl_prdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1876,0,"spictrl_pslverr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1260,0,"spictrl_irq_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("spi_XIP_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"wb_clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"wb_rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1562,0,"wb_paddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+378,0,"wb_pwdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1250,0,"wb_prdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"wb_pstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+377,0,"wb_pwrite_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1633,0,"wb_psel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1535,0,"wb_penable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1249,0,"wb_pready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1251,0,"wb_pslverr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1252,0,"wb_irq_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1253,0,"slv_paddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1634,0,"slv_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1636,0,"slv_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1257,0,"slv_pstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1256,0,"slv_pwrite_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1254,0,"slv_psel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1255,0,"slv_penable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1635,0,"slv_pready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1876,0,"slv_pslverr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1637,0,"slv_irq_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1261,0,"sstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1645,0,"next_sstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1866,0,"SS_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1867,0,"SS_SETUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1868,0,"SS_ACCESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1262,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1646,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1866,0,"S_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1867,0,"S_SET_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1868,0,"S_SET_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1869,0,"S_SET_SS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1870,0,"S_SET_CTRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1871,0,"S_SET_START",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1872,0,"S_SET_WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1873,0,"S_SET_RECV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1924,0,"S_SET_RET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1647,0,"is_transfer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1648,0,"buf_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1649,0,"buf_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1263,0,"buf_paddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1264,0,"buf_pstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1265,0,"buf_pwrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u0_spi_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1860,0,"Tp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1702,0,"wb_clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"wb_rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1638,0,"wb_adr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1643,0,"wb_dat_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1259,0,"wb_dat_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1644,0,"wb_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1642,0,"wb_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1639,0,"wb_stb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1640,0,"wb_cyc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1258,0,"wb_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1876,0,"wb_err_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1260,0,"wb_int_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1680,0,"ss_pad_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1077,0,"sclk_pad_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1078,0,"mosi_pad_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1747,0,"miso_pad_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1266,0,"divider",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1267,0,"ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+1268,0,"ss",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1771,0,"wb_dat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1269,0,"rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1273,0,"rx_negedge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1274,0,"tx_negedge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1275,0,"char_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+1276,0,"go",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1277,0,"lsb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1278,0,"ie",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1279,0,"ass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1650,0,"spi_divider_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1651,0,"spi_ctrl_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1652,0,"spi_tx_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1653,0,"spi_ss_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1280,0,"tip",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1281,0,"pos_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1282,0,"neg_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1283,0,"last_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("clgen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1860,0,"Tp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1702,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1280,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1276,0,"go",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1283,0,"last_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1266,0,"divider",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1077,0,"clk_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1281,0,"pos_edge",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1282,0,"neg_edge",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1284,0,"cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1285,0,"cnt_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1286,0,"cnt_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("shift", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1860,0,"Tp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1702,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1654,0,"latch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1644,0,"byte_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1275,0,"len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+1277,0,"lsb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1276,0,"go",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1281,0,"pos_edge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1282,0,"neg_edge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1273,0,"rx_negedge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1274,0,"tx_negedge",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1280,0,"tip",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1283,0,"last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1643,0,"p_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1269,0,"p_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+1077,0,"s_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1747,0,"s_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1078,0,"s_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1287,0,"cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+1269,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1288,0,"tx_bit_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1289,0,"rx_bit_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1290,0,"rx_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1291,0,"tx_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("lvga", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1523,0,"auto_in_psel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1524,0,"auto_in_penable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"auto_in_pwrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1525,0,"auto_in_paddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+1863,0,"auto_in_pprot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+378,0,"auto_in_pwdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"auto_in_pstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1085,0,"auto_in_pready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1876,0,"auto_in_pslverr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1884,0,"auto_in_prdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1716,0,"vga_bundle_r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1717,0,"vga_bundle_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1718,0,"vga_bundle_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1719,0,"vga_bundle_hsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1720,0,"vga_bundle_vsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1721,0,"vga_bundle_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mvga", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1562,0,"in_paddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1523,0,"in_psel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1524,0,"in_penable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1863,0,"in_pprot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+377,0,"in_pwrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+378,0,"in_pwdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"in_pstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1085,0,"in_pready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1884,0,"in_prdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1876,0,"in_pslverr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1716,0,"vga_r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1717,0,"vga_g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1718,0,"vga_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1719,0,"vga_hsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1720,0,"vga_vsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1721,0,"vga_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1564,0,"in_addr_h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1565,0,"in_addr_v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1060,0,"in_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1932,0,"vga_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1292,0,"h_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+910,0,"v_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+1933,0,"vsync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1934,0,"hsync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1935,0,"h_frontporch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1936,0,"h_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1937,0,"h_backporch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1938,0,"h_total",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1861,0,"v_frontporch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1939,0,"v_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1940,0,"v_backporch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1941,0,"v_total",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1293,0,"x_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+911,0,"y_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+1294,0,"h_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+912,0,"v_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("vmem_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+910,0,"v_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1292,0,"h_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1932,0,"vga_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1566,0,"v_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1567,0,"h_waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+913,0,"vga_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+1060,0,"vga_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__asic__cpu__cpu__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__asic__cpu__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__asic__cpu__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1772,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+334,0,"auto_master_out_awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"auto_master_out_awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"auto_master_out_awid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+150,0,"auto_master_out_awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"auto_master_out_awlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"auto_master_out_awsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+151,0,"auto_master_out_awburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+335,0,"auto_master_out_wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"auto_master_out_wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"auto_master_out_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"auto_master_out_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+154,0,"auto_master_out_wlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"auto_master_out_bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1599,0,"auto_master_out_bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1600,0,"auto_master_out_bid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1601,0,"auto_master_out_bresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+336,0,"auto_master_out_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"auto_master_out_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1866,0,"auto_master_out_arid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+201,0,"auto_master_out_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"auto_master_out_arlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+202,0,"auto_master_out_arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+203,0,"auto_master_out_arburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+19,0,"auto_master_out_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1602,0,"auto_master_out_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1603,0,"auto_master_out_rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1604,0,"auto_master_out_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1605,0,"auto_master_out_rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1606,0,"auto_master_out_rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("cpu", VerilatedTracePrefixType::SCOPE_MODULE);
    VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__asic__cpu__cpu__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__asic__luart__muart__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__asic__luart__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__asic__luart__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1531,0,"auto_in_psel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1532,0,"auto_in_penable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"auto_in_pwrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1526,0,"auto_in_paddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBus(c+1863,0,"auto_in_pprot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+378,0,"auto_in_pwdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"auto_in_pstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1533,0,"auto_in_pready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1876,0,"auto_in_pslverr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1751,0,"auto_in_prdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1722,0,"uart_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1723,0,"uart_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("muart", VerilatedTracePrefixType::SCOPE_MODULE);
    VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__asic__luart__muart__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__asic__cpu__cpu__REG_0__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__asic__cpu__cpu__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__asic__cpu__cpu__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1772,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1876,0,"io_interrupt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+334,0,"io_master_awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"io_master_awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"io_master_awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"io_master_awid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"io_master_awlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"io_master_awsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+151,0,"io_master_awburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+335,0,"io_master_wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"io_master_wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"io_master_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"io_master_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+154,0,"io_master_wlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"io_master_bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1599,0,"io_master_bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1601,0,"io_master_bresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1600,0,"io_master_bid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+336,0,"io_master_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"io_master_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+201,0,"io_master_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1866,0,"io_master_arid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+148,0,"io_master_arlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+202,0,"io_master_arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+203,0,"io_master_arburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+19,0,"io_master_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1602,0,"io_master_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1605,0,"io_master_rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1604,0,"io_master_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1606,0,"io_master_rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1603,0,"io_master_rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1876,0,"io_slave_awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1876,0,"io_slave_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1942,0,"io_slave_awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1866,0,"io_slave_awid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1943,0,"io_slave_awlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1862,0,"io_slave_awsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1878,0,"io_slave_awburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1876,0,"io_slave_wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1876,0,"io_slave_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1942,0,"io_slave_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1866,0,"io_slave_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1876,0,"io_slave_wlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1876,0,"io_slave_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1876,0,"io_slave_bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1878,0,"io_slave_bresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1866,0,"io_slave_bid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1876,0,"io_slave_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1876,0,"io_slave_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1942,0,"io_slave_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1866,0,"io_slave_arid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1943,0,"io_slave_arlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1862,0,"io_slave_arsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1878,0,"io_slave_arburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1876,0,"io_slave_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1876,0,"io_slave_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1878,0,"io_slave_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1859,0,"io_slave_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1876,0,"io_slave_rlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1866,0,"io_slave_rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1655,0,"lsu_access_fault",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1773,0,"PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1774,0,"dnpc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1775,0,"snpc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+305,0,"lsu_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+306,0,"lsu_reqEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1776,0,"wbu_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1944,0,"command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+914,0,"isR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"isI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1777,0,"isS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1778,0,"isB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+915,0,"isU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+916,0,"isJ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+917,0,"isCR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+918,0,"rd_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+919,0,"rs1_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+920,0,"rs2_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+918,0,"gpr_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+921,0,"rcsr_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+922,0,"flush_icache",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"COMP_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"EXU_inA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"EXU_inB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1779,0,"EXU_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"CSR_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"rs1_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1780,0,"rs2_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"reg_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1779,0,"lsu_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+923,0,"LSU_rmask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1781,0,"lsu_wmask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1780,0,"lsu_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1782,0,"LSU_WEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"lsu_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+924,0,"PC_command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+308,0,"gpr_WEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+925,0,"isEBREAK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+926,0,"isECALL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+927,0,"isMRET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1783,0,"isLOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1777,0,"isSTORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1784,0,"isWRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1785,0,"isJUMP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+928,0,"isSigned",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1786,0,"isPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1787,0,"isCSR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+30,0,"isGREATER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"isEQUAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"isBRANCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+929,0,"isCOMPARE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1788,0,"op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1789,0,"csr_mepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1790,0,"csr_mtvec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1791,0,"bus_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("REG_0", VerilatedTracePrefixType::SCOPE_MODULE);
    VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__asic__cpu__cpu__REG_0__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("IFU_0", VerilatedTracePrefixType::SCOPE_MODULE);
    VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+1792,0,"IROM_araddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1793,0,"IROM_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+33,0,"IROM_arvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+352,0,"IROM_arready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1068,0,"IROM_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1794,0,"IROM_rready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1069,0,"IROM_rresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1866,0,"IROM_arid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1945,0,"IROM_arlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1864,0,"IROM_arsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1877,0,"IROM_arbureset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1656,0,"IROM_rlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1070,0,"IROM_rid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("IDU_0", VerilatedTracePrefixType::SCOPE_MODULE);
    VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+28,0,"COMP_inA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"COMP_inB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("LSU_0", VerilatedTracePrefixType::SCOPE_MODULE);
    VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+930,0,"DRAM_awaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+931,0,"DRAM_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1779,0,"DRAM_araddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1657,0,"DRAM_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+932,0,"DRAM_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+35,0,"DRAM_awvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"DRAM_wvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+309,0,"DRAM_arvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1658,0,"DRAM_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1659,0,"DRAM_bvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+353,0,"DRAM_awready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+354,0,"DRAM_wready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+355,0,"DRAM_arready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"DRAM_rready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"DRAM_bready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1660,0,"DRAM_bresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1661,0,"DRAM_rresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1866,0,"DRAM_awid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1943,0,"DRAM_awlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+933,0,"DRAM_awsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1877,0,"DRAM_awburst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1879,0,"DRAM_wlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1071,0,"DRAM_bid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1866,0,"DRAM_arid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1943,0,"DRAM_arlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+934,0,"DRAM_arsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1877,0,"DRAM_arbureset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1072,0,"DRAM_rlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1073,0,"DRAM_rid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("COMP_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+28,0,"inA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"inB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+928,0,"isCompSigned",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"isEQUAL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"isGREATER",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+39,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"isSGREATER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"isUGREATER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("COMP_SUBER_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+42,0,"inA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+44,0,"inB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+1879,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+39,0,"carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("EXU_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+25,0,"inA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"inB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1788,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1779,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"op_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"op_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"op_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"op_ar",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"op_lr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"op_ll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"op_adder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ADDER_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+53,0,"inA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+55,0,"inB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+935,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+52,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+57,0,"carry",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("RAM_AXI4LiteArbiter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1772,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1859,0,"M1_awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1876,0,"M1_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+356,0,"M1_awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1866,0,"M1_awid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1943,0,"M1_awlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1862,0,"M1_awsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1878,0,"M1_awburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1859,0,"M1_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1866,0,"M1_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1876,0,"M1_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+357,0,"M1_wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1876,0,"M1_wlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1074,0,"M1_bresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1075,0,"M1_bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1876,0,"M1_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1076,0,"M1_bid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1792,0,"M1_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+33,0,"M1_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+352,0,"M1_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1866,0,"M1_arid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1945,0,"M1_arlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1864,0,"M1_arsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1877,0,"M1_arbureset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1793,0,"M1_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1069,0,"M1_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1068,0,"M1_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1794,0,"M1_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1656,0,"M1_rlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1070,0,"M1_rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+930,0,"M2_awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+35,0,"M2_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+353,0,"M2_awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1866,0,"M2_awid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1943,0,"M2_awlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+933,0,"M2_awsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1877,0,"M2_awburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+931,0,"M2_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+932,0,"M2_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+35,0,"M2_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+354,0,"M2_wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1879,0,"M2_wlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1660,0,"M2_bresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1659,0,"M2_bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"M2_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1071,0,"M2_bid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1779,0,"M2_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+309,0,"M2_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+355,0,"M2_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1866,0,"M2_arid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1943,0,"M2_arlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+934,0,"M2_arsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1877,0,"M2_arbureset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1657,0,"M2_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1661,0,"M2_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1658,0,"M2_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"M2_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"M2_rlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1073,0,"M2_rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+150,0,"S_awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+16,0,"S_awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+334,0,"S_awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"S_awid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"S_awlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"S_awsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+151,0,"S_awburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+153,0,"S_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"S_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+17,0,"S_wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+335,0,"S_wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"S_wlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1601,0,"S_bresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1599,0,"S_bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"S_bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1600,0,"S_bid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+201,0,"S_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+249,0,"S_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"S_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1866,0,"S_arid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+148,0,"S_arlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+202,0,"S_arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+203,0,"S_arbureset",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1604,0,"S_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1605,0,"S_rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1602,0,"S_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"S_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1606,0,"S_rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1603,0,"S_rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1903,0,"R_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1904,0,"R_BUSY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+936,0,"R_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+310,0,"R_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+937,0,"R_master_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+311,0,"R_master_sel_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1903,0,"W_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1904,0,"W_BUSY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+938,0,"W_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+312,0,"W_next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+939,0,"W_master_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,0,"W_master_sel_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("WBU_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1772,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"LSU_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1779,0,"EXU_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"CSR_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"COMP_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1775,0,"snpc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+918,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1783,0,"isLOAD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1777,0,"isSTORE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1787,0,"isCSR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1784,0,"isWRITE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1785,0,"isJUMP",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+929,0,"isCOMPARE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+305,0,"lsu_final",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1791,0,"bus_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+308,0,"gpr_WEN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+307,0,"reg_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+918,0,"gpr_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1776,0,"wbu_final",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__asic__luart__muart__Uregs__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__asic__luart__muart__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__asic__luart__muart__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBit(c+1703,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1531,0,"in_psel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1532,0,"in_penable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1863,0,"in_pprot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1533,0,"in_pready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1876,0,"in_pslverr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1542,0,"in_paddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+377,0,"in_pwrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1751,0,"in_prdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+378,0,"in_pwdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"in_pstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1722,0,"uart_rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1723,0,"uart_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1295,0,"rtsn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1876,0,"ctsn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1296,0,"dtr_pad_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1876,0,"dsr_pad_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1876,0,"ri_pad_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1876,0,"dcd_pad_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1297,0,"interrupt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"reg_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"reg_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1568,0,"reg_adr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1569,0,"reg_dat8_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+940,0,"reg_dat8_w_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1795,0,"reg_dat8_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1298,0,"rts_internal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("Uregs", VerilatedTracePrefixType::SCOPE_MODULE);
    VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__asic__luart__muart__Uregs__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1772,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+922,0,"flush_icache",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1796,0,"PC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1774,0,"dnpc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1775,0,"snpc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1785,0,"isJUMP",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"isBRANCH",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+926,0,"isECALL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+927,0,"isMRET",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1776,0,"wbu_final",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+924,0,"PC_command",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1791,0,"bus_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1655,0,"lsu_access_fault",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1792,0,"araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+33,0,"arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+352,0,"arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1866,0,"arid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1945,0,"arlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1864,0,"arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1877,0,"arbureset",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1793,0,"rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1069,0,"rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1068,0,"rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1794,0,"rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1656,0,"rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1070,0,"rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1797,0,"debug_is_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1796,0,"in_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1798,0,"in_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1799,0,"in_respValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1878,0,"S_FETCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1880,0,"S_WAIT_EXEC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1800,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+358,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1801,0,"r_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1802,0,"in_reqValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("icache_u0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1946,0,"CACHE_BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1918,0,"CACHE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1772,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+922,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1796,0,"in_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1802,0,"in_reqValid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1799,0,"in_respValid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1798,0,"in_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1792,0,"out_araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+33,0,"out_arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+352,0,"out_arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1866,0,"out_arid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1945,0,"out_arlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1864,0,"out_arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1877,0,"out_arburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1793,0,"out_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1069,0,"out_rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1068,0,"out_rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1794,0,"out_rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1656,0,"out_rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1070,0,"out_rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1797,0,"debug_is_hit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1947,0,"BLOCK_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1916,0,"INDEX_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1915,0,"OFFSET_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1948,0,"TAG_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1915,0,"BURST_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1861,0,"BURST_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1880,0,"BURST_LAST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1803,0,"now_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1804,0,"now_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1805,0,"now_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1797,0,"is_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("cache_mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declArray(c+941+i*4,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 127,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("cache_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBit(c+973+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("cache_tag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+981+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 24,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1878,0,"S_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1877,0,"S_WAIT_READY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1881,0,"S_WAIT_DATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+989,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+359,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1806,0,"ar_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+314,0,"r_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+990,0,"burst_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+991,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+924,0,"command",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+30,0,"isGREATER",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"isEQUAL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1772,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1791,0,"bus_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1776,0,"wbu_final",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+992,0,"opcode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+918,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+919,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+920,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+921,0,"rcsr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+993,0,"funct3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+994,0,"funct7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+921,0,"immI",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+995,0,"immS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+996,0,"immB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,1);
    tracep->declBus(c+997,0,"immU",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,12);
    tracep->declBus(c+998,0,"immJ",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,1);
    tracep->declBus(c+29,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+925,0,"isEBREAK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+926,0,"isECALL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+927,0,"isMRET",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+922,0,"isFENCEI",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1783,0,"isLOAD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1777,0,"isSTORE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1784,0,"isWRITE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1785,0,"isJUMP",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+929,0,"isCOMPARE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"isBRANCH",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1787,0,"isCSR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+24,0,"COMP_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+928,0,"isSigned",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1786,0,"isPC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1782,0,"LSU_WEN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+306,0,"lsu_reqEN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1788,0,"op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+923,0,"LSU_rmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1781,0,"lsu_wmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1807,0,"ctype",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+1808,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+315,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1859,0,"state_idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1860,0,"state_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+999,0,"isLUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1000,0,"isAUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+916,0,"isJAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1001,0,"isJALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1002,0,"isBEQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1003,0,"isBNE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1004,0,"isBLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1005,0,"isBGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1006,0,"isBLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1007,0,"isBGEU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1008,0,"isLB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1009,0,"isLH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1010,0,"isLW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"isLBU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1012,0,"isLHU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1013,0,"isSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1014,0,"isSH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1015,0,"isSW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1016,0,"isADDI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1017,0,"isSLTI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1018,0,"isSLTIU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1019,0,"isXORI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1020,0,"isORI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1021,0,"isANDI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1022,0,"isSLLI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1023,0,"isSRLI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1024,0,"isSRAI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1025,0,"isADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+935,0,"isSUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1026,0,"isSLL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1027,0,"isSLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1028,0,"isSLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1029,0,"isXOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1030,0,"isSRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1031,0,"isSRA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1032,0,"isOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1033,0,"isAND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1949,0,"isMUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1950,0,"isMULH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1951,0,"isMULHSU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1952,0,"isMULHU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1953,0,"isDIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1954,0,"isDIVU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1955,0,"isREM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1956,0,"isREMU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1034,0,"isCSRRW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1035,0,"isCSRRS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1036,0,"isCSRRC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1957,0,"isCSRRWI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1958,0,"isCSRRSI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1959,0,"isCSRRCI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+914,0,"isR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"isI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1777,0,"isS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1778,0,"isB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+915,0,"isU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+916,0,"isJ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+917,0,"isCR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1772,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1779,0,"lsu_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"lsu_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1780,0,"lsu_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1782,0,"lsu_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1809,0,"lsu_reqEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+305,0,"lsu_final",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+923,0,"rmask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1781,0,"lsu_wmask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+928,0,"isSigned",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1791,0,"bus_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1655,0,"lsu_access_fault",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+930,0,"awaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+35,0,"awvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+353,0,"awready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1866,0,"awid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1943,0,"awlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+933,0,"awsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1877,0,"awburst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+931,0,"wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+932,0,"wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+35,0,"wvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+354,0,"wready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1879,0,"wlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1660,0,"bresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1659,0,"bvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"bready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1071,0,"bid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1779,0,"araddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+309,0,"arvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+355,0,"arready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1866,0,"arid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1943,0,"arlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+934,0,"arsize",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1877,0,"arbureset",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1657,0,"rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1661,0,"rresp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1658,0,"rvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"rready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1072,0,"rlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1073,0,"rid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1862,0,"S_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1863,0,"S_WAIT_AW_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1864,0,"S_WAIT_BRESP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1865,0,"S_WAIT_AR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1874,0,"S_WAIT_RDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1810,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+360,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1811,0,"aw_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1812,0,"w_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1813,0,"b_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+361,0,"ar_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1814,0,"r_fire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+930,0,"awaddr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+931,0,"wdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+933,0,"awsize_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+932,0,"wstrb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1657,0,"val0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1662,0,"val1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1663,0,"val2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1664,0,"val3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+316,0,"val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"lsu_rdata1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"lsu_rdata2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+316,0,"lsu_rdata4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__asic__cpu__cpu__REG_0__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__asic__cpu__cpu__REG_0__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBit(c+1702,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1772,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+919,0,"addRA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+920,0,"addRB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+921,0,"addCSR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+918,0,"addW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+307,0,"inData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1960,0,"inCSRData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1773,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"outA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1780,0,"outB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"CSR_BUS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1790,0,"csr_mtvec",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1789,0,"csr_mepc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1815,0,"WCSREN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+308,0,"gpr_WEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+926,0,"isECALL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+927,0,"isMRET",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1791,0,"bus_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1961,0,"ADD_MCYCLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1962,0,"ADD_MCYCLEH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1963,0,"ADD_MTVEC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1964,0,"ADD_MEPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1965,0,"ADD_MCAUSE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1966,0,"ADD_MSTATUS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1967,0,"ADD_MVENDORID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1968,0,"ADD_MARCHID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->pushPrefix("GPR", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1816+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1848,0,"CSR_MCYCLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1849,0,"CSR_MCYCLEH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1790,0,"CSR_MTVEC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1789,0,"CSR_MEPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1850,0,"CSR_MCAUSE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1851,0,"CSR_MSTATUS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1852,0,"CSR_MVENDORID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1853,0,"CSR_MARCHID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1037,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__asic__luart__muart__Uregs__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_sub__TOP__ysyxSoCFull__asic__luart__muart__Uregs__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBit(c+1702,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"wb_rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1568,0,"wb_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1570,0,"wb_dat_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1795,0,"wb_dat_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+191,0,"wb_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"wb_re_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1723,0,"stx_pad_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1722,0,"srx_pad_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1924,0,"modem_inputs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1298,0,"rts_pad_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1296,0,"dtr_pad_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1297,0,"int_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1300,0,"srx_pad",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1301,0,"ier",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1302,0,"iir",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1303,0,"fcr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1304,0,"mcr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1854,0,"lcr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1305,0,"msr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1306,0,"dl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1307,0,"scratch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1308,0,"start_dlc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1309,0,"lsr_mask_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1310,0,"msi_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1311,0,"dlc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1312,0,"trigger_level",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1313,0,"rx_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1314,0,"tx_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1855,0,"dlab",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1879,0,"cts_pad_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1876,0,"dsr_pad_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1876,0,"ri_pad_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1876,0,"dcd_pad_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1315,0,"loopback",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1876,0,"cts",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1879,0,"dsr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1879,0,"ri",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1879,0,"dcd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1316,0,"cts_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1317,0,"dsr_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1318,0,"ri_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1319,0,"dcd_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1856,0,"lsr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1320,0,"lsr0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1321,0,"lsr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1322,0,"lsr2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1323,0,"lsr3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1324,0,"lsr4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1325,0,"lsr5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1326,0,"lsr6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1327,0,"lsr7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1328,0,"lsr0r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1329,0,"lsr1r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1330,0,"lsr2r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1331,0,"lsr3r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1332,0,"lsr4r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1333,0,"lsr5r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1334,0,"lsr6r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1335,0,"lsr7r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"lsr_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"rls_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1336,0,"rda_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1337,0,"ti_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"thre_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1338,0,"ms_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1339,0,"tf_push",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1340,0,"rf_pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1857,0,"rf_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+1341,0,"rf_error_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1321,0,"rf_overrun",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1342,0,"rf_push_pulse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1343,0,"rf_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1344,0,"tf_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1345,0,"tstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1346,0,"rstate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1347,0,"counter_t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+1348,0,"thre_set_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1349,0,"block_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+133,0,"block_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+134,0,"serial_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"serial_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+318,0,"lsr_mask_condition",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+319,0,"iir_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+320,0,"msr_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+321,0,"fifo_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+322,0,"fifo_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1350,0,"delayed_modem_signals",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1351,0,"lsr0_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1352,0,"lsr1_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1353,0,"lsr2_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1354,0,"lsr3_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1355,0,"lsr4_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1356,0,"lsr5_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1357,0,"lsr6_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1358,0,"lsr7_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1359,0,"rls_int_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1360,0,"thre_int_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1361,0,"ms_int_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1362,0,"ti_int_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1363,0,"rda_int_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"rls_int_rise",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"thre_int_rise",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1364,0,"ms_int_rise",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1365,0,"ti_int_rise",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1366,0,"rda_int_rise",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1367,0,"rls_int_pnd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1368,0,"rda_int_pnd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1369,0,"thre_int_pnd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1370,0,"ms_int_pnd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1371,0,"ti_int_pnd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("i_uart_sync_flops", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1860,0,"Tp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1860,0,"width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1904,0,"init_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+1703,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1702,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1876,0,"stage1_rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1879,0,"stage1_clk_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1722,0,"async_dat_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1300,0,"sync_dat_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1372,0,"flop_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("receiver", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"wb_rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1854,0,"lcr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1340,0,"rf_pop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"srx_pad_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1299,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1313,0,"rx_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"lsr_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1347,0,"counter_t",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1343,0,"rf_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1857,0,"rf_data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+1321,0,"rf_overrun",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1341,0,"rf_error_bit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1346,0,"rstate",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1342,0,"rf_push_pulse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1373,0,"rcounter16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1374,0,"rbit_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1375,0,"rshift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1376,0,"rparity",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1377,0,"rparity_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1378,0,"rframing_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1379,0,"rbit_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1380,0,"rparity_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1381,0,"counter_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1382,0,"rf_push_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1383,0,"rf_data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+1384,0,"rf_push",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1385,0,"break_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1386,0,"rcounter16_eq_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1387,0,"rcounter16_eq_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1388,0,"rcounter16_eq_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1389,0,"rcounter16_minus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1866,0,"sr_idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1867,0,"sr_rec_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1868,0,"sr_rec_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1869,0,"sr_rec_parity",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1870,0,"sr_rec_stop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1871,0,"sr_check_parity",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1872,0,"sr_rec_prepare",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1873,0,"sr_end_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1924,0,"sr_ca_lc_parity",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1925,0,"sr_wait1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1969,0,"sr_push",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+138,0,"toc_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+139,0,"brc_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("fifo_rx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1970,0,"fifo_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1946,0,"fifo_depth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1915,0,"fifo_pointer_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1971,0,"fifo_counter_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1702,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"wb_rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1342,0,"push",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1340,0,"pop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1383,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+1313,0,"fifo_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"reset_status",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1857,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+1321,0,"overrun",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1343,0,"count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1341,0,"error_bit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1858,0,"data8_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("fifo", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1390+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1406,0,"top",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1407,0,"bottom",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1408,0,"top_plus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1409,0,"word0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1410,0,"word1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1411,0,"word2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1412,0,"word3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1413,0,"word4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1414,0,"word5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1415,0,"word6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1416,0,"word7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1417,0,"word8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1418,0,"word9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1419,0,"word10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1420,0,"word11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1421,0,"word12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1422,0,"word13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1423,0,"word14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1424,0,"word15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("rfifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1915,0,"addr_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1918,0,"data_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1946,0,"depth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1702,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1342,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1406,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1407,0,"dpra",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1425,0,"di",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1858,0,"dpo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("ram", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1571+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("transmitter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1702,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"wb_rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1854,0,"lcr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1339,0,"tf_push",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1570,0,"wb_dat_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1299,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1314,0,"tx_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"lsr_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"stx_pad_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1345,0,"tstate",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1344,0,"tf_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1426,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1427,0,"bit_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1428,0,"shift_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+1429,0,"stx_o_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1430,0,"parity_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1431,0,"tf_pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1432,0,"bit_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1570,0,"tf_data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1665,0,"tf_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1433,0,"tf_overrun",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1862,0,"s_idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1863,0,"s_send_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1864,0,"s_send_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1865,0,"s_send_parity",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1874,0,"s_send_stop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1875,0,"s_pop_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("fifo_tx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1918,0,"fifo_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1946,0,"fifo_depth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1915,0,"fifo_pointer_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1971,0,"fifo_counter_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1702,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1703,0,"wb_rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1339,0,"push",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1431,0,"pop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1570,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1314,0,"fifo_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"reset_status",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1665,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1433,0,"overrun",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1344,0,"count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1434,0,"top",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1435,0,"bottom",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1436,0,"top_plus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("tfifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1915,0,"addr_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1918,0,"data_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1946,0,"depth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1702,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1339,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1434,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1435,0,"dpra",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1570,0,"di",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1665,0,"dpo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("ram", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1038+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_top(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_top\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VysyxSoCFull___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCFull___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCFull___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_register(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_register\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VysyxSoCFull___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&VysyxSoCFull___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&VysyxSoCFull___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&VysyxSoCFull___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_const_0_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_const_0\n"); );
    // Body
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VysyxSoCFull___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_const_0_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_const_0_sub_0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+1859,(0U),32);
    bufp->fullIData(oldp+1860,(1U),32);
    bufp->fullIData(oldp+1861,(2U),32);
    bufp->fullCData(oldp+1862,(0U),3);
    bufp->fullCData(oldp+1863,(1U),3);
    bufp->fullCData(oldp+1864,(2U),3);
    bufp->fullCData(oldp+1865,(3U),3);
    bufp->fullCData(oldp+1866,(0U),4);
    bufp->fullCData(oldp+1867,(1U),4);
    bufp->fullCData(oldp+1868,(2U),4);
    bufp->fullCData(oldp+1869,(3U),4);
    bufp->fullCData(oldp+1870,(4U),4);
    bufp->fullCData(oldp+1871,(5U),4);
    bufp->fullCData(oldp+1872,(6U),4);
    bufp->fullCData(oldp+1873,(7U),4);
    bufp->fullCData(oldp+1874,(4U),3);
    bufp->fullCData(oldp+1875,(5U),3);
    bufp->fullBit(oldp+1876,(0U));
    bufp->fullCData(oldp+1877,(1U),2);
    bufp->fullCData(oldp+1878,(0U),2);
    bufp->fullBit(oldp+1879,(1U));
    bufp->fullCData(oldp+1880,(3U),2);
    bufp->fullCData(oldp+1881,(2U),2);
    bufp->fullIData(oldp+1882,(1U),32);
    bufp->fullIData(oldp+1883,(7U),32);
    bufp->fullIData(oldp+1884,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbxbar_auto_anon_out_5_prdata),32);
    bufp->fullSData(oldp+1885,(1U),16);
    bufp->fullBit(oldp+1886,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_1_last));
    bufp->fullBit(oldp+1887,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_2_last));
    bufp->fullBit(oldp+1888,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_3_last));
    bufp->fullBit(oldp+1889,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_4_last));
    bufp->fullBit(oldp+1890,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_5_last));
    bufp->fullBit(oldp+1891,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_6_last));
    bufp->fullBit(oldp+1892,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_7_last));
    bufp->fullBit(oldp+1893,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_8_last));
    bufp->fullBit(oldp+1894,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_9_last));
    bufp->fullBit(oldp+1895,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_10_last));
    bufp->fullBit(oldp+1896,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_11_last));
    bufp->fullBit(oldp+1897,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_12_last));
    bufp->fullBit(oldp+1898,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_13_last));
    bufp->fullBit(oldp+1899,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_14_last));
    bufp->fullBit(oldp+1900,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_15_last));
    bufp->fullCData(oldp+1901,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__next_cnt),4);
    bufp->fullCData(oldp+1902,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_din),4);
    bufp->fullBit(oldp+1903,(0U));
    bufp->fullBit(oldp+1904,(1U));
    bufp->fullCData(oldp+1905,(0x15U),8);
    bufp->fullCData(oldp+1906,(0xebU),8);
    bufp->fullCData(oldp+1907,(0x38U),8);
    bufp->fullCData(oldp+1908,(8U),8);
    bufp->fullIData(oldp+1909,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__saddr),24);
    bufp->fullCData(oldp+1910,(0x35U),8);
    bufp->fullIData(oldp+1911,(0x00000064U),32);
    bufp->fullIData(oldp+1912,(0x0000001aU),32);
    bufp->fullIData(oldp+1913,(9U),32);
    bufp->fullIData(oldp+1914,(6U),32);
    bufp->fullIData(oldp+1915,(4U),32);
    bufp->fullIData(oldp+1916,(3U),32);
    bufp->fullIData(oldp+1917,(0x00000020U),32);
    bufp->fullIData(oldp+1918,(8U),32);
    bufp->fullIData(oldp+1919,(0x0000000dU),32);
    bufp->fullIData(oldp+1920,(0x00002000U),32);
    bufp->fullIData(oldp+1921,(0x00002710U),32);
    bufp->fullIData(oldp+1922,(0x0000030cU),32);
    bufp->fullSData(oldp+1923,(0x0020U),13);
    bufp->fullCData(oldp+1924,(8U),4);
    bufp->fullCData(oldp+1925,(9U),4);
    bufp->fullIData(oldp+1926,(0x0000000aU),32);
    bufp->fullIData(oldp+1927,(0x00000011U),32);
    bufp->fullIData(oldp+1928,(0x30000000U),32);
    bufp->fullIData(oldp+1929,(0x3fffffffU),32);
    bufp->fullBit(oldp+1930,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullCData(oldp+1931,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_pprot),3);
    bufp->fullIData(oldp+1932,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__vga_data),24);
    bufp->fullBit(oldp+1933,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__vsync));
    bufp->fullBit(oldp+1934,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__hsync));
    bufp->fullIData(oldp+1935,(0x00000060U),32);
    bufp->fullIData(oldp+1936,(0x00000090U),32);
    bufp->fullIData(oldp+1937,(0x00000310U),32);
    bufp->fullIData(oldp+1938,(0x00000320U),32);
    bufp->fullIData(oldp+1939,(0x00000023U),32);
    bufp->fullIData(oldp+1940,(0x00000203U),32);
    bufp->fullIData(oldp+1941,(0x0000020dU),32);
    bufp->fullIData(oldp+1942,(0U),32);
    bufp->fullCData(oldp+1943,(0U),8);
    bufp->fullIData(oldp+1944,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__command),32);
    bufp->fullCData(oldp+1945,(3U),8);
    bufp->fullIData(oldp+1946,(0x00000010U),32);
    bufp->fullIData(oldp+1947,(0x00000080U),32);
    bufp->fullIData(oldp+1948,(0x00000019U),32);
    bufp->fullBit(oldp+1949,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isMUL));
    bufp->fullBit(oldp+1950,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isMULH));
    bufp->fullBit(oldp+1951,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isMULHSU));
    bufp->fullBit(oldp+1952,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isMULHU));
    bufp->fullBit(oldp+1953,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isDIV));
    bufp->fullBit(oldp+1954,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isDIVU));
    bufp->fullBit(oldp+1955,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isREM));
    bufp->fullBit(oldp+1956,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isREMU));
    bufp->fullBit(oldp+1957,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isCSRRWI));
    bufp->fullBit(oldp+1958,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isCSRRSI));
    bufp->fullBit(oldp+1959,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isCSRRCI));
    bufp->fullIData(oldp+1960,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.__PVT__inCSRData),32);
    bufp->fullSData(oldp+1961,(0x0b00U),12);
    bufp->fullSData(oldp+1962,(0x0b80U),12);
    bufp->fullSData(oldp+1963,(0x0305U),12);
    bufp->fullSData(oldp+1964,(0x0341U),12);
    bufp->fullSData(oldp+1965,(0x0342U),12);
    bufp->fullSData(oldp+1966,(0x0300U),12);
    bufp->fullSData(oldp+1967,(0x0f11U),12);
    bufp->fullSData(oldp+1968,(0x0f12U),12);
    bufp->fullCData(oldp+1969,(0x0aU),4);
    bufp->fullIData(oldp+1970,(0x0000000bU),32);
    bufp->fullIData(oldp+1971,(5U),32);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_0_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_0\n"); );
    // Body
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VysyxSoCFull___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_0_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_0_sub_0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullCData(oldp+1,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awid),4);
    bufp->fullCData(oldp+2,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awlen),8);
    bufp->fullCData(oldp+3,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rresp_w[0]),2);
    bufp->fullCData(oldp+4,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rresp_w[1]),2);
    bufp->fullCData(oldp+5,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rresp_w[2]),2);
    bufp->fullCData(oldp+6,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rresp_w[3]),2);
    bufp->fullCData(oldp+7,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rresp_w[4]),2);
    bufp->fullCData(oldp+8,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rresp_w[5]),2);
    bufp->fullCData(oldp+9,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rresp_w[6]),2);
    bufp->fullCData(oldp+10,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rresp_w[7]),2);
    bufp->fullSData(oldp+11,((0x0000ffffU & ((IData)(1U) 
                                             << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awid)))),16);
    bufp->fullCData(oldp+12,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awsize),3);
    bufp->fullCData(oldp+13,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_wstrb),4);
    bufp->fullCData(oldp+14,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awsize),3);
    bufp->fullCData(oldp+15,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wstrb),4);
    bufp->fullBit(oldp+16,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awvalid));
    bufp->fullBit(oldp+17,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wvalid));
    bufp->fullBit(oldp+18,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bready));
    bufp->fullBit(oldp+19,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rready));
    bufp->fullBit(oldp+20,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__io_enq_valid));
    bufp->fullBit(oldp+21,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__in_0_wvalid));
    bufp->fullBit(oldp+22,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_valid));
    bufp->fullBit(oldp+23,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isI));
    bufp->fullBit(oldp+24,((1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isEQUAL) 
                                     | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isGREATER))))));
    bufp->fullIData(oldp+25,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA),32);
    bufp->fullIData(oldp+26,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inB),32);
    bufp->fullIData(oldp+27,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.__PVT__CSR_BUS),32);
    bufp->fullIData(oldp+28,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__COMP_0__DOT__inA),32);
    bufp->fullIData(oldp+29,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__imm),32);
    bufp->fullBit(oldp+30,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isGREATER));
    bufp->fullBit(oldp+31,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isEQUAL));
    bufp->fullBit(oldp+32,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBEQ)
                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isEQUAL)
                                   : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBNE)
                                       ? (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isEQUAL))
                                       : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBLT) 
                                           | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBLTU))
                                           ? (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_h6e95ff9d_0_17))
                                           : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBGE) 
                                               | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBGEU)) 
                                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_h6e95ff9d_0_17))))))));
    bufp->fullBit(oldp+33,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__arvalid));
    bufp->fullIData(oldp+34,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__COMP_0__DOT__inB),32);
    bufp->fullBit(oldp+35,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid));
    bufp->fullBit(oldp+36,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rready));
    bufp->fullBit(oldp+37,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bready));
    bufp->fullIData(oldp+38,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__COMP_0__DOT__out),32);
    bufp->fullBit(oldp+39,((1U & (IData)((1ULL & ((1ULL 
                                                   + 
                                                   ((~ (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__COMP_0__DOT__inB))) 
                                                    + (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__COMP_0__DOT__inA)))) 
                                                  >> 0x00000020U))))));
    bufp->fullBit(oldp+40,((1U & ((~ (((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__COMP_0__DOT__inA 
                                        ^ vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__COMP_0__DOT__inB) 
                                       | vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__COMP_0__DOT__out) 
                                      >> 0x0000001fU)) 
                                  | ((~ (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__COMP_0__DOT__inA 
                                         >> 0x0000001fU)) 
                                     & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__COMP_0__DOT__inB 
                                        >> 0x0000001fU))))));
    bufp->fullBit(oldp+41,(((~ (IData)((1ULL & ((1ULL 
                                                 + 
                                                 ((~ (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__COMP_0__DOT__inB))) 
                                                  + (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__COMP_0__DOT__inA)))) 
                                                >> 0x00000020U)))) 
                            & (0U != vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__COMP_0__DOT__out))));
    bufp->fullQData(oldp+42,((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__COMP_0__DOT__inA))),33);
    bufp->fullQData(oldp+44,((0x00000001ffffffffULL 
                              & (~ (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__COMP_0__DOT__inB))))),33);
    bufp->fullIData(oldp+46,((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA 
                              ^ vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inB)),32);
    bufp->fullIData(oldp+47,((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA 
                              | vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inB)),32);
    bufp->fullIData(oldp+48,((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA 
                              & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inB)),32);
    bufp->fullIData(oldp+49,(VL_SHIFTRS_III(32,32,32, vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA, 
                                            (0x0000001fU 
                                             & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inB))),32);
    bufp->fullIData(oldp+50,(VL_SHIFTR_III(32,32,32, vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA, 
                                           (0x0000001fU 
                                            & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inB))),32);
    bufp->fullIData(oldp+51,(VL_SHIFTL_III(32,32,32, vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA, 
                                           (0x0000001fU 
                                            & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inB))),32);
    bufp->fullIData(oldp+52,((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA 
                              + ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__ADDER_0__DOT__inB) 
                                 + (IData)((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSUB)))))),32);
    bufp->fullQData(oldp+53,((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA))),33);
    bufp->fullQData(oldp+55,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__ADDER_0__DOT__inB),33);
    bufp->fullBit(oldp+57,((1U & (IData)((1ULL & (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__inA)) 
                                                   + 
                                                   (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__EXU_0__DOT__ADDER_0__DOT__inB 
                                                    + (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSUB)))) 
                                                  >> 0x00000020U))))));
    bufp->fullBit(oldp+58,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_bready) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__idle_4)
                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_readys_1)
                                : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_4_0)))));
    bufp->fullBit(oldp+59,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rready) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__idle_3)
                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_readys)
                                : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_3_0)))));
    bufp->fullQData(oldp+60,((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                               << 0x0000002bU) | (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr)) 
                                                   << 0x0000000bU) 
                                                  | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arsize))))),47);
    bufp->fullBit(oldp+62,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bready) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__idle_3)
                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_readys_1)
                                : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_3_0)))));
    bufp->fullBit(oldp+63,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rready) 
                            & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__idle_3)
                                ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_readys) 
                                   >> 1U) : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+64,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                            & ((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)))));
    bufp->fullBit(oldp+65,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                            & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)))));
    bufp->fullBit(oldp+66,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                            & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                               >> 1U))));
    bufp->fullBit(oldp+67,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                            & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                               >> 1U))));
    bufp->fullBit(oldp+68,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                            & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                               >> 0x0000000aU))));
    bufp->fullBit(oldp+69,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                            & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                               >> 0x0000000aU))));
    bufp->fullBit(oldp+70,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                            & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                               >> 0x0000000bU))));
    bufp->fullBit(oldp+71,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                            & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                               >> 0x0000000bU))));
    bufp->fullBit(oldp+72,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                            & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                               >> 0x0000000cU))));
    bufp->fullBit(oldp+73,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                            & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                               >> 0x0000000cU))));
    bufp->fullBit(oldp+74,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                            & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                               >> 0x0000000dU))));
    bufp->fullBit(oldp+75,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                            & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                               >> 0x0000000dU))));
    bufp->fullBit(oldp+76,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                            & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                               >> 0x0000000eU))));
    bufp->fullBit(oldp+77,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                            & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                               >> 0x0000000eU))));
    bufp->fullBit(oldp+78,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                            & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                               >> 0x0000000fU))));
    bufp->fullBit(oldp+79,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                            & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                               >> 0x0000000fU))));
    bufp->fullBit(oldp+80,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                            & ((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)))));
    bufp->fullBit(oldp+81,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                            & ((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)))));
    bufp->fullBit(oldp+82,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                            & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                               >> 1U))));
    bufp->fullBit(oldp+83,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                            & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                               >> 1U))));
    bufp->fullBit(oldp+84,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                            & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                               >> 2U))));
    bufp->fullBit(oldp+85,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                            & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                               >> 2U))));
    bufp->fullBit(oldp+86,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                            & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                               >> 3U))));
    bufp->fullBit(oldp+87,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                            & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                               >> 3U))));
    bufp->fullBit(oldp+88,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                            & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                               >> 2U))));
    bufp->fullBit(oldp+89,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                            & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                               >> 2U))));
    bufp->fullBit(oldp+90,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                            & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                               >> 4U))));
    bufp->fullBit(oldp+91,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                            & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                               >> 4U))));
    bufp->fullBit(oldp+92,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                            & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                               >> 5U))));
    bufp->fullBit(oldp+93,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                            & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                               >> 5U))));
    bufp->fullBit(oldp+94,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                            & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                               >> 6U))));
    bufp->fullBit(oldp+95,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                            & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                               >> 6U))));
    bufp->fullBit(oldp+96,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                            & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                               >> 7U))));
    bufp->fullBit(oldp+97,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                            & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                               >> 7U))));
    bufp->fullBit(oldp+98,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                            & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                               >> 8U))));
    bufp->fullBit(oldp+99,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                            & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                               >> 8U))));
    bufp->fullBit(oldp+100,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                >> 9U))));
    bufp->fullBit(oldp+101,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                >> 9U))));
    bufp->fullBit(oldp+102,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                >> 0x0000000aU))));
    bufp->fullBit(oldp+103,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                >> 0x0000000aU))));
    bufp->fullBit(oldp+104,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                >> 0x0000000bU))));
    bufp->fullBit(oldp+105,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                >> 0x0000000bU))));
    bufp->fullBit(oldp+106,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                >> 0x0000000cU))));
    bufp->fullBit(oldp+107,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                >> 0x0000000cU))));
    bufp->fullBit(oldp+108,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                >> 0x0000000dU))));
    bufp->fullBit(oldp+109,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                >> 0x0000000dU))));
    bufp->fullBit(oldp+110,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                >> 3U))));
    bufp->fullBit(oldp+111,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                >> 3U))));
    bufp->fullBit(oldp+112,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                >> 0x0000000eU))));
    bufp->fullBit(oldp+113,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                >> 0x0000000eU))));
    bufp->fullBit(oldp+114,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_2) 
                             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                >> 0x0000000fU))));
    bufp->fullBit(oldp+115,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT___GEN_0) 
                             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)) 
                                >> 0x0000000fU))));
    bufp->fullBit(oldp+116,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                >> 4U))));
    bufp->fullBit(oldp+117,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                >> 4U))));
    bufp->fullBit(oldp+118,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                >> 5U))));
    bufp->fullBit(oldp+119,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                >> 5U))));
    bufp->fullBit(oldp+120,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                >> 6U))));
    bufp->fullBit(oldp+121,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                >> 6U))));
    bufp->fullBit(oldp+122,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                >> 7U))));
    bufp->fullBit(oldp+123,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                >> 7U))));
    bufp->fullBit(oldp+124,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                >> 8U))));
    bufp->fullBit(oldp+125,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                >> 8U))));
    bufp->fullBit(oldp+126,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT___GEN_0) 
                             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)) 
                                >> 9U))));
    bufp->fullBit(oldp+127,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast)) 
                             & (((IData)(1U) << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)) 
                                >> 9U))));
    bufp->fullIData(oldp+128,(((8U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__LSU_rmask))
                                ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__LSU_rmask))
                                    ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__LSU_rmask))
                                        ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__LSU_rmask))
                                            ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val
                                            : 0xffffffffU)
                                        : 0xffffffffU)
                                    : 0xffffffffU) : 
                               ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__LSU_rmask))
                                 ? 0xffffffffU : ((2U 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__LSU_rmask))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__LSU_rmask))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_h6e95ff9d_0_25)
                                                     ? 
                                                    (0x0000ffffU 
                                                     & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val)
                                                     : 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val 
                                                                     >> 0x0000000fU)))) 
                                                      << 0x00000010U) 
                                                     | (0x0000ffffU 
                                                        & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val)))
                                                    : 0xffffffffU)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__LSU_rmask))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_h6e95ff9d_0_25)
                                                     ? 
                                                    (0x000000ffU 
                                                     & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val)
                                                     : 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val 
                                                                     >> 7U)))) 
                                                      << 8U) 
                                                     | (0x000000ffU 
                                                        & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val)))
                                                    : 0xffffffffU))))),32);
    bufp->fullIData(oldp+129,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_h6e95ff9d_0_25)
                                ? (0x000000ffU & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val)
                                : (((- (IData)((1U 
                                                & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val 
                                                   >> 7U)))) 
                                    << 8U) | (0x000000ffU 
                                              & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val)))),32);
    bufp->fullIData(oldp+130,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_h6e95ff9d_0_25)
                                ? (0x0000ffffU & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val)
                                : (((- (IData)((1U 
                                                & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val 
                                                   >> 0x0000000fU)))) 
                                    << 0x00000010U) 
                                   | (0x0000ffffU & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val)))),32);
    bufp->fullBit(oldp+131,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rls_int));
    bufp->fullBit(oldp+132,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__thre_int));
    bufp->fullCData(oldp+133,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__block_value),8);
    bufp->fullBit(oldp+134,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__stx_pad_o));
    bufp->fullBit(oldp+135,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__serial_in));
    bufp->fullBit(oldp+136,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rls_int_d)) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rls_int))));
    bufp->fullBit(oldp+137,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__thre_int_d)) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__thre_int))));
    bufp->fullSData(oldp+138,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+139,((0x000000ffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__toc_value) 
                                              >> 2U))),8);
    bufp->fullBit(oldp+140,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_awvalid) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestAWIO_0_0))));
    bufp->fullIData(oldp+141,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr),32);
    bufp->fullCData(oldp+142,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awburst),2);
    bufp->fullBit(oldp+143,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_wvalid) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits))));
    bufp->fullIData(oldp+144,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_wdata),32);
    bufp->fullBit(oldp+145,((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+146,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+147,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__W0_en));
    bufp->fullCData(oldp+148,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arlen),8);
    bufp->fullBit(oldp+149,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_awvalid));
    bufp->fullIData(oldp+150,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awaddr),32);
    bufp->fullCData(oldp+151,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awburst),2);
    bufp->fullBit(oldp+152,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_wvalid));
    bufp->fullIData(oldp+153,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wdata),32);
    bufp->fullBit(oldp+154,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wlast));
    bufp->fullBit(oldp+155,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+156,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+157,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__auto_in_awvalid));
    bufp->fullBit(oldp+158,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_wvalid));
    bufp->fullBit(oldp+159,((1U & (~ (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__len))))));
    bufp->fullCData(oldp+160,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+161,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+162,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+163,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__w_todo),9);
    bufp->fullCData(oldp+164,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_len),8);
    bufp->fullBit(oldp+165,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid));
    bufp->fullIData(oldp+166,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_addr),32);
    bufp->fullBit(oldp+167,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid));
    bufp->fullBit(oldp+168,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+169,((0x0fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr)),28);
    bufp->fullBit(oldp+170,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+171,((0x7800U == (0x00007fffU 
                                         & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                            >> 0x0000000dU)))));
    bufp->fullSData(oldp+172,((0x000007ffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                              >> 2U))),11);
    bufp->fullBit(oldp+173,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+174,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestAWIO_0_1));
    bufp->fullBit(oldp+175,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__casez_tmp_0));
    bufp->fullBit(oldp+176,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__in_0_awvalid));
    bufp->fullCData(oldp+177,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_data),2);
    bufp->fullCData(oldp+178,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_bits),2);
    bufp->fullBit(oldp+179,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awvalid));
    bufp->fullBit(oldp+180,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_awvalid) 
                             & (0U == ((6U & (4U ^ 
                                              (0x0000001eU 
                                               & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                  >> 0x0000001bU)))) 
                                       | (1U & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                >> 0x00000018U)))))));
    bufp->fullBit(oldp+181,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+182,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+183,((0U == ((6U & (4U ^ (0x0000001eU 
                                                 & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                                    >> 0x0000001bU)))) 
                                    | (1U & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr 
                                             >> 0x00000018U))))));
    bufp->fullBit(oldp+184,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+185,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+186,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_enq_valid));
    bufp->fullBit(oldp+187,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullCData(oldp+188,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_data),3);
    bufp->fullBit(oldp+189,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid));
    bufp->fullCData(oldp+190,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_bits),3);
    bufp->fullBit(oldp+191,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__wb_we_i));
    bufp->fullBit(oldp+192,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__wb_re_i));
    bufp->fullBit(oldp+193,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestARIO_0_0))));
    bufp->fullIData(oldp+194,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr),32);
    bufp->fullCData(oldp+195,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arsize),3);
    bufp->fullCData(oldp+196,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arburst),2);
    bufp->fullBit(oldp+197,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__do_deq));
    bufp->fullBit(oldp+198,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__do_deq));
    bufp->fullBit(oldp+199,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+200,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_arvalid));
    bufp->fullIData(oldp+201,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_araddr),32);
    bufp->fullCData(oldp+202,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arsize),3);
    bufp->fullCData(oldp+203,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arburst),2);
    bufp->fullBit(oldp+204,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rready));
    bufp->fullBit(oldp+205,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_bready));
    bufp->fullBit(oldp+206,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rready_w[0]));
    bufp->fullBit(oldp+207,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rready_w[1]));
    bufp->fullBit(oldp+208,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rready_w[2]));
    bufp->fullBit(oldp+209,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rready_w[3]));
    bufp->fullBit(oldp+210,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rready_w[4]));
    bufp->fullBit(oldp+211,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rready_w[5]));
    bufp->fullBit(oldp+212,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rready_w[6]));
    bufp->fullBit(oldp+213,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rready_w[7]));
    bufp->fullCData(oldp+214,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__wnext_state),2);
    bufp->fullBit(oldp+215,(vlSymsp->TOP__ysyxSoCFull__asic.axi4delay_delayer__DOT____Vcellinp__inst_u0__reset));
    bufp->fullBit(oldp+216,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rready_w
                            [0U]));
    bufp->fullBit(oldp+217,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rready_w
                            [1U]));
    bufp->fullBit(oldp+218,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__in_rready));
    bufp->fullBit(oldp+219,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__in_rready));
    bufp->fullBit(oldp+220,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__in_rready));
    bufp->fullBit(oldp+221,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__in_rready));
    bufp->fullBit(oldp+222,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__in_rready));
    bufp->fullBit(oldp+223,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__in_rready));
    bufp->fullBit(oldp+224,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_arvalid));
    bufp->fullBit(oldp+225,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rready));
    bufp->fullBit(oldp+226,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__auto_in_awready));
    bufp->fullBit(oldp+227,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_wready));
    bufp->fullBit(oldp+228,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_bready));
    bufp->fullBit(oldp+229,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__auto_in_arready));
    bufp->fullBit(oldp+230,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__auto_in_arvalid));
    bufp->fullBit(oldp+231,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_awready));
    bufp->fullIData(oldp+232,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__addr),32);
    bufp->fullBit(oldp+233,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_ready));
    bufp->fullIData(oldp+234,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__io_deq_bits_addr),32);
    bufp->fullBit(oldp+235,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+236,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_ready));
    bufp->fullBit(oldp+237,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+238,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_ready));
    bufp->fullBit(oldp+239,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+240,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awready));
    bufp->fullBit(oldp+241,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_out_2_bready));
    bufp->fullBit(oldp+242,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_out_2_arready));
    bufp->fullBit(oldp+243,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+244,((0x0fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr)),28);
    bufp->fullBit(oldp+245,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_out_2_rready));
    bufp->fullBit(oldp+246,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__R0_en));
    bufp->fullSData(oldp+247,((0x000007ffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr 
                                              >> 2U))),11);
    bufp->fullBit(oldp+248,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__W0_en));
    bufp->fullBit(oldp+249,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arvalid));
    bufp->fullBit(oldp+250,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+251,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+252,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__casez_tmp));
    bufp->fullBit(oldp+253,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__in_0_arvalid));
    bufp->fullBit(oldp+254,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awready));
    bufp->fullBit(oldp+255,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arready));
    bufp->fullBit(oldp+256,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid));
    bufp->fullBit(oldp+257,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arvalid) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+258,((0x3fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr)),30);
    bufp->fullBit(oldp+259,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+260,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullBit(oldp+261,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+262,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+263,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+264,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_ready));
    bufp->fullBit(oldp+265,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+266,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+267,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__do_enq));
    bufp->fullBit(oldp+268,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__do_enq));
    bufp->fullBit(oldp+269,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__do_enq));
    bufp->fullBit(oldp+270,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__do_enq));
    bufp->fullBit(oldp+271,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__do_enq));
    bufp->fullBit(oldp+272,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__do_enq));
    bufp->fullBit(oldp+273,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__do_enq));
    bufp->fullBit(oldp+274,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__do_enq));
    bufp->fullBit(oldp+275,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__do_enq));
    bufp->fullBit(oldp+276,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__do_enq));
    bufp->fullBit(oldp+277,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__do_enq));
    bufp->fullBit(oldp+278,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__do_enq));
    bufp->fullBit(oldp+279,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__do_enq));
    bufp->fullBit(oldp+280,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__do_enq));
    bufp->fullBit(oldp+281,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__do_enq));
    bufp->fullBit(oldp+282,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__do_enq));
    bufp->fullBit(oldp+283,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__do_enq));
    bufp->fullBit(oldp+284,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__do_enq));
    bufp->fullBit(oldp+285,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__do_enq));
    bufp->fullBit(oldp+286,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__do_enq));
    bufp->fullBit(oldp+287,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__do_enq));
    bufp->fullBit(oldp+288,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__do_enq));
    bufp->fullBit(oldp+289,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__do_enq));
    bufp->fullBit(oldp+290,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__do_enq));
    bufp->fullBit(oldp+291,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__do_enq));
    bufp->fullBit(oldp+292,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__do_enq));
    bufp->fullBit(oldp+293,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__do_enq));
    bufp->fullBit(oldp+294,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__do_enq));
    bufp->fullBit(oldp+295,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__do_enq));
    bufp->fullBit(oldp+296,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__do_enq));
    bufp->fullBit(oldp+297,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__do_enq));
    bufp->fullBit(oldp+298,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__do_enq));
    bufp->fullIData(oldp+299,((0x3fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_araddr)),32);
    bufp->fullBit(oldp+300,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+301,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+302,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i));
    bufp->fullBit(oldp+303,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w));
    bufp->fullBit(oldp+304,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w));
    bufp->fullBit(oldp+305,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__lsu_final));
    bufp->fullBit(oldp+306,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__lsu_reqEN));
    bufp->fullIData(oldp+307,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.__PVT__inData),32);
    bufp->fullBit(oldp+308,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.__PVT__gpr_WEN));
    bufp->fullBit(oldp+309,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arvalid));
    bufp->fullBit(oldp+310,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_next_state));
    bufp->fullBit(oldp+311,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel_next));
    bufp->fullBit(oldp+312,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_next_state));
    bufp->fullBit(oldp+313,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel_next));
    bufp->fullBit(oldp+314,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__r_fire));
    bufp->fullBit(oldp+315,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__next_state));
    bufp->fullIData(oldp+316,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val),32);
    bufp->fullBit(oldp+317,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__reset_status));
    bufp->fullBit(oldp+318,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr_mask_condition));
    bufp->fullBit(oldp+319,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__iir_read));
    bufp->fullBit(oldp+320,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msr_read));
    bufp->fullBit(oldp+321,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__fifo_read));
    bufp->fullBit(oldp+322,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__fifo_write));
    bufp->fullCData(oldp+323,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rnext_state),2);
    bufp->fullCData(oldp+324,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rnext_state),2);
    bufp->fullCData(oldp+325,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rnext_state),2);
    bufp->fullCData(oldp+326,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rnext_state),2);
    bufp->fullCData(oldp+327,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rnext_state),2);
    bufp->fullCData(oldp+328,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rnext_state),2);
    bufp->fullCData(oldp+329,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rnext_state),2);
    bufp->fullCData(oldp+330,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rnext_state),2);
    bufp->fullBit(oldp+331,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_arready));
    bufp->fullBit(oldp+332,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_awready));
    bufp->fullBit(oldp+333,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_wready));
    bufp->fullBit(oldp+334,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_awready));
    bufp->fullBit(oldp+335,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_wready));
    bufp->fullBit(oldp+336,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_arready));
    bufp->fullBit(oldp+337,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__in_0_wready));
    bufp->fullBit(oldp+338,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__in_0_awready));
    bufp->fullBit(oldp+339,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__io_deq_ready));
    bufp->fullBit(oldp+340,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+341,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__W0_en));
    bufp->fullIData(oldp+342,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i),32);
    bufp->fullCData(oldp+343,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_wr_i),4);
    bufp->fullBit(oldp+344,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+345,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_req_w));
    bufp->fullCData(oldp+346,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r),4);
    bufp->fullCData(oldp+347,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_r),4);
    bufp->fullSData(oldp+348,((0x000001ffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                                              >> 2U))),13);
    bufp->fullSData(oldp+349,((0x00001fffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                                              >> 0x0000000eU))),13);
    bufp->fullCData(oldp+350,((7U & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_addr_i 
                                     >> 0x0000000bU))),3);
    bufp->fullCData(oldp+351,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r),4);
    bufp->fullBit(oldp+352,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IROM_arready));
    bufp->fullBit(oldp+353,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__DRAM_awready));
    bufp->fullBit(oldp+354,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__DRAM_wready));
    bufp->fullBit(oldp+355,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__DRAM_arready));
    bufp->fullBit(oldp+356,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M1_awready));
    bufp->fullBit(oldp+357,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M1_wready));
    bufp->fullCData(oldp+358,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__next_state),2);
    bufp->fullCData(oldp+359,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__next_state),2);
    bufp->fullCData(oldp+360,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__next_state),3);
    bufp->fullBit(oldp+361,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__ar_fire));
    bufp->fullCData(oldp+362,(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__cnt),8);
    bufp->fullIData(oldp+363,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+364,(((((0x0000ff00U & (vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__rdata 
                                                 << 8U)) 
                                 | (0x000000ffU & (vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__rdata 
                                                   >> 8U))) 
                                << 0x00000010U) | (
                                                   (0x0000ff00U 
                                                    & (vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__rdata 
                                                       >> 8U)) 
                                                   | (vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__rdata 
                                                      >> 0x00000018U)))),32);
    bufp->fullSData(oldp+365,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__counter),10);
    bufp->fullCData(oldp+366,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__buf_command),8);
    bufp->fullCData(oldp+367,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__buf_addr_in0),6);
    bufp->fullCData(oldp+368,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__buf_addr_in1),6);
    bufp->fullCData(oldp+369,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__buf_addr_in2),6);
    bufp->fullCData(oldp+370,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__buf_addr_in3),6);
    bufp->fullIData(oldp+371,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__buf_addr),24);
    bufp->fullCData(oldp+372,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__buf_wdata),8);
    bufp->fullIData(oldp+373,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__psram_rdata),32);
    bufp->fullSData(oldp+374,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_out_reg),16);
    bufp->fullBit(oldp+375,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_psel));
    bufp->fullBit(oldp+376,((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+377,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i));
    bufp->fullIData(oldp+378,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i),32);
    bufp->fullCData(oldp+379,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__sel_i),4);
    bufp->fullBit(oldp+380,(((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__state)) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__pop_enable))));
    bufp->fullBit(oldp+381,(((2U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__state)) 
                             | (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__state)))));
    bufp->fullBit(oldp+382,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__auto_in_awready));
    bufp->fullBit(oldp+383,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+384,((0x0000000fU & (IData)(
                                                     (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                      >> 0x0000002bU)))),4);
    bufp->fullIData(oldp+385,((IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                       >> 0x0000000bU))),32);
    bufp->fullCData(oldp+386,((0x000000ffU & (IData)(
                                                     (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data 
                                                      >> 3U)))),8);
    bufp->fullCData(oldp+387,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data))),3);
    bufp->fullBit(oldp+388,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty)))));
    bufp->fullIData(oldp+389,((IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data 
                                       >> 4U))),32);
    bufp->fullCData(oldp+390,((0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data))),4);
    bufp->fullBit(oldp+391,((1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match) 
                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full))))));
    bufp->fullCData(oldp+392,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+393,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__auto_in_arready));
    bufp->fullBit(oldp+394,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)))));
    bufp->fullCData(oldp+395,((0x0000000fU & (IData)(
                                                     (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                      >> 0x0000002bU)))),4);
    bufp->fullIData(oldp+396,((IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                       >> 0x0000000bU))),32);
    bufp->fullCData(oldp+397,((0x000000ffU & (IData)(
                                                     (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data 
                                                      >> 3U)))),8);
    bufp->fullCData(oldp+398,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data))),3);
    bufp->fullBit(oldp+399,((1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match) 
                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full))))));
    bufp->fullCData(oldp+400,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+401,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+402,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+403,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+404,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+405,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+406,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+407,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+408,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+409,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full)))));
    bufp->fullCData(oldp+410,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid),4);
    bufp->fullBit(oldp+411,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+412,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+413,((0x0000000fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data) 
                                              >> 2U))),4);
    bufp->fullCData(oldp+414,((3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data))),2);
    bufp->fullBit(oldp+415,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full)))));
    bufp->fullCData(oldp+416,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid),4);
    bufp->fullBit(oldp+417,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty)))));
    bufp->fullCData(oldp+418,((0x0000000fU & (IData)(
                                                     (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                                      >> 0x00000023U)))),4);
    bufp->fullIData(oldp+419,((IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                       >> 3U))),32);
    bufp->fullCData(oldp+420,((3U & (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+421,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data))));
    bufp->fullBit(oldp+422,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap));
    bufp->fullBit(oldp+423,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+424,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+425,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+426,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__empty));
    bufp->fullBit(oldp+427,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ptr_match) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__maybe_full))));
    bufp->fullCData(oldp+428,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__R0_data),6);
    bufp->fullCData(oldp+429,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[0]),6);
    bufp->fullCData(oldp+430,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__Memory[1]),6);
    bufp->fullBit(oldp+431,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap));
    bufp->fullBit(oldp+432,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+433,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+434,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+435,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__empty));
    bufp->fullBit(oldp+436,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ptr_match) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__maybe_full))));
    bufp->fullQData(oldp+437,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data),39);
    bufp->fullQData(oldp+439,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[0]),39);
    bufp->fullQData(oldp+441,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__Memory[1]),39);
    bufp->fullBit(oldp+443,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap));
    bufp->fullBit(oldp+444,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+445,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+446,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+447,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty));
    bufp->fullBit(oldp+448,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__full));
    bufp->fullBit(oldp+449,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__do_deq));
    bufp->fullQData(oldp+450,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__R0_data),47);
    bufp->fullQData(oldp+452,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+454,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+456,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap));
    bufp->fullBit(oldp+457,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+458,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+459,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+460,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__empty));
    bufp->fullBit(oldp+461,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__full));
    bufp->fullBit(oldp+462,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__do_deq));
    bufp->fullQData(oldp+463,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__R0_data),47);
    bufp->fullQData(oldp+465,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[0]),47);
    bufp->fullQData(oldp+467,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_awdeq_q__DOT__ram_ext__DOT__Memory[1]),47);
    bufp->fullBit(oldp+469,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap));
    bufp->fullBit(oldp+470,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__wrap_1));
    bufp->fullBit(oldp+471,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__maybe_full));
    bufp->fullBit(oldp+472,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ptr_match));
    bufp->fullBit(oldp+473,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__empty));
    bufp->fullBit(oldp+474,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__full));
    bufp->fullBit(oldp+475,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__do_deq));
    bufp->fullQData(oldp+476,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__R0_data),36);
    bufp->fullQData(oldp+478,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[0]),36);
    bufp->fullQData(oldp+480,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_wdeq_q__DOT__ram_ext__DOT__Memory[1]),36);
    bufp->fullBit(oldp+482,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rvalid_w[0]));
    bufp->fullBit(oldp+483,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rvalid_w[1]));
    bufp->fullBit(oldp+484,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rvalid_w[2]));
    bufp->fullBit(oldp+485,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rvalid_w[3]));
    bufp->fullBit(oldp+486,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rvalid_w[4]));
    bufp->fullBit(oldp+487,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rvalid_w[5]));
    bufp->fullBit(oldp+488,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rvalid_w[6]));
    bufp->fullBit(oldp+489,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rvalid_w[7]));
    bufp->fullCData(oldp+490,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rid_w[0]),4);
    bufp->fullCData(oldp+491,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rid_w[1]),4);
    bufp->fullCData(oldp+492,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rid_w[2]),4);
    bufp->fullCData(oldp+493,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rid_w[3]),4);
    bufp->fullCData(oldp+494,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rid_w[4]),4);
    bufp->fullCData(oldp+495,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rid_w[5]),4);
    bufp->fullCData(oldp+496,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rid_w[6]),4);
    bufp->fullCData(oldp+497,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rid_w[7]),4);
    bufp->fullIData(oldp+498,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rdata_w[0]),32);
    bufp->fullIData(oldp+499,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rdata_w[1]),32);
    bufp->fullIData(oldp+500,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rdata_w[2]),32);
    bufp->fullIData(oldp+501,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rdata_w[3]),32);
    bufp->fullIData(oldp+502,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rdata_w[4]),32);
    bufp->fullIData(oldp+503,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rdata_w[5]),32);
    bufp->fullIData(oldp+504,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rdata_w[6]),32);
    bufp->fullIData(oldp+505,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rdata_w[7]),32);
    bufp->fullCData(oldp+506,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rresp_w[0]),2);
    bufp->fullCData(oldp+507,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rresp_w[1]),2);
    bufp->fullCData(oldp+508,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rresp_w[2]),2);
    bufp->fullCData(oldp+509,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rresp_w[3]),2);
    bufp->fullCData(oldp+510,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rresp_w[4]),2);
    bufp->fullCData(oldp+511,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rresp_w[5]),2);
    bufp->fullCData(oldp+512,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rresp_w[6]),2);
    bufp->fullCData(oldp+513,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rresp_w[7]),2);
    bufp->fullBit(oldp+514,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rlast_w[0]));
    bufp->fullBit(oldp+515,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rlast_w[1]));
    bufp->fullBit(oldp+516,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rlast_w[2]));
    bufp->fullBit(oldp+517,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rlast_w[3]));
    bufp->fullBit(oldp+518,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rlast_w[4]));
    bufp->fullBit(oldp+519,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rlast_w[5]));
    bufp->fullBit(oldp+520,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rlast_w[6]));
    bufp->fullBit(oldp+521,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rlast_w[7]));
    bufp->fullBit(oldp+522,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rvalid_reg));
    bufp->fullCData(oldp+523,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rid_reg),4);
    bufp->fullIData(oldp+524,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rdata_reg),32);
    bufp->fullCData(oldp+525,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rresp_reg),2);
    bufp->fullBit(oldp+526,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rlast_reg));
    bufp->fullBit(oldp+527,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rvalid_reg));
    bufp->fullCData(oldp+528,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rid_reg),4);
    bufp->fullIData(oldp+529,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rdata_reg),32);
    bufp->fullCData(oldp+530,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rresp_reg),2);
    bufp->fullBit(oldp+531,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rlast_reg));
    bufp->fullBit(oldp+532,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rvalid_reg));
    bufp->fullCData(oldp+533,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rid_reg),4);
    bufp->fullIData(oldp+534,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rdata_reg),32);
    bufp->fullCData(oldp+535,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rresp_reg),2);
    bufp->fullBit(oldp+536,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rlast_reg));
    bufp->fullBit(oldp+537,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rvalid_reg));
    bufp->fullCData(oldp+538,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rid_reg),4);
    bufp->fullIData(oldp+539,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rdata_reg),32);
    bufp->fullCData(oldp+540,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rresp_reg),2);
    bufp->fullBit(oldp+541,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rlast_reg));
    bufp->fullBit(oldp+542,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rvalid_reg));
    bufp->fullCData(oldp+543,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rid_reg),4);
    bufp->fullIData(oldp+544,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rdata_reg),32);
    bufp->fullCData(oldp+545,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rresp_reg),2);
    bufp->fullBit(oldp+546,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rlast_reg));
    bufp->fullBit(oldp+547,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rvalid_reg));
    bufp->fullCData(oldp+548,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rid_reg),4);
    bufp->fullIData(oldp+549,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rdata_reg),32);
    bufp->fullCData(oldp+550,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rresp_reg),2);
    bufp->fullBit(oldp+551,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rlast_reg));
    bufp->fullBit(oldp+552,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rvalid_reg));
    bufp->fullCData(oldp+553,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rid_reg),4);
    bufp->fullIData(oldp+554,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rdata_reg),32);
    bufp->fullCData(oldp+555,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rresp_reg),2);
    bufp->fullBit(oldp+556,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rlast_reg));
    bufp->fullBit(oldp+557,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rvalid_reg));
    bufp->fullCData(oldp+558,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rid_reg),4);
    bufp->fullIData(oldp+559,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rdata_reg),32);
    bufp->fullCData(oldp+560,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rresp_reg),2);
    bufp->fullBit(oldp+561,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rlast_reg));
    bufp->fullBit(oldp+562,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+563,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+564,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bvalid));
    bufp->fullCData(oldp+565,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid),4);
    bufp->fullCData(oldp+566,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp) 
                               | ((8U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                   ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                       ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                           ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_15)
                                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_14))
                                           : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_13)
                                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_12)))
                                       : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                           ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_11)
                                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_10))
                                           : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_9)
                                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_8))))
                                   : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                       ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                           ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_7)
                                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_6))
                                           : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_5)
                                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_4)))
                                       : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                           ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_3)
                                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_2))
                                           : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_1)
                                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_0))))))),2);
    bufp->fullBit(oldp+567,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+568,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rvalid));
    bufp->fullCData(oldp+569,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid),4);
    bufp->fullIData(oldp+570,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_0)
                                 ? (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                            >> 3U))
                                 : 0U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_1)
                                            ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT__nodeIn_rdata_r
                                            : 0U) | 
                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((((0x0000ff00U 
                                                  & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                                       >> 0x00000018U)
                                                       : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r3)) 
                                                     << 8U)) 
                                                 | (0x000000ffU 
                                                    & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                                        ? 
                                                       (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                                        >> 0x00000010U)
                                                        : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r2)))) 
                                                << 0x00000010U) 
                                               | ((0x0000ff00U 
                                                   & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                                        ? 
                                                       (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                                        >> 8U)
                                                        : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r1)) 
                                                      << 8U)) 
                                                  | (0x000000ffU 
                                                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                                         ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data
                                                         : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r0)))))
                                            : 0U)))),32);
    bufp->fullCData(oldp+571,((3U & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_0)
                                       ? (IData)((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__R0_data 
                                                  >> 1U))
                                       : 0U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_2)
                                                 ? 
                                                ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__r_sel1)
                                                  ? 0U
                                                  : 3U)
                                                 : 0U)))),2);
    bufp->fullBit(oldp+572,((((8U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                               ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                   ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                       ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                           ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last)
                                           : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last))
                                       : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                           ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last)
                                           : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last)))
                                   : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                       ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                           ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last)
                                           : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last))
                                       : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                           ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last)
                                           : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last))))
                               : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                   ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                       ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                           ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last)
                                           : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last))
                                       : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                           ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last)
                                           : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last)))
                                   : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                       ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                           ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last)
                                           : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last))
                                       : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                           ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last)
                                           : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last))))) 
                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast))));
    bufp->fullBit(oldp+573,((1U & (~ (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__len_1))))));
    bufp->fullBit(oldp+574,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_bvalid));
    bufp->fullCData(oldp+575,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_bresp),2);
    bufp->fullBit(oldp+576,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__auto_in_becho_real_last));
    bufp->fullBit(oldp+577,(((8U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                              ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                  ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                      ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last)
                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last))
                                      : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last)
                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last)))
                                  : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                      ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last)
                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last))
                                      : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last)
                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last))))
                              : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                  ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                      ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last)
                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last))
                                      : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last)
                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last)))
                                  : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                      ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last)
                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last))
                                      : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last)
                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))));
    bufp->fullBit(oldp+578,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_rlast));
    bufp->fullBit(oldp+579,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+580,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+581,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+582,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__r_len),8);
    bufp->fullBit(oldp+583,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+584,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+585,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+586,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+587,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+588,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+589,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+590,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+591,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+592,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+593,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+594,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+595,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+596,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+597,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+598,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+599,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+600,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+601,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+602,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+603,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+604,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_15),2);
    bufp->fullCData(oldp+605,(((8U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                    ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                        ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                            ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_15)
                                            : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_14))
                                        : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                            ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_13)
                                            : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_12)))
                                    : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                        ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                            ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_11)
                                            : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_10))
                                        : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                            ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_9)
                                            : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_8))))
                                : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                    ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                        ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                            ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_7)
                                            : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_6))
                                        : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                            ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_5)
                                            : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_4)))
                                    : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                        ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                            ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_3)
                                            : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_2))
                                        : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                            ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_1)
                                            : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__error_0)))))),2);
    bufp->fullQData(oldp+606,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+608,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullCData(oldp+609,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__io_deq_bits_len),8);
    bufp->fullQData(oldp+610,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+612,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullQData(oldp+613,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+615,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+616,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+617,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+618,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+619,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+620,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+621,(((((0x0000ff00U & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                                   ? 
                                                  (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                                   >> 0x00000018U)
                                                   : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r3)) 
                                                 << 8U)) 
                                 | (0x000000ffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                                    ? 
                                                   (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                                    >> 0x00000010U)
                                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r2)))) 
                                << 0x00000010U) | (
                                                   (0x0000ff00U 
                                                    & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                                         ? 
                                                        (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data 
                                                         >> 8U)
                                                         : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r1)) 
                                                       << 8U)) 
                                                   | (0x000000ffU 
                                                      & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG)
                                                          ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data
                                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r0)))))),32);
    bufp->fullCData(oldp+622,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+623,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+624,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+625,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+626,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+627,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+628,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+629,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+630,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4ram__DOT__mem_ext__DOT__R0_data),32);
    bufp->fullCData(oldp+631,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_0_count),3);
    bufp->fullBit(oldp+632,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_0_last));
    bufp->fullCData(oldp+633,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_0_count),3);
    bufp->fullBit(oldp+634,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_0_last));
    bufp->fullCData(oldp+635,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_1_count),3);
    bufp->fullCData(oldp+636,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_1_count),3);
    bufp->fullBit(oldp+637,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_1_last));
    bufp->fullCData(oldp+638,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_2_count),3);
    bufp->fullCData(oldp+639,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_2_count),3);
    bufp->fullBit(oldp+640,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_2_last));
    bufp->fullCData(oldp+641,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_3_count),3);
    bufp->fullCData(oldp+642,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_3_count),3);
    bufp->fullBit(oldp+643,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_3_last));
    bufp->fullCData(oldp+644,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_4_count),3);
    bufp->fullCData(oldp+645,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_4_count),3);
    bufp->fullBit(oldp+646,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_4_last));
    bufp->fullCData(oldp+647,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_5_count),3);
    bufp->fullCData(oldp+648,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_5_count),3);
    bufp->fullBit(oldp+649,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_5_last));
    bufp->fullCData(oldp+650,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_6_count),3);
    bufp->fullCData(oldp+651,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_6_count),3);
    bufp->fullBit(oldp+652,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_6_last));
    bufp->fullCData(oldp+653,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_7_count),3);
    bufp->fullCData(oldp+654,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_7_count),3);
    bufp->fullBit(oldp+655,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_7_last));
    bufp->fullCData(oldp+656,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_8_count),3);
    bufp->fullCData(oldp+657,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_8_count),3);
    bufp->fullBit(oldp+658,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_8_last));
    bufp->fullCData(oldp+659,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_9_count),3);
    bufp->fullCData(oldp+660,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_9_count),3);
    bufp->fullBit(oldp+661,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_9_last));
    bufp->fullCData(oldp+662,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_10_count),3);
    bufp->fullCData(oldp+663,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_10_count),3);
    bufp->fullBit(oldp+664,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_10_last));
    bufp->fullCData(oldp+665,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_11_count),3);
    bufp->fullCData(oldp+666,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_11_count),3);
    bufp->fullBit(oldp+667,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_11_last));
    bufp->fullCData(oldp+668,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_12_count),3);
    bufp->fullCData(oldp+669,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_12_count),3);
    bufp->fullBit(oldp+670,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_12_last));
    bufp->fullCData(oldp+671,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_13_count),3);
    bufp->fullCData(oldp+672,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_13_count),3);
    bufp->fullBit(oldp+673,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_13_last));
    bufp->fullCData(oldp+674,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_14_count),3);
    bufp->fullCData(oldp+675,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_14_count),3);
    bufp->fullBit(oldp+676,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_14_last));
    bufp->fullCData(oldp+677,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__arFIFOMap_15_count),3);
    bufp->fullCData(oldp+678,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_15_count),3);
    bufp->fullBit(oldp+679,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awFIFOMap_15_last));
    bufp->fullBit(oldp+680,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__latched));
    bufp->fullBit(oldp+681,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__idle_2));
    bufp->fullCData(oldp+682,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_mask),2);
    bufp->fullBit(oldp+683,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_2_0));
    bufp->fullBit(oldp+684,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_2_1));
    bufp->fullBit(oldp+685,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__idle_3));
    bufp->fullCData(oldp+686,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_mask_1),2);
    bufp->fullBit(oldp+687,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_3_0));
    bufp->fullBit(oldp+688,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__state_3_1));
    bufp->fullBit(oldp+689,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+690,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+691,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+692,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+693,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+694,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+695,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+696,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__wrap_1]),2);
    bufp->fullCData(oldp+697,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),2);
    bufp->fullCData(oldp+698,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),2);
    bufp->fullBit(oldp+699,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+700,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT__state));
    bufp->fullCData(oldp+701,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+702,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+703,((0x0000ffffU & ((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_arid)))),16);
    bufp->fullSData(oldp+704,((0x0000ffffU & ((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)))),16);
    bufp->fullSData(oldp+705,((0x0000ffffU & ((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid)))),16);
    bufp->fullSData(oldp+706,((0x0000ffffU & ((IData)(1U) 
                                              << (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid)))),16);
    bufp->fullBit(oldp+707,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+708,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+709,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+710,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+711,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+712,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+713,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+714,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+715,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+716,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+717,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+718,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+719,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+720,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+721,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+722,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+723,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+724,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+725,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+726,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+727,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+728,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+729,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+730,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+731,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+732,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+733,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+734,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+735,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+736,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+737,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+738,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+739,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+740,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__idle_3));
    bufp->fullBit(oldp+741,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+742,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+743,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullCData(oldp+744,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+745,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+746,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+747,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+748,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+749,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+750,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+751,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+752,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+753,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+754,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+755,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__idle_4));
    bufp->fullBit(oldp+756,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+757,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+758,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullCData(oldp+759,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+760,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+761,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+762,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+763,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+764,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+765,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+766,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+767,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+768,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+769,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+770,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+771,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+772,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+773,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+774,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+775,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+776,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+777,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__casez_tmp));
    bufp->fullBit(oldp+778,(((8U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                              ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                  ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                      ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)
                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full))
                                      : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)
                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))
                                  : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                      ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)
                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full))
                                      : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)
                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full))))
                              : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                  ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                      ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)
                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full))
                                      : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)
                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))
                                  : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                      ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)
                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full))
                                      : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_rid))
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)
                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))))));
    bufp->fullBit(oldp+779,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__casez_tmp_2));
    bufp->fullBit(oldp+780,(((8U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                              ? ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                  ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                      ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)
                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full))
                                      : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)
                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))
                                  : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                      ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)
                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full))
                                      : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)
                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full))))
                              : ((4U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                  ? ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                      ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)
                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full))
                                      : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)
                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))
                                  : ((2U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                      ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)
                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full))
                                      : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__auto_anon_out_0_bid))
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)
                                          : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))))));
    bufp->fullBit(oldp+781,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+782,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+783,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+784,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+785,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+786,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+787,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+788,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+789,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+790,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+791,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+792,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+793,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+794,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+795,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+796,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+797,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+798,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+799,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+800,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+801,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+802,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+803,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+804,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+805,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+806,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+807,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+808,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+809,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+810,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+811,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+812,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+813,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+814,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+815,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+816,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+817,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+818,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+819,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+820,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+821,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+822,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+823,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+824,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+825,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+826,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+827,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+828,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+829,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+830,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+831,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+832,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+833,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+834,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+835,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+836,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+837,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+838,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+839,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+840,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+841,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+842,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+843,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+844,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+845,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+846,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+847,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+848,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+849,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+850,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+851,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+852,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+853,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+854,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+855,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+856,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+857,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+858,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+859,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+860,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+861,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+862,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+863,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+864,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+865,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+866,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+867,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+868,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+869,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+870,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+871,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+872,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+873,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+874,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+875,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+876,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+877,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+878,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+879,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+880,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+881,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+882,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+883,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+884,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+885,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+886,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullIData(oldp+887,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_seg_reg_input),32);
    bufp->fullCData(oldp+888,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[0]),8);
    bufp->fullCData(oldp+889,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[1]),8);
    bufp->fullCData(oldp+890,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[2]),8);
    bufp->fullCData(oldp+891,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[3]),8);
    bufp->fullCData(oldp+892,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[4]),8);
    bufp->fullCData(oldp+893,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[5]),8);
    bufp->fullCData(oldp+894,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[6]),8);
    bufp->fullCData(oldp+895,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__gpio_reg_decode[7]),8);
    bufp->fullCData(oldp+896,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__state),2);
    bufp->fullCData(oldp+897,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__state),2);
    bufp->fullCData(oldp+898,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_write),4);
    bufp->fullBit(oldp+899,((8U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_write))));
    bufp->fullBit(oldp+900,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__pop_enable));
    bufp->fullCData(oldp+901,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_clk_record),3);
    bufp->fullBit(oldp+902,((2U == (3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_clk_record) 
                                          >> 1U)))));
    bufp->fullCData(oldp+903,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+904,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+905,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+906,((0x000000ffU & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                                              >> 0x00000010U))),8);
    bufp->fullCData(oldp+907,((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i 
                               >> 0x00000018U)),8);
    bufp->fullIData(oldp+908,(((0xffff0000U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i) 
                               | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                   << 8U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullCData(oldp+909,((0x000000ffU & ((IData)(7U) 
                                              + VL_SHIFTL_III(8,8,32, (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__size), 1U)))),8);
    bufp->fullSData(oldp+910,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__v_valid)
                                ? (0x000003ffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__y_cnt) 
                                                  - (IData)(0x0024U)))
                                : 0U)),10);
    bufp->fullSData(oldp+911,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__y_cnt),10);
    bufp->fullBit(oldp+912,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__v_valid));
    bufp->fullIData(oldp+913,((0x00ffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dat_i)),24);
    bufp->fullBit(oldp+914,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isR));
    bufp->fullBit(oldp+915,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isU));
    bufp->fullBit(oldp+916,((0x6fU == (0x0000007fU 
                                       & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command))));
    bufp->fullBit(oldp+917,(((IData)((0x00001073U == 
                                      (0x0000707fU 
                                       & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command))) 
                             | ((IData)((0x00002073U 
                                         == (0x0000707fU 
                                             & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command))) 
                                | (IData)((0x00003073U 
                                           == (0x0000707fU 
                                               & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)))))));
    bufp->fullCData(oldp+918,((0x0000001fU & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                              >> 7U))),5);
    bufp->fullCData(oldp+919,((0x0000001fU & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                              >> 0x0000000fU))),5);
    bufp->fullCData(oldp+920,((0x0000001fU & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                              >> 0x00000014U))),5);
    bufp->fullSData(oldp+921,((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                               >> 0x00000014U)),12);
    bufp->fullBit(oldp+922,((0x0000100fU == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
    bufp->fullCData(oldp+923,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__LSU_rmask),4);
    bufp->fullIData(oldp+924,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command),32);
    bufp->fullBit(oldp+925,((0x00100073U == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
    bufp->fullBit(oldp+926,((0x00000073U == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
    bufp->fullBit(oldp+927,((0x30200073U == vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)));
    bufp->fullBit(oldp+928,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_h6e95ff9d_0_25)))));
    bufp->fullBit(oldp+929,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_hd1728725_0_20) 
                             | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLT) 
                                | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLTU)))));
    bufp->fullIData(oldp+930,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awaddr_q),32);
    bufp->fullIData(oldp+931,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__wdata_q),32);
    bufp->fullCData(oldp+932,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__wstrb_q),4);
    bufp->fullCData(oldp+933,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__awsize_q),3);
    bufp->fullCData(oldp+934,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_arsize),3);
    bufp->fullBit(oldp+935,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSUB));
    bufp->fullBit(oldp+936,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_state));
    bufp->fullBit(oldp+937,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel));
    bufp->fullBit(oldp+938,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_state));
    bufp->fullBit(oldp+939,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel));
    bufp->fullCData(oldp+940,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__reg_dat8_w_reg),8);
    bufp->fullWData(oldp+941,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_mem[0]),128);
    bufp->fullWData(oldp+945,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_mem[1]),128);
    bufp->fullWData(oldp+949,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_mem[2]),128);
    bufp->fullWData(oldp+953,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_mem[3]),128);
    bufp->fullWData(oldp+957,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_mem[4]),128);
    bufp->fullWData(oldp+961,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_mem[5]),128);
    bufp->fullWData(oldp+965,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_mem[6]),128);
    bufp->fullWData(oldp+969,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_mem[7]),128);
    bufp->fullBit(oldp+973,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_valid[0]));
    bufp->fullBit(oldp+974,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_valid[1]));
    bufp->fullBit(oldp+975,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_valid[2]));
    bufp->fullBit(oldp+976,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_valid[3]));
    bufp->fullBit(oldp+977,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_valid[4]));
    bufp->fullBit(oldp+978,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_valid[5]));
    bufp->fullBit(oldp+979,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_valid[6]));
    bufp->fullBit(oldp+980,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_valid[7]));
    bufp->fullIData(oldp+981,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_tag[0]),25);
    bufp->fullIData(oldp+982,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_tag[1]),25);
    bufp->fullIData(oldp+983,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_tag[2]),25);
    bufp->fullIData(oldp+984,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_tag[3]),25);
    bufp->fullIData(oldp+985,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_tag[4]),25);
    bufp->fullIData(oldp+986,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_tag[5]),25);
    bufp->fullIData(oldp+987,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_tag[6]),25);
    bufp->fullIData(oldp+988,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_tag[7]),25);
    bufp->fullCData(oldp+989,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__state),2);
    bufp->fullCData(oldp+990,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__burst_cnt),2);
    bufp->fullIData(oldp+991,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+992,((0x0000007fU & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)),7);
    bufp->fullCData(oldp+993,((7U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                     >> 0x0000000cU))),3);
    bufp->fullCData(oldp+994,((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                               >> 0x00000019U)),7);
    bufp->fullSData(oldp+995,(((0x00000fe0U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                               >> 0x00000014U)) 
                               | (0x0000001fU & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                 >> 7U)))),12);
    bufp->fullSData(oldp+996,(((((2U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                        >> 0x0000001eU)) 
                                 | (1U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                          >> 7U))) 
                                << 0x0000000aU) | (
                                                   (0x000003f0U 
                                                    & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                       >> 0x00000015U)) 
                                                   | (0x0000000fU 
                                                      & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                         >> 8U))))),12);
    bufp->fullIData(oldp+997,((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                               >> 0x0000000cU)),20);
    bufp->fullIData(oldp+998,(((0x00080000U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                               >> 0x0000000cU)) 
                               | ((0x0007f800U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                                  >> 1U)) 
                                  | ((0x00000400U & 
                                      (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                       >> 0x0000000aU)) 
                                     | (0x000003ffU 
                                        & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command 
                                           >> 0x00000015U)))))),20);
    bufp->fullBit(oldp+999,((0x37U == (0x0000007fU 
                                       & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command))));
    bufp->fullBit(oldp+1000,((0x17U == (0x0000007fU 
                                        & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command))));
    bufp->fullBit(oldp+1001,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isJALR));
    bufp->fullBit(oldp+1002,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBEQ));
    bufp->fullBit(oldp+1003,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBNE));
    bufp->fullBit(oldp+1004,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBLT));
    bufp->fullBit(oldp+1005,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBGE));
    bufp->fullBit(oldp+1006,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBLTU));
    bufp->fullBit(oldp+1007,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isBGEU));
    bufp->fullBit(oldp+1008,((IData)((3U == (0x0000707fU 
                                             & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)))));
    bufp->fullBit(oldp+1009,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isLH));
    bufp->fullBit(oldp+1010,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isLW));
    bufp->fullBit(oldp+1011,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isLBU));
    bufp->fullBit(oldp+1012,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isLHU));
    bufp->fullBit(oldp+1013,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSB));
    bufp->fullBit(oldp+1014,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSH));
    bufp->fullBit(oldp+1015,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSW));
    bufp->fullBit(oldp+1016,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isADDI));
    bufp->fullBit(oldp+1017,((IData)((0x00002013U == 
                                      (0x0000707fU 
                                       & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)))));
    bufp->fullBit(oldp+1018,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLTIU));
    bufp->fullBit(oldp+1019,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isXORI));
    bufp->fullBit(oldp+1020,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isORI));
    bufp->fullBit(oldp+1021,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isANDI));
    bufp->fullBit(oldp+1022,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLLI));
    bufp->fullBit(oldp+1023,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSRLI));
    bufp->fullBit(oldp+1024,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSRAI));
    bufp->fullBit(oldp+1025,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isADD));
    bufp->fullBit(oldp+1026,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLL));
    bufp->fullBit(oldp+1027,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLT));
    bufp->fullBit(oldp+1028,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLTU));
    bufp->fullBit(oldp+1029,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isXOR));
    bufp->fullBit(oldp+1030,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSRL));
    bufp->fullBit(oldp+1031,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSRA));
    bufp->fullBit(oldp+1032,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isOR));
    bufp->fullBit(oldp+1033,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isAND));
    bufp->fullBit(oldp+1034,((IData)((0x00001073U == 
                                      (0x0000707fU 
                                       & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)))));
    bufp->fullBit(oldp+1035,((IData)((0x00002073U == 
                                      (0x0000707fU 
                                       & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)))));
    bufp->fullBit(oldp+1036,((IData)((0x00003073U == 
                                      (0x0000707fU 
                                       & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)))));
    bufp->fullIData(oldp+1037,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+1038,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+1039,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+1040,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+1041,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+1042,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+1043,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+1044,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+1045,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+1046,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+1047,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+1048,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+1049,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+1050,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+1051,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+1052,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+1053,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+1054,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_4) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_psel))));
    bufp->fullBit(oldp+1055,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_4) 
                              & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+1056,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_3) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_psel))));
    bufp->fullBit(oldp+1057,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_3) 
                              & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+1058,((IData)(((0U == (0x30000000U 
                                              & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)) 
                                      & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state))))));
    bufp->fullCData(oldp+1059,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__state))
                                 ? ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_4) 
                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_psel)) 
                                     & ((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_4) 
                                            & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state)))) 
                                        & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i))))
                                     ? 1U : 0U) : (
                                                   (1U 
                                                    == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__state))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__pop_enable)
                                                     ? 0U
                                                     : 1U)
                                                    : 0U))),2);
    bufp->fullBit(oldp+1060,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__in_psel) 
                              & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__in_penable)) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i)))));
    bufp->fullBit(oldp+1061,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0))));
    bufp->fullBit(oldp+1062,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__we_i)) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.axi42apb__DOT____VdfgRegularize_h9342e4dc_0_0))));
    bufp->fullIData(oldp+1063,(((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state))
                                 ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_prdata
                                 : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+1064,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state))
                                 ? (1U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeOut_ardeq_q__DOT__empty)) 
                                          | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__VdfgRegularize_h6e95ff9d_0_3)))
                                 : ((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state))
                                     ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_pready)
                                         ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__VdfgRegularize_h6e95ff9d_0_4)
                                         : 1U) : ((2U 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state))
                                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__VdfgRegularize_h6e95ff9d_0_4)
                                                   : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state))))),2);
    bufp->fullCData(oldp+1065,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__bid_reg) 
                                 << 2U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__auto_in_bresp))),6);
    bufp->fullQData(oldp+1066,((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__rid_reg)) 
                                 << 0x00000023U) | 
                                (((QData)((IData)((
                                                   (1U 
                                                    == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__state))
                                                    ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_prdata
                                                    : vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__nodeIn_rdata_r))) 
                                  << 3U) | (QData)((IData)(
                                                           (1U 
                                                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__auto_in_bresp) 
                                                               << 1U))))))),39);
    bufp->fullBit(oldp+1068,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) 
                              & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid)))));
    bufp->fullCData(oldp+1069,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_state)
                                 ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)
                                     ? 0U : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rresp))
                                 : 0U)),2);
    bufp->fullCData(oldp+1070,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_state)
                                 ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)
                                     ? 0U : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid))
                                 : 0U)),4);
    bufp->fullCData(oldp+1071,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_state)
                                 ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel)
                                     ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)
                                     : 0U) : 0U)),4);
    bufp->fullBit(oldp+1072,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_state) 
                              & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rlast)))));
    bufp->fullCData(oldp+1073,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_state)
                                 ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__R_master_sel)
                                     ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)
                                     : 0U) : 0U)),4);
    bufp->fullCData(oldp+1074,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_state)
                                 ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel)
                                     ? 0U : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bresp))
                                 : 0U)),2);
    bufp->fullBit(oldp+1075,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_state) 
                              & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel)) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bvalid)))));
    bufp->fullCData(oldp+1076,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_state)
                                 ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__W_master_sel)
                                     ? 0U : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid))
                                 : 0U)),4);
    bufp->fullBit(oldp+1077,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_sck));
    bufp->fullBit(oldp+1078,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_mosi));
    bufp->fullBit(oldp+1079,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q));
    bufp->fullCData(oldp+1080,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__state),2);
    bufp->fullIData(oldp+1081,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__cnt),32);
    bufp->fullIData(oldp+1082,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__prdata_reg),32);
    bufp->fullBit(oldp+1083,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__pslverr_reg));
    bufp->fullBit(oldp+1084,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__pready_reg));
    bufp->fullBit(oldp+1085,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbxbar_auto_anon_out_5_pready));
    bufp->fullBit(oldp+1086,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__state))));
    bufp->fullBit(oldp+1087,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbxbar_auto_anon_out_0_pslverr));
    bufp->fullIData(oldp+1088,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbxbar_auto_anon_out_0_prdata),32);
    bufp->fullBit(oldp+1089,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__bvalid_reg));
    bufp->fullCData(oldp+1090,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__bid_reg),4);
    bufp->fullCData(oldp+1091,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__bresp_reg),2);
    bufp->fullBit(oldp+1092,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rvalid));
    bufp->fullCData(oldp+1093,((0x0000000fU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w))),4);
    bufp->fullIData(oldp+1094,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rdata),32);
    bufp->fullBit(oldp+1095,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                    >> 4U))));
    bufp->fullBit(oldp+1096,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_bvalid));
    bufp->fullBit(oldp+1097,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rvalid_w[0]));
    bufp->fullBit(oldp+1098,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rvalid_w[1]));
    bufp->fullBit(oldp+1099,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rvalid_w[2]));
    bufp->fullBit(oldp+1100,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rvalid_w[3]));
    bufp->fullBit(oldp+1101,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rvalid_w[4]));
    bufp->fullBit(oldp+1102,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rvalid_w[5]));
    bufp->fullBit(oldp+1103,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rvalid_w[6]));
    bufp->fullBit(oldp+1104,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rvalid_w[7]));
    bufp->fullCData(oldp+1105,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rid_w[0]),4);
    bufp->fullCData(oldp+1106,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rid_w[1]),4);
    bufp->fullCData(oldp+1107,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rid_w[2]),4);
    bufp->fullCData(oldp+1108,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rid_w[3]),4);
    bufp->fullCData(oldp+1109,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rid_w[4]),4);
    bufp->fullCData(oldp+1110,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rid_w[5]),4);
    bufp->fullCData(oldp+1111,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rid_w[6]),4);
    bufp->fullCData(oldp+1112,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rid_w[7]),4);
    bufp->fullIData(oldp+1113,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rdata_w[0]),32);
    bufp->fullIData(oldp+1114,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rdata_w[1]),32);
    bufp->fullIData(oldp+1115,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rdata_w[2]),32);
    bufp->fullIData(oldp+1116,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rdata_w[3]),32);
    bufp->fullIData(oldp+1117,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rdata_w[4]),32);
    bufp->fullIData(oldp+1118,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rdata_w[5]),32);
    bufp->fullIData(oldp+1119,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rdata_w[6]),32);
    bufp->fullIData(oldp+1120,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rdata_w[7]),32);
    bufp->fullBit(oldp+1121,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rlast_w[0]));
    bufp->fullBit(oldp+1122,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rlast_w[1]));
    bufp->fullBit(oldp+1123,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rlast_w[2]));
    bufp->fullBit(oldp+1124,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rlast_w[3]));
    bufp->fullBit(oldp+1125,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rlast_w[4]));
    bufp->fullBit(oldp+1126,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rlast_w[5]));
    bufp->fullBit(oldp+1127,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rlast_w[6]));
    bufp->fullBit(oldp+1128,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__out_rlast_w[7]));
    bufp->fullCData(oldp+1129,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__rcnt),3);
    bufp->fullCData(oldp+1130,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__rrcnt),3);
    bufp->fullCData(oldp+1131,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__wstate),2);
    bufp->fullIData(oldp+1132,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__wcnt),32);
    bufp->fullBit(oldp+1133,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__out_rvalid));
    bufp->fullCData(oldp+1134,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__out_rid),4);
    bufp->fullIData(oldp+1135,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__out_rdata),32);
    bufp->fullBit(oldp+1136,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__out_rlast));
    bufp->fullBit(oldp+1137,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__out_rvalid));
    bufp->fullCData(oldp+1138,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__out_rid),4);
    bufp->fullIData(oldp+1139,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__out_rdata),32);
    bufp->fullBit(oldp+1140,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__out_rlast));
    bufp->fullBit(oldp+1141,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__out_rvalid));
    bufp->fullCData(oldp+1142,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__out_rid),4);
    bufp->fullIData(oldp+1143,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__out_rdata),32);
    bufp->fullBit(oldp+1144,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__out_rlast));
    bufp->fullBit(oldp+1145,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__out_rvalid));
    bufp->fullCData(oldp+1146,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__out_rid),4);
    bufp->fullIData(oldp+1147,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__out_rdata),32);
    bufp->fullBit(oldp+1148,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__out_rlast));
    bufp->fullBit(oldp+1149,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__out_rvalid));
    bufp->fullCData(oldp+1150,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__out_rid),4);
    bufp->fullIData(oldp+1151,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__out_rdata),32);
    bufp->fullBit(oldp+1152,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__out_rlast));
    bufp->fullBit(oldp+1153,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__out_rvalid));
    bufp->fullCData(oldp+1154,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__out_rid),4);
    bufp->fullIData(oldp+1155,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__out_rdata),32);
    bufp->fullBit(oldp+1156,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__out_rlast));
    bufp->fullBit(oldp+1157,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__out_rvalid));
    bufp->fullCData(oldp+1158,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__out_rid),4);
    bufp->fullIData(oldp+1159,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__out_rdata),32);
    bufp->fullBit(oldp+1160,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__out_rlast));
    bufp->fullBit(oldp+1161,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__out_rvalid));
    bufp->fullCData(oldp+1162,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__out_rid),4);
    bufp->fullIData(oldp+1163,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__out_rdata),32);
    bufp->fullBit(oldp+1164,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__out_rlast));
    bufp->fullBit(oldp+1165,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+1166,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+1167,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                 ? 0x0000000eU : ((1U 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                   ? 0x0000000bU
                                                   : 
                                                  (0x0000000fU 
                                                   & ((2U 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                       ? 
                                                      (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                       >> 0x00000014U)
                                                       : 
                                                      ((3U 
                                                        == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                        ? 
                                                       (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                        >> 0x00000010U)
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                         ? 
                                                        (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                         >> 0x0000000cU)
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                          ? 
                                                         (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                          >> 8U)
                                                          : 
                                                         ((6U 
                                                           == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                           ? 
                                                          (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                           >> 4U)
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                            ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                            : 0U)))))))))),4);
    bufp->fullBit(oldp+1168,((8U > (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+1169,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+1170,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+1171,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+1172,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck));
    bufp->fullBit(oldp+1173,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n));
    bufp->fullCData(oldp+1174,(((8U > (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter))
                                 ? (1U & (0x35U >> 
                                          (7U & ((IData)(7U) 
                                                 - (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter)))))
                                 : 0x0aU)),4);
    bufp->fullBit(oldp+1175,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ce_n)))));
    bufp->fullBit(oldp+1176,((0x16U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+1177,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state))));
    bufp->fullBit(oldp+1178,((8U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter))));
    bufp->fullCData(oldp+1179,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullBit(oldp+1180,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+1181,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+1182,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+1183,((0x000000ffU & (VL_SHIFTR_III(8,8,32, (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter), 1U) 
                                               - (IData)(3U)))),8);
    bufp->fullCData(oldp+1184,((3U & (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                       >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+1185,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+1186,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+1187,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+1188,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__state));
    bufp->fullBit(oldp+1189,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__state)
                               ? (8U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter))
                               : (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)))));
    bufp->fullCData(oldp+1190,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__QPI__DOT__counter),8);
    bufp->fullBit(oldp+1191,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+1192,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q),32);
    bufp->fullIData(oldp+1193,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q),32);
    bufp->fullBit(oldp+1194,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q));
    bufp->fullIData(oldp+1195,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask),32);
    bufp->fullCData(oldp+1196,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q),8);
    bufp->fullIData(oldp+1197,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q),32);
    bufp->fullBit(oldp+1198,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q));
    bufp->fullBit(oldp+1199,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q));
    bufp->fullCData(oldp+1200,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q),4);
    bufp->fullCData(oldp+1201,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q),2);
    bufp->fullCData(oldp+1202,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q),8);
    bufp->fullBit(oldp+1203,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q));
    bufp->fullBit(oldp+1204,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q));
    bufp->fullBit(oldp+1205,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q));
    bufp->fullBit(oldp+1206,((4U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullBit(oldp+1207,((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    bufp->fullCData(oldp+1208,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w),6);
    bufp->fullBit(oldp+1209,(((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                  >> 5U)) & (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))));
    bufp->fullBit(oldp+1210,(((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                              & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                                 >> 5U))));
    bufp->fullBit(oldp+1211,((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullBit(oldp+1212,((((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                              | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q))));
    bufp->fullBit(oldp+1213,((1U & ((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                                        | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                                    | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)))));
    bufp->fullCData(oldp+1214,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[0]),6);
    bufp->fullCData(oldp+1215,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[1]),6);
    bufp->fullCData(oldp+1216,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[2]),6);
    bufp->fullCData(oldp+1217,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[3]),6);
    bufp->fullCData(oldp+1218,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr),2);
    bufp->fullCData(oldp+1219,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr),2);
    bufp->fullCData(oldp+1220,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count),3);
    bufp->fullBit(oldp+1221,((4U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count))));
    bufp->fullIData(oldp+1222,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[0]),32);
    bufp->fullIData(oldp+1223,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[1]),32);
    bufp->fullIData(oldp+1224,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[2]),32);
    bufp->fullIData(oldp+1225,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[3]),32);
    bufp->fullCData(oldp+1226,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr),2);
    bufp->fullCData(oldp+1227,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr),2);
    bufp->fullCData(oldp+1228,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count),3);
    bufp->fullBit(oldp+1229,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q));
    bufp->fullIData(oldp+1230,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_buffer_q),32);
    bufp->fullCData(oldp+1231,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_buffer_q),4);
    bufp->fullBit(oldp+1232,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q));
    bufp->fullCData(oldp+1233,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q),8);
    bufp->fullSData(oldp+1234,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+1235,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+1236,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+1237,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[3]),13);
    bufp->fullSData(oldp+1238,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[4]),13);
    bufp->fullSData(oldp+1239,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[5]),13);
    bufp->fullSData(oldp+1240,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[6]),13);
    bufp->fullSData(oldp+1241,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[7]),13);
    bufp->fullCData(oldp+1242,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q),4);
    bufp->fullCData(oldp+1243,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q),4);
    bufp->fullCData(oldp+1244,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q),4);
    bufp->fullIData(oldp+1245,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+1246,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx),32);
    bufp->fullCData(oldp+1247,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q),3);
    bufp->fullCData(oldp+1248,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__state),2);
    bufp->fullBit(oldp+1249,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipmaster_pready));
    bufp->fullIData(oldp+1250,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipmaster_prdata),32);
    bufp->fullBit(oldp+1251,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipmaster_pslverr));
    bufp->fullBit(oldp+1252,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipmaster_irq_out));
    bufp->fullCData(oldp+1253,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_paddr),5);
    bufp->fullBit(oldp+1254,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_psel));
    bufp->fullBit(oldp+1255,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_penable));
    bufp->fullBit(oldp+1256,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_pwrite));
    bufp->fullCData(oldp+1257,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_pstrb),4);
    bufp->fullBit(oldp+1258,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_pready));
    bufp->fullIData(oldp+1259,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_prdata),32);
    bufp->fullBit(oldp+1260,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_irq_out));
    bufp->fullCData(oldp+1261,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__sstate),4);
    bufp->fullCData(oldp+1262,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__state),4);
    bufp->fullCData(oldp+1263,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_paddr),5);
    bufp->fullCData(oldp+1264,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pstrb),4);
    bufp->fullBit(oldp+1265,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_pwrite));
    bufp->fullSData(oldp+1266,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+1267,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+1268,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+1269,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+1273,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 9U))));
    bufp->fullBit(oldp+1274,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0x0000000aU))));
    bufp->fullCData(oldp+1275,((0x0000007fU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+1276,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 8U))));
    bufp->fullBit(oldp+1277,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0x0000000bU))));
    bufp->fullBit(oldp+1278,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0x0000000cU))));
    bufp->fullBit(oldp+1279,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0x0000000dU))));
    bufp->fullBit(oldp+1280,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+1281,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+1282,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+1283,((1U & (~ (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))))));
    bufp->fullSData(oldp+1284,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+1285,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+1286,((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+1287,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+1288,((0x000000ffU & ((0x00000800U 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgRegularize_ha14fb189_0_0) 
                                                   - (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                                : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                   - (IData)(1U))))),8);
    bufp->fullCData(oldp+1289,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+1290,((((0x00000200U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
                                : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)) 
                              & ((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                                 | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_sck)))));
    bufp->fullBit(oldp+1291,(((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                              & ((0x00000400U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
                                  : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)))));
    bufp->fullSData(oldp+1292,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__h_valid)
                                 ? (0x000003ffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__x_cnt) 
                                                   - (IData)(0x0091U)))
                                 : 0U)),10);
    bufp->fullSData(oldp+1293,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__x_cnt),10);
    bufp->fullBit(oldp+1294,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__h_valid));
    bufp->fullBit(oldp+1295,((1U & (~ ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__mcr) 
                                       >> 1U)))));
    bufp->fullBit(oldp+1296,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__mcr))));
    bufp->fullBit(oldp+1297,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__int_o));
    bufp->fullBit(oldp+1298,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__mcr) 
                                    >> 1U))));
    bufp->fullBit(oldp+1299,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__enable));
    bufp->fullBit(oldp+1300,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__srx_pad));
    bufp->fullCData(oldp+1301,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ier),4);
    bufp->fullCData(oldp+1302,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__iir),4);
    bufp->fullCData(oldp+1303,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__fcr),2);
    bufp->fullCData(oldp+1304,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__mcr),5);
    bufp->fullCData(oldp+1305,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msr),8);
    bufp->fullSData(oldp+1306,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl),16);
    bufp->fullCData(oldp+1307,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__scratch),8);
    bufp->fullBit(oldp+1308,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__start_dlc));
    bufp->fullBit(oldp+1309,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr_mask_d));
    bufp->fullBit(oldp+1310,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msi_reset));
    bufp->fullSData(oldp+1311,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dlc),16);
    bufp->fullCData(oldp+1312,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__trigger_level),4);
    bufp->fullBit(oldp+1313,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rx_reset));
    bufp->fullBit(oldp+1314,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__tx_reset));
    bufp->fullBit(oldp+1315,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__mcr) 
                                    >> 4U))));
    bufp->fullBit(oldp+1316,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__VdfgRegularize_h6e95ff9d_0_33) 
                                    >> 3U))));
    bufp->fullBit(oldp+1317,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__VdfgRegularize_h6e95ff9d_0_33) 
                                    >> 2U))));
    bufp->fullBit(oldp+1318,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__VdfgRegularize_h6e95ff9d_0_33) 
                                    >> 1U))));
    bufp->fullBit(oldp+1319,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__VdfgRegularize_h6e95ff9d_0_33))));
    bufp->fullBit(oldp+1320,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr0));
    bufp->fullBit(oldp+1321,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rf_overrun));
    bufp->fullBit(oldp+1322,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr2));
    bufp->fullBit(oldp+1323,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr3));
    bufp->fullBit(oldp+1324,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr4));
    bufp->fullBit(oldp+1325,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr5));
    bufp->fullBit(oldp+1326,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr6));
    bufp->fullBit(oldp+1327,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr7));
    bufp->fullBit(oldp+1328,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr0r));
    bufp->fullBit(oldp+1329,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr1r));
    bufp->fullBit(oldp+1330,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr2r));
    bufp->fullBit(oldp+1331,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr3r));
    bufp->fullBit(oldp+1332,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr4r));
    bufp->fullBit(oldp+1333,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr5r));
    bufp->fullBit(oldp+1334,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr6r));
    bufp->fullBit(oldp+1335,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr7r));
    bufp->fullBit(oldp+1336,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rda_int));
    bufp->fullBit(oldp+1337,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ti_int));
    bufp->fullBit(oldp+1338,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ms_int));
    bufp->fullBit(oldp+1339,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__tf_push));
    bufp->fullBit(oldp+1340,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rf_pop));
    bufp->fullBit(oldp+1341,((0U != (vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                     [0U] | (vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                             [1U] | 
                                             (vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                              [2U] 
                                              | (vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                 [3U] 
                                                 | (vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                    [4U] 
                                                    | (vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                       [5U] 
                                                       | (vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                          [6U] 
                                                          | (vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                             [7U] 
                                                             | (vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                                [8U] 
                                                                | (vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                                   [9U] 
                                                                   | (vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                                      [0x0aU] 
                                                                      | (vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                                         [0x0bU] 
                                                                         | (vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                                            [0x0cU] 
                                                                            | (vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0x0dU] 
                                                                               | (vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0x0eU] 
                                                                                | vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0x0fU]))))))))))))))))));
    bufp->fullBit(oldp+1342,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__we));
    bufp->fullCData(oldp+1343,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rf_count),5);
    bufp->fullCData(oldp+1344,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__tf_count),5);
    bufp->fullCData(oldp+1345,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__tstate),3);
    bufp->fullCData(oldp+1346,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rstate),4);
    bufp->fullSData(oldp+1347,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__counter_t),10);
    bufp->fullBit(oldp+1348,((1U & (~ (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__block_cnt))))));
    bufp->fullCData(oldp+1349,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__block_cnt),8);
    bufp->fullCData(oldp+1350,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__delayed_modem_signals),4);
    bufp->fullBit(oldp+1351,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr0_d));
    bufp->fullBit(oldp+1352,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr1_d));
    bufp->fullBit(oldp+1353,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr2_d));
    bufp->fullBit(oldp+1354,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr3_d));
    bufp->fullBit(oldp+1355,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr4_d));
    bufp->fullBit(oldp+1356,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr5_d));
    bufp->fullBit(oldp+1357,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr6_d));
    bufp->fullBit(oldp+1358,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__lsr7_d));
    bufp->fullBit(oldp+1359,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rls_int_d));
    bufp->fullBit(oldp+1360,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__thre_int_d));
    bufp->fullBit(oldp+1361,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ms_int_d));
    bufp->fullBit(oldp+1362,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ti_int_d));
    bufp->fullBit(oldp+1363,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rda_int_d));
    bufp->fullBit(oldp+1364,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ms_int_d)) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ms_int))));
    bufp->fullBit(oldp+1365,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ti_int_d)) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ti_int))));
    bufp->fullBit(oldp+1366,(((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rda_int_d)) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rda_int))));
    bufp->fullBit(oldp+1367,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rls_int_pnd));
    bufp->fullBit(oldp+1368,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__rda_int_pnd));
    bufp->fullBit(oldp+1369,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__thre_int_pnd));
    bufp->fullBit(oldp+1370,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ms_int_pnd));
    bufp->fullBit(oldp+1371,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ti_int_pnd));
    bufp->fullBit(oldp+1372,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+1373,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+1374,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+1375,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+1376,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rparity));
    bufp->fullBit(oldp+1377,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+1378,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+1379,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+1380,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+1381,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+1382,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+1383,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+1384,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+1385,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+1386,((7U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1387,((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1388,((1U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+1389,((0x0000000fU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rcounter16) 
                                               - (IData)(1U)))),4);
    bufp->fullCData(oldp+1390,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+1391,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+1392,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+1393,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+1394,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+1395,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+1396,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+1397,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+1398,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+1399,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+1400,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+1401,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+1402,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+1403,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+1404,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+1405,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+1406,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+1407,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+1408,((0x0000000fU & ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+1409,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                               [0U]),3);
    bufp->fullCData(oldp+1410,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                               [1U]),3);
    bufp->fullCData(oldp+1411,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                               [2U]),3);
    bufp->fullCData(oldp+1412,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                               [3U]),3);
    bufp->fullCData(oldp+1413,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                               [4U]),3);
    bufp->fullCData(oldp+1414,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                               [5U]),3);
    bufp->fullCData(oldp+1415,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                               [6U]),3);
    bufp->fullCData(oldp+1416,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                               [7U]),3);
    bufp->fullCData(oldp+1417,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                               [8U]),3);
    bufp->fullCData(oldp+1418,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                               [9U]),3);
    bufp->fullCData(oldp+1419,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                               [0x0aU]),3);
    bufp->fullCData(oldp+1420,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                               [0x0bU]),3);
    bufp->fullCData(oldp+1421,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                               [0x0cU]),3);
    bufp->fullCData(oldp+1422,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                               [0x0dU]),3);
    bufp->fullCData(oldp+1423,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                               [0x0eU]),3);
    bufp->fullCData(oldp+1424,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                               [0x0fU]),3);
    bufp->fullCData(oldp+1425,((0x000000ffU & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__rf_data_in) 
                                               >> 3U))),8);
    bufp->fullCData(oldp+1426,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+1427,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+1428,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+1429,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+1430,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+1431,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+1432,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+1433,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+1434,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+1435,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+1436,((0x0000000fU & ((IData)(1U) 
                                               + (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullSData(oldp+1437,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row[0]),13);
    bufp->fullSData(oldp+1438,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row[1]),13);
    bufp->fullSData(oldp+1439,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row[2]),13);
    bufp->fullSData(oldp+1440,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_row[3]),13);
    bufp->fullIData(oldp+1441,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_active_addr),32);
    bufp->fullSData(oldp+1442,((0x0000ffffU & vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__sdram_rdata)),16);
    bufp->fullSData(oldp+1443,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode),13);
    bufp->fullBit(oldp+1444,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode) 
                                    >> 9U))));
    bufp->fullCData(oldp+1445,((3U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode) 
                                      >> 7U))),2);
    bufp->fullCData(oldp+1446,((7U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode) 
                                      >> 4U))),3);
    bufp->fullBit(oldp+1447,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode) 
                                    >> 3U))));
    bufp->fullCData(oldp+1448,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__reg_mode))),3);
    bufp->fullCData(oldp+1449,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state),4);
    bufp->fullCData(oldp+1450,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__count),4);
    bufp->fullIData(oldp+1451,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__sdram_rdata),32);
    bufp->fullSData(oldp+1452,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row[0]),13);
    bufp->fullSData(oldp+1453,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row[1]),13);
    bufp->fullSData(oldp+1454,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row[2]),13);
    bufp->fullSData(oldp+1455,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_row[3]),13);
    bufp->fullIData(oldp+1456,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_active_addr),32);
    bufp->fullSData(oldp+1457,((0x0000ffffU & vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__sdram_rdata)),16);
    bufp->fullSData(oldp+1458,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode),13);
    bufp->fullBit(oldp+1459,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode) 
                                    >> 9U))));
    bufp->fullCData(oldp+1460,((3U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode) 
                                      >> 7U))),2);
    bufp->fullCData(oldp+1461,((7U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode) 
                                      >> 4U))),3);
    bufp->fullBit(oldp+1462,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode) 
                                    >> 3U))));
    bufp->fullCData(oldp+1463,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__reg_mode))),3);
    bufp->fullCData(oldp+1464,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state),4);
    bufp->fullCData(oldp+1465,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__count),4);
    bufp->fullIData(oldp+1466,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__sdram_rdata),32);
    bufp->fullSData(oldp+1467,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row[0]),13);
    bufp->fullSData(oldp+1468,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row[1]),13);
    bufp->fullSData(oldp+1469,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row[2]),13);
    bufp->fullSData(oldp+1470,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_row[3]),13);
    bufp->fullIData(oldp+1471,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_active_addr),32);
    bufp->fullSData(oldp+1472,((0x0000ffffU & vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__sdram_rdata)),16);
    bufp->fullSData(oldp+1473,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode),13);
    bufp->fullBit(oldp+1474,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode) 
                                    >> 9U))));
    bufp->fullCData(oldp+1475,((3U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode) 
                                      >> 7U))),2);
    bufp->fullCData(oldp+1476,((7U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode) 
                                      >> 4U))),3);
    bufp->fullBit(oldp+1477,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode) 
                                    >> 3U))));
    bufp->fullCData(oldp+1478,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__reg_mode))),3);
    bufp->fullCData(oldp+1479,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state),4);
    bufp->fullCData(oldp+1480,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__count),4);
    bufp->fullIData(oldp+1481,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__sdram_rdata),32);
    bufp->fullSData(oldp+1482,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row[0]),13);
    bufp->fullSData(oldp+1483,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row[1]),13);
    bufp->fullSData(oldp+1484,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row[2]),13);
    bufp->fullSData(oldp+1485,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_row[3]),13);
    bufp->fullIData(oldp+1486,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_active_addr),32);
    bufp->fullSData(oldp+1487,((0x0000ffffU & vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__sdram_rdata)),16);
    bufp->fullSData(oldp+1488,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode),13);
    bufp->fullBit(oldp+1489,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode) 
                                    >> 9U))));
    bufp->fullCData(oldp+1490,((3U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode) 
                                      >> 7U))),2);
    bufp->fullCData(oldp+1491,((7U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode) 
                                      >> 4U))),3);
    bufp->fullBit(oldp+1492,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode) 
                                    >> 3U))));
    bufp->fullCData(oldp+1493,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__reg_mode))),3);
    bufp->fullCData(oldp+1494,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state),4);
    bufp->fullCData(oldp+1495,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__count),4);
    bufp->fullIData(oldp+1496,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__sdram_rdata),32);
    bufp->fullCData(oldp+1497,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__state),3);
    bufp->fullCData(oldp+1498,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1499,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1500,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1501,(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data),32);
    bufp->fullBit(oldp+1502,(((1U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__counter)))));
    bufp->fullCData(oldp+1503,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rstate),2);
    bufp->fullIData(oldp+1504,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u0__DOT__rcnt),32);
    bufp->fullCData(oldp+1505,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rstate),2);
    bufp->fullIData(oldp+1506,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u1__DOT__rcnt),32);
    bufp->fullCData(oldp+1507,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rstate),2);
    bufp->fullIData(oldp+1508,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u2__DOT__rcnt),32);
    bufp->fullCData(oldp+1509,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rstate),2);
    bufp->fullIData(oldp+1510,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u3__DOT__rcnt),32);
    bufp->fullCData(oldp+1511,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rstate),2);
    bufp->fullIData(oldp+1512,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u4__DOT__rcnt),32);
    bufp->fullCData(oldp+1513,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rstate),2);
    bufp->fullIData(oldp+1514,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u5__DOT__rcnt),32);
    bufp->fullCData(oldp+1515,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rstate),2);
    bufp->fullIData(oldp+1516,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u6__DOT__rcnt),32);
    bufp->fullCData(oldp+1517,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rstate),2);
    bufp->fullIData(oldp+1518,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__inst_u7__DOT__rcnt),32);
    bufp->fullBit(oldp+1519,(vlSymsp->TOP__ysyxSoCFull.__PVT___bitrev_miso));
    bufp->fullCData(oldp+1520,(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__state),2);
    bufp->fullSData(oldp+1521,(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__rev),16);
    bufp->fullIData(oldp+1522,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i),32);
    bufp->fullBit(oldp+1523,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__in_psel));
    bufp->fullBit(oldp+1524,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lvga__DOT__mvga__DOT__in_penable));
    bufp->fullIData(oldp+1525,((0x3fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),30);
    bufp->fullIData(oldp+1526,((0x1fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),29);
    bufp->fullIData(oldp+1527,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_empty)
                                 ? 0U : (0x000000ffU 
                                         & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo
                                         [(7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_read))]))),32);
    bufp->fullIData(oldp+1528,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__reg_prdata),32);
    bufp->fullBit(oldp+1529,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i));
    bufp->fullIData(oldp+1530,((((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                  [3U] << 0x00000018U) 
                                 | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                    [2U] << 0x00000010U)) 
                                | ((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                    [1U] << 8U) | vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                   [0U]))),32);
    bufp->fullBit(oldp+1531,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__in_psel));
    bufp->fullBit(oldp+1532,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__in_penable));
    bufp->fullBit(oldp+1533,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__in_penable) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__in_psel))));
    bufp->fullBit(oldp+1534,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__in_psel));
    bufp->fullBit(oldp+1535,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__wb_penable_i));
    bufp->fullBit(oldp+1536,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1537,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1538,((0U == (3U & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                           >> 0x0000001cU)))));
    bufp->fullBit(oldp+1539,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1540,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1541,((2U == (3U & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                           >> 0x0000001cU)))));
    bufp->fullIData(oldp+1542,((0x1fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),32);
    bufp->fullCData(oldp+1543,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__next_state),2);
    bufp->fullSData(oldp+1544,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[0]),9);
    bufp->fullSData(oldp+1545,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[1]),9);
    bufp->fullSData(oldp+1546,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[2]),9);
    bufp->fullSData(oldp+1547,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[3]),9);
    bufp->fullSData(oldp+1548,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[4]),9);
    bufp->fullSData(oldp+1549,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[5]),9);
    bufp->fullSData(oldp+1550,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[6]),9);
    bufp->fullSData(oldp+1551,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo[7]),9);
    bufp->fullCData(oldp+1552,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_read),4);
    bufp->fullBit(oldp+1553,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_empty));
    bufp->fullBit(oldp+1554,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1555,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullIData(oldp+1556,((0x00fffffcU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),24);
    bufp->fullCData(oldp+1557,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+1558,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+1559,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+1560,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullIData(oldp+1561,((0x00ffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),24);
    bufp->fullIData(oldp+1562,((0x3fffffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),32);
    bufp->fullBit(oldp+1563,((0x30000000U <= (0x3fffffffU 
                                              & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i))));
    bufp->fullIData(oldp+1564,(VL_MODDIV_III(32, VL_MODDIV_III(32, 
                                                               VL_SHIFTR_III(32,32,32, 
                                                                             ((0x3fffffffU 
                                                                               & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i) 
                                                                              - (IData)(0x21000000U)), 2U), (IData)(0x0004b000U)), (IData)(0x00000280U))),32);
    bufp->fullIData(oldp+1565,(VL_DIV_III(32, VL_MODDIV_III(32, 
                                                            VL_SHIFTR_III(32,32,32, 
                                                                          ((0x3fffffffU 
                                                                            & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i) 
                                                                           - (IData)(0x21000000U)), 2U), (IData)(0x0004b000U)), (IData)(0x00000280U))),32);
    bufp->fullSData(oldp+1566,((0x000003ffU & VL_DIV_III(32, 
                                                         VL_MODDIV_III(32, 
                                                                       VL_SHIFTR_III(32,32,32, 
                                                                                ((0x3fffffffU 
                                                                                & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i) 
                                                                                - (IData)(0x21000000U)), 2U), (IData)(0x0004b000U)), (IData)(0x00000280U)))),10);
    bufp->fullSData(oldp+1567,((0x000003ffU & VL_MODDIV_III(32, 
                                                            VL_MODDIV_III(32, 
                                                                          VL_SHIFTR_III(32,32,32, 
                                                                                ((0x3fffffffU 
                                                                                & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i) 
                                                                                - (IData)(0x21000000U)), 2U), (IData)(0x0004b000U)), (IData)(0x00000280U)))),10);
    bufp->fullCData(oldp+1568,((7U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)),3);
    bufp->fullCData(oldp+1569,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__reg_dat8_w),8);
    bufp->fullCData(oldp+1570,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__data_in),8);
    bufp->fullCData(oldp+1571,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+1572,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+1573,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+1574,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+1575,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+1576,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+1577,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+1578,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+1579,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+1580,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+1581,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+1582,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+1583,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+1584,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+1585,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+1586,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+1587,(vlSymsp->TOP__ysyxSoCFull.__PVT___asic_psram_ce_n));
    bufp->fullBit(oldp+1588,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_pready));
    bufp->fullIData(oldp+1589,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_prdata),32);
    bufp->fullBit(oldp+1590,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_pslverr));
    bufp->fullBit(oldp+1591,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__VdfgRegularize_h6e95ff9d_0_15)))));
    bufp->fullCData(oldp+1592,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__next_state),2);
    bufp->fullCData(oldp+1593,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi42apb__DOT__auto_in_bresp),2);
    bufp->fullCData(oldp+1594,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbdelay_delayer__DOT__in_pslverr) 
                                << 1U)),2);
    bufp->fullBit(oldp+1595,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_bdeq_q__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+1596,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4buf__DOT__nodeIn_rdeq_q__DOT__ram_ext__DOT__W0_en));
    bufp->fullBit(oldp+1597,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rvalid));
    bufp->fullBit(oldp+1598,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rlast));
    bufp->fullBit(oldp+1599,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bvalid));
    bufp->fullCData(oldp+1600,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid),4);
    bufp->fullCData(oldp+1601,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bresp),2);
    bufp->fullBit(oldp+1602,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rvalid));
    bufp->fullCData(oldp+1603,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid),4);
    bufp->fullIData(oldp+1604,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rdata),32);
    bufp->fullCData(oldp+1605,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rresp),2);
    bufp->fullBit(oldp+1606,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rlast));
    bufp->fullSData(oldp+1607,((0x0000ffffU & ((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_rid)))),16);
    bufp->fullSData(oldp+1608,((0x0000ffffU & ((IData)(1U) 
                                               << (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__S_bid)))),16);
    bufp->fullBit(oldp+1609,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__anyValid));
    bufp->fullCData(oldp+1610,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+1611,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_unready),4);
    bufp->fullCData(oldp+1612,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+1613,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__prefixOR_1));
    bufp->fullBit(oldp+1614,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+1615,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+1616,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_2_1));
    bufp->fullBit(oldp+1617,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__anyValid_1));
    bufp->fullCData(oldp+1618,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_valid_1),2);
    bufp->fullCData(oldp+1619,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_unready_1),4);
    bufp->fullCData(oldp+1620,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__readys_readys_1),2);
    bufp->fullBit(oldp+1621,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+1622,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+1623,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_3_0));
    bufp->fullBit(oldp+1624,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__muxState_3_1));
    bufp->fullCData(oldp+1625,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__dout),4);
    bufp->fullCData(oldp+1626,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__douten),4);
    bufp->fullCData(oldp+1627,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__dout),4);
    bufp->fullBit(oldp+1628,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__rd));
    bufp->fullBit(oldp+1629,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__wr));
    bufp->fullBit(oldp+1630,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done));
    bufp->fullCData(oldp+1631,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate),2);
    bufp->fullCData(oldp+1632,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__next_state),2);
    bufp->fullBit(oldp+1633,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__wb_psel_i));
    bufp->fullIData(oldp+1634,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_pwdata),32);
    bufp->fullBit(oldp+1635,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_pready));
    bufp->fullIData(oldp+1636,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_prdata),32);
    bufp->fullBit(oldp+1637,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__xipslv_irq_out));
    bufp->fullCData(oldp+1638,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr),5);
    bufp->fullBit(oldp+1639,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_psel));
    bufp->fullBit(oldp+1640,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_penable));
    bufp->fullCData(oldp+1641,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_pprot),3);
    bufp->fullBit(oldp+1642,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_pwrite));
    bufp->fullIData(oldp+1643,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_pwdata),32);
    bufp->fullCData(oldp+1644,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_pstrb),4);
    bufp->fullCData(oldp+1645,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__next_sstate),4);
    bufp->fullCData(oldp+1646,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__next_state),4);
    bufp->fullBit(oldp+1647,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__is_transfer));
    bufp->fullIData(oldp+1648,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_wdata),32);
    bufp->fullIData(oldp+1649,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_XIP_inst__DOT__buf_rdata),32);
    bufp->fullBit(oldp+1650,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                              & (0x14U == (0x1cU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr))))));
    bufp->fullBit(oldp+1651,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                              & (0x10U == (0x1cU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr))))));
    bufp->fullCData(oldp+1652,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__spi_tx_sel),4);
    bufp->fullBit(oldp+1653,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgRegularize_h189b3b9c_0_0) 
                              & (0x18U == (0x1cU & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr))))));
    bufp->fullCData(oldp+1654,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__latch),4);
    bufp->fullBit(oldp+1655,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__lsu_access_fault));
    bufp->fullBit(oldp+1656,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__rlast));
    bufp->fullIData(oldp+1657,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rdata),32);
    bufp->fullBit(oldp+1658,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rvalid));
    bufp->fullBit(oldp+1659,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bvalid));
    bufp->fullCData(oldp+1660,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_bresp),2);
    bufp->fullCData(oldp+1661,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rresp),2);
    bufp->fullIData(oldp+1662,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val1),32);
    bufp->fullIData(oldp+1663,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val2),32);
    bufp->fullIData(oldp+1664,((((- (IData)((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_rdata 
                                             >> 0x0000001fU))) 
                                 << 0x00000018U) | 
                                (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.__PVT__val2 
                                 >> 8U))),32);
    bufp->fullCData(oldp+1665,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__transmitter__DOT__fifo_tx__DOT__data_out),8);
    bufp->fullBit(oldp+1666,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss) 
                                    >> 7U))));
    bufp->fullBit(oldp+1667,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss))));
    bufp->fullBit(oldp+1668,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 3U))));
    bufp->fullBit(oldp+1669,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 2U))));
    bufp->fullBit(oldp+1670,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                                    >> 1U))));
    bufp->fullBit(oldp+1671,((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))));
    bufp->fullSData(oldp+1672,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q),13);
    bufp->fullCData(oldp+1673,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q),3);
    bufp->fullCData(oldp+1674,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q),4);
    bufp->fullCData(oldp+1675,((7U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q))),3);
    bufp->fullBit(oldp+1676,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__comm_active));
    bufp->fullCData(oldp+1677,((3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))),2);
    bufp->fullCData(oldp+1678,((3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullCData(oldp+1679,((3U & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q))),2);
    bufp->fullCData(oldp+1680,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss),8);
    bufp->fullBit(oldp+1681,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_accept_o));
    bufp->fullCData(oldp+1682,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q),4);
    bufp->fullCData(oldp+1683,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q),4);
    bufp->fullIData(oldp+1684,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1685,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dbg_state),80);
    bufp->fullBit(oldp+1688,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__now_sel));
    bufp->fullBit(oldp+1689,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__cs0));
    bufp->fullBit(oldp+1690,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__cs1));
    bufp->fullBit(oldp+1691,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__wire_dq_out_en));
    bufp->fullCData(oldp+1692,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__next_state),4);
    bufp->fullBit(oldp+1693,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__wire_dq_out_en));
    bufp->fullCData(oldp+1694,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__next_state),4);
    bufp->fullBit(oldp+1695,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__wire_dq_out_en));
    bufp->fullCData(oldp+1696,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__next_state),4);
    bufp->fullBit(oldp+1697,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__wire_dq_out_en));
    bufp->fullCData(oldp+1698,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__next_state),4);
    bufp->fullIData(oldp+1699,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_input_i),32);
    bufp->fullSData(oldp+1700,((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_input_i 
                                >> 0x00000010U)),16);
    bufp->fullSData(oldp+1701,((0x0000ffffU & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_input_i)),16);
    bufp->fullBit(oldp+1702,(vlSelfRef.clock));
    bufp->fullBit(oldp+1703,(vlSelfRef.reset));
    bufp->fullSData(oldp+1704,(vlSelfRef.externalPins_gpio_out),16);
    bufp->fullSData(oldp+1705,(vlSelfRef.externalPins_gpio_in),16);
    bufp->fullCData(oldp+1706,(vlSelfRef.externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1707,(vlSelfRef.externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1708,(vlSelfRef.externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1709,(vlSelfRef.externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1710,(vlSelfRef.externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1711,(vlSelfRef.externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1712,(vlSelfRef.externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1713,(vlSelfRef.externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1714,(vlSelfRef.externalPins_ps2_clk));
    bufp->fullBit(oldp+1715,(vlSelfRef.externalPins_ps2_data));
    bufp->fullCData(oldp+1716,(vlSelfRef.externalPins_vga_r),8);
    bufp->fullCData(oldp+1717,(vlSelfRef.externalPins_vga_g),8);
    bufp->fullCData(oldp+1718,(vlSelfRef.externalPins_vga_b),8);
    bufp->fullBit(oldp+1719,(vlSelfRef.externalPins_vga_hsync));
    bufp->fullBit(oldp+1720,(vlSelfRef.externalPins_vga_vsync));
    bufp->fullBit(oldp+1721,(vlSelfRef.externalPins_vga_valid));
    bufp->fullBit(oldp+1722,(vlSelfRef.externalPins_uart_rx));
    bufp->fullBit(oldp+1723,(vlSelfRef.externalPins_uart_tx));
    bufp->fullCData(oldp+1724,(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__next_cnt),8);
    bufp->fullCData(oldp+1725,(vlSymsp->TOP__ysyxSoCFull.__PVT__bitrev__DOT__next_state),2);
    bufp->fullBit(oldp+1726,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss) 
                                    | (((2U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__state)) 
                                        & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__counter)))
                                        ? (vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__rdata 
                                           >> 7U) : 
                                       (vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data 
                                        >> 0x0000001fU))))));
    bufp->fullIData(oldp+1727,(((0x00fffffeU & (vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__addr 
                                                << 1U)) 
                                | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__spi_mosi))),32);
    bufp->fullBit(oldp+1728,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_sck)
                               : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)
                                   : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck)))));
    bufp->fullCData(oldp+1729,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__din),4);
    bufp->fullCData(oldp+1730,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__state),4);
    bufp->fullCData(oldp+1731,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__next_state),4);
    bufp->fullBit(oldp+1732,(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__is_QPI));
    bufp->fullCData(oldp+1733,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT___asic_psram_ce_n)
                                 ? 0x0000000aU : (0x0000000fU 
                                                  & (((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT___asic_psram_ce_n)) 
                                                      & (7U 
                                                         == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__state)))
                                                      ? 
                                                     (vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__psram_rdata 
                                                      >> 4U)
                                                      : 
                                                     (((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT___asic_psram_ce_n)) 
                                                       & (6U 
                                                          == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__state)))
                                                       ? vlSymsp->TOP__ysyxSoCFull.__PVT__psram__DOT__psram_rdata
                                                       : 0x0aU))))),4);
    bufp->fullBit(oldp+1734,((1U & (~ (IData)(vlSelfRef.clock)))));
    bufp->fullBit(oldp+1735,(((~ (IData)(vlSelfRef.clock)) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q))));
    bufp->fullCData(oldp+1736,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__reg_ba),3);
    bufp->fullIData(oldp+1737,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__wire_addr),32);
    bufp->fullCData(oldp+1738,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__next_state))
                                 ? 0U : (((0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state)) 
                                          & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__next_state)))
                                          ? 1U : ((
                                                   (0U 
                                                    == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state)) 
                                                   & (3U 
                                                      == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__next_state)))
                                                   ? 1U
                                                   : 
                                                  (((3U 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__state)) 
                                                    & (2U 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__next_state)))
                                                    ? 0U
                                                    : 
                                                   (0x0000000fU 
                                                    & ((IData)(1U) 
                                                       + (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_H__DOT__count)))))))),4);
    bufp->fullBit(oldp+1739,(((~ (IData)(vlSelfRef.clock)) 
                              & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__cs0)) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q)))));
    bufp->fullIData(oldp+1740,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__wire_addr),32);
    bufp->fullCData(oldp+1741,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__next_state))
                                 ? 0U : (((0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state)) 
                                          & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__next_state)))
                                          ? 1U : ((
                                                   (0U 
                                                    == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state)) 
                                                   & (3U 
                                                      == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__next_state)))
                                                   ? 1U
                                                   : 
                                                  (((3U 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__state)) 
                                                    & (2U 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__next_state)))
                                                    ? 0U
                                                    : 
                                                   (0x0000000fU 
                                                    & ((IData)(1U) 
                                                       + (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_0__DOT__u_sdram_16_L__DOT__count)))))))),4);
    bufp->fullIData(oldp+1742,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__wire_addr),32);
    bufp->fullCData(oldp+1743,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__next_state))
                                 ? 0U : (((0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state)) 
                                          & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__next_state)))
                                          ? 1U : ((
                                                   (0U 
                                                    == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state)) 
                                                   & (3U 
                                                      == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__next_state)))
                                                   ? 1U
                                                   : 
                                                  (((3U 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__state)) 
                                                    & (2U 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__next_state)))
                                                    ? 0U
                                                    : 
                                                   (0x0000000fU 
                                                    & ((IData)(1U) 
                                                       + (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_H__DOT__count)))))))),4);
    bufp->fullBit(oldp+1744,(((~ (IData)(vlSelfRef.clock)) 
                              & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__cs1)) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q)))));
    bufp->fullIData(oldp+1745,(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__wire_addr),32);
    bufp->fullCData(oldp+1746,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__next_state))
                                 ? 0U : (((0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state)) 
                                          & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__next_state)))
                                          ? 1U : ((
                                                   (0U 
                                                    == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state)) 
                                                   & (3U 
                                                      == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__next_state)))
                                                   ? 1U
                                                   : 
                                                  (((3U 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__state)) 
                                                    & (2U 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__next_state)))
                                                    ? 0U
                                                    : 
                                                   (0x0000000fU 
                                                    & ((IData)(1U) 
                                                       + (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__sdram__DOT__sdram_32_1__DOT__u_sdram_16_L__DOT__count)))))))),4);
    bufp->fullBit(oldp+1747,(((IData)(vlSymsp->TOP__ysyxSoCFull.__PVT___bitrev_miso) 
                              & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spi_ss) 
                                 | (((2U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__state)) 
                                     & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__counter)))
                                     ? (vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__rdata 
                                        >> 7U) : (vlSymsp->TOP__ysyxSoCFull.__PVT__flash__DOT__data 
                                                  >> 0x0000001fU))))));
    bufp->fullIData(oldp+1748,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_0)
                                  ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbxbar_auto_anon_out_0_prdata
                                  : 0U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_1)
                                             ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__in_psel)
                                                 ? 
                                                ((((4U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? 
                                                   ((2U 
                                                     & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                      ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__scratch)
                                                      : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msr))
                                                     : 
                                                    ((1U 
                                                      & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                      ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lsr)
                                                      : 0U))
                                                    : 
                                                   ((2U 
                                                     & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                      ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr)
                                                      : 
                                                     (0x000000c0U 
                                                      | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__iir)))
                                                     : 
                                                    ((1U 
                                                      & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                      ? 
                                                     ((0x00000080U 
                                                       & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                                       ? 
                                                      ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl) 
                                                       >> 8U)
                                                       : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ier))
                                                      : 
                                                     ((0x00000080U 
                                                       & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                                       ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl)
                                                       : 
                                                      vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                                      [vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom])))) 
                                                  << 0x00000018U) 
                                                 | ((0x00ff0000U 
                                                     & (((4U 
                                                          & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                          ? 
                                                         ((2U 
                                                           & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                           ? 
                                                          ((1U 
                                                            & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                            ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__scratch)
                                                            : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msr))
                                                           : 
                                                          ((1U 
                                                            & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                            ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lsr)
                                                            : 0U))
                                                          : 
                                                         ((2U 
                                                           & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                           ? 
                                                          ((1U 
                                                            & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                            ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr)
                                                            : 
                                                           (0x000000c0U 
                                                            | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__iir)))
                                                           : 
                                                          ((1U 
                                                            & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                            ? 
                                                           ((0x00000080U 
                                                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                                             ? 
                                                            ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl) 
                                                             >> 8U)
                                                             : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ier))
                                                            : 
                                                           ((0x00000080U 
                                                             & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                                             ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl)
                                                             : 
                                                            vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                                            [vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom])))) 
                                                        << 0x00000010U)) 
                                                    | ((0x0000ff00U 
                                                        & (((4U 
                                                             & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                             ? 
                                                            ((2U 
                                                              & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                              ? 
                                                             ((1U 
                                                               & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__scratch)
                                                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msr))
                                                              : 
                                                             ((1U 
                                                               & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lsr)
                                                               : 0U))
                                                             : 
                                                            ((2U 
                                                              & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                              ? 
                                                             ((1U 
                                                               & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr)
                                                               : 
                                                              (0x000000c0U 
                                                               | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__iir)))
                                                              : 
                                                             ((1U 
                                                               & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                               ? 
                                                              ((0x00000080U 
                                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                                                ? 
                                                               ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl) 
                                                                >> 8U)
                                                                : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ier))
                                                               : 
                                                              ((0x00000080U 
                                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl)
                                                                : 
                                                               vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                                               [vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom])))) 
                                                           << 8U)) 
                                                       | (0x000000ffU 
                                                          & ((4U 
                                                              & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                              ? 
                                                             ((2U 
                                                               & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                               ? 
                                                              ((1U 
                                                                & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__scratch)
                                                                : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msr))
                                                               : 
                                                              ((1U 
                                                                & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lsr)
                                                                : 0U))
                                                              : 
                                                             ((2U 
                                                               & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                               ? 
                                                              ((1U 
                                                                & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                                ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr)
                                                                : 
                                                               (0x000000c0U 
                                                                | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__iir)))
                                                               : 
                                                              ((1U 
                                                                & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                                ? 
                                                               ((0x00000080U 
                                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                                                 ? 
                                                                ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl) 
                                                                 >> 8U)
                                                                 : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ier))
                                                                : 
                                                               ((0x00000080U 
                                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl)
                                                                 : 
                                                                vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                                                [vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom]))))))))
                                                 : 0U)
                                             : 0U) 
                                           | (((0U 
                                                == 
                                                (3U 
                                                 & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                    >> 0x0000001cU)))
                                                ? (
                                                   ((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [3U] 
                                                     << 0x00000018U) 
                                                    | (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                       [2U] 
                                                       << 0x00000010U)) 
                                                   | ((vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                       [1U] 
                                                       << 8U) 
                                                      | vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [0U]))
                                                : 0U) 
                                              | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_3)
                                                   ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lgpio__DOT__mgpio__DOT__reg_prdata
                                                   : 0U) 
                                                 | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_4)
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_empty)
                                                       ? 0U
                                                       : 
                                                      (0x000000ffU 
                                                       & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo
                                                       [
                                                       (7U 
                                                        & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_fifo_read))]))
                                                      : 0U) 
                                                    | ((2U 
                                                        == 
                                                        (3U 
                                                         & (vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i 
                                                            >> 0x0000001cU)))
                                                        ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbxbar_auto_anon_out_5_prdata
                                                        : 0U))))))),32);
    bufp->fullBit(oldp+1749,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__apbxbar__DOT__sel_0) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT___apbxbar_auto_anon_out_0_pslverr))));
    bufp->fullBit(oldp+1750,((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
                               & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done)
                                   : (0x16U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__cyc_i))));
    bufp->fullIData(oldp+1751,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart.__PVT__in_psel)
                                 ? ((((4U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                       ? ((2U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                           ? ((1U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__scratch)
                                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msr))
                                           : ((1U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lsr)
                                               : 0U))
                                       : ((2U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                           ? ((1U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                               ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr)
                                               : (0x000000c0U 
                                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__iir)))
                                           : ((1U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                               ? ((0x00000080U 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl) 
                                                   >> 8U)
                                                   : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ier))
                                               : ((0x00000080U 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl)
                                                   : 
                                                  vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                                  [vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom])))) 
                                     << 0x00000018U) 
                                    | ((0x00ff0000U 
                                        & (((4U & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                             ? ((2U 
                                                 & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                 ? 
                                                ((1U 
                                                  & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__scratch)
                                                  : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msr))
                                                 : 
                                                ((1U 
                                                  & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lsr)
                                                  : 0U))
                                             : ((2U 
                                                 & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                 ? 
                                                ((1U 
                                                  & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr)
                                                  : 
                                                 (0x000000c0U 
                                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__iir)))
                                                 : 
                                                ((1U 
                                                  & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                  ? 
                                                 ((0x00000080U 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                                   ? 
                                                  ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl) 
                                                   >> 8U)
                                                   : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ier))
                                                  : 
                                                 ((0x00000080U 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl)
                                                   : 
                                                  vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                                  [vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom])))) 
                                           << 0x00000010U)) 
                                       | ((0x0000ff00U 
                                           & (((4U 
                                                & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                ? (
                                                   (2U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                     ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__scratch)
                                                     : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msr))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                     ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lsr)
                                                     : 0U))
                                                : (
                                                   (2U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                     ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr)
                                                     : 
                                                    (0x000000c0U 
                                                     | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__iir)))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                     ? 
                                                    ((0x00000080U 
                                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl) 
                                                      >> 8U)
                                                      : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ier))
                                                     : 
                                                    ((0x00000080U 
                                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                                      ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl)
                                                      : 
                                                     vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                                     [vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom])))) 
                                              << 8U)) 
                                          | (0x000000ffU 
                                             & ((4U 
                                                 & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                 ? 
                                                ((2U 
                                                  & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                  ? 
                                                 ((1U 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__scratch)
                                                   : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msr))
                                                  : 
                                                 ((1U 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lsr)
                                                   : 0U))
                                                 : 
                                                ((2U 
                                                  & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                  ? 
                                                 ((1U 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr)
                                                   : 
                                                  (0x000000c0U 
                                                   | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__iir)))
                                                  : 
                                                 ((1U 
                                                   & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                   ? 
                                                  ((0x00000080U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl) 
                                                    >> 8U)
                                                    : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ier))
                                                   : 
                                                  ((0x00000080U 
                                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl)
                                                    : 
                                                   vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                                   [vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom]))))))))
                                 : 0U)),32);
    bufp->fullQData(oldp+1752,((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awid)) 
                                 << 0x0000002bU) | 
                                (((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awaddr)) 
                                  << 0x0000000bU) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_awsize))))),47);
    bufp->fullQData(oldp+1754,((((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_wdata)) 
                                 << 4U) | (QData)((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_in_wstrb)))),36);
    bufp->fullCData(oldp+1756,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rid_w
                               [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__rrcnt]),4);
    bufp->fullIData(oldp+1757,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rdata_w
                               [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__rrcnt]),32);
    bufp->fullCData(oldp+1758,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_rresp_w
                               [vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__rrcnt]),2);
    bufp->fullBit(oldp+1759,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                     ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                     : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_wlast)))));
    bufp->fullBit(oldp+1760,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar_1__DOT__auto_anon_out_2_awvalid) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.axi4ram__DOT____VdfgRegularize_h9fc36335_0_0))));
    bufp->fullBit(oldp+1761,((((~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4frag__DOT__deq_q__DOT__full)) 
                               & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestARIO_0_0)) 
                              | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4xbar__DOT__requestARIO_0_1) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_arready)))));
    bufp->fullCData(oldp+1762,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__cnt),4);
    bufp->fullSData(oldp+1763,(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lkeyboard__DOT__mps2__DOT__ps2_data_reg),9);
    bufp->fullBit(oldp+1764,(((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
                              & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done)
                                  : (0x16U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))))));
    bufp->fullBit(oldp+1765,((1U & (~ (IData)(vlSelfRef.reset)))));
    bufp->fullBit(oldp+1766,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)
                               ? (0x16U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                               : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__rd))));
    bufp->fullBit(oldp+1767,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)
                                     ? (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__done))
                                     : (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__wr)))));
    bufp->fullCData(oldp+1768,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_awvalid)
                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awlen)
                                 : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_arvalid)
                                     ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arlen)
                                     : 0U))),8);
    bufp->fullCData(oldp+1769,((((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_arvalid) 
                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_arready))
                                 ? (0x00000020U | (
                                                   (0U 
                                                    == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_arlen)) 
                                                   << 4U))
                                 : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_awvalid) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_awready))
                                     ? (((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awlen)) 
                                         << 4U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__io_master_awid))
                                     : (((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__inport_rd_i) 
                                         << 5U) | (
                                                   ((0U 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q)) 
                                                    << 4U) 
                                                   | (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q)))))),6);
    bufp->fullBit(oldp+1770,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__axi4delay_delayer__DOT__in_wvalid))));
    bufp->fullIData(oldp+1771,(((0U == (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr) 
                                              >> 2U)))
                                 ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]
                                 : ((1U == (7U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr) 
                                                  >> 2U)))
                                     ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]
                                     : ((2U == (7U 
                                                & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr) 
                                                   >> 2U)))
                                         ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]
                                         : ((3U == 
                                             (7U & 
                                              ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr) 
                                               >> 2U)))
                                             ? vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]
                                             : ((4U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr) 
                                                     >> 2U)))
                                                 ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)
                                                 : 
                                                ((5U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr) 
                                                      >> 2U)))
                                                  ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)
                                                  : 
                                                 ((6U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__spictrl_paddr) 
                                                       >> 2U)))
                                                   ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss)
                                                   : 0U)))))))),32);
    bufp->fullBit(oldp+1772,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset));
    bufp->fullIData(oldp+1773,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.PC),32);
    bufp->fullIData(oldp+1774,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.dnpc),32);
    bufp->fullIData(oldp+1775,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.snpc),32);
    bufp->fullBit(oldp+1776,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.wbu_final));
    bufp->fullBit(oldp+1777,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isSTORE));
    bufp->fullBit(oldp+1778,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isB));
    bufp->fullIData(oldp+1779,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_addr),32);
    bufp->fullIData(oldp+1780,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_wdata),32);
    bufp->fullCData(oldp+1781,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_wmask),4);
    bufp->fullBit(oldp+1782,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_wen));
    bufp->fullBit(oldp+1783,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isLOAD));
    bufp->fullBit(oldp+1784,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isWRITE));
    bufp->fullBit(oldp+1785,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isJUMP));
    bufp->fullBit(oldp+1786,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isPC));
    bufp->fullCData(oldp+1787,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isCSR),2);
    bufp->fullSData(oldp+1788,(((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_hd1728725_0_19) 
                                  | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isJALR) 
                                     | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isADD) 
                                        | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isLW) 
                                           | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_hd1728725_0_21) 
                                              | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isLH) 
                                                 | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSW) 
                                                    | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__VdfgRegularize_hd1728725_0_25) 
                                                       | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isADDI) 
                                                          | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isLHU) 
                                                             | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isB))))))))))) 
                                 << 9U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSUB) 
                                            << 8U) 
                                           | (((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLLI) 
                                                 | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSLL)) 
                                                << 5U) 
                                               | ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSRLI) 
                                                    | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSRL)) 
                                                   << 4U) 
                                                  | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSRAI) 
                                                      | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isSRA)) 
                                                     << 3U))) 
                                              | ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isANDI) 
                                                   | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isAND)) 
                                                  << 2U) 
                                                 | ((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isORI) 
                                                      | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isOR)) 
                                                     << 1U) 
                                                    | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isXORI) 
                                                       | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isXOR)))))))),10);
    bufp->fullIData(oldp+1789,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MEPC),32);
    bufp->fullIData(oldp+1790,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MTVEC),32);
    bufp->fullBit(oldp+1791,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.bus_valid));
    bufp->fullIData(oldp+1792,((0xfffffff0U & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC)),32);
    bufp->fullIData(oldp+1793,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.rdata),32);
    bufp->fullBit(oldp+1794,((1U & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset)))));
    bufp->fullCData(oldp+1795,((0x000000ffU & ((4U 
                                                & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                ? (
                                                   (2U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                     ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__scratch)
                                                     : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__msr))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                     ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lsr)
                                                     : 0U))
                                                : (
                                                   (2U 
                                                    & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                     ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr)
                                                     : 
                                                    (0x000000c0U 
                                                     | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__iir)))
                                                    : 
                                                   ((1U 
                                                     & vlSymsp->TOP__ysyxSoCFull__asic.__PVT__lpsram__DOT__mpsram__DOT__u0__DOT__adr_i)
                                                     ? 
                                                    ((0x00000080U 
                                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl) 
                                                      >> 8U)
                                                      : (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__ier))
                                                     : 
                                                    ((0x00000080U 
                                                      & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr))
                                                      ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__dl)
                                                      : 
                                                     vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                                     [vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom])))))),8);
    bufp->fullIData(oldp+1796,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC),32);
    bufp->fullBit(oldp+1797,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.debug_is_hit));
    bufp->fullIData(oldp+1798,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.debug_is_hit)
                                 ? (((0U == (0x0000001fU 
                                             & VL_SHIFTL_III(7,32,32, 
                                                             (0x0000000fU 
                                                              & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC), 3U)))
                                      ? 0U : (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_mem
                                              [(7U 
                                                & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC 
                                                   >> 4U))][
                                              (((IData)(0x0000001fU) 
                                                + (0x0000007fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (0x0000000fU 
                                                                    & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC), 3U))) 
                                               >> 5U)] 
                                              << ((IData)(0x00000020U) 
                                                  - 
                                                  (0x0000001fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (0x0000000fU 
                                                                    & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC), 3U))))) 
                                    | (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_mem
                                       [(7U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC 
                                               >> 4U))][
                                       (3U & (VL_SHIFTL_III(7,32,32, 
                                                            (0x0000000fU 
                                                             & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC), 3U) 
                                              >> 5U))] 
                                       >> (0x0000001fU 
                                           & VL_SHIFTL_III(7,32,32, 
                                                           (0x0000000fU 
                                                            & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC), 3U))))
                                 : ((3U == (3U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC 
                                                  >> 2U)))
                                     ? vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.rdata
                                     : (((0U == (0x0000001fU 
                                                 & VL_SHIFTL_III(7,32,32, 
                                                                 (0x0000000fU 
                                                                  & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC), 3U)))
                                          ? 0U : (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_mem
                                                  [
                                                  (7U 
                                                   & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC 
                                                      >> 4U))][
                                                  (((IData)(0x0000001fU) 
                                                    + 
                                                    (0x0000007fU 
                                                     & VL_SHIFTL_III(7,32,32, 
                                                                     (0x0000000fU 
                                                                      & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC), 3U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & VL_SHIFTL_III(7,32,32, 
                                                                    (0x0000000fU 
                                                                     & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC), 3U))))) 
                                        | (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__cache_mem
                                           [(7U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC 
                                                   >> 4U))][
                                           (3U & (VL_SHIFTL_III(7,32,32, 
                                                                (0x0000000fU 
                                                                 & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC), 3U) 
                                                  >> 5U))] 
                                           >> (0x0000001fU 
                                               & VL_SHIFTL_III(7,32,32, 
                                                               (0x0000000fU 
                                                                & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC), 3U))))))),32);
    bufp->fullBit(oldp+1799,(((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__state))
                               ? ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.debug_is_hit) 
                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.in_reqValid))
                               : ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__r_fire) 
                                  & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__icache_u0__DOT__next_state))))));
    bufp->fullCData(oldp+1800,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.state),2);
    bufp->fullBit(oldp+1801,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.r_fire));
    bufp->fullBit(oldp+1802,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.in_reqValid));
    bufp->fullCData(oldp+1803,((7U & (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC 
                                      >> 4U))),3);
    bufp->fullIData(oldp+1804,((vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC 
                                >> 7U)),25);
    bufp->fullCData(oldp+1805,((0x0000000fU & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.PC)),5);
    bufp->fullBit(oldp+1806,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__arvalid) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__IROM_arready))));
    bufp->fullCData(oldp+1807,(((((((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isR) 
                                    << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isI) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isSTORE) 
                                      << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isB))) 
                                 << 3U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.__PVT__isU) 
                                            << 2U) 
                                           | (((0x6fU 
                                                == 
                                                (0x0000007fU 
                                                 & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command)) 
                                               << 1U) 
                                              | ((IData)(
                                                         (0x00001073U 
                                                          == 
                                                          (0x0000707fU 
                                                           & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command))) 
                                                 | ((IData)(
                                                            (0x00002073U 
                                                             == 
                                                             (0x0000707fU 
                                                              & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command))) 
                                                    | (IData)(
                                                              (0x00003073U 
                                                               == 
                                                               (0x0000707fU 
                                                                & vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IFU_0.__PVT__PC_command))))))))),7);
    bufp->fullBit(oldp+1808,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.state));
    bufp->fullBit(oldp+1809,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.lsu_reqEN));
    bufp->fullCData(oldp+1810,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.state),3);
    bufp->fullBit(oldp+1811,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__DRAM_awready))));
    bufp->fullBit(oldp+1812,(((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__RAM_AXI4LiteArbiter__DOT__M2_awvalid) 
                              & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.__PVT__DRAM_wready))));
    bufp->fullBit(oldp+1813,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.b_fire));
    bufp->fullBit(oldp+1814,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LSU_0.r_fire));
    bufp->fullBit(oldp+1815,((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IDU_0.isCSR))));
    bufp->fullIData(oldp+1816,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[0]),32);
    bufp->fullIData(oldp+1817,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[1]),32);
    bufp->fullIData(oldp+1818,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[2]),32);
    bufp->fullIData(oldp+1819,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[3]),32);
    bufp->fullIData(oldp+1820,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[4]),32);
    bufp->fullIData(oldp+1821,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[5]),32);
    bufp->fullIData(oldp+1822,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[6]),32);
    bufp->fullIData(oldp+1823,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[7]),32);
    bufp->fullIData(oldp+1824,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[8]),32);
    bufp->fullIData(oldp+1825,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[9]),32);
    bufp->fullIData(oldp+1826,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[10]),32);
    bufp->fullIData(oldp+1827,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[11]),32);
    bufp->fullIData(oldp+1828,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[12]),32);
    bufp->fullIData(oldp+1829,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[13]),32);
    bufp->fullIData(oldp+1830,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[14]),32);
    bufp->fullIData(oldp+1831,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[15]),32);
    bufp->fullIData(oldp+1832,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[16]),32);
    bufp->fullIData(oldp+1833,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[17]),32);
    bufp->fullIData(oldp+1834,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[18]),32);
    bufp->fullIData(oldp+1835,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[19]),32);
    bufp->fullIData(oldp+1836,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[20]),32);
    bufp->fullIData(oldp+1837,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[21]),32);
    bufp->fullIData(oldp+1838,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[22]),32);
    bufp->fullIData(oldp+1839,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[23]),32);
    bufp->fullIData(oldp+1840,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[24]),32);
    bufp->fullIData(oldp+1841,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[25]),32);
    bufp->fullIData(oldp+1842,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[26]),32);
    bufp->fullIData(oldp+1843,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[27]),32);
    bufp->fullIData(oldp+1844,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[28]),32);
    bufp->fullIData(oldp+1845,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[29]),32);
    bufp->fullIData(oldp+1846,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[30]),32);
    bufp->fullIData(oldp+1847,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.GPR[31]),32);
    bufp->fullIData(oldp+1848,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MCYCLE),32);
    bufp->fullIData(oldp+1849,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MCYCLEH),32);
    bufp->fullIData(oldp+1850,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MCAUSE),32);
    bufp->fullIData(oldp+1851,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MSTATUS),32);
    bufp->fullIData(oldp+1852,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MVENDORID),32);
    bufp->fullIData(oldp+1853,(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__REG_0.CSR_MARCHID),32);
    bufp->fullCData(oldp+1854,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr),8);
    bufp->fullBit(oldp+1855,((1U & ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lcr) 
                                    >> 7U))));
    bufp->fullCData(oldp+1856,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.lsr),8);
    bufp->fullSData(oldp+1857,(((vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__fifo
                                [vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom])),11);
    bufp->fullCData(oldp+1858,(vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSymsp->TOP__ysyxSoCFull__asic__luart__muart__Uregs.__PVT__receiver__DOT__fifo_rx__DOT__bottom]),8);
}

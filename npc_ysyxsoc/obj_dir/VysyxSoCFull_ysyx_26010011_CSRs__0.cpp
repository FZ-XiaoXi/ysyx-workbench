// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull___024unit____Vdpiimwrap_difftest_skip_ref_TOP____024unit(IData/*31:0*/ reason);

void VysyxSoCFull_ysyx_26010011_CSRs___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0__0(VysyxSoCFull_ysyx_26010011_CSRs* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_CSRs___ico_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__csr_out_data = ((((0x0b00U == 
                                        (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                         >> 0x00000014U)) 
                                       | (0x0b80U == 
                                          (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                           >> 0x00000014U))) 
                                      | (((0x0301U 
                                           == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                               >> 0x00000014U)) 
                                          | (0x0305U 
                                             == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                 >> 0x00000014U))) 
                                         | ((0x0340U 
                                             == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                 >> 0x00000014U)) 
                                            | ((0x0341U 
                                                == 
                                                (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                 >> 0x00000014U)) 
                                               | ((0x0342U 
                                                   == 
                                                   (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                    >> 0x00000014U)) 
                                                  | (0x0300U 
                                                     == 
                                                     (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                      >> 0x00000014U)))))))
                                      ? ((0x0b00U == 
                                          (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                           >> 0x00000014U))
                                          ? vlSelfRef.CSR_MCYCLE
                                          : ((0x0b80U 
                                              == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                  >> 0x00000014U))
                                              ? vlSelfRef.CSR_MCYCLEH
                                              : ((0x0301U 
                                                  == 
                                                  (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                   >> 0x00000014U))
                                                  ? vlSelfRef.CSR_MISA
                                                  : 
                                                 ((0x0305U 
                                                   == 
                                                   (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                    >> 0x00000014U))
                                                   ? vlSelfRef.CSR_MTVEC
                                                   : 
                                                  ((0x0340U 
                                                    == 
                                                    (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                     >> 0x00000014U))
                                                    ? vlSelfRef.CSR_MSCRATCH
                                                    : 
                                                   ((0x0341U 
                                                     == 
                                                     (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                      >> 0x00000014U))
                                                     ? vlSelfRef.CSR_MEPC
                                                     : 
                                                    ((0x0342U 
                                                      == 
                                                      (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                       >> 0x00000014U))
                                                      ? vlSelfRef.CSR_MCAUSE
                                                      : vlSelfRef.CSR_MSTATUS)))))))
                                      : ((0x0f11U == 
                                          (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                           >> 0x00000014U))
                                          ? vlSelfRef.CSR_MVENDORID
                                          : ((0x0f12U 
                                              == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                  >> 0x00000014U))
                                              ? vlSelfRef.CSR_MARCHID
                                              : ((0x0343U 
                                                  == 
                                                  (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                   >> 0x00000014U))
                                                  ? vlSelfRef.CSR_MTVAL
                                                  : 0x2b2b2b2bU))));
    vlSelfRef.__PVT__csr_in_bus_exception = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid)
                                              ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_exception)
                                              : 0U);
    if ((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_opCSR)) 
          & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.WBU_0__DOT____VdfgRegularize_h03859d6a_0_0)) 
         & ((0x0b00U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_csrrd)) 
            | (0x0b80U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_csrrd))))) {
        VysyxSoCFull___024unit____Vdpiimwrap_difftest_skip_ref_TOP____024unit(4U);
    }
}

void VysyxSoCFull_ysyx_26010011_CSRs___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0__0(VysyxSoCFull_ysyx_26010011_CSRs* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_CSRs___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__CSR_MCYCLE = vlSelfRef.CSR_MCYCLE;
    vlSelfRef.__Vdly__CSR_MCYCLEH = vlSelfRef.CSR_MCYCLEH;
}

void VysyxSoCFull_ysyx_26010011_CSRs___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0__1(VysyxSoCFull_ysyx_26010011_CSRs* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_CSRs___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.reset) {
        vlSelfRef.__Vdly__CSR_MCYCLE = 0U;
        vlSelfRef.__Vdly__CSR_MCYCLEH = 0U;
        vlSelfRef.CSR_MISA = 0x40000100U;
        vlSelfRef.CSR_MTVEC = 0U;
        vlSelfRef.CSR_MSCRATCH = 0U;
        vlSelfRef.CSR_MEPC = 0U;
        vlSelfRef.CSR_MCAUSE = 0U;
        vlSelfRef.CSR_MSTATUS = 0x00001800U;
        vlSelfRef.CSR_MVENDORID = 0x79737978U;
        vlSelfRef.CSR_MARCHID = 0x018ce19bU;
        vlSelfRef.CSR_MTVAL = 0U;
    } else {
        vlSelfRef.__Vdly__CSR_MCYCLE = ((IData)(1U) 
                                        + vlSelfRef.CSR_MCYCLE);
        vlSelfRef.__Vdly__CSR_MCYCLEH = ((0xffffffffU 
                                          == vlSelfRef.CSR_MCYCLE)
                                          ? ((IData)(1U) 
                                             + vlSelfRef.CSR_MCYCLEH)
                                          : vlSelfRef.CSR_MCYCLEH);
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__csr_in_bus_exception))) {
            if ((0x0eU != (0x0000000fU & (IData)(vlSelfRef.__PVT__csr_in_bus_exception)))) {
                vlSelfRef.CSR_MEPC = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_bus_pc;
                vlSelfRef.CSR_MCAUSE = (0x0000000fU 
                                        & (IData)(vlSelfRef.__PVT__csr_in_bus_exception));
            }
        } else if (((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_opCSR)) 
                    & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.WBU_0__DOT____VdfgRegularize_h03859d6a_0_0))) {
            if ((0x0305U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_csrrd))) {
                vlSelfRef.CSR_MTVEC = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_csr_result;
            } else if (VL_UNLIKELY(((0x0340U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_csrrd))))) {
                VL_WRITEF_NX("Write CSR_MSCRATCH: %08x\n",0,
                             32,vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_csr_result);
                Verilated::runFlushCallbacks();
                vlSelfRef.CSR_MSCRATCH = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_csr_result;
            } else if ((0x0341U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_csrrd))) {
                vlSelfRef.CSR_MEPC = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_csr_result;
            } else if ((0x0342U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_csrrd))) {
                vlSelfRef.CSR_MCAUSE = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_csr_result;
            } else if ((0x0300U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_csrrd))) {
                vlSelfRef.CSR_MSTATUS = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_csr_result;
            } else if ((0x0343U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_csrrd))) {
                vlSelfRef.CSR_MTVAL = vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_csr_result;
            }
        }
    }
    vlSelfRef.CSR_MCYCLE = vlSelfRef.__Vdly__CSR_MCYCLE;
    vlSelfRef.CSR_MCYCLEH = vlSelfRef.__Vdly__CSR_MCYCLEH;
}

void VysyxSoCFull_ysyx_26010011_CSRs___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0__2(VysyxSoCFull_ysyx_26010011_CSRs* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_CSRs___nba_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__csr_in_bus_exception = ((IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.wbu_in_valid)
                                              ? (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_exception)
                                              : 0U);
    if ((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_opCSR)) 
          & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.WBU_0__DOT____VdfgRegularize_h03859d6a_0_0)) 
         & ((0x0b00U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_csrrd)) 
            | (0x0b80U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_csrrd))))) {
        VysyxSoCFull___024unit____Vdpiimwrap_difftest_skip_ref_TOP____024unit(4U);
    }
}

void VysyxSoCFull_ysyx_26010011_CSRs___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0__0(VysyxSoCFull_ysyx_26010011_CSRs* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_CSRs___nba_comb__TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__csr_out_data = ((((0x0b00U == 
                                        (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                         >> 0x00000014U)) 
                                       | (0x0b80U == 
                                          (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                           >> 0x00000014U))) 
                                      | (((0x0301U 
                                           == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                               >> 0x00000014U)) 
                                          | (0x0305U 
                                             == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                 >> 0x00000014U))) 
                                         | ((0x0340U 
                                             == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                 >> 0x00000014U)) 
                                            | ((0x0341U 
                                                == 
                                                (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                 >> 0x00000014U)) 
                                               | ((0x0342U 
                                                   == 
                                                   (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                    >> 0x00000014U)) 
                                                  | (0x0300U 
                                                     == 
                                                     (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                      >> 0x00000014U)))))))
                                      ? ((0x0b00U == 
                                          (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                           >> 0x00000014U))
                                          ? vlSelfRef.CSR_MCYCLE
                                          : ((0x0b80U 
                                              == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                  >> 0x00000014U))
                                              ? vlSelfRef.CSR_MCYCLEH
                                              : ((0x0301U 
                                                  == 
                                                  (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                   >> 0x00000014U))
                                                  ? vlSelfRef.CSR_MISA
                                                  : 
                                                 ((0x0305U 
                                                   == 
                                                   (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                    >> 0x00000014U))
                                                   ? vlSelfRef.CSR_MTVEC
                                                   : 
                                                  ((0x0340U 
                                                    == 
                                                    (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                     >> 0x00000014U))
                                                    ? vlSelfRef.CSR_MSCRATCH
                                                    : 
                                                   ((0x0341U 
                                                     == 
                                                     (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                      >> 0x00000014U))
                                                     ? vlSelfRef.CSR_MEPC
                                                     : 
                                                    ((0x0342U 
                                                      == 
                                                      (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                       >> 0x00000014U))
                                                      ? vlSelfRef.CSR_MCAUSE
                                                      : vlSelfRef.CSR_MSTATUS)))))))
                                      : ((0x0f11U == 
                                          (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                           >> 0x00000014U))
                                          ? vlSelfRef.CSR_MVENDORID
                                          : ((0x0f12U 
                                              == (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                  >> 0x00000014U))
                                              ? vlSelfRef.CSR_MARCHID
                                              : ((0x0343U 
                                                  == 
                                                  (vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__IF_ID_inst.__PVT__idu_in_bus_instruction 
                                                   >> 0x00000014U))
                                                  ? vlSelfRef.CSR_MTVAL
                                                  : 0x2b2b2b2bU))));
}

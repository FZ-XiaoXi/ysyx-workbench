// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

void VysyxSoCFull___024unit____Vdpiimwrap_difftest_skip_ref_TOP____024unit(IData/*31:0*/ reason);

VL_ATTR_COLD void VysyxSoCFull_ysyx_26010011_CSRs___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0__0(VysyxSoCFull_ysyx_26010011_CSRs* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_CSRs___stl_sequent__TOP__ysyxSoCFull__asic__cpu__cpu__CSR_0__0\n"); );
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
                                                  : 0U))));
    if ((((0U != (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_opCSR)) 
          & (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu.WBU_0__DOT____VdfgRegularize_h03859d6a_0_0)) 
         & ((0x0b00U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_csrrd)) 
            | (0x0b80U == (IData)(vlSymsp->TOP__ysyxSoCFull__asic__cpu__cpu__LS_WB_inst.__PVT__wbu_in_bus_csrrd))))) {
        VysyxSoCFull___024unit____Vdpiimwrap_difftest_skip_ref_TOP____024unit(4U);
    }
}

VL_ATTR_COLD void VysyxSoCFull_ysyx_26010011_CSRs___ctor_var_reset(VysyxSoCFull_ysyx_26010011_CSRs* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_ysyx_26010011_CSRs___ctor_var_reset\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->__PVT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->__PVT__csr_in_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5161954805346229647ull);
    vlSelf->__PVT__csr_out_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17682973872175138091ull);
    vlSelf->__PVT__csr_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11099981521179349807ull);
    vlSelf->__PVT__csr_in_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14596656387081937353ull);
    vlSelf->__PVT__csr_in_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18319313806987191301ull);
    vlSelf->__PVT__csr_in_addw = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 377453252492950553ull);
    vlSelf->__PVT__csr_mtvec = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16711562886451133210ull);
    vlSelf->__PVT__csr_mepc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14107046366709206832ull);
    vlSelf->__PVT__csr_in_bus_exception = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16682338572190360524ull);
    vlSelf->CSR_MCYCLE = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11165352791181867570ull);
    vlSelf->CSR_MCYCLEH = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16554325436592071722ull);
    vlSelf->CSR_MISA = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13895988858667816389ull);
    vlSelf->CSR_MTVEC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11323515141155308250ull);
    vlSelf->CSR_MSCRATCH = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5658711165568042287ull);
    vlSelf->CSR_MEPC = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7714916435077890502ull);
    vlSelf->CSR_MCAUSE = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17025461536183969414ull);
    vlSelf->CSR_MSTATUS = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9103765532486773230ull);
    vlSelf->CSR_MVENDORID = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16657965402645930187ull);
    vlSelf->CSR_MARCHID = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3656773033635483453ull);
    vlSelf->CSR_MTVAL = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3083994470288762027ull);
}

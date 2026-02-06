// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

extern "C" int add(int a, int b);

void Vtop___024unit____Vdpiimwrap_add_TOP____024unit(IData/*31:0*/ a, IData/*31:0*/ b, IData/*31:0*/ &add__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_add_TOP____024unit\n"); );
    // Body
    int a__Vcvt;
    a__Vcvt = a;
    int b__Vcvt;
    b__Vcvt = b;
    int add__Vfuncrtn__Vcvt;
    add__Vfuncrtn__Vcvt = add(a__Vcvt, b__Vcvt);
    add__Vfuncrtn = (add__Vfuncrtn__Vcvt);
}

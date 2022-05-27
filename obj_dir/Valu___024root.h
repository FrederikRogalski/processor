// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valu.h for the primary calling header

#ifndef VERILATED_VALU___024ROOT_H_
#define VERILATED_VALU___024ROOT_H_  // guard

#include "verilated.h"

class Valu__Syms;
VL_MODULE(Valu___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(aluOp,4,0);
    VL_IN8(Ci,0,0);
    VL_OUT8(Zero,0,0);
    VL_OUT8(Neg,0,0);
    VL_OUT8(Carry,0,0);
    VL_IN16(A,15,0);
    VL_IN16(B,15,0);
    VL_OUT16(Y,15,0);
    IData/*16:0*/ alu__DOT__result_with_carry;

    // INTERNAL VARIABLES
    Valu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Valu___024root(Valu__Syms* symsp, const char* name);
    ~Valu___024root();
    VL_UNCOPYABLE(Valu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

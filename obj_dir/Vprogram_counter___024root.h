// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vprogram_counter.h for the primary calling header

#ifndef VERILATED_VPROGRAM_COUNTER___024ROOT_H_
#define VERILATED_VPROGRAM_COUNTER___024ROOT_H_  // guard

#include "verilated.h"

class Vprogram_counter__Syms;
VL_MODULE(Vprogram_counter___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(abs,0,0);
    VL_IN8(rel,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN16(alu,15,0);
    VL_OUT16(next,15,0);
    VL_OUT16(pc,15,0);

    // INTERNAL VARIABLES
    Vprogram_counter__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vprogram_counter___024root(Vprogram_counter__Syms* symsp, const char* name);
    ~Vprogram_counter___024root();
    VL_UNCOPYABLE(Vprogram_counter___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

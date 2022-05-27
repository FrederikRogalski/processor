// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vregister.h for the primary calling header

#ifndef VERILATED_VREGISTER___024ROOT_H_
#define VERILATED_VREGISTER___024ROOT_H_  // guard

#include "verilated.h"

class Vregister__Syms;
VL_MODULE(Vregister___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(src,3,0);
    VL_IN8(dst,3,0);
    VL_IN8(WE,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN16(WD,15,0);
    VL_OUT16(Rsrc,15,0);
    VL_OUT16(Rdst,15,0);
    VlUnpacked<SData/*15:0*/, 16> register__DOT__registers;

    // INTERNAL VARIABLES
    Vregister__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vregister___024root(Vregister__Syms* symsp, const char* name);
    ~Vregister___024root();
    VL_UNCOPYABLE(Vregister___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

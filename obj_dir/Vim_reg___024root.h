// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vim_reg.h for the primary calling header

#ifndef VERILATED_VIM_REG___024ROOT_H_
#define VERILATED_VIM_REG___024ROOT_H_  // guard

#include "verilated.h"

class Vim_reg__Syms;
VL_MODULE(Vim_reg___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(en,0,0);
    VL_IN8(iem,1,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN16(inst,15,0);
    VL_OUT16(imm,15,0);
    SData/*14:0*/ im_reg__DOT__imm_reg;

    // INTERNAL VARIABLES
    Vim_reg__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vim_reg___024root(Vim_reg__Syms* symsp, const char* name);
    ~Vim_reg___024root();
    VL_UNCOPYABLE(Vim_reg___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

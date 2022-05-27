// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrom.h for the primary calling header

#ifndef VERILATED_VROM___024ROOT_H_
#define VERILATED_VROM___024ROOT_H_  // guard

#include "verilated.h"

class Vrom__Syms;
VL_MODULE(Vrom___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN(addr,31,0);
    VL_OUT(instr,31,0);
    VlUnpacked<IData/*31:0*/, 131073> rom__DOT__memory;

    // INTERNAL VARIABLES
    Vrom__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrom___024root(Vrom__Syms* symsp, const char* name);
    ~Vrom___024root();
    VL_UNCOPYABLE(Vrom___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsign_ext.h for the primary calling header

#ifndef VERILATED_VSIGN_EXT___024ROOT_H_
#define VERILATED_VSIGN_EXT___024ROOT_H_  // guard

#include "verilated.h"

class Vsign_ext__Syms;
VL_MODULE(Vsign_ext___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN16(inst,15,0);
    VL_OUT16(S4,15,0);
    VL_OUT16(SD8,15,0);
    VL_OUT16(D4,15,0);

    // INTERNAL VARIABLES
    Vsign_ext__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsign_ext___024root(Vsign_ext__Syms* symsp, const char* name);
    ~Vsign_ext___024root();
    VL_UNCOPYABLE(Vsign_ext___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

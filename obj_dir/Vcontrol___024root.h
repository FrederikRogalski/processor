// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcontrol.h for the primary calling header

#ifndef VERILATED_VCONTROL___024ROOT_H_
#define VERILATED_VCONTROL___024ROOT_H_  // guard

#include "verilated.h"

class Vcontrol__Syms;
VL_MODULE(Vcontrol___024root) {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ control__DOT____Vsenitemexpr1;
    VL_IN8(op_code,7,0);
    VL_OUT8(stPC,0,0);
    VL_OUT8(WE,0,0);
    VL_OUT8(imm,0,0);
    VL_OUT8(iem,1,0);
    VL_OUT8(absJmp,0,0);
    VL_OUT8(muxB,2,0);
    VL_OUT8(src2D,0,0);
    VL_OUT8(muxA,0,0);
    VL_OUT8(alu2D,0,0);
    VL_OUT8(aluOp,4,0);
    VL_OUT8(storeFlags,0,0);
    VL_OUT8(branch,2,0);
    VL_OUT8(ramSt,0,0);
    VL_OUT8(ramLd,0,0);
    VL_OUT8(ioW,0,0);
    VL_OUT8(ioR,0,0);
    VL_OUT8(Retl,0,0);
    CData/*0:0*/ __Vclklast__TOP__control__DOT____Vsenitemexpr1;
    VlUnpacked<IData/*25:0*/, 128> control__DOT__memory;

    // INTERNAL VARIABLES
    Vcontrol__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcontrol___024root(Vcontrol__Syms* symsp, const char* name);
    ~Vcontrol___024root();
    VL_UNCOPYABLE(Vcontrol___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

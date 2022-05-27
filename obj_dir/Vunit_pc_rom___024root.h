// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vunit_pc_rom.h for the primary calling header

#ifndef VERILATED_VUNIT_PC_ROM___024ROOT_H_
#define VERILATED_VUNIT_PC_ROM___024ROOT_H_  // guard

#include "verilated.h"

class Vunit_pc_rom__Syms;
VL_MODULE(Vunit_pc_rom___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_OUT(out,31,0);
    IData/*31:0*/ unit_pc_rom__DOT__next;
    IData/*31:0*/ unit_pc_rom__DOT__pc;
    VlUnpacked<IData/*31:0*/, 131073> unit_pc_rom__DOT__inst_rom__DOT__memory;

    // INTERNAL VARIABLES
    Vunit_pc_rom__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vunit_pc_rom___024root(Vunit_pc_rom__Syms* symsp, const char* name);
    ~Vunit_pc_rom___024root();
    VL_UNCOPYABLE(Vunit_pc_rom___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

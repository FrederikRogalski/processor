// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vunit_pc_rom.h for the primary calling header

#include "verilated.h"

#include "Vunit_pc_rom__Syms.h"
#include "Vunit_pc_rom___024root.h"

void Vunit_pc_rom___024root___ctor_var_reset(Vunit_pc_rom___024root* vlSelf);

Vunit_pc_rom___024root::Vunit_pc_rom___024root(Vunit_pc_rom__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vunit_pc_rom___024root___ctor_var_reset(this);
}

void Vunit_pc_rom___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vunit_pc_rom___024root::~Vunit_pc_rom___024root() {
}

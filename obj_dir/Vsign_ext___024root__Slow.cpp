// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsign_ext.h for the primary calling header

#include "verilated.h"

#include "Vsign_ext__Syms.h"
#include "Vsign_ext___024root.h"

void Vsign_ext___024root___ctor_var_reset(Vsign_ext___024root* vlSelf);

Vsign_ext___024root::Vsign_ext___024root(Vsign_ext__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsign_ext___024root___ctor_var_reset(this);
}

void Vsign_ext___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vsign_ext___024root::~Vsign_ext___024root() {
}

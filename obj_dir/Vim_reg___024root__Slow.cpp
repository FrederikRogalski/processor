// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vim_reg.h for the primary calling header

#include "verilated.h"

#include "Vim_reg__Syms.h"
#include "Vim_reg___024root.h"

void Vim_reg___024root___ctor_var_reset(Vim_reg___024root* vlSelf);

Vim_reg___024root::Vim_reg___024root(Vim_reg__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vim_reg___024root___ctor_var_reset(this);
}

void Vim_reg___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vim_reg___024root::~Vim_reg___024root() {
}

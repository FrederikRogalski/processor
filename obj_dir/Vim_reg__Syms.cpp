// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vim_reg__Syms.h"
#include "Vim_reg.h"
#include "Vim_reg___024root.h"

// FUNCTIONS
Vim_reg__Syms::~Vim_reg__Syms()
{
}

Vim_reg__Syms::Vim_reg__Syms(VerilatedContext* contextp, const char* namep,Vim_reg* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}

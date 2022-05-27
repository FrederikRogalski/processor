// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vunit_pc_rom__Syms.h"
#include "Vunit_pc_rom.h"
#include "Vunit_pc_rom___024root.h"

// FUNCTIONS
Vunit_pc_rom__Syms::~Vunit_pc_rom__Syms()
{
}

Vunit_pc_rom__Syms::Vunit_pc_rom__Syms(VerilatedContext* contextp, const char* namep,Vunit_pc_rom* modelp)
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

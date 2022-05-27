// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VUNIT_PC_ROM__SYMS_H_
#define VERILATED_VUNIT_PC_ROM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vunit_pc_rom.h"

// INCLUDE MODULE CLASSES
#include "Vunit_pc_rom___024root.h"

// SYMS CLASS (contains all model state)
class Vunit_pc_rom__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vunit_pc_rom* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vunit_pc_rom___024root         TOP;

    // CONSTRUCTORS
    Vunit_pc_rom__Syms(VerilatedContext* contextp, const char* namep, Vunit_pc_rom* modelp);
    ~Vunit_pc_rom__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard

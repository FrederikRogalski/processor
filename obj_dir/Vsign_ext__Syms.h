// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSIGN_EXT__SYMS_H_
#define VERILATED_VSIGN_EXT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vsign_ext.h"

// INCLUDE MODULE CLASSES
#include "Vsign_ext___024root.h"

// SYMS CLASS (contains all model state)
class Vsign_ext__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsign_ext* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsign_ext___024root            TOP;

    // CONSTRUCTORS
    Vsign_ext__Syms(VerilatedContext* contextp, const char* namep, Vsign_ext* modelp);
    ~Vsign_ext__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard

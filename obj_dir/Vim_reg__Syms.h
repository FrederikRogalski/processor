// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VIM_REG__SYMS_H_
#define VERILATED_VIM_REG__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vim_reg.h"

// INCLUDE MODULE CLASSES
#include "Vim_reg___024root.h"

// SYMS CLASS (contains all model state)
class Vim_reg__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vim_reg* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vim_reg___024root              TOP;

    // CONSTRUCTORS
    Vim_reg__Syms(VerilatedContext* contextp, const char* namep, Vim_reg* modelp);
    ~Vim_reg__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard

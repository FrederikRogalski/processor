// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vim_reg.h"
#include "Vim_reg__Syms.h"

//============================================================
// Constructors

Vim_reg::Vim_reg(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vim_reg__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , en{vlSymsp->TOP.en}
    , iem{vlSymsp->TOP.iem}
    , inst{vlSymsp->TOP.inst}
    , imm{vlSymsp->TOP.imm}
    , rootp{&(vlSymsp->TOP)}
{
}

Vim_reg::Vim_reg(const char* _vcname__)
    : Vim_reg(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vim_reg::~Vim_reg() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vim_reg___024root___eval_initial(Vim_reg___024root* vlSelf);
void Vim_reg___024root___eval_settle(Vim_reg___024root* vlSelf);
void Vim_reg___024root___eval(Vim_reg___024root* vlSelf);
#ifdef VL_DEBUG
void Vim_reg___024root___eval_debug_assertions(Vim_reg___024root* vlSelf);
#endif  // VL_DEBUG
void Vim_reg___024root___final(Vim_reg___024root* vlSelf);

static void _eval_initial_loop(Vim_reg__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vim_reg___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vim_reg___024root___eval_settle(&(vlSymsp->TOP));
        Vim_reg___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vim_reg::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vim_reg::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vim_reg___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vim_reg___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vim_reg::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vim_reg::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vim_reg::final() {
    Vim_reg___024root___final(&(vlSymsp->TOP));
}

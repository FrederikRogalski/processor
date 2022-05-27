// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsign_ext.h"
#include "Vsign_ext__Syms.h"

//============================================================
// Constructors

Vsign_ext::Vsign_ext(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vsign_ext__Syms(_vcontextp__, _vcname__, this)}
    , inst{vlSymsp->TOP.inst}
    , S4{vlSymsp->TOP.S4}
    , SD8{vlSymsp->TOP.SD8}
    , D4{vlSymsp->TOP.D4}
    , rootp{&(vlSymsp->TOP)}
{
}

Vsign_ext::Vsign_ext(const char* _vcname__)
    : Vsign_ext(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vsign_ext::~Vsign_ext() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vsign_ext___024root___eval_initial(Vsign_ext___024root* vlSelf);
void Vsign_ext___024root___eval_settle(Vsign_ext___024root* vlSelf);
void Vsign_ext___024root___eval(Vsign_ext___024root* vlSelf);
#ifdef VL_DEBUG
void Vsign_ext___024root___eval_debug_assertions(Vsign_ext___024root* vlSelf);
#endif  // VL_DEBUG
void Vsign_ext___024root___final(Vsign_ext___024root* vlSelf);

static void _eval_initial_loop(Vsign_ext__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vsign_ext___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vsign_ext___024root___eval_settle(&(vlSymsp->TOP));
        Vsign_ext___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vsign_ext::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsign_ext::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsign_ext___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vsign_ext___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vsign_ext::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vsign_ext::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vsign_ext::final() {
    Vsign_ext___024root___final(&(vlSymsp->TOP));
}

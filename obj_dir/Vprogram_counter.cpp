// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vprogram_counter.h"
#include "Vprogram_counter__Syms.h"

//============================================================
// Constructors

Vprogram_counter::Vprogram_counter(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vprogram_counter__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , abs{vlSymsp->TOP.abs}
    , rel{vlSymsp->TOP.rel}
    , alu{vlSymsp->TOP.alu}
    , next{vlSymsp->TOP.next}
    , pc{vlSymsp->TOP.pc}
    , rootp{&(vlSymsp->TOP)}
{
}

Vprogram_counter::Vprogram_counter(const char* _vcname__)
    : Vprogram_counter(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vprogram_counter::~Vprogram_counter() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vprogram_counter___024root___eval_initial(Vprogram_counter___024root* vlSelf);
void Vprogram_counter___024root___eval_settle(Vprogram_counter___024root* vlSelf);
void Vprogram_counter___024root___eval(Vprogram_counter___024root* vlSelf);
#ifdef VL_DEBUG
void Vprogram_counter___024root___eval_debug_assertions(Vprogram_counter___024root* vlSelf);
#endif  // VL_DEBUG
void Vprogram_counter___024root___final(Vprogram_counter___024root* vlSelf);

static void _eval_initial_loop(Vprogram_counter__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vprogram_counter___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vprogram_counter___024root___eval_settle(&(vlSymsp->TOP));
        Vprogram_counter___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vprogram_counter::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vprogram_counter::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vprogram_counter___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vprogram_counter___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vprogram_counter::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vprogram_counter::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vprogram_counter::final() {
    Vprogram_counter___024root___final(&(vlSymsp->TOP));
}

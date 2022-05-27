// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vregister.h"
#include "Vregister__Syms.h"

//============================================================
// Constructors

Vregister::Vregister(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vregister__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , src{vlSymsp->TOP.src}
    , dst{vlSymsp->TOP.dst}
    , WE{vlSymsp->TOP.WE}
    , WD{vlSymsp->TOP.WD}
    , Rsrc{vlSymsp->TOP.Rsrc}
    , Rdst{vlSymsp->TOP.Rdst}
    , rootp{&(vlSymsp->TOP)}
{
}

Vregister::Vregister(const char* _vcname__)
    : Vregister(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vregister::~Vregister() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vregister___024root___eval_initial(Vregister___024root* vlSelf);
void Vregister___024root___eval_settle(Vregister___024root* vlSelf);
void Vregister___024root___eval(Vregister___024root* vlSelf);
#ifdef VL_DEBUG
void Vregister___024root___eval_debug_assertions(Vregister___024root* vlSelf);
#endif  // VL_DEBUG
void Vregister___024root___final(Vregister___024root* vlSelf);

static void _eval_initial_loop(Vregister__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vregister___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vregister___024root___eval_settle(&(vlSymsp->TOP));
        Vregister___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vregister::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vregister::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vregister___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vregister___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vregister::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vregister::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vregister::final() {
    Vregister___024root___final(&(vlSymsp->TOP));
}

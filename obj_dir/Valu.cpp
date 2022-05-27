// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Valu.h"
#include "Valu__Syms.h"

//============================================================
// Constructors

Valu::Valu(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Valu__Syms(_vcontextp__, _vcname__, this)}
    , aluOp{vlSymsp->TOP.aluOp}
    , Ci{vlSymsp->TOP.Ci}
    , Zero{vlSymsp->TOP.Zero}
    , Neg{vlSymsp->TOP.Neg}
    , Carry{vlSymsp->TOP.Carry}
    , A{vlSymsp->TOP.A}
    , B{vlSymsp->TOP.B}
    , Y{vlSymsp->TOP.Y}
    , rootp{&(vlSymsp->TOP)}
{
}

Valu::Valu(const char* _vcname__)
    : Valu(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Valu::~Valu() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Valu___024root___eval_initial(Valu___024root* vlSelf);
void Valu___024root___eval_settle(Valu___024root* vlSelf);
void Valu___024root___eval(Valu___024root* vlSelf);
#ifdef VL_DEBUG
void Valu___024root___eval_debug_assertions(Valu___024root* vlSelf);
#endif  // VL_DEBUG
void Valu___024root___final(Valu___024root* vlSelf);

static void _eval_initial_loop(Valu__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Valu___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Valu___024root___eval_settle(&(vlSymsp->TOP));
        Valu___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Valu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Valu::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Valu___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Valu___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Valu::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Valu::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Valu::final() {
    Valu___024root___final(&(vlSymsp->TOP));
}

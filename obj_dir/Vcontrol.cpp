// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcontrol.h"
#include "Vcontrol__Syms.h"

//============================================================
// Constructors

Vcontrol::Vcontrol(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vcontrol__Syms(_vcontextp__, _vcname__, this)}
    , op_code{vlSymsp->TOP.op_code}
    , stPC{vlSymsp->TOP.stPC}
    , WE{vlSymsp->TOP.WE}
    , imm{vlSymsp->TOP.imm}
    , iem{vlSymsp->TOP.iem}
    , absJmp{vlSymsp->TOP.absJmp}
    , muxB{vlSymsp->TOP.muxB}
    , src2D{vlSymsp->TOP.src2D}
    , muxA{vlSymsp->TOP.muxA}
    , alu2D{vlSymsp->TOP.alu2D}
    , aluOp{vlSymsp->TOP.aluOp}
    , storeFlags{vlSymsp->TOP.storeFlags}
    , branch{vlSymsp->TOP.branch}
    , ramSt{vlSymsp->TOP.ramSt}
    , ramLd{vlSymsp->TOP.ramLd}
    , ioW{vlSymsp->TOP.ioW}
    , ioR{vlSymsp->TOP.ioR}
    , Retl{vlSymsp->TOP.Retl}
    , rootp{&(vlSymsp->TOP)}
{
}

Vcontrol::Vcontrol(const char* _vcname__)
    : Vcontrol(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vcontrol::~Vcontrol() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vcontrol___024root___eval_initial(Vcontrol___024root* vlSelf);
void Vcontrol___024root___eval_settle(Vcontrol___024root* vlSelf);
void Vcontrol___024root___eval(Vcontrol___024root* vlSelf);
#ifdef VL_DEBUG
void Vcontrol___024root___eval_debug_assertions(Vcontrol___024root* vlSelf);
#endif  // VL_DEBUG
void Vcontrol___024root___final(Vcontrol___024root* vlSelf);

static void _eval_initial_loop(Vcontrol__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vcontrol___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vcontrol___024root___eval_settle(&(vlSymsp->TOP));
        Vcontrol___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vcontrol::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcontrol::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcontrol___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vcontrol___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vcontrol::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vcontrol::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vcontrol::final() {
    Vcontrol___024root___final(&(vlSymsp->TOP));
}

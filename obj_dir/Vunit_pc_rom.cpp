// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vunit_pc_rom.h"
#include "Vunit_pc_rom__Syms.h"

//============================================================
// Constructors

Vunit_pc_rom::Vunit_pc_rom(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vunit_pc_rom__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
}

Vunit_pc_rom::Vunit_pc_rom(const char* _vcname__)
    : Vunit_pc_rom(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vunit_pc_rom::~Vunit_pc_rom() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vunit_pc_rom___024root___eval_initial(Vunit_pc_rom___024root* vlSelf);
void Vunit_pc_rom___024root___eval_settle(Vunit_pc_rom___024root* vlSelf);
void Vunit_pc_rom___024root___eval(Vunit_pc_rom___024root* vlSelf);
#ifdef VL_DEBUG
void Vunit_pc_rom___024root___eval_debug_assertions(Vunit_pc_rom___024root* vlSelf);
#endif  // VL_DEBUG
void Vunit_pc_rom___024root___final(Vunit_pc_rom___024root* vlSelf);

static void _eval_initial_loop(Vunit_pc_rom__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vunit_pc_rom___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vunit_pc_rom___024root___eval_settle(&(vlSymsp->TOP));
        Vunit_pc_rom___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vunit_pc_rom::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vunit_pc_rom::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vunit_pc_rom___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vunit_pc_rom___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vunit_pc_rom::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vunit_pc_rom::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vunit_pc_rom::final() {
    Vunit_pc_rom___024root___final(&(vlSymsp->TOP));
}

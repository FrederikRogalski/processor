// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsign_ext.h for the primary calling header

#include "verilated.h"

#include "Vsign_ext___024root.h"

VL_ATTR_COLD void Vsign_ext___024root___eval_initial(Vsign_ext___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsign_ext__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_ext___024root___eval_initial\n"); );
}

void Vsign_ext___024root___combo__TOP__0(Vsign_ext___024root* vlSelf);

VL_ATTR_COLD void Vsign_ext___024root___eval_settle(Vsign_ext___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsign_ext__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_ext___024root___eval_settle\n"); );
    // Body
    Vsign_ext___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vsign_ext___024root___final(Vsign_ext___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsign_ext__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_ext___024root___final\n"); );
}

VL_ATTR_COLD void Vsign_ext___024root___ctor_var_reset(Vsign_ext___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsign_ext__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_ext___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->inst = VL_RAND_RESET_I(16);
    vlSelf->S4 = VL_RAND_RESET_I(16);
    vlSelf->SD8 = VL_RAND_RESET_I(16);
    vlSelf->D4 = VL_RAND_RESET_I(16);
}

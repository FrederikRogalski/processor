// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister.h for the primary calling header

#include "verilated.h"

#include "Vregister___024root.h"

VL_ATTR_COLD void Vregister___024root___eval_initial(Vregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vregister___024root___combo__TOP__0(Vregister___024root* vlSelf);

VL_ATTR_COLD void Vregister___024root___eval_settle(Vregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root___eval_settle\n"); );
    // Body
    Vregister___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vregister___024root___final(Vregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root___final\n"); );
}

VL_ATTR_COLD void Vregister___024root___ctor_var_reset(Vregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->src = VL_RAND_RESET_I(4);
    vlSelf->dst = VL_RAND_RESET_I(4);
    vlSelf->WD = VL_RAND_RESET_I(16);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->WE = VL_RAND_RESET_I(1);
    vlSelf->Rsrc = VL_RAND_RESET_I(16);
    vlSelf->Rdst = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->register__DOT__registers[__Vi0] = VL_RAND_RESET_I(16);
    }
}

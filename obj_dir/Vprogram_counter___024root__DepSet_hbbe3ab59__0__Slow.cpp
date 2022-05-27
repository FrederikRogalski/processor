// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vprogram_counter.h for the primary calling header

#include "verilated.h"

#include "Vprogram_counter___024root.h"

VL_ATTR_COLD void Vprogram_counter___024root___settle__TOP__0(Vprogram_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->next = (0xffffU & ((IData)(1U) + (IData)(vlSelf->pc)));
}

VL_ATTR_COLD void Vprogram_counter___024root___eval_initial(Vprogram_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vprogram_counter___024root___eval_settle(Vprogram_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root___eval_settle\n"); );
    // Body
    Vprogram_counter___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vprogram_counter___024root___final(Vprogram_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root___final\n"); );
}

VL_ATTR_COLD void Vprogram_counter___024root___ctor_var_reset(Vprogram_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->abs = VL_RAND_RESET_I(1);
    vlSelf->rel = VL_RAND_RESET_I(1);
    vlSelf->alu = VL_RAND_RESET_I(16);
    vlSelf->next = VL_RAND_RESET_I(16);
    vlSelf->pc = VL_RAND_RESET_I(16);
}

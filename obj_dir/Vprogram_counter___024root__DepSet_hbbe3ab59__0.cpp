// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vprogram_counter.h for the primary calling header

#include "verilated.h"

#include "Vprogram_counter___024root.h"

VL_INLINE_OPT void Vprogram_counter___024root___sequent__TOP__0(Vprogram_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->pc = (0xffffU & ((IData)(vlSelf->abs) ? (IData)(vlSelf->alu)
                              : ((IData)(vlSelf->rel)
                                  ? ((IData)(vlSelf->alu) 
                                     + (IData)(vlSelf->pc))
                                  : (IData)(vlSelf->next))));
    vlSelf->next = (0xffffU & ((IData)(1U) + (IData)(vlSelf->pc)));
}

void Vprogram_counter___024root___eval(Vprogram_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root___eval\n"); );
    // Body
    if (((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vprogram_counter___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vprogram_counter___024root___eval_debug_assertions(Vprogram_counter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogram_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogram_counter___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->abs & 0xfeU))) {
        Verilated::overWidthError("abs");}
    if (VL_UNLIKELY((vlSelf->rel & 0xfeU))) {
        Verilated::overWidthError("rel");}
}
#endif  // VL_DEBUG

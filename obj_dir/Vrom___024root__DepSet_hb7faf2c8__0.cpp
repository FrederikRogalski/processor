// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrom.h for the primary calling header

#include "verilated.h"

#include "Vrom___024root.h"

VL_INLINE_OPT void Vrom___024root___combo__TOP__0(Vrom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->instr = ((0x20000U >= (0x3ffffU & vlSelf->addr))
                      ? vlSelf->rom__DOT__memory[(0x3ffffU 
                                                  & vlSelf->addr)]
                      : 0U);
}

void Vrom___024root___eval(Vrom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom___024root___eval\n"); );
    // Body
    Vrom___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vrom___024root___eval_debug_assertions(Vrom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG

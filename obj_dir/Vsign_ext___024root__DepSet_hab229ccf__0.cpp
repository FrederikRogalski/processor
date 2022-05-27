// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsign_ext.h for the primary calling header

#include "verilated.h"

#include "Vsign_ext___024root.h"

VL_INLINE_OPT void Vsign_ext___024root___combo__TOP__0(Vsign_ext___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsign_ext__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_ext___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->S4 = (0xfU & (IData)(vlSelf->inst));
    vlSelf->D4 = (0xfU & ((IData)(vlSelf->inst) >> 4U));
    vlSelf->SD8 = ((0xff00U & ((- (IData)((1U & ((IData)(vlSelf->inst) 
                                                 >> 7U)))) 
                               << 8U)) | (0xffU & (IData)(vlSelf->inst)));
}

void Vsign_ext___024root___eval(Vsign_ext___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsign_ext__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_ext___024root___eval\n"); );
    // Body
    Vsign_ext___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vsign_ext___024root___eval_debug_assertions(Vsign_ext___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsign_ext__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_ext___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG

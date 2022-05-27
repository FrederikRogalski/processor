// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrom.h for the primary calling header

#include "verilated.h"

#include "Vrom___024root.h"

VL_ATTR_COLD void Vrom___024root___initial__TOP__0(Vrom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom___024root___initial__TOP__0\n"); );
    // Body
    VL_WRITEF("Loading ROM\n");
    VL_READMEM_N(true, 32, 131073, 0, std::string("rom.mem")
                 ,  &(vlSelf->rom__DOT__memory), 0, ~0ULL);
}

VL_ATTR_COLD void Vrom___024root___eval_initial(Vrom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom___024root___eval_initial\n"); );
    // Body
    Vrom___024root___initial__TOP__0(vlSelf);
}

void Vrom___024root___combo__TOP__0(Vrom___024root* vlSelf);

VL_ATTR_COLD void Vrom___024root___eval_settle(Vrom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom___024root___eval_settle\n"); );
    // Body
    Vrom___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vrom___024root___final(Vrom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom___024root___final\n"); );
}

VL_ATTR_COLD void Vrom___024root___ctor_var_reset(Vrom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->addr = VL_RAND_RESET_I(32);
    vlSelf->instr = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<131073; ++__Vi0) {
        vlSelf->rom__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
}

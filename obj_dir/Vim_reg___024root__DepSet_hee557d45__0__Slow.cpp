// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vim_reg.h for the primary calling header

#include "verilated.h"

#include "Vim_reg___024root.h"

VL_ATTR_COLD void Vim_reg___024root___eval_initial(Vim_reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vim_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vim_reg___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vim_reg___024root___combo__TOP__0(Vim_reg___024root* vlSelf);

VL_ATTR_COLD void Vim_reg___024root___eval_settle(Vim_reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vim_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vim_reg___024root___eval_settle\n"); );
    // Body
    Vim_reg___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vim_reg___024root___final(Vim_reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vim_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vim_reg___024root___final\n"); );
}

VL_ATTR_COLD void Vim_reg___024root___ctor_var_reset(Vim_reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vim_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vim_reg___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->iem = VL_RAND_RESET_I(2);
    vlSelf->inst = VL_RAND_RESET_I(16);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->imm = VL_RAND_RESET_I(16);
    vlSelf->im_reg__DOT__imm_reg = VL_RAND_RESET_I(15);
}

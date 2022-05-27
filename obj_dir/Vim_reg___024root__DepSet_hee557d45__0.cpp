// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vim_reg.h for the primary calling header

#include "verilated.h"

#include "Vim_reg___024root.h"

VL_INLINE_OPT void Vim_reg___024root___sequent__TOP__0(Vim_reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vim_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vim_reg___024root___sequent__TOP__0\n"); );
    // Body
    if (vlSelf->en) {
        vlSelf->im_reg__DOT__imm_reg = (0x7fffU & (IData)(vlSelf->inst));
    }
}

VL_INLINE_OPT void Vim_reg___024root___combo__TOP__0(Vim_reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vim_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vim_reg___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->imm = ((0x8000U & (((0U == (IData)(vlSelf->iem))
                                 ? (1U & ((IData)(vlSelf->im_reg__DOT__imm_reg) 
                                          >> 0xeU))
                                 : ((1U == (IData)(vlSelf->iem))
                                     ? 0U : ((2U == (IData)(vlSelf->iem))
                                              ? (1U 
                                                 & (IData)(vlSelf->inst))
                                              : (1U 
                                                 & ((IData)(vlSelf->inst) 
                                                    >> 4U))))) 
                               << 0xfU)) | (IData)(vlSelf->im_reg__DOT__imm_reg));
}

void Vim_reg___024root___eval(Vim_reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vim_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vim_reg___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vim_reg___024root___sequent__TOP__0(vlSelf);
    }
    Vim_reg___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vim_reg___024root___eval_debug_assertions(Vim_reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vim_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vim_reg___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
    if (VL_UNLIKELY((vlSelf->iem & 0xfcU))) {
        Verilated::overWidthError("iem");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG

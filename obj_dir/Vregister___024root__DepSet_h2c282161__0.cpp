// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister.h for the primary calling header

#include "verilated.h"

#include "Vregister___024root.h"

VL_INLINE_OPT void Vregister___024root___sequent__TOP__0(Vregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root___sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vdlyvdim0__register__DOT__registers__v0;
    SData/*15:0*/ __Vdlyvval__register__DOT__registers__v0;
    CData/*0:0*/ __Vdlyvset__register__DOT__registers__v0;
    // Body
    __Vdlyvset__register__DOT__registers__v0 = 0U;
    if (vlSelf->WE) {
        __Vdlyvval__register__DOT__registers__v0 = vlSelf->WD;
        __Vdlyvset__register__DOT__registers__v0 = 1U;
        __Vdlyvdim0__register__DOT__registers__v0 = vlSelf->dst;
    }
    if (__Vdlyvset__register__DOT__registers__v0) {
        vlSelf->register__DOT__registers[__Vdlyvdim0__register__DOT__registers__v0] 
            = __Vdlyvval__register__DOT__registers__v0;
    }
}

VL_INLINE_OPT void Vregister___024root___combo__TOP__0(Vregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->Rsrc = vlSelf->register__DOT__registers
        [vlSelf->src];
    vlSelf->Rdst = vlSelf->register__DOT__registers
        [vlSelf->dst];
}

void Vregister___024root___eval(Vregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vregister___024root___sequent__TOP__0(vlSelf);
    }
    Vregister___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vregister___024root___eval_debug_assertions(Vregister___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->src & 0xf0U))) {
        Verilated::overWidthError("src");}
    if (VL_UNLIKELY((vlSelf->dst & 0xf0U))) {
        Verilated::overWidthError("dst");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->WE & 0xfeU))) {
        Verilated::overWidthError("WE");}
}
#endif  // VL_DEBUG

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vunit_pc_rom.h for the primary calling header

#include "verilated.h"

#include "Vunit_pc_rom___024root.h"

VL_INLINE_OPT void Vunit_pc_rom___024root___sequent__TOP__0(Vunit_pc_rom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit_pc_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit_pc_rom___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->unit_pc_rom__DOT__pc = vlSelf->unit_pc_rom__DOT__next;
    vlSelf->unit_pc_rom__DOT__next = ((IData)(1U) + vlSelf->unit_pc_rom__DOT__pc);
    vlSelf->out = ((0x20000U >= (0x3ffffU & vlSelf->unit_pc_rom__DOT__pc))
                    ? vlSelf->unit_pc_rom__DOT__inst_rom__DOT__memory
                   [(0x3ffffU & vlSelf->unit_pc_rom__DOT__pc)]
                    : 0U);
}

void Vunit_pc_rom___024root___eval(Vunit_pc_rom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit_pc_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit_pc_rom___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vunit_pc_rom___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vunit_pc_rom___024root___eval_debug_assertions(Vunit_pc_rom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit_pc_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit_pc_rom___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG

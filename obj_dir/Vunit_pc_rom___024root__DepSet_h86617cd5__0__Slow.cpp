// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vunit_pc_rom.h for the primary calling header

#include "verilated.h"

#include "Vunit_pc_rom___024root.h"

VL_ATTR_COLD void Vunit_pc_rom___024root___initial__TOP__0(Vunit_pc_rom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit_pc_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit_pc_rom___024root___initial__TOP__0\n"); );
    // Body
    VL_WRITEF("Loading ROM\n");
    VL_READMEM_N(true, 32, 131073, 0, std::string("rom.mem")
                 ,  &(vlSelf->unit_pc_rom__DOT__inst_rom__DOT__memory)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vunit_pc_rom___024root___settle__TOP__0(Vunit_pc_rom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit_pc_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit_pc_rom___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->unit_pc_rom__DOT__next = ((IData)(1U) + vlSelf->unit_pc_rom__DOT__pc);
    vlSelf->out = ((0x20000U >= (0x3ffffU & vlSelf->unit_pc_rom__DOT__pc))
                    ? vlSelf->unit_pc_rom__DOT__inst_rom__DOT__memory
                   [(0x3ffffU & vlSelf->unit_pc_rom__DOT__pc)]
                    : 0U);
}

VL_ATTR_COLD void Vunit_pc_rom___024root___eval_initial(Vunit_pc_rom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit_pc_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit_pc_rom___024root___eval_initial\n"); );
    // Body
    Vunit_pc_rom___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vunit_pc_rom___024root___eval_settle(Vunit_pc_rom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit_pc_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit_pc_rom___024root___eval_settle\n"); );
    // Body
    Vunit_pc_rom___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vunit_pc_rom___024root___final(Vunit_pc_rom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit_pc_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit_pc_rom___024root___final\n"); );
}

VL_ATTR_COLD void Vunit_pc_rom___024root___ctor_var_reset(Vunit_pc_rom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vunit_pc_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vunit_pc_rom___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->out = VL_RAND_RESET_I(32);
    vlSelf->unit_pc_rom__DOT__next = VL_RAND_RESET_I(32);
    vlSelf->unit_pc_rom__DOT__pc = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<131073; ++__Vi0) {
        vlSelf->unit_pc_rom__DOT__inst_rom__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
}

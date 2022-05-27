// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontrol.h for the primary calling header

#include "verilated.h"

#include "Vcontrol___024root.h"

VL_ATTR_COLD void Vcontrol___024root___initial__TOP__0(Vcontrol___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h4813dfc7__0;
    // Body
    VL_WRITEF("Loading control ROM\n");
    __Vtemp_h4813dfc7__0[0U] = 0x2e6d656dU;
    __Vtemp_h4813dfc7__0[1U] = 0x74726f6cU;
    __Vtemp_h4813dfc7__0[2U] = 0x636f6eU;
    VL_READMEM_N(true, 26, 128, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h4813dfc7__0)
                 ,  &(vlSelf->control__DOT__memory)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vcontrol___024root___eval_initial(Vcontrol___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root___eval_initial\n"); );
    // Body
    Vcontrol___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__control__DOT____Vsenitemexpr1 
        = vlSelf->control__DOT____Vsenitemexpr1;
}

void Vcontrol___024root___combo__TOP__0(Vcontrol___024root* vlSelf);

VL_ATTR_COLD void Vcontrol___024root___eval_settle(Vcontrol___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root___eval_settle\n"); );
    // Body
    Vcontrol___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vcontrol___024root___final(Vcontrol___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root___final\n"); );
}

VL_ATTR_COLD void Vcontrol___024root___ctor_var_reset(Vcontrol___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->op_code = VL_RAND_RESET_I(8);
    vlSelf->stPC = VL_RAND_RESET_I(1);
    vlSelf->WE = VL_RAND_RESET_I(1);
    vlSelf->imm = VL_RAND_RESET_I(1);
    vlSelf->iem = VL_RAND_RESET_I(2);
    vlSelf->absJmp = VL_RAND_RESET_I(1);
    vlSelf->muxB = VL_RAND_RESET_I(3);
    vlSelf->src2D = VL_RAND_RESET_I(1);
    vlSelf->muxA = VL_RAND_RESET_I(1);
    vlSelf->alu2D = VL_RAND_RESET_I(1);
    vlSelf->aluOp = VL_RAND_RESET_I(5);
    vlSelf->storeFlags = VL_RAND_RESET_I(1);
    vlSelf->branch = VL_RAND_RESET_I(3);
    vlSelf->ramSt = VL_RAND_RESET_I(1);
    vlSelf->ramLd = VL_RAND_RESET_I(1);
    vlSelf->ioW = VL_RAND_RESET_I(1);
    vlSelf->ioR = VL_RAND_RESET_I(1);
    vlSelf->Retl = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->control__DOT__memory[__Vi0] = VL_RAND_RESET_I(26);
    }
    vlSelf->control__DOT____Vsenitemexpr1 = VL_RAND_RESET_I(1);
}

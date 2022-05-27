// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontrol.h for the primary calling header

#include "verilated.h"

#include "Vcontrol___024root.h"

VL_INLINE_OPT void Vcontrol___024root___combo__TOP__0(Vcontrol___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root___combo__TOP__0\n"); );
    // Init
    IData/*25:0*/ control__DOT__current_op;
    // Body
    vlSelf->imm = (1U & ((IData)(vlSelf->op_code) >> 7U));
    control__DOT__current_op = ((0x80U & (IData)(vlSelf->op_code))
                                 ? 0U : (0x3ffffffU 
                                         & vlSelf->control__DOT__memory
                                         [(0x7fU & (IData)(vlSelf->op_code))]));
    vlSelf->stPC = (1U & (control__DOT__current_op 
                          >> 0x17U));
    vlSelf->WE = (1U & (control__DOT__current_op >> 9U));
    vlSelf->iem = (3U & (control__DOT__current_op >> 0xcU));
    vlSelf->absJmp = (1U & (control__DOT__current_op 
                            >> 0x14U));
    vlSelf->muxB = (7U & control__DOT__current_op);
    vlSelf->src2D = (1U & (control__DOT__current_op 
                           >> 3U));
    vlSelf->muxA = (1U & (control__DOT__current_op 
                          >> 0x11U));
    vlSelf->alu2D = (1U & (control__DOT__current_op 
                           >> 0xbU));
    vlSelf->aluOp = (0x1fU & (control__DOT__current_op 
                              >> 4U));
    vlSelf->storeFlags = (1U & (control__DOT__current_op 
                                >> 0xaU));
    vlSelf->branch = (7U & (control__DOT__current_op 
                            >> 0xeU));
    vlSelf->ramSt = (1U & (control__DOT__current_op 
                           >> 0x13U));
    vlSelf->ramLd = (1U & (control__DOT__current_op 
                           >> 0x12U));
    vlSelf->ioW = (1U & (control__DOT__current_op >> 0x15U));
    vlSelf->ioR = (1U & (control__DOT__current_op >> 0x16U));
    vlSelf->Retl = (1U & (control__DOT__current_op 
                          >> 0x19U));
    vlSelf->control__DOT____Vsenitemexpr1 = (1U & (control__DOT__current_op 
                                                   >> 0x18U));
}

VL_INLINE_OPT void Vcontrol___024root___sequent__TOP__0(Vcontrol___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root___sequent__TOP__0\n"); );
    // Body
    VL_STOP_MT("control.v", 46, "");
}

void Vcontrol___024root___eval(Vcontrol___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root___eval\n"); );
    // Body
    Vcontrol___024root___combo__TOP__0(vlSelf);
    if (((IData)(vlSelf->control__DOT____Vsenitemexpr1) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__control__DOT____Vsenitemexpr1)))) {
        Vcontrol___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__control__DOT____Vsenitemexpr1 
        = vlSelf->control__DOT____Vsenitemexpr1;
}

#ifdef VL_DEBUG
void Vcontrol___024root___eval_debug_assertions(Vcontrol___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG

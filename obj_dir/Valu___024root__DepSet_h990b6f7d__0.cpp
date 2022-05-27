// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "verilated.h"

#include "Valu___024root.h"

VL_INLINE_OPT void Valu___024root___combo__TOP__0(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___combo__TOP__0\n"); );
    // Body
    if (((((((((0U == (0xfU & (IData)(vlSelf->aluOp))) 
               | (1U == (0xfU & (IData)(vlSelf->aluOp)))) 
              | (2U == (0xfU & (IData)(vlSelf->aluOp)))) 
             | (3U == (0xfU & (IData)(vlSelf->aluOp)))) 
            | (4U == (0xfU & (IData)(vlSelf->aluOp)))) 
           | (5U == (0xfU & (IData)(vlSelf->aluOp)))) 
          | (6U == (0xfU & (IData)(vlSelf->aluOp)))) 
         | (7U == (0xfU & (IData)(vlSelf->aluOp))))) {
        if ((0U == (0xfU & (IData)(vlSelf->aluOp)))) {
            vlSelf->Y = vlSelf->B;
        } else if ((1U == (0xfU & (IData)(vlSelf->aluOp)))) {
            vlSelf->alu__DOT__result_with_carry = (0x1ffffU 
                                                   & (((IData)(vlSelf->A) 
                                                       + (IData)(vlSelf->B)) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelf->aluOp) 
                                                          >> 4U))));
            vlSelf->Y = (0xffffU & vlSelf->alu__DOT__result_with_carry);
            vlSelf->Carry = (1U & (vlSelf->alu__DOT__result_with_carry 
                                   >> 0x10U));
        } else if ((2U == (0xfU & (IData)(vlSelf->aluOp)))) {
            vlSelf->alu__DOT__result_with_carry = (0x1ffffU 
                                                   & (((IData)(vlSelf->A) 
                                                       - (IData)(vlSelf->B)) 
                                                      - 
                                                      (1U 
                                                       & ((IData)(vlSelf->aluOp) 
                                                          >> 4U))));
            vlSelf->Y = (0xffffU & vlSelf->alu__DOT__result_with_carry);
            vlSelf->Carry = (1U & (vlSelf->alu__DOT__result_with_carry 
                                   >> 0x10U));
        } else {
            vlSelf->Y = (0xffffU & ((3U == (0xfU & (IData)(vlSelf->aluOp)))
                                     ? ((IData)(vlSelf->A) 
                                        & (IData)(vlSelf->B))
                                     : ((4U == (0xfU 
                                                & (IData)(vlSelf->aluOp)))
                                         ? ((IData)(vlSelf->A) 
                                            | (IData)(vlSelf->B))
                                         : ((5U == 
                                             (0xfU 
                                              & (IData)(vlSelf->aluOp)))
                                             ? ((IData)(vlSelf->A) 
                                                ^ (IData)(vlSelf->B))
                                             : ((6U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->aluOp)))
                                                 ? 
                                                (~ (IData)(vlSelf->A))
                                                 : 
                                                (- (IData)(vlSelf->A)))))));
        }
    } else if ((8U == (0xfU & (IData)(vlSelf->aluOp)))) {
        vlSelf->Y = ((0xfffeU & ((IData)(vlSelf->A) 
                                 << 1U)) | (1U & ((IData)(vlSelf->aluOp) 
                                                  >> 4U)));
        vlSelf->Carry = (1U & ((IData)(vlSelf->A) >> 0xfU));
    } else if ((9U == (0xfU & (IData)(vlSelf->aluOp)))) {
        vlSelf->Y = ((0x8000U & ((IData)(vlSelf->aluOp) 
                                 << 0xbU)) | (0x7fffU 
                                              & ((IData)(vlSelf->A) 
                                                 >> 1U)));
        vlSelf->Carry = (1U & (IData)(vlSelf->A));
    } else if ((0xaU == (0xfU & (IData)(vlSelf->aluOp)))) {
        vlSelf->Y = ((0xc000U & ((- (IData)((1U & ((IData)(vlSelf->A) 
                                                   >> 0xfU)))) 
                                 << 0xeU)) | (0x3fffU 
                                              & ((IData)(vlSelf->A) 
                                                 >> 1U)));
        vlSelf->Carry = (1U & (IData)(vlSelf->A));
    } else if ((0xbU == (0xfU & (IData)(vlSelf->aluOp)))) {
        vlSelf->Y = ((0xff00U & ((IData)(vlSelf->A) 
                                 << 8U)) | (0xffU & 
                                            ((IData)(vlSelf->A) 
                                             >> 8U)));
    } else if ((0xcU == (0xfU & (IData)(vlSelf->aluOp)))) {
        vlSelf->Y = ((0xf000U & ((IData)(vlSelf->A) 
                                 << 4U)) | ((0xf00U 
                                             & ((IData)(vlSelf->A) 
                                                >> 4U)) 
                                            | ((0xf0U 
                                                & ((IData)(vlSelf->A) 
                                                   << 4U)) 
                                               | (0xfU 
                                                  & ((IData)(vlSelf->A) 
                                                     >> 4U)))));
    } else if ((0xdU == (0xfU & (IData)(vlSelf->aluOp)))) {
        vlSelf->Y = (0xffffU & ((IData)(vlSelf->A) 
                                * (IData)(vlSelf->B)));
    }
}

void Valu___024root___eval(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval\n"); );
    // Body
    Valu___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Valu___024root___eval_debug_assertions(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->aluOp & 0xe0U))) {
        Verilated::overWidthError("aluOp");}
    if (VL_UNLIKELY((vlSelf->Ci & 0xfeU))) {
        Verilated::overWidthError("Ci");}
}
#endif  // VL_DEBUG

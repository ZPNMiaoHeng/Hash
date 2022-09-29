// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsha1_top.h for the primary calling header

#include "Vsha1_top___024root.h"
#include "Vsha1_top__Syms.h"

VL_INLINE_OPT void Vsha1_top___024root___combo__TOP__4(Vsha1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha1_top___024root___combo__TOP__4\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[703]);
    if ((0U == (IData)(vlSelf->sha1_top__DOT__u_con__DOT__s_cur))) {
        ++(vlSymsp->__Vcoverage[698]);
        if (vlSelf->valid) {
            ++(vlSymsp->__Vcoverage[696]);
            vlSelf->sha1_top__DOT__u_con__DOT__s_next = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[697]);
            vlSelf->sha1_top__DOT__u_con__DOT__s_next = 0U;
        }
    } else if ((1U == (IData)(vlSelf->sha1_top__DOT__u_con__DOT__s_cur))) {
        ++(vlSymsp->__Vcoverage[701]);
        if ((0x50U > (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem))) {
            ++(vlSymsp->__Vcoverage[699]);
            vlSelf->sha1_top__DOT__u_con__DOT__s_next = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[700]);
            vlSelf->sha1_top__DOT__u_con__DOT__s_next = 0U;
        }
    } else {
        ++(vlSymsp->__Vcoverage[702]);
        vlSelf->sha1_top__DOT__u_con__DOT__s_next = 0U;
    }
    if ((1U & ((IData)(vlSelf->sha1_top__DOT__u_con__DOT__s_next) 
               ^ (IData)(vlSelf->sha1_top__DOT__u_con__DOT____Vtogcov__s_next)))) {
        ++(vlSymsp->__Vcoverage[691]);
        vlSelf->sha1_top__DOT__u_con__DOT____Vtogcov__s_next 
            = ((2U & (IData)(vlSelf->sha1_top__DOT__u_con__DOT____Vtogcov__s_next)) 
               | (1U & (IData)(vlSelf->sha1_top__DOT__u_con__DOT__s_next)));
    }
    if ((2U & ((IData)(vlSelf->sha1_top__DOT__u_con__DOT__s_next) 
               ^ (IData)(vlSelf->sha1_top__DOT__u_con__DOT____Vtogcov__s_next)))) {
        ++(vlSymsp->__Vcoverage[692]);
        vlSelf->sha1_top__DOT__u_con__DOT____Vtogcov__s_next 
            = ((1U & (IData)(vlSelf->sha1_top__DOT__u_con__DOT____Vtogcov__s_next)) 
               | (2U & (IData)(vlSelf->sha1_top__DOT__u_con__DOT__s_next)));
    }
}

void Vsha1_top___024root___combo__TOP__1(Vsha1_top___024root* vlSelf);
void Vsha1_top___024root___sequent__TOP__3(Vsha1_top___024root* vlSelf);

void Vsha1_top___024root___eval(Vsha1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha1_top___024root___eval\n"); );
    // Body
    Vsha1_top___024root___combo__TOP__1(vlSelf);
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst_n)) & (IData)(vlSelf->__Vclklast__TOP__rst_n)))) {
        Vsha1_top___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vsha1_top___024root___combo__TOP__4(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
}

QData Vsha1_top___024root___change_request_1(Vsha1_top___024root* vlSelf);

VL_INLINE_OPT QData Vsha1_top___024root___change_request(Vsha1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha1_top___024root___change_request\n"); );
    // Body
    return (Vsha1_top___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vsha1_top___024root___change_request_1(Vsha1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha1_top___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vsha1_top___024root___eval_debug_assertions(Vsha1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha1_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->valid & 0xfeU))) {
        Verilated::overWidthError("valid");}
}
#endif  // VL_DEBUG

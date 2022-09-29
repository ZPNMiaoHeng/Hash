// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsha1_w.h for the primary calling header

#include "Vsha1_w___024root.h"
#include "Vsha1_w__Syms.h"

//==========

VL_INLINE_OPT void Vsha1_w___024root___combo__TOP__1(Vsha1_w___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_w__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha1_w___024root___combo__TOP__1\n"); );
    // Body
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->sha1_w__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->sha1_w__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->rst_n) ^ (IData)(vlSelf->sha1_w__DOT____Vtogcov__rst_n))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->sha1_w__DOT____Vtogcov__rst_n = vlSelf->rst_n;
    }
    if (((IData)(vlSelf->valid_w) ^ (IData)(vlSelf->sha1_w__DOT____Vtogcov__valid_w))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->sha1_w__DOT____Vtogcov__valid_w = vlSelf->valid_w;
    }
    vlSelf->ready_w = (0x4fU == (IData)(vlSelf->t));
    if ((1U & ((IData)(vlSelf->t) ^ (IData)(vlSelf->sha1_w__DOT____Vtogcov__t)))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->sha1_w__DOT____Vtogcov__t = ((0xfeU 
                                              & (IData)(vlSelf->sha1_w__DOT____Vtogcov__t)) 
                                             | (1U 
                                                & (IData)(vlSelf->t)));
    }
    if ((2U & ((IData)(vlSelf->t) ^ (IData)(vlSelf->sha1_w__DOT____Vtogcov__t)))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->sha1_w__DOT____Vtogcov__t = ((0xfdU 
                                              & (IData)(vlSelf->sha1_w__DOT____Vtogcov__t)) 
                                             | (2U 
                                                & (IData)(vlSelf->t)));
    }
    if ((4U & ((IData)(vlSelf->t) ^ (IData)(vlSelf->sha1_w__DOT____Vtogcov__t)))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->sha1_w__DOT____Vtogcov__t = ((0xfbU 
                                              & (IData)(vlSelf->sha1_w__DOT____Vtogcov__t)) 
                                             | (4U 
                                                & (IData)(vlSelf->t)));
    }
    if ((8U & ((IData)(vlSelf->t) ^ (IData)(vlSelf->sha1_w__DOT____Vtogcov__t)))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->sha1_w__DOT____Vtogcov__t = ((0xf7U 
                                              & (IData)(vlSelf->sha1_w__DOT____Vtogcov__t)) 
                                             | (8U 
                                                & (IData)(vlSelf->t)));
    }
    if ((0x10U & ((IData)(vlSelf->t) ^ (IData)(vlSelf->sha1_w__DOT____Vtogcov__t)))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->sha1_w__DOT____Vtogcov__t = ((0xefU 
                                              & (IData)(vlSelf->sha1_w__DOT____Vtogcov__t)) 
                                             | (0x10U 
                                                & (IData)(vlSelf->t)));
    }
    if ((0x20U & ((IData)(vlSelf->t) ^ (IData)(vlSelf->sha1_w__DOT____Vtogcov__t)))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->sha1_w__DOT____Vtogcov__t = ((0xdfU 
                                              & (IData)(vlSelf->sha1_w__DOT____Vtogcov__t)) 
                                             | (0x20U 
                                                & (IData)(vlSelf->t)));
    }
    if ((0x40U & ((IData)(vlSelf->t) ^ (IData)(vlSelf->sha1_w__DOT____Vtogcov__t)))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->sha1_w__DOT____Vtogcov__t = ((0xbfU 
                                              & (IData)(vlSelf->sha1_w__DOT____Vtogcov__t)) 
                                             | (0x40U 
                                                & (IData)(vlSelf->t)));
    }
    if ((0x80U & ((IData)(vlSelf->t) ^ (IData)(vlSelf->sha1_w__DOT____Vtogcov__t)))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->sha1_w__DOT____Vtogcov__t = ((0x7fU 
                                              & (IData)(vlSelf->sha1_w__DOT____Vtogcov__t)) 
                                             | (0x80U 
                                                & (IData)(vlSelf->t)));
    }
    if (((IData)(vlSelf->ready_w) ^ (IData)(vlSelf->sha1_w__DOT____Vtogcov__ready_w))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->sha1_w__DOT____Vtogcov__ready_w = vlSelf->ready_w;
    }
}

VL_INLINE_OPT void Vsha1_w___024root___sequent__TOP__3(Vsha1_w___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_w__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha1_w___024root___sequent__TOP__3\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[48]);
    if (vlSelf->rst_n) {
        if (((0U == (IData)(vlSelf->t)) & (IData)(vlSelf->valid_w))) {
            ++(vlSymsp->__Vcoverage[46]);
            vlSelf->sha1_w__DOT__din_temp[0U] = vlSelf->din[0U];
            vlSelf->sha1_w__DOT__din_temp[1U] = vlSelf->din[1U];
            vlSelf->sha1_w__DOT__din_temp[2U] = vlSelf->din[2U];
            vlSelf->sha1_w__DOT__din_temp[3U] = vlSelf->din[3U];
            vlSelf->sha1_w__DOT__din_temp[4U] = vlSelf->din[4U];
            vlSelf->sha1_w__DOT__din_temp[5U] = vlSelf->din[5U];
            vlSelf->sha1_w__DOT__din_temp[6U] = vlSelf->din[6U];
            vlSelf->sha1_w__DOT__din_temp[7U] = vlSelf->din[7U];
            vlSelf->sha1_w__DOT__din_temp[8U] = vlSelf->din[8U];
            vlSelf->sha1_w__DOT__din_temp[9U] = vlSelf->din[9U];
            vlSelf->sha1_w__DOT__din_temp[0xaU] = vlSelf->din[0xaU];
            vlSelf->sha1_w__DOT__din_temp[0xbU] = vlSelf->din[0xbU];
            vlSelf->sha1_w__DOT__din_temp[0xcU] = vlSelf->din[0xcU];
            vlSelf->sha1_w__DOT__din_temp[0xdU] = vlSelf->din[0xdU];
            vlSelf->sha1_w__DOT__din_temp[0xeU] = vlSelf->din[0xeU];
            vlSelf->sha1_w__DOT__din_temp[0xfU] = vlSelf->din[0xfU];
        } else if (((0U < (IData)(vlSelf->t)) & (0x4fU 
                                                 >= (IData)(vlSelf->t)))) {
            ++(vlSymsp->__Vcoverage[44]);
            vlSelf->sha1_w__DOT__din_temp[0U] = vlSelf->sha1_w__DOT__din_temp_shift[0U];
            vlSelf->sha1_w__DOT__din_temp[1U] = vlSelf->sha1_w__DOT__din_temp_shift[1U];
            vlSelf->sha1_w__DOT__din_temp[2U] = vlSelf->sha1_w__DOT__din_temp_shift[2U];
            vlSelf->sha1_w__DOT__din_temp[3U] = vlSelf->sha1_w__DOT__din_temp_shift[3U];
            vlSelf->sha1_w__DOT__din_temp[4U] = vlSelf->sha1_w__DOT__din_temp_shift[4U];
            vlSelf->sha1_w__DOT__din_temp[5U] = vlSelf->sha1_w__DOT__din_temp_shift[5U];
            vlSelf->sha1_w__DOT__din_temp[6U] = vlSelf->sha1_w__DOT__din_temp_shift[6U];
            vlSelf->sha1_w__DOT__din_temp[7U] = vlSelf->sha1_w__DOT__din_temp_shift[7U];
            vlSelf->sha1_w__DOT__din_temp[8U] = vlSelf->sha1_w__DOT__din_temp_shift[8U];
            vlSelf->sha1_w__DOT__din_temp[9U] = vlSelf->sha1_w__DOT__din_temp_shift[9U];
            vlSelf->sha1_w__DOT__din_temp[0xaU] = vlSelf->sha1_w__DOT__din_temp_shift[0xaU];
            vlSelf->sha1_w__DOT__din_temp[0xbU] = vlSelf->sha1_w__DOT__din_temp_shift[0xbU];
            vlSelf->sha1_w__DOT__din_temp[0xcU] = vlSelf->sha1_w__DOT__din_temp_shift[0xcU];
            vlSelf->sha1_w__DOT__din_temp[0xdU] = vlSelf->sha1_w__DOT__din_temp_shift[0xdU];
            vlSelf->sha1_w__DOT__din_temp[0xeU] = vlSelf->sha1_w__DOT__din_temp_shift[0xeU];
            vlSelf->sha1_w__DOT__din_temp[0xfU] = vlSelf->sha1_w__DOT__din_temp_shift[0xfU];
        } else {
            ++(vlSymsp->__Vcoverage[45]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->sha1_w__DOT__din_temp[0U] = 0U;
        vlSelf->sha1_w__DOT__din_temp[1U] = 0U;
        vlSelf->sha1_w__DOT__din_temp[2U] = 0U;
        vlSelf->sha1_w__DOT__din_temp[3U] = 0U;
        vlSelf->sha1_w__DOT__din_temp[4U] = 0U;
        vlSelf->sha1_w__DOT__din_temp[5U] = 0U;
        vlSelf->sha1_w__DOT__din_temp[6U] = 0U;
        vlSelf->sha1_w__DOT__din_temp[7U] = 0U;
        vlSelf->sha1_w__DOT__din_temp[8U] = 0U;
        vlSelf->sha1_w__DOT__din_temp[9U] = 0U;
        vlSelf->sha1_w__DOT__din_temp[0xaU] = 0U;
        vlSelf->sha1_w__DOT__din_temp[0xbU] = 0U;
        vlSelf->sha1_w__DOT__din_temp[0xcU] = 0U;
        vlSelf->sha1_w__DOT__din_temp[0xdU] = 0U;
        vlSelf->sha1_w__DOT__din_temp[0xeU] = 0U;
        vlSelf->sha1_w__DOT__din_temp[0xfU] = 0U;
    }
    vlSelf->sha1_w__DOT__w_gen_temp = (((vlSelf->sha1_w__DOT__din_temp[0xfU] 
                                         ^ vlSelf->sha1_w__DOT__din_temp[0xdU]) 
                                        ^ vlSelf->sha1_w__DOT__din_temp[7U]) 
                                       ^ vlSelf->sha1_w__DOT__din_temp[2U]);
    if ((1U & (vlSelf->sha1_w__DOT__w_gen_temp ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfffffffeU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (1U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((2U & (vlSelf->sha1_w__DOT__w_gen_temp ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfffffffdU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (2U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((4U & (vlSelf->sha1_w__DOT__w_gen_temp ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfffffffbU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (4U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((8U & (vlSelf->sha1_w__DOT__w_gen_temp ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfffffff7U & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (8U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x10U & (vlSelf->sha1_w__DOT__w_gen_temp ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xffffffefU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x10U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x20U & (vlSelf->sha1_w__DOT__w_gen_temp ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xffffffdfU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x20U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x40U & (vlSelf->sha1_w__DOT__w_gen_temp ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xffffffbfU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x40U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x80U & (vlSelf->sha1_w__DOT__w_gen_temp ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xffffff7fU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x80U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x100U & (vlSelf->sha1_w__DOT__w_gen_temp 
                   ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfffffeffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x100U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x200U & (vlSelf->sha1_w__DOT__w_gen_temp 
                   ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfffffdffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x200U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x400U & (vlSelf->sha1_w__DOT__w_gen_temp 
                   ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfffffbffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x400U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x800U & (vlSelf->sha1_w__DOT__w_gen_temp 
                   ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfffff7ffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x800U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x1000U & (vlSelf->sha1_w__DOT__w_gen_temp 
                    ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xffffefffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x1000U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x2000U & (vlSelf->sha1_w__DOT__w_gen_temp 
                    ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xffffdfffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x2000U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x4000U & (vlSelf->sha1_w__DOT__w_gen_temp 
                    ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xffffbfffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x4000U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x8000U & (vlSelf->sha1_w__DOT__w_gen_temp 
                    ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xffff7fffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x8000U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x10000U & (vlSelf->sha1_w__DOT__w_gen_temp 
                     ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfffeffffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x10000U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x20000U & (vlSelf->sha1_w__DOT__w_gen_temp 
                     ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfffdffffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x20000U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x40000U & (vlSelf->sha1_w__DOT__w_gen_temp 
                     ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfffbffffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x40000U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x80000U & (vlSelf->sha1_w__DOT__w_gen_temp 
                     ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfff7ffffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x80000U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x100000U & (vlSelf->sha1_w__DOT__w_gen_temp 
                      ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xffefffffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x100000U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x200000U & (vlSelf->sha1_w__DOT__w_gen_temp 
                      ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xffdfffffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x200000U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x400000U & (vlSelf->sha1_w__DOT__w_gen_temp 
                      ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xffbfffffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x400000U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x800000U & (vlSelf->sha1_w__DOT__w_gen_temp 
                      ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xff7fffffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x800000U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x1000000U & (vlSelf->sha1_w__DOT__w_gen_temp 
                       ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfeffffffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x1000000U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x2000000U & (vlSelf->sha1_w__DOT__w_gen_temp 
                       ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfdffffffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x2000000U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x4000000U & (vlSelf->sha1_w__DOT__w_gen_temp 
                       ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfbffffffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x4000000U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x8000000U & (vlSelf->sha1_w__DOT__w_gen_temp 
                       ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xf7ffffffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x8000000U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x10000000U & (vlSelf->sha1_w__DOT__w_gen_temp 
                        ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xefffffffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x10000000U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x20000000U & (vlSelf->sha1_w__DOT__w_gen_temp 
                        ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xdfffffffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x20000000U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x40000000U & (vlSelf->sha1_w__DOT__w_gen_temp 
                        ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xbfffffffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x40000000U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if (((vlSelf->sha1_w__DOT__w_gen_temp ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0x7fffffffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x80000000U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    vlSelf->sha1_w__DOT__w_gen = ((vlSelf->sha1_w__DOT__w_gen_temp 
                                   << 1U) | (vlSelf->sha1_w__DOT__w_gen_temp 
                                             >> 0x1fU));
    if ((1U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xfffffffeU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (1U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((2U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xfffffffdU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (2U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((4U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xfffffffbU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (4U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((8U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xfffffff7U 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (8U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x10U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xffffffefU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x10U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x20U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xffffffdfU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x20U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x40U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xffffffbfU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x40U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x80U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xffffff7fU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x80U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x100U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xfffffeffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x100U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x200U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xfffffdffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x200U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x400U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xfffffbffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x400U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x800U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xfffff7ffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x800U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x1000U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xffffefffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x1000U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x2000U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xffffdfffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x2000U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x4000U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xffffbfffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x4000U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x8000U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xffff7fffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x8000U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x10000U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xfffeffffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x10000U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x20000U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xfffdffffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x20000U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x40000U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xfffbffffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x40000U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x80000U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xfff7ffffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x80000U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x100000U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xffefffffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x100000U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x200000U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xffdfffffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x200000U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x400000U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xffbfffffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x400000U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x800000U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xff7fffffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x800000U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x1000000U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xfeffffffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x1000000U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x2000000U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xfdffffffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x2000000U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x4000000U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xfbffffffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x4000000U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x8000000U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xf7ffffffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x8000000U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x10000000U & (vlSelf->sha1_w__DOT__w_gen 
                        ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xefffffffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x10000000U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x20000000U & (vlSelf->sha1_w__DOT__w_gen 
                        ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xdfffffffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x20000000U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x40000000U & (vlSelf->sha1_w__DOT__w_gen 
                        ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xbfffffffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x40000000U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if (((vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0x7fffffffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x80000000U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
}

extern const VlWide<16>/*511:0*/ Vsha1_w__ConstPool__CONST_93e1b771_0;

VL_INLINE_OPT void Vsha1_w___024root___combo__TOP__4(Vsha1_w___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_w__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha1_w___024root___combo__TOP__4\n"); );
    // Body
    if ((0xfU >= (IData)(vlSelf->t))) {
        vlSelf->sha1_w__DOT__din_temp_shift[0U] = vlSelf->sha1_w__DOT__din_temp[0xfU];
        vlSelf->sha1_w__DOT__din_temp_shift[1U] = vlSelf->sha1_w__DOT__din_temp[0U];
        vlSelf->sha1_w__DOT__din_temp_shift[2U] = vlSelf->sha1_w__DOT__din_temp[1U];
        vlSelf->sha1_w__DOT__din_temp_shift[3U] = vlSelf->sha1_w__DOT__din_temp[2U];
        vlSelf->sha1_w__DOT__din_temp_shift[4U] = vlSelf->sha1_w__DOT__din_temp[3U];
        vlSelf->sha1_w__DOT__din_temp_shift[5U] = vlSelf->sha1_w__DOT__din_temp[4U];
        vlSelf->sha1_w__DOT__din_temp_shift[6U] = vlSelf->sha1_w__DOT__din_temp[5U];
        vlSelf->sha1_w__DOT__din_temp_shift[7U] = vlSelf->sha1_w__DOT__din_temp[6U];
        vlSelf->sha1_w__DOT__din_temp_shift[8U] = vlSelf->sha1_w__DOT__din_temp[7U];
        vlSelf->sha1_w__DOT__din_temp_shift[9U] = vlSelf->sha1_w__DOT__din_temp[8U];
        vlSelf->sha1_w__DOT__din_temp_shift[0xaU] = 
            vlSelf->sha1_w__DOT__din_temp[9U];
        vlSelf->sha1_w__DOT__din_temp_shift[0xbU] = 
            vlSelf->sha1_w__DOT__din_temp[0xaU];
        vlSelf->sha1_w__DOT__din_temp_shift[0xcU] = 
            vlSelf->sha1_w__DOT__din_temp[0xbU];
        vlSelf->sha1_w__DOT__din_temp_shift[0xdU] = 
            vlSelf->sha1_w__DOT__din_temp[0xcU];
        vlSelf->sha1_w__DOT__din_temp_shift[0xeU] = 
            vlSelf->sha1_w__DOT__din_temp[0xdU];
        vlSelf->sha1_w__DOT__din_temp_shift[0xfU] = 
            vlSelf->sha1_w__DOT__din_temp[0xeU];
        vlSelf->w = vlSelf->sha1_w__DOT__din_temp[0xfU];
    } else {
        vlSelf->sha1_w__DOT__din_temp_shift[0U] = (
                                                   ((0x10U 
                                                     <= (IData)(vlSelf->t)) 
                                                    & (0x4fU 
                                                       >= (IData)(vlSelf->t)))
                                                    ? vlSelf->sha1_w__DOT__w_gen
                                                    : 
                                                   Vsha1_w__ConstPool__CONST_93e1b771_0[0U]);
        vlSelf->sha1_w__DOT__din_temp_shift[1U] = (
                                                   ((0x10U 
                                                     <= (IData)(vlSelf->t)) 
                                                    & (0x4fU 
                                                       >= (IData)(vlSelf->t)))
                                                    ? 
                                                   vlSelf->sha1_w__DOT__din_temp[0U]
                                                    : 
                                                   Vsha1_w__ConstPool__CONST_93e1b771_0[1U]);
        vlSelf->sha1_w__DOT__din_temp_shift[2U] = (
                                                   ((0x10U 
                                                     <= (IData)(vlSelf->t)) 
                                                    & (0x4fU 
                                                       >= (IData)(vlSelf->t)))
                                                    ? 
                                                   vlSelf->sha1_w__DOT__din_temp[1U]
                                                    : 
                                                   Vsha1_w__ConstPool__CONST_93e1b771_0[2U]);
        vlSelf->sha1_w__DOT__din_temp_shift[3U] = (
                                                   ((0x10U 
                                                     <= (IData)(vlSelf->t)) 
                                                    & (0x4fU 
                                                       >= (IData)(vlSelf->t)))
                                                    ? 
                                                   vlSelf->sha1_w__DOT__din_temp[2U]
                                                    : 
                                                   Vsha1_w__ConstPool__CONST_93e1b771_0[3U]);
        vlSelf->sha1_w__DOT__din_temp_shift[4U] = (
                                                   ((0x10U 
                                                     <= (IData)(vlSelf->t)) 
                                                    & (0x4fU 
                                                       >= (IData)(vlSelf->t)))
                                                    ? 
                                                   vlSelf->sha1_w__DOT__din_temp[3U]
                                                    : 
                                                   Vsha1_w__ConstPool__CONST_93e1b771_0[4U]);
        vlSelf->sha1_w__DOT__din_temp_shift[5U] = (
                                                   ((0x10U 
                                                     <= (IData)(vlSelf->t)) 
                                                    & (0x4fU 
                                                       >= (IData)(vlSelf->t)))
                                                    ? 
                                                   vlSelf->sha1_w__DOT__din_temp[4U]
                                                    : 
                                                   Vsha1_w__ConstPool__CONST_93e1b771_0[5U]);
        vlSelf->sha1_w__DOT__din_temp_shift[6U] = (
                                                   ((0x10U 
                                                     <= (IData)(vlSelf->t)) 
                                                    & (0x4fU 
                                                       >= (IData)(vlSelf->t)))
                                                    ? 
                                                   vlSelf->sha1_w__DOT__din_temp[5U]
                                                    : 
                                                   Vsha1_w__ConstPool__CONST_93e1b771_0[6U]);
        vlSelf->sha1_w__DOT__din_temp_shift[7U] = (
                                                   ((0x10U 
                                                     <= (IData)(vlSelf->t)) 
                                                    & (0x4fU 
                                                       >= (IData)(vlSelf->t)))
                                                    ? 
                                                   vlSelf->sha1_w__DOT__din_temp[6U]
                                                    : 
                                                   Vsha1_w__ConstPool__CONST_93e1b771_0[7U]);
        vlSelf->sha1_w__DOT__din_temp_shift[8U] = (
                                                   ((0x10U 
                                                     <= (IData)(vlSelf->t)) 
                                                    & (0x4fU 
                                                       >= (IData)(vlSelf->t)))
                                                    ? 
                                                   vlSelf->sha1_w__DOT__din_temp[7U]
                                                    : 
                                                   Vsha1_w__ConstPool__CONST_93e1b771_0[8U]);
        vlSelf->sha1_w__DOT__din_temp_shift[9U] = (
                                                   ((0x10U 
                                                     <= (IData)(vlSelf->t)) 
                                                    & (0x4fU 
                                                       >= (IData)(vlSelf->t)))
                                                    ? 
                                                   vlSelf->sha1_w__DOT__din_temp[8U]
                                                    : 
                                                   Vsha1_w__ConstPool__CONST_93e1b771_0[9U]);
        vlSelf->sha1_w__DOT__din_temp_shift[0xaU] = 
            (((0x10U <= (IData)(vlSelf->t)) & (0x4fU 
                                               >= (IData)(vlSelf->t)))
              ? vlSelf->sha1_w__DOT__din_temp[9U] : 
             Vsha1_w__ConstPool__CONST_93e1b771_0[0xaU]);
        vlSelf->sha1_w__DOT__din_temp_shift[0xbU] = 
            (((0x10U <= (IData)(vlSelf->t)) & (0x4fU 
                                               >= (IData)(vlSelf->t)))
              ? vlSelf->sha1_w__DOT__din_temp[0xaU]
              : Vsha1_w__ConstPool__CONST_93e1b771_0[0xbU]);
        vlSelf->sha1_w__DOT__din_temp_shift[0xcU] = 
            (((0x10U <= (IData)(vlSelf->t)) & (0x4fU 
                                               >= (IData)(vlSelf->t)))
              ? vlSelf->sha1_w__DOT__din_temp[0xbU]
              : Vsha1_w__ConstPool__CONST_93e1b771_0[0xcU]);
        vlSelf->sha1_w__DOT__din_temp_shift[0xdU] = 
            (((0x10U <= (IData)(vlSelf->t)) & (0x4fU 
                                               >= (IData)(vlSelf->t)))
              ? vlSelf->sha1_w__DOT__din_temp[0xcU]
              : Vsha1_w__ConstPool__CONST_93e1b771_0[0xdU]);
        vlSelf->sha1_w__DOT__din_temp_shift[0xeU] = 
            (((0x10U <= (IData)(vlSelf->t)) & (0x4fU 
                                               >= (IData)(vlSelf->t)))
              ? vlSelf->sha1_w__DOT__din_temp[0xdU]
              : Vsha1_w__ConstPool__CONST_93e1b771_0[0xeU]);
        vlSelf->sha1_w__DOT__din_temp_shift[0xfU] = 
            (((0x10U <= (IData)(vlSelf->t)) & (0x4fU 
                                               >= (IData)(vlSelf->t)))
              ? vlSelf->sha1_w__DOT__din_temp[0xeU]
              : Vsha1_w__ConstPool__CONST_93e1b771_0[0xfU]);
        vlSelf->w = vlSelf->sha1_w__DOT__w_gen;
    }
    if ((1U & (vlSelf->w ^ vlSelf->sha1_w__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->sha1_w__DOT____Vtogcov__w = ((0xfffffffeU 
                                              & vlSelf->sha1_w__DOT____Vtogcov__w) 
                                             | (1U 
                                                & vlSelf->w));
    }
    if ((2U & (vlSelf->w ^ vlSelf->sha1_w__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->sha1_w__DOT____Vtogcov__w = ((0xfffffffdU 
                                              & vlSelf->sha1_w__DOT____Vtogcov__w) 
                                             | (2U 
                                                & vlSelf->w));
    }
    if ((4U & (vlSelf->w ^ vlSelf->sha1_w__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->sha1_w__DOT____Vtogcov__w = ((0xfffffffbU 
                                              & vlSelf->sha1_w__DOT____Vtogcov__w) 
                                             | (4U 
                                                & vlSelf->w));
    }
    if ((8U & (vlSelf->w ^ vlSelf->sha1_w__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->sha1_w__DOT____Vtogcov__w = ((0xfffffff7U 
                                              & vlSelf->sha1_w__DOT____Vtogcov__w) 
                                             | (8U 
                                                & vlSelf->w));
    }
    if ((0x10U & (vlSelf->w ^ vlSelf->sha1_w__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->sha1_w__DOT____Vtogcov__w = ((0xffffffefU 
                                              & vlSelf->sha1_w__DOT____Vtogcov__w) 
                                             | (0x10U 
                                                & vlSelf->w));
    }
    if ((0x20U & (vlSelf->w ^ vlSelf->sha1_w__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->sha1_w__DOT____Vtogcov__w = ((0xffffffdfU 
                                              & vlSelf->sha1_w__DOT____Vtogcov__w) 
                                             | (0x20U 
                                                & vlSelf->w));
    }
    if ((0x40U & (vlSelf->w ^ vlSelf->sha1_w__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->sha1_w__DOT____Vtogcov__w = ((0xffffffbfU 
                                              & vlSelf->sha1_w__DOT____Vtogcov__w) 
                                             | (0x40U 
                                                & vlSelf->w));
    }
    if ((0x80U & (vlSelf->w ^ vlSelf->sha1_w__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->sha1_w__DOT____Vtogcov__w = ((0xffffff7fU 
                                              & vlSelf->sha1_w__DOT____Vtogcov__w) 
                                             | (0x80U 
                                                & vlSelf->w));
    }
    if ((0x100U & (vlSelf->w ^ vlSelf->sha1_w__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->sha1_w__DOT____Vtogcov__w = ((0xfffffeffU 
                                              & vlSelf->sha1_w__DOT____Vtogcov__w) 
                                             | (0x100U 
                                                & vlSelf->w));
    }
    if ((0x200U & (vlSelf->w ^ vlSelf->sha1_w__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->sha1_w__DOT____Vtogcov__w = ((0xfffffdffU 
                                              & vlSelf->sha1_w__DOT____Vtogcov__w) 
                                             | (0x200U 
                                                & vlSelf->w));
    }
    if ((0x400U & (vlSelf->w ^ vlSelf->sha1_w__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->sha1_w__DOT____Vtogcov__w = ((0xfffffbffU 
                                              & vlSelf->sha1_w__DOT____Vtogcov__w) 
                                             | (0x400U 
                                                & vlSelf->w));
    }
    if ((0x800U & (vlSelf->w ^ vlSelf->sha1_w__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->sha1_w__DOT____Vtogcov__w = ((0xfffff7ffU 
                                              & vlSelf->sha1_w__DOT____Vtogcov__w) 
                                             | (0x800U 
                                                & vlSelf->w));
    }
    if ((0x1000U & (vlSelf->w ^ vlSelf->sha1_w__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->sha1_w__DOT____Vtogcov__w = ((0xffffefffU 
                                              & vlSelf->sha1_w__DOT____Vtogcov__w) 
                                             | (0x1000U 
                                                & vlSelf->w));
    }
    if ((0x2000U & (vlSelf->w ^ vlSelf->sha1_w__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->sha1_w__DOT____Vtogcov__w = ((0xffffdfffU 
                                              & vlSelf->sha1_w__DOT____Vtogcov__w) 
                                             | (0x2000U 
                                                & vlSelf->w));
    }
    if ((0x4000U & (vlSelf->w ^ vlSelf->sha1_w__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->sha1_w__DOT____Vtogcov__w = ((0xffffbfffU 
                                              & vlSelf->sha1_w__DOT____Vtogcov__w) 
                                             | (0x4000U 
                                                & vlSelf->w));
    }
    if ((0x8000U & (vlSelf->w ^ vlSelf->sha1_w__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->sha1_w__DOT____Vtogcov__w = ((0xffff7fffU 
                                              & vlSelf->sha1_w__DOT____Vtogcov__w) 
                                             | (0x8000U 
                                                & vlSelf->w));
    }
    if ((0x10000U & (vlSelf->w ^ vlSelf->sha1_w__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->sha1_w__DOT____Vtogcov__w = ((0xfffeffffU 
                                              & vlSelf->sha1_w__DOT____Vtogcov__w) 
                                             | (0x10000U 
                                                & vlSelf->w));
    }
    if ((0x20000U & (vlSelf->w ^ vlSelf->sha1_w__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->sha1_w__DOT____Vtogcov__w = ((0xfffdffffU 
                                              & vlSelf->sha1_w__DOT____Vtogcov__w) 
                                             | (0x20000U 
                                                & vlSelf->w));
    }
    if ((0x40000U & (vlSelf->w ^ vlSelf->sha1_w__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->sha1_w__DOT____Vtogcov__w = ((0xfffbffffU 
                                              & vlSelf->sha1_w__DOT____Vtogcov__w) 
                                             | (0x40000U 
                                                & vlSelf->w));
    }
    if ((0x80000U & (vlSelf->w ^ vlSelf->sha1_w__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->sha1_w__DOT____Vtogcov__w = ((0xfff7ffffU 
                                              & vlSelf->sha1_w__DOT____Vtogcov__w) 
                                             | (0x80000U 
                                                & vlSelf->w));
    }
    if ((0x100000U & (vlSelf->w ^ vlSelf->sha1_w__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->sha1_w__DOT____Vtogcov__w = ((0xffefffffU 
                                              & vlSelf->sha1_w__DOT____Vtogcov__w) 
                                             | (0x100000U 
                                                & vlSelf->w));
    }
    if ((0x200000U & (vlSelf->w ^ vlSelf->sha1_w__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->sha1_w__DOT____Vtogcov__w = ((0xffdfffffU 
                                              & vlSelf->sha1_w__DOT____Vtogcov__w) 
                                             | (0x200000U 
                                                & vlSelf->w));
    }
    if ((0x400000U & (vlSelf->w ^ vlSelf->sha1_w__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->sha1_w__DOT____Vtogcov__w = ((0xffbfffffU 
                                              & vlSelf->sha1_w__DOT____Vtogcov__w) 
                                             | (0x400000U 
                                                & vlSelf->w));
    }
    if ((0x800000U & (vlSelf->w ^ vlSelf->sha1_w__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->sha1_w__DOT____Vtogcov__w = ((0xff7fffffU 
                                              & vlSelf->sha1_w__DOT____Vtogcov__w) 
                                             | (0x800000U 
                                                & vlSelf->w));
    }
    if ((0x1000000U & (vlSelf->w ^ vlSelf->sha1_w__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->sha1_w__DOT____Vtogcov__w = ((0xfeffffffU 
                                              & vlSelf->sha1_w__DOT____Vtogcov__w) 
                                             | (0x1000000U 
                                                & vlSelf->w));
    }
    if ((0x2000000U & (vlSelf->w ^ vlSelf->sha1_w__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->sha1_w__DOT____Vtogcov__w = ((0xfdffffffU 
                                              & vlSelf->sha1_w__DOT____Vtogcov__w) 
                                             | (0x2000000U 
                                                & vlSelf->w));
    }
    if ((0x4000000U & (vlSelf->w ^ vlSelf->sha1_w__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->sha1_w__DOT____Vtogcov__w = ((0xfbffffffU 
                                              & vlSelf->sha1_w__DOT____Vtogcov__w) 
                                             | (0x4000000U 
                                                & vlSelf->w));
    }
    if ((0x8000000U & (vlSelf->w ^ vlSelf->sha1_w__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->sha1_w__DOT____Vtogcov__w = ((0xf7ffffffU 
                                              & vlSelf->sha1_w__DOT____Vtogcov__w) 
                                             | (0x8000000U 
                                                & vlSelf->w));
    }
    if ((0x10000000U & (vlSelf->w ^ vlSelf->sha1_w__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->sha1_w__DOT____Vtogcov__w = ((0xefffffffU 
                                              & vlSelf->sha1_w__DOT____Vtogcov__w) 
                                             | (0x10000000U 
                                                & vlSelf->w));
    }
    if ((0x20000000U & (vlSelf->w ^ vlSelf->sha1_w__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->sha1_w__DOT____Vtogcov__w = ((0xdfffffffU 
                                              & vlSelf->sha1_w__DOT____Vtogcov__w) 
                                             | (0x20000000U 
                                                & vlSelf->w));
    }
    if ((0x40000000U & (vlSelf->w ^ vlSelf->sha1_w__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->sha1_w__DOT____Vtogcov__w = ((0xbfffffffU 
                                              & vlSelf->sha1_w__DOT____Vtogcov__w) 
                                             | (0x40000000U 
                                                & vlSelf->w));
    }
    if (((vlSelf->w ^ vlSelf->sha1_w__DOT____Vtogcov__w) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->sha1_w__DOT____Vtogcov__w = ((0x7fffffffU 
                                              & vlSelf->sha1_w__DOT____Vtogcov__w) 
                                             | (0x80000000U 
                                                & vlSelf->w));
    }
}

void Vsha1_w___024root___eval(Vsha1_w___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_w__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha1_w___024root___eval\n"); );
    // Body
    Vsha1_w___024root___combo__TOP__1(vlSelf);
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst_n)) & (IData)(vlSelf->__Vclklast__TOP__rst_n)))) {
        Vsha1_w___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vsha1_w___024root___combo__TOP__4(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
}

QData Vsha1_w___024root___change_request_1(Vsha1_w___024root* vlSelf);

VL_INLINE_OPT QData Vsha1_w___024root___change_request(Vsha1_w___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_w__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha1_w___024root___change_request\n"); );
    // Body
    return (Vsha1_w___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vsha1_w___024root___change_request_1(Vsha1_w___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_w__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha1_w___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vsha1_w___024root___eval_debug_assertions(Vsha1_w___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_w__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha1_w___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->valid_w & 0xfeU))) {
        Verilated::overWidthError("valid_w");}
}
#endif  // VL_DEBUG

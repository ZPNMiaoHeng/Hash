// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsha1_round.h for the primary calling header

#include "Vsha1_round___024root.h"
#include "Vsha1_round__Syms.h"

//==========

VL_INLINE_OPT void Vsha1_round___024root___combo__TOP__1(Vsha1_round___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_round__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha1_round___024root___combo__TOP__1\n"); );
    // Body
    if ((1U & ((IData)(vlSelf->round) ^ (IData)(vlSelf->sha1_round__DOT____Vtogcov__round)))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->sha1_round__DOT____Vtogcov__round = 
            ((0xfeU & (IData)(vlSelf->sha1_round__DOT____Vtogcov__round)) 
             | (1U & (IData)(vlSelf->round)));
    }
    if ((2U & ((IData)(vlSelf->round) ^ (IData)(vlSelf->sha1_round__DOT____Vtogcov__round)))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->sha1_round__DOT____Vtogcov__round = 
            ((0xfdU & (IData)(vlSelf->sha1_round__DOT____Vtogcov__round)) 
             | (2U & (IData)(vlSelf->round)));
    }
    if ((4U & ((IData)(vlSelf->round) ^ (IData)(vlSelf->sha1_round__DOT____Vtogcov__round)))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->sha1_round__DOT____Vtogcov__round = 
            ((0xfbU & (IData)(vlSelf->sha1_round__DOT____Vtogcov__round)) 
             | (4U & (IData)(vlSelf->round)));
    }
    if ((8U & ((IData)(vlSelf->round) ^ (IData)(vlSelf->sha1_round__DOT____Vtogcov__round)))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->sha1_round__DOT____Vtogcov__round = 
            ((0xf7U & (IData)(vlSelf->sha1_round__DOT____Vtogcov__round)) 
             | (8U & (IData)(vlSelf->round)));
    }
    if ((0x10U & ((IData)(vlSelf->round) ^ (IData)(vlSelf->sha1_round__DOT____Vtogcov__round)))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->sha1_round__DOT____Vtogcov__round = 
            ((0xefU & (IData)(vlSelf->sha1_round__DOT____Vtogcov__round)) 
             | (0x10U & (IData)(vlSelf->round)));
    }
    if ((0x20U & ((IData)(vlSelf->round) ^ (IData)(vlSelf->sha1_round__DOT____Vtogcov__round)))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->sha1_round__DOT____Vtogcov__round = 
            ((0xdfU & (IData)(vlSelf->sha1_round__DOT____Vtogcov__round)) 
             | (0x20U & (IData)(vlSelf->round)));
    }
    if ((0x40U & ((IData)(vlSelf->round) ^ (IData)(vlSelf->sha1_round__DOT____Vtogcov__round)))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->sha1_round__DOT____Vtogcov__round = 
            ((0xbfU & (IData)(vlSelf->sha1_round__DOT____Vtogcov__round)) 
             | (0x40U & (IData)(vlSelf->round)));
    }
    if ((0x80U & ((IData)(vlSelf->round) ^ (IData)(vlSelf->sha1_round__DOT____Vtogcov__round)))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->sha1_round__DOT____Vtogcov__round = 
            ((0x7fU & (IData)(vlSelf->sha1_round__DOT____Vtogcov__round)) 
             | (0x80U & (IData)(vlSelf->round)));
    }
    if ((1U & (vlSelf->w ^ vlSelf->sha1_round__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->sha1_round__DOT____Vtogcov__w = ((0xfffffffeU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__w) 
                                                 | (1U 
                                                    & vlSelf->w));
    }
    if ((2U & (vlSelf->w ^ vlSelf->sha1_round__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->sha1_round__DOT____Vtogcov__w = ((0xfffffffdU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__w) 
                                                 | (2U 
                                                    & vlSelf->w));
    }
    if ((4U & (vlSelf->w ^ vlSelf->sha1_round__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->sha1_round__DOT____Vtogcov__w = ((0xfffffffbU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__w) 
                                                 | (4U 
                                                    & vlSelf->w));
    }
    if ((8U & (vlSelf->w ^ vlSelf->sha1_round__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->sha1_round__DOT____Vtogcov__w = ((0xfffffff7U 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__w) 
                                                 | (8U 
                                                    & vlSelf->w));
    }
    if ((0x10U & (vlSelf->w ^ vlSelf->sha1_round__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->sha1_round__DOT____Vtogcov__w = ((0xffffffefU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__w) 
                                                 | (0x10U 
                                                    & vlSelf->w));
    }
    if ((0x20U & (vlSelf->w ^ vlSelf->sha1_round__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->sha1_round__DOT____Vtogcov__w = ((0xffffffdfU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__w) 
                                                 | (0x20U 
                                                    & vlSelf->w));
    }
    if ((0x40U & (vlSelf->w ^ vlSelf->sha1_round__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->sha1_round__DOT____Vtogcov__w = ((0xffffffbfU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__w) 
                                                 | (0x40U 
                                                    & vlSelf->w));
    }
    if ((0x80U & (vlSelf->w ^ vlSelf->sha1_round__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->sha1_round__DOT____Vtogcov__w = ((0xffffff7fU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__w) 
                                                 | (0x80U 
                                                    & vlSelf->w));
    }
    if ((0x100U & (vlSelf->w ^ vlSelf->sha1_round__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->sha1_round__DOT____Vtogcov__w = ((0xfffffeffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__w) 
                                                 | (0x100U 
                                                    & vlSelf->w));
    }
    if ((0x200U & (vlSelf->w ^ vlSelf->sha1_round__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->sha1_round__DOT____Vtogcov__w = ((0xfffffdffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__w) 
                                                 | (0x200U 
                                                    & vlSelf->w));
    }
    if ((0x400U & (vlSelf->w ^ vlSelf->sha1_round__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->sha1_round__DOT____Vtogcov__w = ((0xfffffbffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__w) 
                                                 | (0x400U 
                                                    & vlSelf->w));
    }
    if ((0x800U & (vlSelf->w ^ vlSelf->sha1_round__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->sha1_round__DOT____Vtogcov__w = ((0xfffff7ffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__w) 
                                                 | (0x800U 
                                                    & vlSelf->w));
    }
    if ((0x1000U & (vlSelf->w ^ vlSelf->sha1_round__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->sha1_round__DOT____Vtogcov__w = ((0xffffefffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__w) 
                                                 | (0x1000U 
                                                    & vlSelf->w));
    }
    if ((0x2000U & (vlSelf->w ^ vlSelf->sha1_round__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->sha1_round__DOT____Vtogcov__w = ((0xffffdfffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__w) 
                                                 | (0x2000U 
                                                    & vlSelf->w));
    }
    if ((0x4000U & (vlSelf->w ^ vlSelf->sha1_round__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->sha1_round__DOT____Vtogcov__w = ((0xffffbfffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__w) 
                                                 | (0x4000U 
                                                    & vlSelf->w));
    }
    if ((0x8000U & (vlSelf->w ^ vlSelf->sha1_round__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->sha1_round__DOT____Vtogcov__w = ((0xffff7fffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__w) 
                                                 | (0x8000U 
                                                    & vlSelf->w));
    }
    if ((0x10000U & (vlSelf->w ^ vlSelf->sha1_round__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->sha1_round__DOT____Vtogcov__w = ((0xfffeffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__w) 
                                                 | (0x10000U 
                                                    & vlSelf->w));
    }
    if ((0x20000U & (vlSelf->w ^ vlSelf->sha1_round__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->sha1_round__DOT____Vtogcov__w = ((0xfffdffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__w) 
                                                 | (0x20000U 
                                                    & vlSelf->w));
    }
    if ((0x40000U & (vlSelf->w ^ vlSelf->sha1_round__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->sha1_round__DOT____Vtogcov__w = ((0xfffbffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__w) 
                                                 | (0x40000U 
                                                    & vlSelf->w));
    }
    if ((0x80000U & (vlSelf->w ^ vlSelf->sha1_round__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->sha1_round__DOT____Vtogcov__w = ((0xfff7ffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__w) 
                                                 | (0x80000U 
                                                    & vlSelf->w));
    }
    if ((0x100000U & (vlSelf->w ^ vlSelf->sha1_round__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->sha1_round__DOT____Vtogcov__w = ((0xffefffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__w) 
                                                 | (0x100000U 
                                                    & vlSelf->w));
    }
    if ((0x200000U & (vlSelf->w ^ vlSelf->sha1_round__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->sha1_round__DOT____Vtogcov__w = ((0xffdfffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__w) 
                                                 | (0x200000U 
                                                    & vlSelf->w));
    }
    if ((0x400000U & (vlSelf->w ^ vlSelf->sha1_round__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->sha1_round__DOT____Vtogcov__w = ((0xffbfffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__w) 
                                                 | (0x400000U 
                                                    & vlSelf->w));
    }
    if ((0x800000U & (vlSelf->w ^ vlSelf->sha1_round__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->sha1_round__DOT____Vtogcov__w = ((0xff7fffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__w) 
                                                 | (0x800000U 
                                                    & vlSelf->w));
    }
    if ((0x1000000U & (vlSelf->w ^ vlSelf->sha1_round__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->sha1_round__DOT____Vtogcov__w = ((0xfeffffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__w) 
                                                 | (0x1000000U 
                                                    & vlSelf->w));
    }
    if ((0x2000000U & (vlSelf->w ^ vlSelf->sha1_round__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->sha1_round__DOT____Vtogcov__w = ((0xfdffffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__w) 
                                                 | (0x2000000U 
                                                    & vlSelf->w));
    }
    if ((0x4000000U & (vlSelf->w ^ vlSelf->sha1_round__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->sha1_round__DOT____Vtogcov__w = ((0xfbffffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__w) 
                                                 | (0x4000000U 
                                                    & vlSelf->w));
    }
    if ((0x8000000U & (vlSelf->w ^ vlSelf->sha1_round__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->sha1_round__DOT____Vtogcov__w = ((0xf7ffffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__w) 
                                                 | (0x8000000U 
                                                    & vlSelf->w));
    }
    if ((0x10000000U & (vlSelf->w ^ vlSelf->sha1_round__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->sha1_round__DOT____Vtogcov__w = ((0xefffffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__w) 
                                                 | (0x10000000U 
                                                    & vlSelf->w));
    }
    if ((0x20000000U & (vlSelf->w ^ vlSelf->sha1_round__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->sha1_round__DOT____Vtogcov__w = ((0xdfffffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__w) 
                                                 | (0x20000000U 
                                                    & vlSelf->w));
    }
    if ((0x40000000U & (vlSelf->w ^ vlSelf->sha1_round__DOT____Vtogcov__w))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->sha1_round__DOT____Vtogcov__w = ((0xbfffffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__w) 
                                                 | (0x40000000U 
                                                    & vlSelf->w));
    }
    if (((vlSelf->w ^ vlSelf->sha1_round__DOT____Vtogcov__w) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->sha1_round__DOT____Vtogcov__w = ((0x7fffffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__w) 
                                                 | (0x80000000U 
                                                    & vlSelf->w));
    }
    if ((1U & (vlSelf->din[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[0U]))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->sha1_round__DOT____Vtogcov__din[0U] 
            = ((0xfffffffeU & vlSelf->sha1_round__DOT____Vtogcov__din[0U]) 
               | (1U & vlSelf->din[0U]));
    }
    if ((2U & (vlSelf->din[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[0U]))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->sha1_round__DOT____Vtogcov__din[0U] 
            = ((0xfffffffdU & vlSelf->sha1_round__DOT____Vtogcov__din[0U]) 
               | (2U & vlSelf->din[0U]));
    }
    if ((4U & (vlSelf->din[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[0U]))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->sha1_round__DOT____Vtogcov__din[0U] 
            = ((0xfffffffbU & vlSelf->sha1_round__DOT____Vtogcov__din[0U]) 
               | (4U & vlSelf->din[0U]));
    }
    if ((8U & (vlSelf->din[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[0U]))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->sha1_round__DOT____Vtogcov__din[0U] 
            = ((0xfffffff7U & vlSelf->sha1_round__DOT____Vtogcov__din[0U]) 
               | (8U & vlSelf->din[0U]));
    }
    if ((0x10U & (vlSelf->din[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[0U]))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->sha1_round__DOT____Vtogcov__din[0U] 
            = ((0xffffffefU & vlSelf->sha1_round__DOT____Vtogcov__din[0U]) 
               | (0x10U & vlSelf->din[0U]));
    }
    if ((0x20U & (vlSelf->din[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[0U]))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->sha1_round__DOT____Vtogcov__din[0U] 
            = ((0xffffffdfU & vlSelf->sha1_round__DOT____Vtogcov__din[0U]) 
               | (0x20U & vlSelf->din[0U]));
    }
    if ((0x40U & (vlSelf->din[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[0U]))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->sha1_round__DOT____Vtogcov__din[0U] 
            = ((0xffffffbfU & vlSelf->sha1_round__DOT____Vtogcov__din[0U]) 
               | (0x40U & vlSelf->din[0U]));
    }
    if ((0x80U & (vlSelf->din[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[0U]))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->sha1_round__DOT____Vtogcov__din[0U] 
            = ((0xffffff7fU & vlSelf->sha1_round__DOT____Vtogcov__din[0U]) 
               | (0x80U & vlSelf->din[0U]));
    }
    if ((0x100U & (vlSelf->din[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[0U]))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->sha1_round__DOT____Vtogcov__din[0U] 
            = ((0xfffffeffU & vlSelf->sha1_round__DOT____Vtogcov__din[0U]) 
               | (0x100U & vlSelf->din[0U]));
    }
    if ((0x200U & (vlSelf->din[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[0U]))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->sha1_round__DOT____Vtogcov__din[0U] 
            = ((0xfffffdffU & vlSelf->sha1_round__DOT____Vtogcov__din[0U]) 
               | (0x200U & vlSelf->din[0U]));
    }
    if ((0x400U & (vlSelf->din[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[0U]))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->sha1_round__DOT____Vtogcov__din[0U] 
            = ((0xfffffbffU & vlSelf->sha1_round__DOT____Vtogcov__din[0U]) 
               | (0x400U & vlSelf->din[0U]));
    }
    if ((0x800U & (vlSelf->din[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[0U]))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->sha1_round__DOT____Vtogcov__din[0U] 
            = ((0xfffff7ffU & vlSelf->sha1_round__DOT____Vtogcov__din[0U]) 
               | (0x800U & vlSelf->din[0U]));
    }
    if ((0x1000U & (vlSelf->din[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[0U]))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->sha1_round__DOT____Vtogcov__din[0U] 
            = ((0xffffefffU & vlSelf->sha1_round__DOT____Vtogcov__din[0U]) 
               | (0x1000U & vlSelf->din[0U]));
    }
    if ((0x2000U & (vlSelf->din[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[0U]))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->sha1_round__DOT____Vtogcov__din[0U] 
            = ((0xffffdfffU & vlSelf->sha1_round__DOT____Vtogcov__din[0U]) 
               | (0x2000U & vlSelf->din[0U]));
    }
    if ((0x4000U & (vlSelf->din[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[0U]))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->sha1_round__DOT____Vtogcov__din[0U] 
            = ((0xffffbfffU & vlSelf->sha1_round__DOT____Vtogcov__din[0U]) 
               | (0x4000U & vlSelf->din[0U]));
    }
    if ((0x8000U & (vlSelf->din[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[0U]))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->sha1_round__DOT____Vtogcov__din[0U] 
            = ((0xffff7fffU & vlSelf->sha1_round__DOT____Vtogcov__din[0U]) 
               | (0x8000U & vlSelf->din[0U]));
    }
    if ((0x10000U & (vlSelf->din[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[0U]))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->sha1_round__DOT____Vtogcov__din[0U] 
            = ((0xfffeffffU & vlSelf->sha1_round__DOT____Vtogcov__din[0U]) 
               | (0x10000U & vlSelf->din[0U]));
    }
    if ((0x20000U & (vlSelf->din[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[0U]))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->sha1_round__DOT____Vtogcov__din[0U] 
            = ((0xfffdffffU & vlSelf->sha1_round__DOT____Vtogcov__din[0U]) 
               | (0x20000U & vlSelf->din[0U]));
    }
    if ((0x40000U & (vlSelf->din[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[0U]))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->sha1_round__DOT____Vtogcov__din[0U] 
            = ((0xfffbffffU & vlSelf->sha1_round__DOT____Vtogcov__din[0U]) 
               | (0x40000U & vlSelf->din[0U]));
    }
    if ((0x80000U & (vlSelf->din[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[0U]))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->sha1_round__DOT____Vtogcov__din[0U] 
            = ((0xfff7ffffU & vlSelf->sha1_round__DOT____Vtogcov__din[0U]) 
               | (0x80000U & vlSelf->din[0U]));
    }
    if ((0x100000U & (vlSelf->din[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[0U]))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->sha1_round__DOT____Vtogcov__din[0U] 
            = ((0xffefffffU & vlSelf->sha1_round__DOT____Vtogcov__din[0U]) 
               | (0x100000U & vlSelf->din[0U]));
    }
    if ((0x200000U & (vlSelf->din[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[0U]))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->sha1_round__DOT____Vtogcov__din[0U] 
            = ((0xffdfffffU & vlSelf->sha1_round__DOT____Vtogcov__din[0U]) 
               | (0x200000U & vlSelf->din[0U]));
    }
    if ((0x400000U & (vlSelf->din[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[0U]))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->sha1_round__DOT____Vtogcov__din[0U] 
            = ((0xffbfffffU & vlSelf->sha1_round__DOT____Vtogcov__din[0U]) 
               | (0x400000U & vlSelf->din[0U]));
    }
    if ((0x800000U & (vlSelf->din[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[0U]))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->sha1_round__DOT____Vtogcov__din[0U] 
            = ((0xff7fffffU & vlSelf->sha1_round__DOT____Vtogcov__din[0U]) 
               | (0x800000U & vlSelf->din[0U]));
    }
    if ((0x1000000U & (vlSelf->din[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[0U]))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->sha1_round__DOT____Vtogcov__din[0U] 
            = ((0xfeffffffU & vlSelf->sha1_round__DOT____Vtogcov__din[0U]) 
               | (0x1000000U & vlSelf->din[0U]));
    }
    if ((0x2000000U & (vlSelf->din[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[0U]))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->sha1_round__DOT____Vtogcov__din[0U] 
            = ((0xfdffffffU & vlSelf->sha1_round__DOT____Vtogcov__din[0U]) 
               | (0x2000000U & vlSelf->din[0U]));
    }
    if ((0x4000000U & (vlSelf->din[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[0U]))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->sha1_round__DOT____Vtogcov__din[0U] 
            = ((0xfbffffffU & vlSelf->sha1_round__DOT____Vtogcov__din[0U]) 
               | (0x4000000U & vlSelf->din[0U]));
    }
    if ((0x8000000U & (vlSelf->din[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[0U]))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->sha1_round__DOT____Vtogcov__din[0U] 
            = ((0xf7ffffffU & vlSelf->sha1_round__DOT____Vtogcov__din[0U]) 
               | (0x8000000U & vlSelf->din[0U]));
    }
    if ((0x10000000U & (vlSelf->din[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[0U]))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->sha1_round__DOT____Vtogcov__din[0U] 
            = ((0xefffffffU & vlSelf->sha1_round__DOT____Vtogcov__din[0U]) 
               | (0x10000000U & vlSelf->din[0U]));
    }
    if ((0x20000000U & (vlSelf->din[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[0U]))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->sha1_round__DOT____Vtogcov__din[0U] 
            = ((0xdfffffffU & vlSelf->sha1_round__DOT____Vtogcov__din[0U]) 
               | (0x20000000U & vlSelf->din[0U]));
    }
    if ((0x40000000U & (vlSelf->din[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[0U]))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->sha1_round__DOT____Vtogcov__din[0U] 
            = ((0xbfffffffU & vlSelf->sha1_round__DOT____Vtogcov__din[0U]) 
               | (0x40000000U & vlSelf->din[0U]));
    }
    if (((vlSelf->din[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->sha1_round__DOT____Vtogcov__din[0U] 
            = ((0x7fffffffU & vlSelf->sha1_round__DOT____Vtogcov__din[0U]) 
               | (0x80000000U & vlSelf->din[0U]));
    }
    if ((1U & (vlSelf->din[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[1U]))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->sha1_round__DOT____Vtogcov__din[1U] 
            = ((0xfffffffeU & vlSelf->sha1_round__DOT____Vtogcov__din[1U]) 
               | (1U & vlSelf->din[1U]));
    }
    if ((2U & (vlSelf->din[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[1U]))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->sha1_round__DOT____Vtogcov__din[1U] 
            = ((0xfffffffdU & vlSelf->sha1_round__DOT____Vtogcov__din[1U]) 
               | (2U & vlSelf->din[1U]));
    }
    if ((4U & (vlSelf->din[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[1U]))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->sha1_round__DOT____Vtogcov__din[1U] 
            = ((0xfffffffbU & vlSelf->sha1_round__DOT____Vtogcov__din[1U]) 
               | (4U & vlSelf->din[1U]));
    }
    if ((8U & (vlSelf->din[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[1U]))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->sha1_round__DOT____Vtogcov__din[1U] 
            = ((0xfffffff7U & vlSelf->sha1_round__DOT____Vtogcov__din[1U]) 
               | (8U & vlSelf->din[1U]));
    }
    if ((0x10U & (vlSelf->din[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[1U]))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->sha1_round__DOT____Vtogcov__din[1U] 
            = ((0xffffffefU & vlSelf->sha1_round__DOT____Vtogcov__din[1U]) 
               | (0x10U & vlSelf->din[1U]));
    }
    if ((0x20U & (vlSelf->din[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[1U]))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->sha1_round__DOT____Vtogcov__din[1U] 
            = ((0xffffffdfU & vlSelf->sha1_round__DOT____Vtogcov__din[1U]) 
               | (0x20U & vlSelf->din[1U]));
    }
    if ((0x40U & (vlSelf->din[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[1U]))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->sha1_round__DOT____Vtogcov__din[1U] 
            = ((0xffffffbfU & vlSelf->sha1_round__DOT____Vtogcov__din[1U]) 
               | (0x40U & vlSelf->din[1U]));
    }
    if ((0x80U & (vlSelf->din[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[1U]))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->sha1_round__DOT____Vtogcov__din[1U] 
            = ((0xffffff7fU & vlSelf->sha1_round__DOT____Vtogcov__din[1U]) 
               | (0x80U & vlSelf->din[1U]));
    }
    if ((0x100U & (vlSelf->din[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[1U]))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->sha1_round__DOT____Vtogcov__din[1U] 
            = ((0xfffffeffU & vlSelf->sha1_round__DOT____Vtogcov__din[1U]) 
               | (0x100U & vlSelf->din[1U]));
    }
    if ((0x200U & (vlSelf->din[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[1U]))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->sha1_round__DOT____Vtogcov__din[1U] 
            = ((0xfffffdffU & vlSelf->sha1_round__DOT____Vtogcov__din[1U]) 
               | (0x200U & vlSelf->din[1U]));
    }
    if ((0x400U & (vlSelf->din[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[1U]))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->sha1_round__DOT____Vtogcov__din[1U] 
            = ((0xfffffbffU & vlSelf->sha1_round__DOT____Vtogcov__din[1U]) 
               | (0x400U & vlSelf->din[1U]));
    }
    if ((0x800U & (vlSelf->din[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[1U]))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->sha1_round__DOT____Vtogcov__din[1U] 
            = ((0xfffff7ffU & vlSelf->sha1_round__DOT____Vtogcov__din[1U]) 
               | (0x800U & vlSelf->din[1U]));
    }
    if ((0x1000U & (vlSelf->din[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[1U]))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->sha1_round__DOT____Vtogcov__din[1U] 
            = ((0xffffefffU & vlSelf->sha1_round__DOT____Vtogcov__din[1U]) 
               | (0x1000U & vlSelf->din[1U]));
    }
    if ((0x2000U & (vlSelf->din[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[1U]))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->sha1_round__DOT____Vtogcov__din[1U] 
            = ((0xffffdfffU & vlSelf->sha1_round__DOT____Vtogcov__din[1U]) 
               | (0x2000U & vlSelf->din[1U]));
    }
    if ((0x4000U & (vlSelf->din[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[1U]))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->sha1_round__DOT____Vtogcov__din[1U] 
            = ((0xffffbfffU & vlSelf->sha1_round__DOT____Vtogcov__din[1U]) 
               | (0x4000U & vlSelf->din[1U]));
    }
    if ((0x8000U & (vlSelf->din[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[1U]))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->sha1_round__DOT____Vtogcov__din[1U] 
            = ((0xffff7fffU & vlSelf->sha1_round__DOT____Vtogcov__din[1U]) 
               | (0x8000U & vlSelf->din[1U]));
    }
    if ((0x10000U & (vlSelf->din[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[1U]))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->sha1_round__DOT____Vtogcov__din[1U] 
            = ((0xfffeffffU & vlSelf->sha1_round__DOT____Vtogcov__din[1U]) 
               | (0x10000U & vlSelf->din[1U]));
    }
    if ((0x20000U & (vlSelf->din[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[1U]))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->sha1_round__DOT____Vtogcov__din[1U] 
            = ((0xfffdffffU & vlSelf->sha1_round__DOT____Vtogcov__din[1U]) 
               | (0x20000U & vlSelf->din[1U]));
    }
    if ((0x40000U & (vlSelf->din[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[1U]))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->sha1_round__DOT____Vtogcov__din[1U] 
            = ((0xfffbffffU & vlSelf->sha1_round__DOT____Vtogcov__din[1U]) 
               | (0x40000U & vlSelf->din[1U]));
    }
    if ((0x80000U & (vlSelf->din[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[1U]))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->sha1_round__DOT____Vtogcov__din[1U] 
            = ((0xfff7ffffU & vlSelf->sha1_round__DOT____Vtogcov__din[1U]) 
               | (0x80000U & vlSelf->din[1U]));
    }
    if ((0x100000U & (vlSelf->din[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[1U]))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->sha1_round__DOT____Vtogcov__din[1U] 
            = ((0xffefffffU & vlSelf->sha1_round__DOT____Vtogcov__din[1U]) 
               | (0x100000U & vlSelf->din[1U]));
    }
    if ((0x200000U & (vlSelf->din[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[1U]))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->sha1_round__DOT____Vtogcov__din[1U] 
            = ((0xffdfffffU & vlSelf->sha1_round__DOT____Vtogcov__din[1U]) 
               | (0x200000U & vlSelf->din[1U]));
    }
    if ((0x400000U & (vlSelf->din[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[1U]))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->sha1_round__DOT____Vtogcov__din[1U] 
            = ((0xffbfffffU & vlSelf->sha1_round__DOT____Vtogcov__din[1U]) 
               | (0x400000U & vlSelf->din[1U]));
    }
    if ((0x800000U & (vlSelf->din[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[1U]))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->sha1_round__DOT____Vtogcov__din[1U] 
            = ((0xff7fffffU & vlSelf->sha1_round__DOT____Vtogcov__din[1U]) 
               | (0x800000U & vlSelf->din[1U]));
    }
    if ((0x1000000U & (vlSelf->din[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[1U]))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->sha1_round__DOT____Vtogcov__din[1U] 
            = ((0xfeffffffU & vlSelf->sha1_round__DOT____Vtogcov__din[1U]) 
               | (0x1000000U & vlSelf->din[1U]));
    }
    if ((0x2000000U & (vlSelf->din[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[1U]))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->sha1_round__DOT____Vtogcov__din[1U] 
            = ((0xfdffffffU & vlSelf->sha1_round__DOT____Vtogcov__din[1U]) 
               | (0x2000000U & vlSelf->din[1U]));
    }
    if ((0x4000000U & (vlSelf->din[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[1U]))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->sha1_round__DOT____Vtogcov__din[1U] 
            = ((0xfbffffffU & vlSelf->sha1_round__DOT____Vtogcov__din[1U]) 
               | (0x4000000U & vlSelf->din[1U]));
    }
    if ((0x8000000U & (vlSelf->din[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[1U]))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->sha1_round__DOT____Vtogcov__din[1U] 
            = ((0xf7ffffffU & vlSelf->sha1_round__DOT____Vtogcov__din[1U]) 
               | (0x8000000U & vlSelf->din[1U]));
    }
    if ((0x10000000U & (vlSelf->din[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[1U]))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->sha1_round__DOT____Vtogcov__din[1U] 
            = ((0xefffffffU & vlSelf->sha1_round__DOT____Vtogcov__din[1U]) 
               | (0x10000000U & vlSelf->din[1U]));
    }
    if ((0x20000000U & (vlSelf->din[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[1U]))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->sha1_round__DOT____Vtogcov__din[1U] 
            = ((0xdfffffffU & vlSelf->sha1_round__DOT____Vtogcov__din[1U]) 
               | (0x20000000U & vlSelf->din[1U]));
    }
    if ((0x40000000U & (vlSelf->din[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[1U]))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->sha1_round__DOT____Vtogcov__din[1U] 
            = ((0xbfffffffU & vlSelf->sha1_round__DOT____Vtogcov__din[1U]) 
               | (0x40000000U & vlSelf->din[1U]));
    }
    if (((vlSelf->din[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->sha1_round__DOT____Vtogcov__din[1U] 
            = ((0x7fffffffU & vlSelf->sha1_round__DOT____Vtogcov__din[1U]) 
               | (0x80000000U & vlSelf->din[1U]));
    }
    if ((1U & (vlSelf->din[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[2U]))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->sha1_round__DOT____Vtogcov__din[2U] 
            = ((0xfffffffeU & vlSelf->sha1_round__DOT____Vtogcov__din[2U]) 
               | (1U & vlSelf->din[2U]));
    }
    if ((2U & (vlSelf->din[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[2U]))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->sha1_round__DOT____Vtogcov__din[2U] 
            = ((0xfffffffdU & vlSelf->sha1_round__DOT____Vtogcov__din[2U]) 
               | (2U & vlSelf->din[2U]));
    }
    if ((4U & (vlSelf->din[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[2U]))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->sha1_round__DOT____Vtogcov__din[2U] 
            = ((0xfffffffbU & vlSelf->sha1_round__DOT____Vtogcov__din[2U]) 
               | (4U & vlSelf->din[2U]));
    }
    if ((8U & (vlSelf->din[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[2U]))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->sha1_round__DOT____Vtogcov__din[2U] 
            = ((0xfffffff7U & vlSelf->sha1_round__DOT____Vtogcov__din[2U]) 
               | (8U & vlSelf->din[2U]));
    }
    if ((0x10U & (vlSelf->din[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[2U]))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->sha1_round__DOT____Vtogcov__din[2U] 
            = ((0xffffffefU & vlSelf->sha1_round__DOT____Vtogcov__din[2U]) 
               | (0x10U & vlSelf->din[2U]));
    }
    if ((0x20U & (vlSelf->din[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[2U]))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->sha1_round__DOT____Vtogcov__din[2U] 
            = ((0xffffffdfU & vlSelf->sha1_round__DOT____Vtogcov__din[2U]) 
               | (0x20U & vlSelf->din[2U]));
    }
    if ((0x40U & (vlSelf->din[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[2U]))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->sha1_round__DOT____Vtogcov__din[2U] 
            = ((0xffffffbfU & vlSelf->sha1_round__DOT____Vtogcov__din[2U]) 
               | (0x40U & vlSelf->din[2U]));
    }
    if ((0x80U & (vlSelf->din[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[2U]))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->sha1_round__DOT____Vtogcov__din[2U] 
            = ((0xffffff7fU & vlSelf->sha1_round__DOT____Vtogcov__din[2U]) 
               | (0x80U & vlSelf->din[2U]));
    }
    if ((0x100U & (vlSelf->din[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[2U]))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->sha1_round__DOT____Vtogcov__din[2U] 
            = ((0xfffffeffU & vlSelf->sha1_round__DOT____Vtogcov__din[2U]) 
               | (0x100U & vlSelf->din[2U]));
    }
    if ((0x200U & (vlSelf->din[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[2U]))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->sha1_round__DOT____Vtogcov__din[2U] 
            = ((0xfffffdffU & vlSelf->sha1_round__DOT____Vtogcov__din[2U]) 
               | (0x200U & vlSelf->din[2U]));
    }
    if ((0x400U & (vlSelf->din[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[2U]))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->sha1_round__DOT____Vtogcov__din[2U] 
            = ((0xfffffbffU & vlSelf->sha1_round__DOT____Vtogcov__din[2U]) 
               | (0x400U & vlSelf->din[2U]));
    }
    if ((0x800U & (vlSelf->din[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[2U]))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->sha1_round__DOT____Vtogcov__din[2U] 
            = ((0xfffff7ffU & vlSelf->sha1_round__DOT____Vtogcov__din[2U]) 
               | (0x800U & vlSelf->din[2U]));
    }
    if ((0x1000U & (vlSelf->din[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[2U]))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->sha1_round__DOT____Vtogcov__din[2U] 
            = ((0xffffefffU & vlSelf->sha1_round__DOT____Vtogcov__din[2U]) 
               | (0x1000U & vlSelf->din[2U]));
    }
    if ((0x2000U & (vlSelf->din[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[2U]))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->sha1_round__DOT____Vtogcov__din[2U] 
            = ((0xffffdfffU & vlSelf->sha1_round__DOT____Vtogcov__din[2U]) 
               | (0x2000U & vlSelf->din[2U]));
    }
    if ((0x4000U & (vlSelf->din[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[2U]))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->sha1_round__DOT____Vtogcov__din[2U] 
            = ((0xffffbfffU & vlSelf->sha1_round__DOT____Vtogcov__din[2U]) 
               | (0x4000U & vlSelf->din[2U]));
    }
    if ((0x8000U & (vlSelf->din[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[2U]))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->sha1_round__DOT____Vtogcov__din[2U] 
            = ((0xffff7fffU & vlSelf->sha1_round__DOT____Vtogcov__din[2U]) 
               | (0x8000U & vlSelf->din[2U]));
    }
    if ((0x10000U & (vlSelf->din[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[2U]))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->sha1_round__DOT____Vtogcov__din[2U] 
            = ((0xfffeffffU & vlSelf->sha1_round__DOT____Vtogcov__din[2U]) 
               | (0x10000U & vlSelf->din[2U]));
    }
    if ((0x20000U & (vlSelf->din[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[2U]))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->sha1_round__DOT____Vtogcov__din[2U] 
            = ((0xfffdffffU & vlSelf->sha1_round__DOT____Vtogcov__din[2U]) 
               | (0x20000U & vlSelf->din[2U]));
    }
    if ((0x40000U & (vlSelf->din[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[2U]))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->sha1_round__DOT____Vtogcov__din[2U] 
            = ((0xfffbffffU & vlSelf->sha1_round__DOT____Vtogcov__din[2U]) 
               | (0x40000U & vlSelf->din[2U]));
    }
    if ((0x80000U & (vlSelf->din[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[2U]))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->sha1_round__DOT____Vtogcov__din[2U] 
            = ((0xfff7ffffU & vlSelf->sha1_round__DOT____Vtogcov__din[2U]) 
               | (0x80000U & vlSelf->din[2U]));
    }
    if ((0x100000U & (vlSelf->din[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[2U]))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->sha1_round__DOT____Vtogcov__din[2U] 
            = ((0xffefffffU & vlSelf->sha1_round__DOT____Vtogcov__din[2U]) 
               | (0x100000U & vlSelf->din[2U]));
    }
    if ((0x200000U & (vlSelf->din[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[2U]))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->sha1_round__DOT____Vtogcov__din[2U] 
            = ((0xffdfffffU & vlSelf->sha1_round__DOT____Vtogcov__din[2U]) 
               | (0x200000U & vlSelf->din[2U]));
    }
    if ((0x400000U & (vlSelf->din[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[2U]))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->sha1_round__DOT____Vtogcov__din[2U] 
            = ((0xffbfffffU & vlSelf->sha1_round__DOT____Vtogcov__din[2U]) 
               | (0x400000U & vlSelf->din[2U]));
    }
    if ((0x800000U & (vlSelf->din[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[2U]))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->sha1_round__DOT____Vtogcov__din[2U] 
            = ((0xff7fffffU & vlSelf->sha1_round__DOT____Vtogcov__din[2U]) 
               | (0x800000U & vlSelf->din[2U]));
    }
    if ((0x1000000U & (vlSelf->din[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[2U]))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->sha1_round__DOT____Vtogcov__din[2U] 
            = ((0xfeffffffU & vlSelf->sha1_round__DOT____Vtogcov__din[2U]) 
               | (0x1000000U & vlSelf->din[2U]));
    }
    if ((0x2000000U & (vlSelf->din[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[2U]))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->sha1_round__DOT____Vtogcov__din[2U] 
            = ((0xfdffffffU & vlSelf->sha1_round__DOT____Vtogcov__din[2U]) 
               | (0x2000000U & vlSelf->din[2U]));
    }
    if ((0x4000000U & (vlSelf->din[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[2U]))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->sha1_round__DOT____Vtogcov__din[2U] 
            = ((0xfbffffffU & vlSelf->sha1_round__DOT____Vtogcov__din[2U]) 
               | (0x4000000U & vlSelf->din[2U]));
    }
    if ((0x8000000U & (vlSelf->din[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[2U]))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->sha1_round__DOT____Vtogcov__din[2U] 
            = ((0xf7ffffffU & vlSelf->sha1_round__DOT____Vtogcov__din[2U]) 
               | (0x8000000U & vlSelf->din[2U]));
    }
    if ((0x10000000U & (vlSelf->din[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[2U]))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->sha1_round__DOT____Vtogcov__din[2U] 
            = ((0xefffffffU & vlSelf->sha1_round__DOT____Vtogcov__din[2U]) 
               | (0x10000000U & vlSelf->din[2U]));
    }
    if ((0x20000000U & (vlSelf->din[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[2U]))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->sha1_round__DOT____Vtogcov__din[2U] 
            = ((0xdfffffffU & vlSelf->sha1_round__DOT____Vtogcov__din[2U]) 
               | (0x20000000U & vlSelf->din[2U]));
    }
    if ((0x40000000U & (vlSelf->din[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[2U]))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->sha1_round__DOT____Vtogcov__din[2U] 
            = ((0xbfffffffU & vlSelf->sha1_round__DOT____Vtogcov__din[2U]) 
               | (0x40000000U & vlSelf->din[2U]));
    }
    if (((vlSelf->din[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->sha1_round__DOT____Vtogcov__din[2U] 
            = ((0x7fffffffU & vlSelf->sha1_round__DOT____Vtogcov__din[2U]) 
               | (0x80000000U & vlSelf->din[2U]));
    }
    if ((1U & (vlSelf->din[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[3U]))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->sha1_round__DOT____Vtogcov__din[3U] 
            = ((0xfffffffeU & vlSelf->sha1_round__DOT____Vtogcov__din[3U]) 
               | (1U & vlSelf->din[3U]));
    }
    if ((2U & (vlSelf->din[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[3U]))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->sha1_round__DOT____Vtogcov__din[3U] 
            = ((0xfffffffdU & vlSelf->sha1_round__DOT____Vtogcov__din[3U]) 
               | (2U & vlSelf->din[3U]));
    }
    if ((4U & (vlSelf->din[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[3U]))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->sha1_round__DOT____Vtogcov__din[3U] 
            = ((0xfffffffbU & vlSelf->sha1_round__DOT____Vtogcov__din[3U]) 
               | (4U & vlSelf->din[3U]));
    }
    if ((8U & (vlSelf->din[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[3U]))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->sha1_round__DOT____Vtogcov__din[3U] 
            = ((0xfffffff7U & vlSelf->sha1_round__DOT____Vtogcov__din[3U]) 
               | (8U & vlSelf->din[3U]));
    }
    if ((0x10U & (vlSelf->din[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[3U]))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->sha1_round__DOT____Vtogcov__din[3U] 
            = ((0xffffffefU & vlSelf->sha1_round__DOT____Vtogcov__din[3U]) 
               | (0x10U & vlSelf->din[3U]));
    }
    if ((0x20U & (vlSelf->din[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[3U]))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->sha1_round__DOT____Vtogcov__din[3U] 
            = ((0xffffffdfU & vlSelf->sha1_round__DOT____Vtogcov__din[3U]) 
               | (0x20U & vlSelf->din[3U]));
    }
    if ((0x40U & (vlSelf->din[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[3U]))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->sha1_round__DOT____Vtogcov__din[3U] 
            = ((0xffffffbfU & vlSelf->sha1_round__DOT____Vtogcov__din[3U]) 
               | (0x40U & vlSelf->din[3U]));
    }
    if ((0x80U & (vlSelf->din[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[3U]))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->sha1_round__DOT____Vtogcov__din[3U] 
            = ((0xffffff7fU & vlSelf->sha1_round__DOT____Vtogcov__din[3U]) 
               | (0x80U & vlSelf->din[3U]));
    }
    if ((0x100U & (vlSelf->din[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[3U]))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->sha1_round__DOT____Vtogcov__din[3U] 
            = ((0xfffffeffU & vlSelf->sha1_round__DOT____Vtogcov__din[3U]) 
               | (0x100U & vlSelf->din[3U]));
    }
    if ((0x200U & (vlSelf->din[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[3U]))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->sha1_round__DOT____Vtogcov__din[3U] 
            = ((0xfffffdffU & vlSelf->sha1_round__DOT____Vtogcov__din[3U]) 
               | (0x200U & vlSelf->din[3U]));
    }
    if ((0x400U & (vlSelf->din[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[3U]))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->sha1_round__DOT____Vtogcov__din[3U] 
            = ((0xfffffbffU & vlSelf->sha1_round__DOT____Vtogcov__din[3U]) 
               | (0x400U & vlSelf->din[3U]));
    }
    if ((0x800U & (vlSelf->din[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[3U]))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->sha1_round__DOT____Vtogcov__din[3U] 
            = ((0xfffff7ffU & vlSelf->sha1_round__DOT____Vtogcov__din[3U]) 
               | (0x800U & vlSelf->din[3U]));
    }
    if ((0x1000U & (vlSelf->din[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[3U]))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->sha1_round__DOT____Vtogcov__din[3U] 
            = ((0xffffefffU & vlSelf->sha1_round__DOT____Vtogcov__din[3U]) 
               | (0x1000U & vlSelf->din[3U]));
    }
    if ((0x2000U & (vlSelf->din[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[3U]))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->sha1_round__DOT____Vtogcov__din[3U] 
            = ((0xffffdfffU & vlSelf->sha1_round__DOT____Vtogcov__din[3U]) 
               | (0x2000U & vlSelf->din[3U]));
    }
    if ((0x4000U & (vlSelf->din[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[3U]))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->sha1_round__DOT____Vtogcov__din[3U] 
            = ((0xffffbfffU & vlSelf->sha1_round__DOT____Vtogcov__din[3U]) 
               | (0x4000U & vlSelf->din[3U]));
    }
    if ((0x8000U & (vlSelf->din[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[3U]))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->sha1_round__DOT____Vtogcov__din[3U] 
            = ((0xffff7fffU & vlSelf->sha1_round__DOT____Vtogcov__din[3U]) 
               | (0x8000U & vlSelf->din[3U]));
    }
    if ((0x10000U & (vlSelf->din[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[3U]))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->sha1_round__DOT____Vtogcov__din[3U] 
            = ((0xfffeffffU & vlSelf->sha1_round__DOT____Vtogcov__din[3U]) 
               | (0x10000U & vlSelf->din[3U]));
    }
    if ((0x20000U & (vlSelf->din[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[3U]))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->sha1_round__DOT____Vtogcov__din[3U] 
            = ((0xfffdffffU & vlSelf->sha1_round__DOT____Vtogcov__din[3U]) 
               | (0x20000U & vlSelf->din[3U]));
    }
    if ((0x40000U & (vlSelf->din[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[3U]))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->sha1_round__DOT____Vtogcov__din[3U] 
            = ((0xfffbffffU & vlSelf->sha1_round__DOT____Vtogcov__din[3U]) 
               | (0x40000U & vlSelf->din[3U]));
    }
    if ((0x80000U & (vlSelf->din[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[3U]))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->sha1_round__DOT____Vtogcov__din[3U] 
            = ((0xfff7ffffU & vlSelf->sha1_round__DOT____Vtogcov__din[3U]) 
               | (0x80000U & vlSelf->din[3U]));
    }
    if ((0x100000U & (vlSelf->din[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[3U]))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->sha1_round__DOT____Vtogcov__din[3U] 
            = ((0xffefffffU & vlSelf->sha1_round__DOT____Vtogcov__din[3U]) 
               | (0x100000U & vlSelf->din[3U]));
    }
    if ((0x200000U & (vlSelf->din[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[3U]))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->sha1_round__DOT____Vtogcov__din[3U] 
            = ((0xffdfffffU & vlSelf->sha1_round__DOT____Vtogcov__din[3U]) 
               | (0x200000U & vlSelf->din[3U]));
    }
    if ((0x400000U & (vlSelf->din[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[3U]))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->sha1_round__DOT____Vtogcov__din[3U] 
            = ((0xffbfffffU & vlSelf->sha1_round__DOT____Vtogcov__din[3U]) 
               | (0x400000U & vlSelf->din[3U]));
    }
    if ((0x800000U & (vlSelf->din[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[3U]))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->sha1_round__DOT____Vtogcov__din[3U] 
            = ((0xff7fffffU & vlSelf->sha1_round__DOT____Vtogcov__din[3U]) 
               | (0x800000U & vlSelf->din[3U]));
    }
    if ((0x1000000U & (vlSelf->din[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[3U]))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->sha1_round__DOT____Vtogcov__din[3U] 
            = ((0xfeffffffU & vlSelf->sha1_round__DOT____Vtogcov__din[3U]) 
               | (0x1000000U & vlSelf->din[3U]));
    }
    if ((0x2000000U & (vlSelf->din[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[3U]))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelf->sha1_round__DOT____Vtogcov__din[3U] 
            = ((0xfdffffffU & vlSelf->sha1_round__DOT____Vtogcov__din[3U]) 
               | (0x2000000U & vlSelf->din[3U]));
    }
    if ((0x4000000U & (vlSelf->din[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[3U]))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->sha1_round__DOT____Vtogcov__din[3U] 
            = ((0xfbffffffU & vlSelf->sha1_round__DOT____Vtogcov__din[3U]) 
               | (0x4000000U & vlSelf->din[3U]));
    }
    if ((0x8000000U & (vlSelf->din[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[3U]))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->sha1_round__DOT____Vtogcov__din[3U] 
            = ((0xf7ffffffU & vlSelf->sha1_round__DOT____Vtogcov__din[3U]) 
               | (0x8000000U & vlSelf->din[3U]));
    }
    if ((0x10000000U & (vlSelf->din[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[3U]))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->sha1_round__DOT____Vtogcov__din[3U] 
            = ((0xefffffffU & vlSelf->sha1_round__DOT____Vtogcov__din[3U]) 
               | (0x10000000U & vlSelf->din[3U]));
    }
    if ((0x20000000U & (vlSelf->din[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[3U]))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->sha1_round__DOT____Vtogcov__din[3U] 
            = ((0xdfffffffU & vlSelf->sha1_round__DOT____Vtogcov__din[3U]) 
               | (0x20000000U & vlSelf->din[3U]));
    }
    if ((0x40000000U & (vlSelf->din[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[3U]))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->sha1_round__DOT____Vtogcov__din[3U] 
            = ((0xbfffffffU & vlSelf->sha1_round__DOT____Vtogcov__din[3U]) 
               | (0x40000000U & vlSelf->din[3U]));
    }
    if (((vlSelf->din[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->sha1_round__DOT____Vtogcov__din[3U] 
            = ((0x7fffffffU & vlSelf->sha1_round__DOT____Vtogcov__din[3U]) 
               | (0x80000000U & vlSelf->din[3U]));
    }
    if ((1U & (vlSelf->din[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[4U]))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->sha1_round__DOT____Vtogcov__din[4U] 
            = ((0xfffffffeU & vlSelf->sha1_round__DOT____Vtogcov__din[4U]) 
               | (1U & vlSelf->din[4U]));
    }
    if ((2U & (vlSelf->din[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[4U]))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->sha1_round__DOT____Vtogcov__din[4U] 
            = ((0xfffffffdU & vlSelf->sha1_round__DOT____Vtogcov__din[4U]) 
               | (2U & vlSelf->din[4U]));
    }
    if ((4U & (vlSelf->din[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[4U]))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->sha1_round__DOT____Vtogcov__din[4U] 
            = ((0xfffffffbU & vlSelf->sha1_round__DOT____Vtogcov__din[4U]) 
               | (4U & vlSelf->din[4U]));
    }
    if ((8U & (vlSelf->din[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[4U]))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->sha1_round__DOT____Vtogcov__din[4U] 
            = ((0xfffffff7U & vlSelf->sha1_round__DOT____Vtogcov__din[4U]) 
               | (8U & vlSelf->din[4U]));
    }
    if ((0x10U & (vlSelf->din[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[4U]))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelf->sha1_round__DOT____Vtogcov__din[4U] 
            = ((0xffffffefU & vlSelf->sha1_round__DOT____Vtogcov__din[4U]) 
               | (0x10U & vlSelf->din[4U]));
    }
    if ((0x20U & (vlSelf->din[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[4U]))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelf->sha1_round__DOT____Vtogcov__din[4U] 
            = ((0xffffffdfU & vlSelf->sha1_round__DOT____Vtogcov__din[4U]) 
               | (0x20U & vlSelf->din[4U]));
    }
    if ((0x40U & (vlSelf->din[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[4U]))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->sha1_round__DOT____Vtogcov__din[4U] 
            = ((0xffffffbfU & vlSelf->sha1_round__DOT____Vtogcov__din[4U]) 
               | (0x40U & vlSelf->din[4U]));
    }
    if ((0x80U & (vlSelf->din[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[4U]))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelf->sha1_round__DOT____Vtogcov__din[4U] 
            = ((0xffffff7fU & vlSelf->sha1_round__DOT____Vtogcov__din[4U]) 
               | (0x80U & vlSelf->din[4U]));
    }
    if ((0x100U & (vlSelf->din[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[4U]))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->sha1_round__DOT____Vtogcov__din[4U] 
            = ((0xfffffeffU & vlSelf->sha1_round__DOT____Vtogcov__din[4U]) 
               | (0x100U & vlSelf->din[4U]));
    }
    if ((0x200U & (vlSelf->din[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[4U]))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->sha1_round__DOT____Vtogcov__din[4U] 
            = ((0xfffffdffU & vlSelf->sha1_round__DOT____Vtogcov__din[4U]) 
               | (0x200U & vlSelf->din[4U]));
    }
    if ((0x400U & (vlSelf->din[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[4U]))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->sha1_round__DOT____Vtogcov__din[4U] 
            = ((0xfffffbffU & vlSelf->sha1_round__DOT____Vtogcov__din[4U]) 
               | (0x400U & vlSelf->din[4U]));
    }
    if ((0x800U & (vlSelf->din[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[4U]))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->sha1_round__DOT____Vtogcov__din[4U] 
            = ((0xfffff7ffU & vlSelf->sha1_round__DOT____Vtogcov__din[4U]) 
               | (0x800U & vlSelf->din[4U]));
    }
    if ((0x1000U & (vlSelf->din[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[4U]))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->sha1_round__DOT____Vtogcov__din[4U] 
            = ((0xffffefffU & vlSelf->sha1_round__DOT____Vtogcov__din[4U]) 
               | (0x1000U & vlSelf->din[4U]));
    }
    if ((0x2000U & (vlSelf->din[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[4U]))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->sha1_round__DOT____Vtogcov__din[4U] 
            = ((0xffffdfffU & vlSelf->sha1_round__DOT____Vtogcov__din[4U]) 
               | (0x2000U & vlSelf->din[4U]));
    }
    if ((0x4000U & (vlSelf->din[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[4U]))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelf->sha1_round__DOT____Vtogcov__din[4U] 
            = ((0xffffbfffU & vlSelf->sha1_round__DOT____Vtogcov__din[4U]) 
               | (0x4000U & vlSelf->din[4U]));
    }
    if ((0x8000U & (vlSelf->din[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[4U]))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelf->sha1_round__DOT____Vtogcov__din[4U] 
            = ((0xffff7fffU & vlSelf->sha1_round__DOT____Vtogcov__din[4U]) 
               | (0x8000U & vlSelf->din[4U]));
    }
    if ((0x10000U & (vlSelf->din[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[4U]))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelf->sha1_round__DOT____Vtogcov__din[4U] 
            = ((0xfffeffffU & vlSelf->sha1_round__DOT____Vtogcov__din[4U]) 
               | (0x10000U & vlSelf->din[4U]));
    }
    if ((0x20000U & (vlSelf->din[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[4U]))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->sha1_round__DOT____Vtogcov__din[4U] 
            = ((0xfffdffffU & vlSelf->sha1_round__DOT____Vtogcov__din[4U]) 
               | (0x20000U & vlSelf->din[4U]));
    }
    if ((0x40000U & (vlSelf->din[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[4U]))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->sha1_round__DOT____Vtogcov__din[4U] 
            = ((0xfffbffffU & vlSelf->sha1_round__DOT____Vtogcov__din[4U]) 
               | (0x40000U & vlSelf->din[4U]));
    }
    if ((0x80000U & (vlSelf->din[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[4U]))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->sha1_round__DOT____Vtogcov__din[4U] 
            = ((0xfff7ffffU & vlSelf->sha1_round__DOT____Vtogcov__din[4U]) 
               | (0x80000U & vlSelf->din[4U]));
    }
    if ((0x100000U & (vlSelf->din[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[4U]))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->sha1_round__DOT____Vtogcov__din[4U] 
            = ((0xffefffffU & vlSelf->sha1_round__DOT____Vtogcov__din[4U]) 
               | (0x100000U & vlSelf->din[4U]));
    }
    if ((0x200000U & (vlSelf->din[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[4U]))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->sha1_round__DOT____Vtogcov__din[4U] 
            = ((0xffdfffffU & vlSelf->sha1_round__DOT____Vtogcov__din[4U]) 
               | (0x200000U & vlSelf->din[4U]));
    }
    if ((0x400000U & (vlSelf->din[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[4U]))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->sha1_round__DOT____Vtogcov__din[4U] 
            = ((0xffbfffffU & vlSelf->sha1_round__DOT____Vtogcov__din[4U]) 
               | (0x400000U & vlSelf->din[4U]));
    }
    if ((0x800000U & (vlSelf->din[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[4U]))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->sha1_round__DOT____Vtogcov__din[4U] 
            = ((0xff7fffffU & vlSelf->sha1_round__DOT____Vtogcov__din[4U]) 
               | (0x800000U & vlSelf->din[4U]));
    }
    if ((0x1000000U & (vlSelf->din[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[4U]))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->sha1_round__DOT____Vtogcov__din[4U] 
            = ((0xfeffffffU & vlSelf->sha1_round__DOT____Vtogcov__din[4U]) 
               | (0x1000000U & vlSelf->din[4U]));
    }
    if ((0x2000000U & (vlSelf->din[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[4U]))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->sha1_round__DOT____Vtogcov__din[4U] 
            = ((0xfdffffffU & vlSelf->sha1_round__DOT____Vtogcov__din[4U]) 
               | (0x2000000U & vlSelf->din[4U]));
    }
    if ((0x4000000U & (vlSelf->din[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[4U]))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->sha1_round__DOT____Vtogcov__din[4U] 
            = ((0xfbffffffU & vlSelf->sha1_round__DOT____Vtogcov__din[4U]) 
               | (0x4000000U & vlSelf->din[4U]));
    }
    if ((0x8000000U & (vlSelf->din[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[4U]))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->sha1_round__DOT____Vtogcov__din[4U] 
            = ((0xf7ffffffU & vlSelf->sha1_round__DOT____Vtogcov__din[4U]) 
               | (0x8000000U & vlSelf->din[4U]));
    }
    if ((0x10000000U & (vlSelf->din[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[4U]))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->sha1_round__DOT____Vtogcov__din[4U] 
            = ((0xefffffffU & vlSelf->sha1_round__DOT____Vtogcov__din[4U]) 
               | (0x10000000U & vlSelf->din[4U]));
    }
    if ((0x20000000U & (vlSelf->din[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[4U]))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->sha1_round__DOT____Vtogcov__din[4U] 
            = ((0xdfffffffU & vlSelf->sha1_round__DOT____Vtogcov__din[4U]) 
               | (0x20000000U & vlSelf->din[4U]));
    }
    if ((0x40000000U & (vlSelf->din[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[4U]))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->sha1_round__DOT____Vtogcov__din[4U] 
            = ((0xbfffffffU & vlSelf->sha1_round__DOT____Vtogcov__din[4U]) 
               | (0x40000000U & vlSelf->din[4U]));
    }
    if (((vlSelf->din[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__din[4U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->sha1_round__DOT____Vtogcov__din[4U] 
            = ((0x7fffffffU & vlSelf->sha1_round__DOT____Vtogcov__din[4U]) 
               | (0x80000000U & vlSelf->din[4U]));
    }
    vlSelf->sha1_round__DOT__b_shift = ((vlSelf->din[3U] 
                                         << 0x1eU) 
                                        | (vlSelf->din[3U] 
                                           >> 2U));
    ++(vlSymsp->__Vcoverage[528]);
    vlSelf->sha1_round__DOT__k = 0U;
    if ((0x13U >= (IData)(vlSelf->round))) {
        ++(vlSymsp->__Vcoverage[520]);
        vlSelf->sha1_round__DOT__k = 0x5a827999U;
    } else {
        ++(vlSymsp->__Vcoverage[521]);
    }
    if (((0x14U <= (IData)(vlSelf->round)) & (0x27U 
                                              >= (IData)(vlSelf->round)))) {
        ++(vlSymsp->__Vcoverage[522]);
        vlSelf->sha1_round__DOT__k = 0x6ed9eba1U;
    } else {
        ++(vlSymsp->__Vcoverage[523]);
    }
    if (((0x28U <= (IData)(vlSelf->round)) & (0x3bU 
                                              >= (IData)(vlSelf->round)))) {
        ++(vlSymsp->__Vcoverage[524]);
        vlSelf->sha1_round__DOT__k = 0x8f1bbcdcU;
    } else {
        ++(vlSymsp->__Vcoverage[525]);
    }
    if (((0x3cU <= (IData)(vlSelf->round)) & (0x4fU 
                                              >= (IData)(vlSelf->round)))) {
        ++(vlSymsp->__Vcoverage[526]);
        vlSelf->sha1_round__DOT__k = 0xca62c1d6U;
    } else {
        ++(vlSymsp->__Vcoverage[527]);
    }
    vlSelf->sha1_round__DOT__a_shift = ((vlSelf->din[4U] 
                                         << 5U) | (
                                                   vlSelf->din[4U] 
                                                   >> 0x1bU));
    ++(vlSymsp->__Vcoverage[537]);
    vlSelf->sha1_round__DOT__f = 0U;
    if ((0x13U >= (IData)(vlSelf->round))) {
        ++(vlSymsp->__Vcoverage[529]);
        vlSelf->sha1_round__DOT__f = ((vlSelf->din[3U] 
                                       & vlSelf->din[2U]) 
                                      | ((~ vlSelf->din[3U]) 
                                         & vlSelf->din[1U]));
    } else {
        ++(vlSymsp->__Vcoverage[530]);
    }
    if (((0x14U <= (IData)(vlSelf->round)) & (0x27U 
                                              >= (IData)(vlSelf->round)))) {
        ++(vlSymsp->__Vcoverage[531]);
        vlSelf->sha1_round__DOT__f = ((vlSelf->din[3U] 
                                       ^ vlSelf->din[2U]) 
                                      ^ vlSelf->din[1U]);
    } else {
        ++(vlSymsp->__Vcoverage[532]);
    }
    if (((0x28U <= (IData)(vlSelf->round)) & (0x3bU 
                                              >= (IData)(vlSelf->round)))) {
        ++(vlSymsp->__Vcoverage[533]);
        vlSelf->sha1_round__DOT__f = ((vlSelf->din[3U] 
                                       & (vlSelf->din[2U] 
                                          | vlSelf->din[1U])) 
                                      | (vlSelf->din[2U] 
                                         & vlSelf->din[1U]));
    } else {
        ++(vlSymsp->__Vcoverage[534]);
    }
    if (((0x3cU <= (IData)(vlSelf->round)) & (0x4fU 
                                              >= (IData)(vlSelf->round)))) {
        ++(vlSymsp->__Vcoverage[535]);
        vlSelf->sha1_round__DOT__f = ((vlSelf->din[3U] 
                                       ^ vlSelf->din[2U]) 
                                      ^ vlSelf->din[1U]);
    } else {
        ++(vlSymsp->__Vcoverage[536]);
    }
    if ((1U & (vlSelf->sha1_round__DOT__b_shift ^ vlSelf->sha1_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[456]);
        vlSelf->sha1_round__DOT____Vtogcov__b_shift 
            = ((0xfffffffeU & vlSelf->sha1_round__DOT____Vtogcov__b_shift) 
               | (1U & vlSelf->sha1_round__DOT__b_shift));
    }
    if ((2U & (vlSelf->sha1_round__DOT__b_shift ^ vlSelf->sha1_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[457]);
        vlSelf->sha1_round__DOT____Vtogcov__b_shift 
            = ((0xfffffffdU & vlSelf->sha1_round__DOT____Vtogcov__b_shift) 
               | (2U & vlSelf->sha1_round__DOT__b_shift));
    }
    if ((4U & (vlSelf->sha1_round__DOT__b_shift ^ vlSelf->sha1_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[458]);
        vlSelf->sha1_round__DOT____Vtogcov__b_shift 
            = ((0xfffffffbU & vlSelf->sha1_round__DOT____Vtogcov__b_shift) 
               | (4U & vlSelf->sha1_round__DOT__b_shift));
    }
    if ((8U & (vlSelf->sha1_round__DOT__b_shift ^ vlSelf->sha1_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[459]);
        vlSelf->sha1_round__DOT____Vtogcov__b_shift 
            = ((0xfffffff7U & vlSelf->sha1_round__DOT____Vtogcov__b_shift) 
               | (8U & vlSelf->sha1_round__DOT__b_shift));
    }
    if ((0x10U & (vlSelf->sha1_round__DOT__b_shift 
                  ^ vlSelf->sha1_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[460]);
        vlSelf->sha1_round__DOT____Vtogcov__b_shift 
            = ((0xffffffefU & vlSelf->sha1_round__DOT____Vtogcov__b_shift) 
               | (0x10U & vlSelf->sha1_round__DOT__b_shift));
    }
    if ((0x20U & (vlSelf->sha1_round__DOT__b_shift 
                  ^ vlSelf->sha1_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[461]);
        vlSelf->sha1_round__DOT____Vtogcov__b_shift 
            = ((0xffffffdfU & vlSelf->sha1_round__DOT____Vtogcov__b_shift) 
               | (0x20U & vlSelf->sha1_round__DOT__b_shift));
    }
    if ((0x40U & (vlSelf->sha1_round__DOT__b_shift 
                  ^ vlSelf->sha1_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[462]);
        vlSelf->sha1_round__DOT____Vtogcov__b_shift 
            = ((0xffffffbfU & vlSelf->sha1_round__DOT____Vtogcov__b_shift) 
               | (0x40U & vlSelf->sha1_round__DOT__b_shift));
    }
    if ((0x80U & (vlSelf->sha1_round__DOT__b_shift 
                  ^ vlSelf->sha1_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[463]);
        vlSelf->sha1_round__DOT____Vtogcov__b_shift 
            = ((0xffffff7fU & vlSelf->sha1_round__DOT____Vtogcov__b_shift) 
               | (0x80U & vlSelf->sha1_round__DOT__b_shift));
    }
    if ((0x100U & (vlSelf->sha1_round__DOT__b_shift 
                   ^ vlSelf->sha1_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[464]);
        vlSelf->sha1_round__DOT____Vtogcov__b_shift 
            = ((0xfffffeffU & vlSelf->sha1_round__DOT____Vtogcov__b_shift) 
               | (0x100U & vlSelf->sha1_round__DOT__b_shift));
    }
    if ((0x200U & (vlSelf->sha1_round__DOT__b_shift 
                   ^ vlSelf->sha1_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[465]);
        vlSelf->sha1_round__DOT____Vtogcov__b_shift 
            = ((0xfffffdffU & vlSelf->sha1_round__DOT____Vtogcov__b_shift) 
               | (0x200U & vlSelf->sha1_round__DOT__b_shift));
    }
    if ((0x400U & (vlSelf->sha1_round__DOT__b_shift 
                   ^ vlSelf->sha1_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[466]);
        vlSelf->sha1_round__DOT____Vtogcov__b_shift 
            = ((0xfffffbffU & vlSelf->sha1_round__DOT____Vtogcov__b_shift) 
               | (0x400U & vlSelf->sha1_round__DOT__b_shift));
    }
    if ((0x800U & (vlSelf->sha1_round__DOT__b_shift 
                   ^ vlSelf->sha1_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[467]);
        vlSelf->sha1_round__DOT____Vtogcov__b_shift 
            = ((0xfffff7ffU & vlSelf->sha1_round__DOT____Vtogcov__b_shift) 
               | (0x800U & vlSelf->sha1_round__DOT__b_shift));
    }
    if ((0x1000U & (vlSelf->sha1_round__DOT__b_shift 
                    ^ vlSelf->sha1_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[468]);
        vlSelf->sha1_round__DOT____Vtogcov__b_shift 
            = ((0xffffefffU & vlSelf->sha1_round__DOT____Vtogcov__b_shift) 
               | (0x1000U & vlSelf->sha1_round__DOT__b_shift));
    }
    if ((0x2000U & (vlSelf->sha1_round__DOT__b_shift 
                    ^ vlSelf->sha1_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[469]);
        vlSelf->sha1_round__DOT____Vtogcov__b_shift 
            = ((0xffffdfffU & vlSelf->sha1_round__DOT____Vtogcov__b_shift) 
               | (0x2000U & vlSelf->sha1_round__DOT__b_shift));
    }
    if ((0x4000U & (vlSelf->sha1_round__DOT__b_shift 
                    ^ vlSelf->sha1_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[470]);
        vlSelf->sha1_round__DOT____Vtogcov__b_shift 
            = ((0xffffbfffU & vlSelf->sha1_round__DOT____Vtogcov__b_shift) 
               | (0x4000U & vlSelf->sha1_round__DOT__b_shift));
    }
    if ((0x8000U & (vlSelf->sha1_round__DOT__b_shift 
                    ^ vlSelf->sha1_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[471]);
        vlSelf->sha1_round__DOT____Vtogcov__b_shift 
            = ((0xffff7fffU & vlSelf->sha1_round__DOT____Vtogcov__b_shift) 
               | (0x8000U & vlSelf->sha1_round__DOT__b_shift));
    }
    if ((0x10000U & (vlSelf->sha1_round__DOT__b_shift 
                     ^ vlSelf->sha1_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[472]);
        vlSelf->sha1_round__DOT____Vtogcov__b_shift 
            = ((0xfffeffffU & vlSelf->sha1_round__DOT____Vtogcov__b_shift) 
               | (0x10000U & vlSelf->sha1_round__DOT__b_shift));
    }
    if ((0x20000U & (vlSelf->sha1_round__DOT__b_shift 
                     ^ vlSelf->sha1_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[473]);
        vlSelf->sha1_round__DOT____Vtogcov__b_shift 
            = ((0xfffdffffU & vlSelf->sha1_round__DOT____Vtogcov__b_shift) 
               | (0x20000U & vlSelf->sha1_round__DOT__b_shift));
    }
    if ((0x40000U & (vlSelf->sha1_round__DOT__b_shift 
                     ^ vlSelf->sha1_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[474]);
        vlSelf->sha1_round__DOT____Vtogcov__b_shift 
            = ((0xfffbffffU & vlSelf->sha1_round__DOT____Vtogcov__b_shift) 
               | (0x40000U & vlSelf->sha1_round__DOT__b_shift));
    }
    if ((0x80000U & (vlSelf->sha1_round__DOT__b_shift 
                     ^ vlSelf->sha1_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[475]);
        vlSelf->sha1_round__DOT____Vtogcov__b_shift 
            = ((0xfff7ffffU & vlSelf->sha1_round__DOT____Vtogcov__b_shift) 
               | (0x80000U & vlSelf->sha1_round__DOT__b_shift));
    }
    if ((0x100000U & (vlSelf->sha1_round__DOT__b_shift 
                      ^ vlSelf->sha1_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[476]);
        vlSelf->sha1_round__DOT____Vtogcov__b_shift 
            = ((0xffefffffU & vlSelf->sha1_round__DOT____Vtogcov__b_shift) 
               | (0x100000U & vlSelf->sha1_round__DOT__b_shift));
    }
    if ((0x200000U & (vlSelf->sha1_round__DOT__b_shift 
                      ^ vlSelf->sha1_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[477]);
        vlSelf->sha1_round__DOT____Vtogcov__b_shift 
            = ((0xffdfffffU & vlSelf->sha1_round__DOT____Vtogcov__b_shift) 
               | (0x200000U & vlSelf->sha1_round__DOT__b_shift));
    }
    if ((0x400000U & (vlSelf->sha1_round__DOT__b_shift 
                      ^ vlSelf->sha1_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[478]);
        vlSelf->sha1_round__DOT____Vtogcov__b_shift 
            = ((0xffbfffffU & vlSelf->sha1_round__DOT____Vtogcov__b_shift) 
               | (0x400000U & vlSelf->sha1_round__DOT__b_shift));
    }
    if ((0x800000U & (vlSelf->sha1_round__DOT__b_shift 
                      ^ vlSelf->sha1_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[479]);
        vlSelf->sha1_round__DOT____Vtogcov__b_shift 
            = ((0xff7fffffU & vlSelf->sha1_round__DOT____Vtogcov__b_shift) 
               | (0x800000U & vlSelf->sha1_round__DOT__b_shift));
    }
    if ((0x1000000U & (vlSelf->sha1_round__DOT__b_shift 
                       ^ vlSelf->sha1_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[480]);
        vlSelf->sha1_round__DOT____Vtogcov__b_shift 
            = ((0xfeffffffU & vlSelf->sha1_round__DOT____Vtogcov__b_shift) 
               | (0x1000000U & vlSelf->sha1_round__DOT__b_shift));
    }
    if ((0x2000000U & (vlSelf->sha1_round__DOT__b_shift 
                       ^ vlSelf->sha1_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[481]);
        vlSelf->sha1_round__DOT____Vtogcov__b_shift 
            = ((0xfdffffffU & vlSelf->sha1_round__DOT____Vtogcov__b_shift) 
               | (0x2000000U & vlSelf->sha1_round__DOT__b_shift));
    }
    if ((0x4000000U & (vlSelf->sha1_round__DOT__b_shift 
                       ^ vlSelf->sha1_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[482]);
        vlSelf->sha1_round__DOT____Vtogcov__b_shift 
            = ((0xfbffffffU & vlSelf->sha1_round__DOT____Vtogcov__b_shift) 
               | (0x4000000U & vlSelf->sha1_round__DOT__b_shift));
    }
    if ((0x8000000U & (vlSelf->sha1_round__DOT__b_shift 
                       ^ vlSelf->sha1_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[483]);
        vlSelf->sha1_round__DOT____Vtogcov__b_shift 
            = ((0xf7ffffffU & vlSelf->sha1_round__DOT____Vtogcov__b_shift) 
               | (0x8000000U & vlSelf->sha1_round__DOT__b_shift));
    }
    if ((0x10000000U & (vlSelf->sha1_round__DOT__b_shift 
                        ^ vlSelf->sha1_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[484]);
        vlSelf->sha1_round__DOT____Vtogcov__b_shift 
            = ((0xefffffffU & vlSelf->sha1_round__DOT____Vtogcov__b_shift) 
               | (0x10000000U & vlSelf->sha1_round__DOT__b_shift));
    }
    if ((0x20000000U & (vlSelf->sha1_round__DOT__b_shift 
                        ^ vlSelf->sha1_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[485]);
        vlSelf->sha1_round__DOT____Vtogcov__b_shift 
            = ((0xdfffffffU & vlSelf->sha1_round__DOT____Vtogcov__b_shift) 
               | (0x20000000U & vlSelf->sha1_round__DOT__b_shift));
    }
    if ((0x40000000U & (vlSelf->sha1_round__DOT__b_shift 
                        ^ vlSelf->sha1_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[486]);
        vlSelf->sha1_round__DOT____Vtogcov__b_shift 
            = ((0xbfffffffU & vlSelf->sha1_round__DOT____Vtogcov__b_shift) 
               | (0x40000000U & vlSelf->sha1_round__DOT__b_shift));
    }
    if (((vlSelf->sha1_round__DOT__b_shift ^ vlSelf->sha1_round__DOT____Vtogcov__b_shift) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[487]);
        vlSelf->sha1_round__DOT____Vtogcov__b_shift 
            = ((0x7fffffffU & vlSelf->sha1_round__DOT____Vtogcov__b_shift) 
               | (0x80000000U & vlSelf->sha1_round__DOT__b_shift));
    }
    if ((1U & (vlSelf->sha1_round__DOT__k ^ vlSelf->sha1_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelf->sha1_round__DOT____Vtogcov__k = ((0xfffffffeU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__k) 
                                                 | (1U 
                                                    & vlSelf->sha1_round__DOT__k));
    }
    if ((2U & (vlSelf->sha1_round__DOT__k ^ vlSelf->sha1_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelf->sha1_round__DOT____Vtogcov__k = ((0xfffffffdU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__k) 
                                                 | (2U 
                                                    & vlSelf->sha1_round__DOT__k));
    }
    if ((4U & (vlSelf->sha1_round__DOT__k ^ vlSelf->sha1_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelf->sha1_round__DOT____Vtogcov__k = ((0xfffffffbU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__k) 
                                                 | (4U 
                                                    & vlSelf->sha1_round__DOT__k));
    }
    if ((8U & (vlSelf->sha1_round__DOT__k ^ vlSelf->sha1_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelf->sha1_round__DOT____Vtogcov__k = ((0xfffffff7U 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__k) 
                                                 | (8U 
                                                    & vlSelf->sha1_round__DOT__k));
    }
    if ((0x10U & (vlSelf->sha1_round__DOT__k ^ vlSelf->sha1_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelf->sha1_round__DOT____Vtogcov__k = ((0xffffffefU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__k) 
                                                 | (0x10U 
                                                    & vlSelf->sha1_round__DOT__k));
    }
    if ((0x20U & (vlSelf->sha1_round__DOT__k ^ vlSelf->sha1_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelf->sha1_round__DOT____Vtogcov__k = ((0xffffffdfU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__k) 
                                                 | (0x20U 
                                                    & vlSelf->sha1_round__DOT__k));
    }
    if ((0x40U & (vlSelf->sha1_round__DOT__k ^ vlSelf->sha1_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelf->sha1_round__DOT____Vtogcov__k = ((0xffffffbfU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__k) 
                                                 | (0x40U 
                                                    & vlSelf->sha1_round__DOT__k));
    }
    if ((0x80U & (vlSelf->sha1_round__DOT__k ^ vlSelf->sha1_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelf->sha1_round__DOT____Vtogcov__k = ((0xffffff7fU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__k) 
                                                 | (0x80U 
                                                    & vlSelf->sha1_round__DOT__k));
    }
    if ((0x100U & (vlSelf->sha1_round__DOT__k ^ vlSelf->sha1_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelf->sha1_round__DOT____Vtogcov__k = ((0xfffffeffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__k) 
                                                 | (0x100U 
                                                    & vlSelf->sha1_round__DOT__k));
    }
    if ((0x200U & (vlSelf->sha1_round__DOT__k ^ vlSelf->sha1_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelf->sha1_round__DOT____Vtogcov__k = ((0xfffffdffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__k) 
                                                 | (0x200U 
                                                    & vlSelf->sha1_round__DOT__k));
    }
    if ((0x400U & (vlSelf->sha1_round__DOT__k ^ vlSelf->sha1_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelf->sha1_round__DOT____Vtogcov__k = ((0xfffffbffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__k) 
                                                 | (0x400U 
                                                    & vlSelf->sha1_round__DOT__k));
    }
    if ((0x800U & (vlSelf->sha1_round__DOT__k ^ vlSelf->sha1_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelf->sha1_round__DOT____Vtogcov__k = ((0xfffff7ffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__k) 
                                                 | (0x800U 
                                                    & vlSelf->sha1_round__DOT__k));
    }
    if ((0x1000U & (vlSelf->sha1_round__DOT__k ^ vlSelf->sha1_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelf->sha1_round__DOT____Vtogcov__k = ((0xffffefffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__k) 
                                                 | (0x1000U 
                                                    & vlSelf->sha1_round__DOT__k));
    }
    if ((0x2000U & (vlSelf->sha1_round__DOT__k ^ vlSelf->sha1_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelf->sha1_round__DOT____Vtogcov__k = ((0xffffdfffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__k) 
                                                 | (0x2000U 
                                                    & vlSelf->sha1_round__DOT__k));
    }
    if ((0x4000U & (vlSelf->sha1_round__DOT__k ^ vlSelf->sha1_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelf->sha1_round__DOT____Vtogcov__k = ((0xffffbfffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__k) 
                                                 | (0x4000U 
                                                    & vlSelf->sha1_round__DOT__k));
    }
    if ((0x8000U & (vlSelf->sha1_round__DOT__k ^ vlSelf->sha1_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelf->sha1_round__DOT____Vtogcov__k = ((0xffff7fffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__k) 
                                                 | (0x8000U 
                                                    & vlSelf->sha1_round__DOT__k));
    }
    if ((0x10000U & (vlSelf->sha1_round__DOT__k ^ vlSelf->sha1_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelf->sha1_round__DOT____Vtogcov__k = ((0xfffeffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__k) 
                                                 | (0x10000U 
                                                    & vlSelf->sha1_round__DOT__k));
    }
    if ((0x20000U & (vlSelf->sha1_round__DOT__k ^ vlSelf->sha1_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelf->sha1_round__DOT____Vtogcov__k = ((0xfffdffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__k) 
                                                 | (0x20000U 
                                                    & vlSelf->sha1_round__DOT__k));
    }
    if ((0x40000U & (vlSelf->sha1_round__DOT__k ^ vlSelf->sha1_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelf->sha1_round__DOT____Vtogcov__k = ((0xfffbffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__k) 
                                                 | (0x40000U 
                                                    & vlSelf->sha1_round__DOT__k));
    }
    if ((0x80000U & (vlSelf->sha1_round__DOT__k ^ vlSelf->sha1_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelf->sha1_round__DOT____Vtogcov__k = ((0xfff7ffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__k) 
                                                 | (0x80000U 
                                                    & vlSelf->sha1_round__DOT__k));
    }
    if ((0x100000U & (vlSelf->sha1_round__DOT__k ^ vlSelf->sha1_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelf->sha1_round__DOT____Vtogcov__k = ((0xffefffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__k) 
                                                 | (0x100000U 
                                                    & vlSelf->sha1_round__DOT__k));
    }
    if ((0x200000U & (vlSelf->sha1_round__DOT__k ^ vlSelf->sha1_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[413]);
        vlSelf->sha1_round__DOT____Vtogcov__k = ((0xffdfffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__k) 
                                                 | (0x200000U 
                                                    & vlSelf->sha1_round__DOT__k));
    }
    if ((0x400000U & (vlSelf->sha1_round__DOT__k ^ vlSelf->sha1_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[414]);
        vlSelf->sha1_round__DOT____Vtogcov__k = ((0xffbfffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__k) 
                                                 | (0x400000U 
                                                    & vlSelf->sha1_round__DOT__k));
    }
    if ((0x800000U & (vlSelf->sha1_round__DOT__k ^ vlSelf->sha1_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[415]);
        vlSelf->sha1_round__DOT____Vtogcov__k = ((0xff7fffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__k) 
                                                 | (0x800000U 
                                                    & vlSelf->sha1_round__DOT__k));
    }
    if ((0x1000000U & (vlSelf->sha1_round__DOT__k ^ vlSelf->sha1_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[416]);
        vlSelf->sha1_round__DOT____Vtogcov__k = ((0xfeffffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__k) 
                                                 | (0x1000000U 
                                                    & vlSelf->sha1_round__DOT__k));
    }
    if ((0x2000000U & (vlSelf->sha1_round__DOT__k ^ vlSelf->sha1_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[417]);
        vlSelf->sha1_round__DOT____Vtogcov__k = ((0xfdffffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__k) 
                                                 | (0x2000000U 
                                                    & vlSelf->sha1_round__DOT__k));
    }
    if ((0x4000000U & (vlSelf->sha1_round__DOT__k ^ vlSelf->sha1_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[418]);
        vlSelf->sha1_round__DOT____Vtogcov__k = ((0xfbffffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__k) 
                                                 | (0x4000000U 
                                                    & vlSelf->sha1_round__DOT__k));
    }
    if ((0x8000000U & (vlSelf->sha1_round__DOT__k ^ vlSelf->sha1_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[419]);
        vlSelf->sha1_round__DOT____Vtogcov__k = ((0xf7ffffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__k) 
                                                 | (0x8000000U 
                                                    & vlSelf->sha1_round__DOT__k));
    }
    if ((0x10000000U & (vlSelf->sha1_round__DOT__k 
                        ^ vlSelf->sha1_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[420]);
        vlSelf->sha1_round__DOT____Vtogcov__k = ((0xefffffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__k) 
                                                 | (0x10000000U 
                                                    & vlSelf->sha1_round__DOT__k));
    }
    if ((0x20000000U & (vlSelf->sha1_round__DOT__k 
                        ^ vlSelf->sha1_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[421]);
        vlSelf->sha1_round__DOT____Vtogcov__k = ((0xdfffffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__k) 
                                                 | (0x20000000U 
                                                    & vlSelf->sha1_round__DOT__k));
    }
    if ((0x40000000U & (vlSelf->sha1_round__DOT__k 
                        ^ vlSelf->sha1_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[422]);
        vlSelf->sha1_round__DOT____Vtogcov__k = ((0xbfffffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__k) 
                                                 | (0x40000000U 
                                                    & vlSelf->sha1_round__DOT__k));
    }
    if (((vlSelf->sha1_round__DOT__k ^ vlSelf->sha1_round__DOT____Vtogcov__k) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[423]);
        vlSelf->sha1_round__DOT____Vtogcov__k = ((0x7fffffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__k) 
                                                 | (0x80000000U 
                                                    & vlSelf->sha1_round__DOT__k));
    }
    if ((1U & (vlSelf->sha1_round__DOT__a_shift ^ vlSelf->sha1_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[424]);
        vlSelf->sha1_round__DOT____Vtogcov__a_shift 
            = ((0xfffffffeU & vlSelf->sha1_round__DOT____Vtogcov__a_shift) 
               | (1U & vlSelf->sha1_round__DOT__a_shift));
    }
    if ((2U & (vlSelf->sha1_round__DOT__a_shift ^ vlSelf->sha1_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[425]);
        vlSelf->sha1_round__DOT____Vtogcov__a_shift 
            = ((0xfffffffdU & vlSelf->sha1_round__DOT____Vtogcov__a_shift) 
               | (2U & vlSelf->sha1_round__DOT__a_shift));
    }
    if ((4U & (vlSelf->sha1_round__DOT__a_shift ^ vlSelf->sha1_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[426]);
        vlSelf->sha1_round__DOT____Vtogcov__a_shift 
            = ((0xfffffffbU & vlSelf->sha1_round__DOT____Vtogcov__a_shift) 
               | (4U & vlSelf->sha1_round__DOT__a_shift));
    }
    if ((8U & (vlSelf->sha1_round__DOT__a_shift ^ vlSelf->sha1_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[427]);
        vlSelf->sha1_round__DOT____Vtogcov__a_shift 
            = ((0xfffffff7U & vlSelf->sha1_round__DOT____Vtogcov__a_shift) 
               | (8U & vlSelf->sha1_round__DOT__a_shift));
    }
    if ((0x10U & (vlSelf->sha1_round__DOT__a_shift 
                  ^ vlSelf->sha1_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[428]);
        vlSelf->sha1_round__DOT____Vtogcov__a_shift 
            = ((0xffffffefU & vlSelf->sha1_round__DOT____Vtogcov__a_shift) 
               | (0x10U & vlSelf->sha1_round__DOT__a_shift));
    }
    if ((0x20U & (vlSelf->sha1_round__DOT__a_shift 
                  ^ vlSelf->sha1_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlSelf->sha1_round__DOT____Vtogcov__a_shift 
            = ((0xffffffdfU & vlSelf->sha1_round__DOT____Vtogcov__a_shift) 
               | (0x20U & vlSelf->sha1_round__DOT__a_shift));
    }
    if ((0x40U & (vlSelf->sha1_round__DOT__a_shift 
                  ^ vlSelf->sha1_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelf->sha1_round__DOT____Vtogcov__a_shift 
            = ((0xffffffbfU & vlSelf->sha1_round__DOT____Vtogcov__a_shift) 
               | (0x40U & vlSelf->sha1_round__DOT__a_shift));
    }
    if ((0x80U & (vlSelf->sha1_round__DOT__a_shift 
                  ^ vlSelf->sha1_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[431]);
        vlSelf->sha1_round__DOT____Vtogcov__a_shift 
            = ((0xffffff7fU & vlSelf->sha1_round__DOT____Vtogcov__a_shift) 
               | (0x80U & vlSelf->sha1_round__DOT__a_shift));
    }
    if ((0x100U & (vlSelf->sha1_round__DOT__a_shift 
                   ^ vlSelf->sha1_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[432]);
        vlSelf->sha1_round__DOT____Vtogcov__a_shift 
            = ((0xfffffeffU & vlSelf->sha1_round__DOT____Vtogcov__a_shift) 
               | (0x100U & vlSelf->sha1_round__DOT__a_shift));
    }
    if ((0x200U & (vlSelf->sha1_round__DOT__a_shift 
                   ^ vlSelf->sha1_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[433]);
        vlSelf->sha1_round__DOT____Vtogcov__a_shift 
            = ((0xfffffdffU & vlSelf->sha1_round__DOT____Vtogcov__a_shift) 
               | (0x200U & vlSelf->sha1_round__DOT__a_shift));
    }
    if ((0x400U & (vlSelf->sha1_round__DOT__a_shift 
                   ^ vlSelf->sha1_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[434]);
        vlSelf->sha1_round__DOT____Vtogcov__a_shift 
            = ((0xfffffbffU & vlSelf->sha1_round__DOT____Vtogcov__a_shift) 
               | (0x400U & vlSelf->sha1_round__DOT__a_shift));
    }
    if ((0x800U & (vlSelf->sha1_round__DOT__a_shift 
                   ^ vlSelf->sha1_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[435]);
        vlSelf->sha1_round__DOT____Vtogcov__a_shift 
            = ((0xfffff7ffU & vlSelf->sha1_round__DOT____Vtogcov__a_shift) 
               | (0x800U & vlSelf->sha1_round__DOT__a_shift));
    }
    if ((0x1000U & (vlSelf->sha1_round__DOT__a_shift 
                    ^ vlSelf->sha1_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlSelf->sha1_round__DOT____Vtogcov__a_shift 
            = ((0xffffefffU & vlSelf->sha1_round__DOT____Vtogcov__a_shift) 
               | (0x1000U & vlSelf->sha1_round__DOT__a_shift));
    }
    if ((0x2000U & (vlSelf->sha1_round__DOT__a_shift 
                    ^ vlSelf->sha1_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlSelf->sha1_round__DOT____Vtogcov__a_shift 
            = ((0xffffdfffU & vlSelf->sha1_round__DOT____Vtogcov__a_shift) 
               | (0x2000U & vlSelf->sha1_round__DOT__a_shift));
    }
    if ((0x4000U & (vlSelf->sha1_round__DOT__a_shift 
                    ^ vlSelf->sha1_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[438]);
        vlSelf->sha1_round__DOT____Vtogcov__a_shift 
            = ((0xffffbfffU & vlSelf->sha1_round__DOT____Vtogcov__a_shift) 
               | (0x4000U & vlSelf->sha1_round__DOT__a_shift));
    }
    if ((0x8000U & (vlSelf->sha1_round__DOT__a_shift 
                    ^ vlSelf->sha1_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[439]);
        vlSelf->sha1_round__DOT____Vtogcov__a_shift 
            = ((0xffff7fffU & vlSelf->sha1_round__DOT____Vtogcov__a_shift) 
               | (0x8000U & vlSelf->sha1_round__DOT__a_shift));
    }
    if ((0x10000U & (vlSelf->sha1_round__DOT__a_shift 
                     ^ vlSelf->sha1_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[440]);
        vlSelf->sha1_round__DOT____Vtogcov__a_shift 
            = ((0xfffeffffU & vlSelf->sha1_round__DOT____Vtogcov__a_shift) 
               | (0x10000U & vlSelf->sha1_round__DOT__a_shift));
    }
    if ((0x20000U & (vlSelf->sha1_round__DOT__a_shift 
                     ^ vlSelf->sha1_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[441]);
        vlSelf->sha1_round__DOT____Vtogcov__a_shift 
            = ((0xfffdffffU & vlSelf->sha1_round__DOT____Vtogcov__a_shift) 
               | (0x20000U & vlSelf->sha1_round__DOT__a_shift));
    }
    if ((0x40000U & (vlSelf->sha1_round__DOT__a_shift 
                     ^ vlSelf->sha1_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[442]);
        vlSelf->sha1_round__DOT____Vtogcov__a_shift 
            = ((0xfffbffffU & vlSelf->sha1_round__DOT____Vtogcov__a_shift) 
               | (0x40000U & vlSelf->sha1_round__DOT__a_shift));
    }
    if ((0x80000U & (vlSelf->sha1_round__DOT__a_shift 
                     ^ vlSelf->sha1_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[443]);
        vlSelf->sha1_round__DOT____Vtogcov__a_shift 
            = ((0xfff7ffffU & vlSelf->sha1_round__DOT____Vtogcov__a_shift) 
               | (0x80000U & vlSelf->sha1_round__DOT__a_shift));
    }
    if ((0x100000U & (vlSelf->sha1_round__DOT__a_shift 
                      ^ vlSelf->sha1_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[444]);
        vlSelf->sha1_round__DOT____Vtogcov__a_shift 
            = ((0xffefffffU & vlSelf->sha1_round__DOT____Vtogcov__a_shift) 
               | (0x100000U & vlSelf->sha1_round__DOT__a_shift));
    }
    if ((0x200000U & (vlSelf->sha1_round__DOT__a_shift 
                      ^ vlSelf->sha1_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[445]);
        vlSelf->sha1_round__DOT____Vtogcov__a_shift 
            = ((0xffdfffffU & vlSelf->sha1_round__DOT____Vtogcov__a_shift) 
               | (0x200000U & vlSelf->sha1_round__DOT__a_shift));
    }
    if ((0x400000U & (vlSelf->sha1_round__DOT__a_shift 
                      ^ vlSelf->sha1_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[446]);
        vlSelf->sha1_round__DOT____Vtogcov__a_shift 
            = ((0xffbfffffU & vlSelf->sha1_round__DOT____Vtogcov__a_shift) 
               | (0x400000U & vlSelf->sha1_round__DOT__a_shift));
    }
    if ((0x800000U & (vlSelf->sha1_round__DOT__a_shift 
                      ^ vlSelf->sha1_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[447]);
        vlSelf->sha1_round__DOT____Vtogcov__a_shift 
            = ((0xff7fffffU & vlSelf->sha1_round__DOT____Vtogcov__a_shift) 
               | (0x800000U & vlSelf->sha1_round__DOT__a_shift));
    }
    if ((0x1000000U & (vlSelf->sha1_round__DOT__a_shift 
                       ^ vlSelf->sha1_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[448]);
        vlSelf->sha1_round__DOT____Vtogcov__a_shift 
            = ((0xfeffffffU & vlSelf->sha1_round__DOT____Vtogcov__a_shift) 
               | (0x1000000U & vlSelf->sha1_round__DOT__a_shift));
    }
    if ((0x2000000U & (vlSelf->sha1_round__DOT__a_shift 
                       ^ vlSelf->sha1_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[449]);
        vlSelf->sha1_round__DOT____Vtogcov__a_shift 
            = ((0xfdffffffU & vlSelf->sha1_round__DOT____Vtogcov__a_shift) 
               | (0x2000000U & vlSelf->sha1_round__DOT__a_shift));
    }
    if ((0x4000000U & (vlSelf->sha1_round__DOT__a_shift 
                       ^ vlSelf->sha1_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[450]);
        vlSelf->sha1_round__DOT____Vtogcov__a_shift 
            = ((0xfbffffffU & vlSelf->sha1_round__DOT____Vtogcov__a_shift) 
               | (0x4000000U & vlSelf->sha1_round__DOT__a_shift));
    }
    if ((0x8000000U & (vlSelf->sha1_round__DOT__a_shift 
                       ^ vlSelf->sha1_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[451]);
        vlSelf->sha1_round__DOT____Vtogcov__a_shift 
            = ((0xf7ffffffU & vlSelf->sha1_round__DOT____Vtogcov__a_shift) 
               | (0x8000000U & vlSelf->sha1_round__DOT__a_shift));
    }
    if ((0x10000000U & (vlSelf->sha1_round__DOT__a_shift 
                        ^ vlSelf->sha1_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[452]);
        vlSelf->sha1_round__DOT____Vtogcov__a_shift 
            = ((0xefffffffU & vlSelf->sha1_round__DOT____Vtogcov__a_shift) 
               | (0x10000000U & vlSelf->sha1_round__DOT__a_shift));
    }
    if ((0x20000000U & (vlSelf->sha1_round__DOT__a_shift 
                        ^ vlSelf->sha1_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelf->sha1_round__DOT____Vtogcov__a_shift 
            = ((0xdfffffffU & vlSelf->sha1_round__DOT____Vtogcov__a_shift) 
               | (0x20000000U & vlSelf->sha1_round__DOT__a_shift));
    }
    if ((0x40000000U & (vlSelf->sha1_round__DOT__a_shift 
                        ^ vlSelf->sha1_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelf->sha1_round__DOT____Vtogcov__a_shift 
            = ((0xbfffffffU & vlSelf->sha1_round__DOT____Vtogcov__a_shift) 
               | (0x40000000U & vlSelf->sha1_round__DOT__a_shift));
    }
    if (((vlSelf->sha1_round__DOT__a_shift ^ vlSelf->sha1_round__DOT____Vtogcov__a_shift) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[455]);
        vlSelf->sha1_round__DOT____Vtogcov__a_shift 
            = ((0x7fffffffU & vlSelf->sha1_round__DOT____Vtogcov__a_shift) 
               | (0x80000000U & vlSelf->sha1_round__DOT__a_shift));
    }
    if ((1U & (vlSelf->sha1_round__DOT__f ^ vlSelf->sha1_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelf->sha1_round__DOT____Vtogcov__f = ((0xfffffffeU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__f) 
                                                 | (1U 
                                                    & vlSelf->sha1_round__DOT__f));
    }
    if ((2U & (vlSelf->sha1_round__DOT__f ^ vlSelf->sha1_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelf->sha1_round__DOT____Vtogcov__f = ((0xfffffffdU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__f) 
                                                 | (2U 
                                                    & vlSelf->sha1_round__DOT__f));
    }
    if ((4U & (vlSelf->sha1_round__DOT__f ^ vlSelf->sha1_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelf->sha1_round__DOT____Vtogcov__f = ((0xfffffffbU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__f) 
                                                 | (4U 
                                                    & vlSelf->sha1_round__DOT__f));
    }
    if ((8U & (vlSelf->sha1_round__DOT__f ^ vlSelf->sha1_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelf->sha1_round__DOT____Vtogcov__f = ((0xfffffff7U 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__f) 
                                                 | (8U 
                                                    & vlSelf->sha1_round__DOT__f));
    }
    if ((0x10U & (vlSelf->sha1_round__DOT__f ^ vlSelf->sha1_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelf->sha1_round__DOT____Vtogcov__f = ((0xffffffefU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__f) 
                                                 | (0x10U 
                                                    & vlSelf->sha1_round__DOT__f));
    }
    if ((0x20U & (vlSelf->sha1_round__DOT__f ^ vlSelf->sha1_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelf->sha1_round__DOT____Vtogcov__f = ((0xffffffdfU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__f) 
                                                 | (0x20U 
                                                    & vlSelf->sha1_round__DOT__f));
    }
    if ((0x40U & (vlSelf->sha1_round__DOT__f ^ vlSelf->sha1_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelf->sha1_round__DOT____Vtogcov__f = ((0xffffffbfU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__f) 
                                                 | (0x40U 
                                                    & vlSelf->sha1_round__DOT__f));
    }
    if ((0x80U & (vlSelf->sha1_round__DOT__f ^ vlSelf->sha1_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelf->sha1_round__DOT____Vtogcov__f = ((0xffffff7fU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__f) 
                                                 | (0x80U 
                                                    & vlSelf->sha1_round__DOT__f));
    }
    if ((0x100U & (vlSelf->sha1_round__DOT__f ^ vlSelf->sha1_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelf->sha1_round__DOT____Vtogcov__f = ((0xfffffeffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__f) 
                                                 | (0x100U 
                                                    & vlSelf->sha1_round__DOT__f));
    }
    if ((0x200U & (vlSelf->sha1_round__DOT__f ^ vlSelf->sha1_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelf->sha1_round__DOT____Vtogcov__f = ((0xfffffdffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__f) 
                                                 | (0x200U 
                                                    & vlSelf->sha1_round__DOT__f));
    }
    if ((0x400U & (vlSelf->sha1_round__DOT__f ^ vlSelf->sha1_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelf->sha1_round__DOT____Vtogcov__f = ((0xfffffbffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__f) 
                                                 | (0x400U 
                                                    & vlSelf->sha1_round__DOT__f));
    }
    if ((0x800U & (vlSelf->sha1_round__DOT__f ^ vlSelf->sha1_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelf->sha1_round__DOT____Vtogcov__f = ((0xfffff7ffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__f) 
                                                 | (0x800U 
                                                    & vlSelf->sha1_round__DOT__f));
    }
    if ((0x1000U & (vlSelf->sha1_round__DOT__f ^ vlSelf->sha1_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelf->sha1_round__DOT____Vtogcov__f = ((0xffffefffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__f) 
                                                 | (0x1000U 
                                                    & vlSelf->sha1_round__DOT__f));
    }
    if ((0x2000U & (vlSelf->sha1_round__DOT__f ^ vlSelf->sha1_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelf->sha1_round__DOT____Vtogcov__f = ((0xffffdfffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__f) 
                                                 | (0x2000U 
                                                    & vlSelf->sha1_round__DOT__f));
    }
    if ((0x4000U & (vlSelf->sha1_round__DOT__f ^ vlSelf->sha1_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelf->sha1_round__DOT____Vtogcov__f = ((0xffffbfffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__f) 
                                                 | (0x4000U 
                                                    & vlSelf->sha1_round__DOT__f));
    }
    if ((0x8000U & (vlSelf->sha1_round__DOT__f ^ vlSelf->sha1_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelf->sha1_round__DOT____Vtogcov__f = ((0xffff7fffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__f) 
                                                 | (0x8000U 
                                                    & vlSelf->sha1_round__DOT__f));
    }
    if ((0x10000U & (vlSelf->sha1_round__DOT__f ^ vlSelf->sha1_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelf->sha1_round__DOT____Vtogcov__f = ((0xfffeffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__f) 
                                                 | (0x10000U 
                                                    & vlSelf->sha1_round__DOT__f));
    }
    if ((0x20000U & (vlSelf->sha1_round__DOT__f ^ vlSelf->sha1_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelf->sha1_round__DOT____Vtogcov__f = ((0xfffdffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__f) 
                                                 | (0x20000U 
                                                    & vlSelf->sha1_round__DOT__f));
    }
    if ((0x40000U & (vlSelf->sha1_round__DOT__f ^ vlSelf->sha1_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelf->sha1_round__DOT____Vtogcov__f = ((0xfffbffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__f) 
                                                 | (0x40000U 
                                                    & vlSelf->sha1_round__DOT__f));
    }
    if ((0x80000U & (vlSelf->sha1_round__DOT__f ^ vlSelf->sha1_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelf->sha1_round__DOT____Vtogcov__f = ((0xfff7ffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__f) 
                                                 | (0x80000U 
                                                    & vlSelf->sha1_round__DOT__f));
    }
    if ((0x100000U & (vlSelf->sha1_round__DOT__f ^ vlSelf->sha1_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelf->sha1_round__DOT____Vtogcov__f = ((0xffefffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__f) 
                                                 | (0x100000U 
                                                    & vlSelf->sha1_round__DOT__f));
    }
    if ((0x200000U & (vlSelf->sha1_round__DOT__f ^ vlSelf->sha1_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelf->sha1_round__DOT____Vtogcov__f = ((0xffdfffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__f) 
                                                 | (0x200000U 
                                                    & vlSelf->sha1_round__DOT__f));
    }
    if ((0x400000U & (vlSelf->sha1_round__DOT__f ^ vlSelf->sha1_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelf->sha1_round__DOT____Vtogcov__f = ((0xffbfffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__f) 
                                                 | (0x400000U 
                                                    & vlSelf->sha1_round__DOT__f));
    }
    if ((0x800000U & (vlSelf->sha1_round__DOT__f ^ vlSelf->sha1_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelf->sha1_round__DOT____Vtogcov__f = ((0xff7fffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__f) 
                                                 | (0x800000U 
                                                    & vlSelf->sha1_round__DOT__f));
    }
    if ((0x1000000U & (vlSelf->sha1_round__DOT__f ^ vlSelf->sha1_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelf->sha1_round__DOT____Vtogcov__f = ((0xfeffffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__f) 
                                                 | (0x1000000U 
                                                    & vlSelf->sha1_round__DOT__f));
    }
    if ((0x2000000U & (vlSelf->sha1_round__DOT__f ^ vlSelf->sha1_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelf->sha1_round__DOT____Vtogcov__f = ((0xfdffffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__f) 
                                                 | (0x2000000U 
                                                    & vlSelf->sha1_round__DOT__f));
    }
    if ((0x4000000U & (vlSelf->sha1_round__DOT__f ^ vlSelf->sha1_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelf->sha1_round__DOT____Vtogcov__f = ((0xfbffffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__f) 
                                                 | (0x4000000U 
                                                    & vlSelf->sha1_round__DOT__f));
    }
    if ((0x8000000U & (vlSelf->sha1_round__DOT__f ^ vlSelf->sha1_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelf->sha1_round__DOT____Vtogcov__f = ((0xf7ffffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__f) 
                                                 | (0x8000000U 
                                                    & vlSelf->sha1_round__DOT__f));
    }
    if ((0x10000000U & (vlSelf->sha1_round__DOT__f 
                        ^ vlSelf->sha1_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelf->sha1_round__DOT____Vtogcov__f = ((0xefffffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__f) 
                                                 | (0x10000000U 
                                                    & vlSelf->sha1_round__DOT__f));
    }
    if ((0x20000000U & (vlSelf->sha1_round__DOT__f 
                        ^ vlSelf->sha1_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelf->sha1_round__DOT____Vtogcov__f = ((0xdfffffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__f) 
                                                 | (0x20000000U 
                                                    & vlSelf->sha1_round__DOT__f));
    }
    if ((0x40000000U & (vlSelf->sha1_round__DOT__f 
                        ^ vlSelf->sha1_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelf->sha1_round__DOT____Vtogcov__f = ((0xbfffffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__f) 
                                                 | (0x40000000U 
                                                    & vlSelf->sha1_round__DOT__f));
    }
    if (((vlSelf->sha1_round__DOT__f ^ vlSelf->sha1_round__DOT____Vtogcov__f) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelf->sha1_round__DOT____Vtogcov__f = ((0x7fffffffU 
                                                  & vlSelf->sha1_round__DOT____Vtogcov__f) 
                                                 | (0x80000000U 
                                                    & vlSelf->sha1_round__DOT__f));
    }
    vlSelf->sha1_round__DOT__add_result = (vlSelf->sha1_round__DOT__a_shift 
                                           + ((vlSelf->sha1_round__DOT__f 
                                               + vlSelf->sha1_round__DOT__k) 
                                              + (vlSelf->din[0U] 
                                                 + vlSelf->w)));
    if ((1U & (vlSelf->sha1_round__DOT__add_result 
               ^ vlSelf->sha1_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[488]);
        vlSelf->sha1_round__DOT____Vtogcov__add_result 
            = ((0xfffffffeU & vlSelf->sha1_round__DOT____Vtogcov__add_result) 
               | (1U & vlSelf->sha1_round__DOT__add_result));
    }
    if ((2U & (vlSelf->sha1_round__DOT__add_result 
               ^ vlSelf->sha1_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[489]);
        vlSelf->sha1_round__DOT____Vtogcov__add_result 
            = ((0xfffffffdU & vlSelf->sha1_round__DOT____Vtogcov__add_result) 
               | (2U & vlSelf->sha1_round__DOT__add_result));
    }
    if ((4U & (vlSelf->sha1_round__DOT__add_result 
               ^ vlSelf->sha1_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[490]);
        vlSelf->sha1_round__DOT____Vtogcov__add_result 
            = ((0xfffffffbU & vlSelf->sha1_round__DOT____Vtogcov__add_result) 
               | (4U & vlSelf->sha1_round__DOT__add_result));
    }
    if ((8U & (vlSelf->sha1_round__DOT__add_result 
               ^ vlSelf->sha1_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[491]);
        vlSelf->sha1_round__DOT____Vtogcov__add_result 
            = ((0xfffffff7U & vlSelf->sha1_round__DOT____Vtogcov__add_result) 
               | (8U & vlSelf->sha1_round__DOT__add_result));
    }
    if ((0x10U & (vlSelf->sha1_round__DOT__add_result 
                  ^ vlSelf->sha1_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[492]);
        vlSelf->sha1_round__DOT____Vtogcov__add_result 
            = ((0xffffffefU & vlSelf->sha1_round__DOT____Vtogcov__add_result) 
               | (0x10U & vlSelf->sha1_round__DOT__add_result));
    }
    if ((0x20U & (vlSelf->sha1_round__DOT__add_result 
                  ^ vlSelf->sha1_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[493]);
        vlSelf->sha1_round__DOT____Vtogcov__add_result 
            = ((0xffffffdfU & vlSelf->sha1_round__DOT____Vtogcov__add_result) 
               | (0x20U & vlSelf->sha1_round__DOT__add_result));
    }
    if ((0x40U & (vlSelf->sha1_round__DOT__add_result 
                  ^ vlSelf->sha1_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[494]);
        vlSelf->sha1_round__DOT____Vtogcov__add_result 
            = ((0xffffffbfU & vlSelf->sha1_round__DOT____Vtogcov__add_result) 
               | (0x40U & vlSelf->sha1_round__DOT__add_result));
    }
    if ((0x80U & (vlSelf->sha1_round__DOT__add_result 
                  ^ vlSelf->sha1_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[495]);
        vlSelf->sha1_round__DOT____Vtogcov__add_result 
            = ((0xffffff7fU & vlSelf->sha1_round__DOT____Vtogcov__add_result) 
               | (0x80U & vlSelf->sha1_round__DOT__add_result));
    }
    if ((0x100U & (vlSelf->sha1_round__DOT__add_result 
                   ^ vlSelf->sha1_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[496]);
        vlSelf->sha1_round__DOT____Vtogcov__add_result 
            = ((0xfffffeffU & vlSelf->sha1_round__DOT____Vtogcov__add_result) 
               | (0x100U & vlSelf->sha1_round__DOT__add_result));
    }
    if ((0x200U & (vlSelf->sha1_round__DOT__add_result 
                   ^ vlSelf->sha1_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[497]);
        vlSelf->sha1_round__DOT____Vtogcov__add_result 
            = ((0xfffffdffU & vlSelf->sha1_round__DOT____Vtogcov__add_result) 
               | (0x200U & vlSelf->sha1_round__DOT__add_result));
    }
    if ((0x400U & (vlSelf->sha1_round__DOT__add_result 
                   ^ vlSelf->sha1_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[498]);
        vlSelf->sha1_round__DOT____Vtogcov__add_result 
            = ((0xfffffbffU & vlSelf->sha1_round__DOT____Vtogcov__add_result) 
               | (0x400U & vlSelf->sha1_round__DOT__add_result));
    }
    if ((0x800U & (vlSelf->sha1_round__DOT__add_result 
                   ^ vlSelf->sha1_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[499]);
        vlSelf->sha1_round__DOT____Vtogcov__add_result 
            = ((0xfffff7ffU & vlSelf->sha1_round__DOT____Vtogcov__add_result) 
               | (0x800U & vlSelf->sha1_round__DOT__add_result));
    }
    if ((0x1000U & (vlSelf->sha1_round__DOT__add_result 
                    ^ vlSelf->sha1_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[500]);
        vlSelf->sha1_round__DOT____Vtogcov__add_result 
            = ((0xffffefffU & vlSelf->sha1_round__DOT____Vtogcov__add_result) 
               | (0x1000U & vlSelf->sha1_round__DOT__add_result));
    }
    if ((0x2000U & (vlSelf->sha1_round__DOT__add_result 
                    ^ vlSelf->sha1_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[501]);
        vlSelf->sha1_round__DOT____Vtogcov__add_result 
            = ((0xffffdfffU & vlSelf->sha1_round__DOT____Vtogcov__add_result) 
               | (0x2000U & vlSelf->sha1_round__DOT__add_result));
    }
    if ((0x4000U & (vlSelf->sha1_round__DOT__add_result 
                    ^ vlSelf->sha1_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[502]);
        vlSelf->sha1_round__DOT____Vtogcov__add_result 
            = ((0xffffbfffU & vlSelf->sha1_round__DOT____Vtogcov__add_result) 
               | (0x4000U & vlSelf->sha1_round__DOT__add_result));
    }
    if ((0x8000U & (vlSelf->sha1_round__DOT__add_result 
                    ^ vlSelf->sha1_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[503]);
        vlSelf->sha1_round__DOT____Vtogcov__add_result 
            = ((0xffff7fffU & vlSelf->sha1_round__DOT____Vtogcov__add_result) 
               | (0x8000U & vlSelf->sha1_round__DOT__add_result));
    }
    if ((0x10000U & (vlSelf->sha1_round__DOT__add_result 
                     ^ vlSelf->sha1_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[504]);
        vlSelf->sha1_round__DOT____Vtogcov__add_result 
            = ((0xfffeffffU & vlSelf->sha1_round__DOT____Vtogcov__add_result) 
               | (0x10000U & vlSelf->sha1_round__DOT__add_result));
    }
    if ((0x20000U & (vlSelf->sha1_round__DOT__add_result 
                     ^ vlSelf->sha1_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[505]);
        vlSelf->sha1_round__DOT____Vtogcov__add_result 
            = ((0xfffdffffU & vlSelf->sha1_round__DOT____Vtogcov__add_result) 
               | (0x20000U & vlSelf->sha1_round__DOT__add_result));
    }
    if ((0x40000U & (vlSelf->sha1_round__DOT__add_result 
                     ^ vlSelf->sha1_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[506]);
        vlSelf->sha1_round__DOT____Vtogcov__add_result 
            = ((0xfffbffffU & vlSelf->sha1_round__DOT____Vtogcov__add_result) 
               | (0x40000U & vlSelf->sha1_round__DOT__add_result));
    }
    if ((0x80000U & (vlSelf->sha1_round__DOT__add_result 
                     ^ vlSelf->sha1_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[507]);
        vlSelf->sha1_round__DOT____Vtogcov__add_result 
            = ((0xfff7ffffU & vlSelf->sha1_round__DOT____Vtogcov__add_result) 
               | (0x80000U & vlSelf->sha1_round__DOT__add_result));
    }
    if ((0x100000U & (vlSelf->sha1_round__DOT__add_result 
                      ^ vlSelf->sha1_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[508]);
        vlSelf->sha1_round__DOT____Vtogcov__add_result 
            = ((0xffefffffU & vlSelf->sha1_round__DOT____Vtogcov__add_result) 
               | (0x100000U & vlSelf->sha1_round__DOT__add_result));
    }
    if ((0x200000U & (vlSelf->sha1_round__DOT__add_result 
                      ^ vlSelf->sha1_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[509]);
        vlSelf->sha1_round__DOT____Vtogcov__add_result 
            = ((0xffdfffffU & vlSelf->sha1_round__DOT____Vtogcov__add_result) 
               | (0x200000U & vlSelf->sha1_round__DOT__add_result));
    }
    if ((0x400000U & (vlSelf->sha1_round__DOT__add_result 
                      ^ vlSelf->sha1_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[510]);
        vlSelf->sha1_round__DOT____Vtogcov__add_result 
            = ((0xffbfffffU & vlSelf->sha1_round__DOT____Vtogcov__add_result) 
               | (0x400000U & vlSelf->sha1_round__DOT__add_result));
    }
    if ((0x800000U & (vlSelf->sha1_round__DOT__add_result 
                      ^ vlSelf->sha1_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[511]);
        vlSelf->sha1_round__DOT____Vtogcov__add_result 
            = ((0xff7fffffU & vlSelf->sha1_round__DOT____Vtogcov__add_result) 
               | (0x800000U & vlSelf->sha1_round__DOT__add_result));
    }
    if ((0x1000000U & (vlSelf->sha1_round__DOT__add_result 
                       ^ vlSelf->sha1_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[512]);
        vlSelf->sha1_round__DOT____Vtogcov__add_result 
            = ((0xfeffffffU & vlSelf->sha1_round__DOT____Vtogcov__add_result) 
               | (0x1000000U & vlSelf->sha1_round__DOT__add_result));
    }
    if ((0x2000000U & (vlSelf->sha1_round__DOT__add_result 
                       ^ vlSelf->sha1_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[513]);
        vlSelf->sha1_round__DOT____Vtogcov__add_result 
            = ((0xfdffffffU & vlSelf->sha1_round__DOT____Vtogcov__add_result) 
               | (0x2000000U & vlSelf->sha1_round__DOT__add_result));
    }
    if ((0x4000000U & (vlSelf->sha1_round__DOT__add_result 
                       ^ vlSelf->sha1_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[514]);
        vlSelf->sha1_round__DOT____Vtogcov__add_result 
            = ((0xfbffffffU & vlSelf->sha1_round__DOT____Vtogcov__add_result) 
               | (0x4000000U & vlSelf->sha1_round__DOT__add_result));
    }
    if ((0x8000000U & (vlSelf->sha1_round__DOT__add_result 
                       ^ vlSelf->sha1_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[515]);
        vlSelf->sha1_round__DOT____Vtogcov__add_result 
            = ((0xf7ffffffU & vlSelf->sha1_round__DOT____Vtogcov__add_result) 
               | (0x8000000U & vlSelf->sha1_round__DOT__add_result));
    }
    if ((0x10000000U & (vlSelf->sha1_round__DOT__add_result 
                        ^ vlSelf->sha1_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[516]);
        vlSelf->sha1_round__DOT____Vtogcov__add_result 
            = ((0xefffffffU & vlSelf->sha1_round__DOT____Vtogcov__add_result) 
               | (0x10000000U & vlSelf->sha1_round__DOT__add_result));
    }
    if ((0x20000000U & (vlSelf->sha1_round__DOT__add_result 
                        ^ vlSelf->sha1_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[517]);
        vlSelf->sha1_round__DOT____Vtogcov__add_result 
            = ((0xdfffffffU & vlSelf->sha1_round__DOT____Vtogcov__add_result) 
               | (0x20000000U & vlSelf->sha1_round__DOT__add_result));
    }
    if ((0x40000000U & (vlSelf->sha1_round__DOT__add_result 
                        ^ vlSelf->sha1_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[518]);
        vlSelf->sha1_round__DOT____Vtogcov__add_result 
            = ((0xbfffffffU & vlSelf->sha1_round__DOT____Vtogcov__add_result) 
               | (0x40000000U & vlSelf->sha1_round__DOT__add_result));
    }
    if (((vlSelf->sha1_round__DOT__add_result ^ vlSelf->sha1_round__DOT____Vtogcov__add_result) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[519]);
        vlSelf->sha1_round__DOT____Vtogcov__add_result 
            = ((0x7fffffffU & vlSelf->sha1_round__DOT____Vtogcov__add_result) 
               | (0x80000000U & vlSelf->sha1_round__DOT__add_result));
    }
    vlSelf->dout[0U] = vlSelf->din[1U];
    vlSelf->dout[1U] = vlSelf->din[2U];
    vlSelf->dout[2U] = vlSelf->sha1_round__DOT__b_shift;
    vlSelf->dout[3U] = (IData)((((QData)((IData)(vlSelf->sha1_round__DOT__add_result)) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->din[4U]))));
    vlSelf->dout[4U] = (IData)(((((QData)((IData)(vlSelf->sha1_round__DOT__add_result)) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->din[4U]))) 
                                >> 0x20U));
    if ((1U & (vlSelf->dout[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[0U] 
            = ((0xfffffffeU & vlSelf->sha1_round__DOT____Vtogcov__dout[0U]) 
               | (1U & vlSelf->dout[0U]));
    }
    if ((2U & (vlSelf->dout[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[0U] 
            = ((0xfffffffdU & vlSelf->sha1_round__DOT____Vtogcov__dout[0U]) 
               | (2U & vlSelf->dout[0U]));
    }
    if ((4U & (vlSelf->dout[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[0U] 
            = ((0xfffffffbU & vlSelf->sha1_round__DOT____Vtogcov__dout[0U]) 
               | (4U & vlSelf->dout[0U]));
    }
    if ((8U & (vlSelf->dout[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[0U] 
            = ((0xfffffff7U & vlSelf->sha1_round__DOT____Vtogcov__dout[0U]) 
               | (8U & vlSelf->dout[0U]));
    }
    if ((0x10U & (vlSelf->dout[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[0U] 
            = ((0xffffffefU & vlSelf->sha1_round__DOT____Vtogcov__dout[0U]) 
               | (0x10U & vlSelf->dout[0U]));
    }
    if ((0x20U & (vlSelf->dout[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[0U] 
            = ((0xffffffdfU & vlSelf->sha1_round__DOT____Vtogcov__dout[0U]) 
               | (0x20U & vlSelf->dout[0U]));
    }
    if ((0x40U & (vlSelf->dout[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[0U] 
            = ((0xffffffbfU & vlSelf->sha1_round__DOT____Vtogcov__dout[0U]) 
               | (0x40U & vlSelf->dout[0U]));
    }
    if ((0x80U & (vlSelf->dout[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[0U] 
            = ((0xffffff7fU & vlSelf->sha1_round__DOT____Vtogcov__dout[0U]) 
               | (0x80U & vlSelf->dout[0U]));
    }
    if ((0x100U & (vlSelf->dout[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[0U] 
            = ((0xfffffeffU & vlSelf->sha1_round__DOT____Vtogcov__dout[0U]) 
               | (0x100U & vlSelf->dout[0U]));
    }
    if ((0x200U & (vlSelf->dout[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[0U] 
            = ((0xfffffdffU & vlSelf->sha1_round__DOT____Vtogcov__dout[0U]) 
               | (0x200U & vlSelf->dout[0U]));
    }
    if ((0x400U & (vlSelf->dout[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[0U] 
            = ((0xfffffbffU & vlSelf->sha1_round__DOT____Vtogcov__dout[0U]) 
               | (0x400U & vlSelf->dout[0U]));
    }
    if ((0x800U & (vlSelf->dout[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[0U] 
            = ((0xfffff7ffU & vlSelf->sha1_round__DOT____Vtogcov__dout[0U]) 
               | (0x800U & vlSelf->dout[0U]));
    }
    if ((0x1000U & (vlSelf->dout[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[0U] 
            = ((0xffffefffU & vlSelf->sha1_round__DOT____Vtogcov__dout[0U]) 
               | (0x1000U & vlSelf->dout[0U]));
    }
    if ((0x2000U & (vlSelf->dout[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[0U] 
            = ((0xffffdfffU & vlSelf->sha1_round__DOT____Vtogcov__dout[0U]) 
               | (0x2000U & vlSelf->dout[0U]));
    }
    if ((0x4000U & (vlSelf->dout[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[0U] 
            = ((0xffffbfffU & vlSelf->sha1_round__DOT____Vtogcov__dout[0U]) 
               | (0x4000U & vlSelf->dout[0U]));
    }
    if ((0x8000U & (vlSelf->dout[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[0U] 
            = ((0xffff7fffU & vlSelf->sha1_round__DOT____Vtogcov__dout[0U]) 
               | (0x8000U & vlSelf->dout[0U]));
    }
    if ((0x10000U & (vlSelf->dout[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[0U] 
            = ((0xfffeffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[0U]) 
               | (0x10000U & vlSelf->dout[0U]));
    }
    if ((0x20000U & (vlSelf->dout[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[0U] 
            = ((0xfffdffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[0U]) 
               | (0x20000U & vlSelf->dout[0U]));
    }
    if ((0x40000U & (vlSelf->dout[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[0U] 
            = ((0xfffbffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[0U]) 
               | (0x40000U & vlSelf->dout[0U]));
    }
    if ((0x80000U & (vlSelf->dout[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[0U] 
            = ((0xfff7ffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[0U]) 
               | (0x80000U & vlSelf->dout[0U]));
    }
    if ((0x100000U & (vlSelf->dout[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[0U] 
            = ((0xffefffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[0U]) 
               | (0x100000U & vlSelf->dout[0U]));
    }
    if ((0x200000U & (vlSelf->dout[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[0U] 
            = ((0xffdfffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[0U]) 
               | (0x200000U & vlSelf->dout[0U]));
    }
    if ((0x400000U & (vlSelf->dout[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[0U] 
            = ((0xffbfffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[0U]) 
               | (0x400000U & vlSelf->dout[0U]));
    }
    if ((0x800000U & (vlSelf->dout[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[0U] 
            = ((0xff7fffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[0U]) 
               | (0x800000U & vlSelf->dout[0U]));
    }
    if ((0x1000000U & (vlSelf->dout[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[0U] 
            = ((0xfeffffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[0U]) 
               | (0x1000000U & vlSelf->dout[0U]));
    }
    if ((0x2000000U & (vlSelf->dout[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[0U] 
            = ((0xfdffffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[0U]) 
               | (0x2000000U & vlSelf->dout[0U]));
    }
    if ((0x4000000U & (vlSelf->dout[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[0U] 
            = ((0xfbffffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[0U]) 
               | (0x4000000U & vlSelf->dout[0U]));
    }
    if ((0x8000000U & (vlSelf->dout[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[0U] 
            = ((0xf7ffffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[0U]) 
               | (0x8000000U & vlSelf->dout[0U]));
    }
    if ((0x10000000U & (vlSelf->dout[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[0U] 
            = ((0xefffffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[0U]) 
               | (0x10000000U & vlSelf->dout[0U]));
    }
    if ((0x20000000U & (vlSelf->dout[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[0U] 
            = ((0xdfffffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[0U]) 
               | (0x20000000U & vlSelf->dout[0U]));
    }
    if ((0x40000000U & (vlSelf->dout[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[0U] 
            = ((0xbfffffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[0U]) 
               | (0x40000000U & vlSelf->dout[0U]));
    }
    if (((vlSelf->dout[0U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[0U] 
            = ((0x7fffffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[0U]) 
               | (0x80000000U & vlSelf->dout[0U]));
    }
    if ((1U & (vlSelf->dout[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[1U] 
            = ((0xfffffffeU & vlSelf->sha1_round__DOT____Vtogcov__dout[1U]) 
               | (1U & vlSelf->dout[1U]));
    }
    if ((2U & (vlSelf->dout[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[1U] 
            = ((0xfffffffdU & vlSelf->sha1_round__DOT____Vtogcov__dout[1U]) 
               | (2U & vlSelf->dout[1U]));
    }
    if ((4U & (vlSelf->dout[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[1U] 
            = ((0xfffffffbU & vlSelf->sha1_round__DOT____Vtogcov__dout[1U]) 
               | (4U & vlSelf->dout[1U]));
    }
    if ((8U & (vlSelf->dout[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[1U] 
            = ((0xfffffff7U & vlSelf->sha1_round__DOT____Vtogcov__dout[1U]) 
               | (8U & vlSelf->dout[1U]));
    }
    if ((0x10U & (vlSelf->dout[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[1U] 
            = ((0xffffffefU & vlSelf->sha1_round__DOT____Vtogcov__dout[1U]) 
               | (0x10U & vlSelf->dout[1U]));
    }
    if ((0x20U & (vlSelf->dout[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[1U] 
            = ((0xffffffdfU & vlSelf->sha1_round__DOT____Vtogcov__dout[1U]) 
               | (0x20U & vlSelf->dout[1U]));
    }
    if ((0x40U & (vlSelf->dout[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[1U] 
            = ((0xffffffbfU & vlSelf->sha1_round__DOT____Vtogcov__dout[1U]) 
               | (0x40U & vlSelf->dout[1U]));
    }
    if ((0x80U & (vlSelf->dout[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[1U] 
            = ((0xffffff7fU & vlSelf->sha1_round__DOT____Vtogcov__dout[1U]) 
               | (0x80U & vlSelf->dout[1U]));
    }
    if ((0x100U & (vlSelf->dout[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[1U] 
            = ((0xfffffeffU & vlSelf->sha1_round__DOT____Vtogcov__dout[1U]) 
               | (0x100U & vlSelf->dout[1U]));
    }
    if ((0x200U & (vlSelf->dout[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[1U] 
            = ((0xfffffdffU & vlSelf->sha1_round__DOT____Vtogcov__dout[1U]) 
               | (0x200U & vlSelf->dout[1U]));
    }
    if ((0x400U & (vlSelf->dout[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[1U] 
            = ((0xfffffbffU & vlSelf->sha1_round__DOT____Vtogcov__dout[1U]) 
               | (0x400U & vlSelf->dout[1U]));
    }
    if ((0x800U & (vlSelf->dout[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[1U] 
            = ((0xfffff7ffU & vlSelf->sha1_round__DOT____Vtogcov__dout[1U]) 
               | (0x800U & vlSelf->dout[1U]));
    }
    if ((0x1000U & (vlSelf->dout[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[1U] 
            = ((0xffffefffU & vlSelf->sha1_round__DOT____Vtogcov__dout[1U]) 
               | (0x1000U & vlSelf->dout[1U]));
    }
    if ((0x2000U & (vlSelf->dout[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[1U] 
            = ((0xffffdfffU & vlSelf->sha1_round__DOT____Vtogcov__dout[1U]) 
               | (0x2000U & vlSelf->dout[1U]));
    }
    if ((0x4000U & (vlSelf->dout[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[1U] 
            = ((0xffffbfffU & vlSelf->sha1_round__DOT____Vtogcov__dout[1U]) 
               | (0x4000U & vlSelf->dout[1U]));
    }
    if ((0x8000U & (vlSelf->dout[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[1U] 
            = ((0xffff7fffU & vlSelf->sha1_round__DOT____Vtogcov__dout[1U]) 
               | (0x8000U & vlSelf->dout[1U]));
    }
    if ((0x10000U & (vlSelf->dout[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[1U] 
            = ((0xfffeffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[1U]) 
               | (0x10000U & vlSelf->dout[1U]));
    }
    if ((0x20000U & (vlSelf->dout[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[1U] 
            = ((0xfffdffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[1U]) 
               | (0x20000U & vlSelf->dout[1U]));
    }
    if ((0x40000U & (vlSelf->dout[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[1U] 
            = ((0xfffbffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[1U]) 
               | (0x40000U & vlSelf->dout[1U]));
    }
    if ((0x80000U & (vlSelf->dout[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[1U] 
            = ((0xfff7ffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[1U]) 
               | (0x80000U & vlSelf->dout[1U]));
    }
    if ((0x100000U & (vlSelf->dout[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[1U] 
            = ((0xffefffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[1U]) 
               | (0x100000U & vlSelf->dout[1U]));
    }
    if ((0x200000U & (vlSelf->dout[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[1U] 
            = ((0xffdfffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[1U]) 
               | (0x200000U & vlSelf->dout[1U]));
    }
    if ((0x400000U & (vlSelf->dout[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[1U] 
            = ((0xffbfffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[1U]) 
               | (0x400000U & vlSelf->dout[1U]));
    }
    if ((0x800000U & (vlSelf->dout[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[1U] 
            = ((0xff7fffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[1U]) 
               | (0x800000U & vlSelf->dout[1U]));
    }
    if ((0x1000000U & (vlSelf->dout[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[1U] 
            = ((0xfeffffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[1U]) 
               | (0x1000000U & vlSelf->dout[1U]));
    }
    if ((0x2000000U & (vlSelf->dout[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[1U] 
            = ((0xfdffffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[1U]) 
               | (0x2000000U & vlSelf->dout[1U]));
    }
    if ((0x4000000U & (vlSelf->dout[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[1U] 
            = ((0xfbffffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[1U]) 
               | (0x4000000U & vlSelf->dout[1U]));
    }
    if ((0x8000000U & (vlSelf->dout[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[1U] 
            = ((0xf7ffffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[1U]) 
               | (0x8000000U & vlSelf->dout[1U]));
    }
    if ((0x10000000U & (vlSelf->dout[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[1U] 
            = ((0xefffffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[1U]) 
               | (0x10000000U & vlSelf->dout[1U]));
    }
    if ((0x20000000U & (vlSelf->dout[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[1U] 
            = ((0xdfffffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[1U]) 
               | (0x20000000U & vlSelf->dout[1U]));
    }
    if ((0x40000000U & (vlSelf->dout[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[1U] 
            = ((0xbfffffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[1U]) 
               | (0x40000000U & vlSelf->dout[1U]));
    }
    if (((vlSelf->dout[1U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[1U] 
            = ((0x7fffffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[1U]) 
               | (0x80000000U & vlSelf->dout[1U]));
    }
    if ((1U & (vlSelf->dout[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[2U] 
            = ((0xfffffffeU & vlSelf->sha1_round__DOT____Vtogcov__dout[2U]) 
               | (1U & vlSelf->dout[2U]));
    }
    if ((2U & (vlSelf->dout[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[2U] 
            = ((0xfffffffdU & vlSelf->sha1_round__DOT____Vtogcov__dout[2U]) 
               | (2U & vlSelf->dout[2U]));
    }
    if ((4U & (vlSelf->dout[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[2U] 
            = ((0xfffffffbU & vlSelf->sha1_round__DOT____Vtogcov__dout[2U]) 
               | (4U & vlSelf->dout[2U]));
    }
    if ((8U & (vlSelf->dout[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[2U] 
            = ((0xfffffff7U & vlSelf->sha1_round__DOT____Vtogcov__dout[2U]) 
               | (8U & vlSelf->dout[2U]));
    }
    if ((0x10U & (vlSelf->dout[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[2U] 
            = ((0xffffffefU & vlSelf->sha1_round__DOT____Vtogcov__dout[2U]) 
               | (0x10U & vlSelf->dout[2U]));
    }
    if ((0x20U & (vlSelf->dout[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[2U] 
            = ((0xffffffdfU & vlSelf->sha1_round__DOT____Vtogcov__dout[2U]) 
               | (0x20U & vlSelf->dout[2U]));
    }
    if ((0x40U & (vlSelf->dout[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[2U] 
            = ((0xffffffbfU & vlSelf->sha1_round__DOT____Vtogcov__dout[2U]) 
               | (0x40U & vlSelf->dout[2U]));
    }
    if ((0x80U & (vlSelf->dout[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[2U] 
            = ((0xffffff7fU & vlSelf->sha1_round__DOT____Vtogcov__dout[2U]) 
               | (0x80U & vlSelf->dout[2U]));
    }
    if ((0x100U & (vlSelf->dout[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[2U] 
            = ((0xfffffeffU & vlSelf->sha1_round__DOT____Vtogcov__dout[2U]) 
               | (0x100U & vlSelf->dout[2U]));
    }
    if ((0x200U & (vlSelf->dout[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[2U] 
            = ((0xfffffdffU & vlSelf->sha1_round__DOT____Vtogcov__dout[2U]) 
               | (0x200U & vlSelf->dout[2U]));
    }
    if ((0x400U & (vlSelf->dout[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[2U] 
            = ((0xfffffbffU & vlSelf->sha1_round__DOT____Vtogcov__dout[2U]) 
               | (0x400U & vlSelf->dout[2U]));
    }
    if ((0x800U & (vlSelf->dout[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[2U] 
            = ((0xfffff7ffU & vlSelf->sha1_round__DOT____Vtogcov__dout[2U]) 
               | (0x800U & vlSelf->dout[2U]));
    }
    if ((0x1000U & (vlSelf->dout[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[2U] 
            = ((0xffffefffU & vlSelf->sha1_round__DOT____Vtogcov__dout[2U]) 
               | (0x1000U & vlSelf->dout[2U]));
    }
    if ((0x2000U & (vlSelf->dout[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[2U] 
            = ((0xffffdfffU & vlSelf->sha1_round__DOT____Vtogcov__dout[2U]) 
               | (0x2000U & vlSelf->dout[2U]));
    }
    if ((0x4000U & (vlSelf->dout[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[2U] 
            = ((0xffffbfffU & vlSelf->sha1_round__DOT____Vtogcov__dout[2U]) 
               | (0x4000U & vlSelf->dout[2U]));
    }
    if ((0x8000U & (vlSelf->dout[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[2U] 
            = ((0xffff7fffU & vlSelf->sha1_round__DOT____Vtogcov__dout[2U]) 
               | (0x8000U & vlSelf->dout[2U]));
    }
    if ((0x10000U & (vlSelf->dout[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[2U] 
            = ((0xfffeffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[2U]) 
               | (0x10000U & vlSelf->dout[2U]));
    }
    if ((0x20000U & (vlSelf->dout[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[2U] 
            = ((0xfffdffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[2U]) 
               | (0x20000U & vlSelf->dout[2U]));
    }
    if ((0x40000U & (vlSelf->dout[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[2U] 
            = ((0xfffbffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[2U]) 
               | (0x40000U & vlSelf->dout[2U]));
    }
    if ((0x80000U & (vlSelf->dout[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[2U] 
            = ((0xfff7ffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[2U]) 
               | (0x80000U & vlSelf->dout[2U]));
    }
    if ((0x100000U & (vlSelf->dout[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[2U] 
            = ((0xffefffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[2U]) 
               | (0x100000U & vlSelf->dout[2U]));
    }
    if ((0x200000U & (vlSelf->dout[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[2U] 
            = ((0xffdfffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[2U]) 
               | (0x200000U & vlSelf->dout[2U]));
    }
    if ((0x400000U & (vlSelf->dout[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[2U] 
            = ((0xffbfffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[2U]) 
               | (0x400000U & vlSelf->dout[2U]));
    }
    if ((0x800000U & (vlSelf->dout[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[2U] 
            = ((0xff7fffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[2U]) 
               | (0x800000U & vlSelf->dout[2U]));
    }
    if ((0x1000000U & (vlSelf->dout[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[2U] 
            = ((0xfeffffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[2U]) 
               | (0x1000000U & vlSelf->dout[2U]));
    }
    if ((0x2000000U & (vlSelf->dout[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[2U] 
            = ((0xfdffffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[2U]) 
               | (0x2000000U & vlSelf->dout[2U]));
    }
    if ((0x4000000U & (vlSelf->dout[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[2U] 
            = ((0xfbffffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[2U]) 
               | (0x4000000U & vlSelf->dout[2U]));
    }
    if ((0x8000000U & (vlSelf->dout[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[2U] 
            = ((0xf7ffffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[2U]) 
               | (0x8000000U & vlSelf->dout[2U]));
    }
    if ((0x10000000U & (vlSelf->dout[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[2U] 
            = ((0xefffffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[2U]) 
               | (0x10000000U & vlSelf->dout[2U]));
    }
    if ((0x20000000U & (vlSelf->dout[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[2U] 
            = ((0xdfffffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[2U]) 
               | (0x20000000U & vlSelf->dout[2U]));
    }
    if ((0x40000000U & (vlSelf->dout[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[2U] 
            = ((0xbfffffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[2U]) 
               | (0x40000000U & vlSelf->dout[2U]));
    }
    if (((vlSelf->dout[2U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[2U] 
            = ((0x7fffffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[2U]) 
               | (0x80000000U & vlSelf->dout[2U]));
    }
    if ((1U & (vlSelf->dout[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[3U] 
            = ((0xfffffffeU & vlSelf->sha1_round__DOT____Vtogcov__dout[3U]) 
               | (1U & vlSelf->dout[3U]));
    }
    if ((2U & (vlSelf->dout[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[3U] 
            = ((0xfffffffdU & vlSelf->sha1_round__DOT____Vtogcov__dout[3U]) 
               | (2U & vlSelf->dout[3U]));
    }
    if ((4U & (vlSelf->dout[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[3U] 
            = ((0xfffffffbU & vlSelf->sha1_round__DOT____Vtogcov__dout[3U]) 
               | (4U & vlSelf->dout[3U]));
    }
    if ((8U & (vlSelf->dout[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[3U] 
            = ((0xfffffff7U & vlSelf->sha1_round__DOT____Vtogcov__dout[3U]) 
               | (8U & vlSelf->dout[3U]));
    }
    if ((0x10U & (vlSelf->dout[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[3U] 
            = ((0xffffffefU & vlSelf->sha1_round__DOT____Vtogcov__dout[3U]) 
               | (0x10U & vlSelf->dout[3U]));
    }
    if ((0x20U & (vlSelf->dout[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[3U] 
            = ((0xffffffdfU & vlSelf->sha1_round__DOT____Vtogcov__dout[3U]) 
               | (0x20U & vlSelf->dout[3U]));
    }
    if ((0x40U & (vlSelf->dout[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[3U] 
            = ((0xffffffbfU & vlSelf->sha1_round__DOT____Vtogcov__dout[3U]) 
               | (0x40U & vlSelf->dout[3U]));
    }
    if ((0x80U & (vlSelf->dout[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[3U] 
            = ((0xffffff7fU & vlSelf->sha1_round__DOT____Vtogcov__dout[3U]) 
               | (0x80U & vlSelf->dout[3U]));
    }
    if ((0x100U & (vlSelf->dout[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[3U] 
            = ((0xfffffeffU & vlSelf->sha1_round__DOT____Vtogcov__dout[3U]) 
               | (0x100U & vlSelf->dout[3U]));
    }
    if ((0x200U & (vlSelf->dout[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[3U] 
            = ((0xfffffdffU & vlSelf->sha1_round__DOT____Vtogcov__dout[3U]) 
               | (0x200U & vlSelf->dout[3U]));
    }
    if ((0x400U & (vlSelf->dout[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[3U] 
            = ((0xfffffbffU & vlSelf->sha1_round__DOT____Vtogcov__dout[3U]) 
               | (0x400U & vlSelf->dout[3U]));
    }
    if ((0x800U & (vlSelf->dout[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[3U] 
            = ((0xfffff7ffU & vlSelf->sha1_round__DOT____Vtogcov__dout[3U]) 
               | (0x800U & vlSelf->dout[3U]));
    }
    if ((0x1000U & (vlSelf->dout[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[3U] 
            = ((0xffffefffU & vlSelf->sha1_round__DOT____Vtogcov__dout[3U]) 
               | (0x1000U & vlSelf->dout[3U]));
    }
    if ((0x2000U & (vlSelf->dout[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[3U] 
            = ((0xffffdfffU & vlSelf->sha1_round__DOT____Vtogcov__dout[3U]) 
               | (0x2000U & vlSelf->dout[3U]));
    }
    if ((0x4000U & (vlSelf->dout[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[3U] 
            = ((0xffffbfffU & vlSelf->sha1_round__DOT____Vtogcov__dout[3U]) 
               | (0x4000U & vlSelf->dout[3U]));
    }
    if ((0x8000U & (vlSelf->dout[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[3U] 
            = ((0xffff7fffU & vlSelf->sha1_round__DOT____Vtogcov__dout[3U]) 
               | (0x8000U & vlSelf->dout[3U]));
    }
    if ((0x10000U & (vlSelf->dout[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[3U] 
            = ((0xfffeffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[3U]) 
               | (0x10000U & vlSelf->dout[3U]));
    }
    if ((0x20000U & (vlSelf->dout[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[3U] 
            = ((0xfffdffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[3U]) 
               | (0x20000U & vlSelf->dout[3U]));
    }
    if ((0x40000U & (vlSelf->dout[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[3U] 
            = ((0xfffbffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[3U]) 
               | (0x40000U & vlSelf->dout[3U]));
    }
    if ((0x80000U & (vlSelf->dout[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[3U] 
            = ((0xfff7ffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[3U]) 
               | (0x80000U & vlSelf->dout[3U]));
    }
    if ((0x100000U & (vlSelf->dout[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[3U] 
            = ((0xffefffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[3U]) 
               | (0x100000U & vlSelf->dout[3U]));
    }
    if ((0x200000U & (vlSelf->dout[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[3U] 
            = ((0xffdfffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[3U]) 
               | (0x200000U & vlSelf->dout[3U]));
    }
    if ((0x400000U & (vlSelf->dout[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[3U] 
            = ((0xffbfffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[3U]) 
               | (0x400000U & vlSelf->dout[3U]));
    }
    if ((0x800000U & (vlSelf->dout[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[3U] 
            = ((0xff7fffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[3U]) 
               | (0x800000U & vlSelf->dout[3U]));
    }
    if ((0x1000000U & (vlSelf->dout[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[3U] 
            = ((0xfeffffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[3U]) 
               | (0x1000000U & vlSelf->dout[3U]));
    }
    if ((0x2000000U & (vlSelf->dout[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[3U] 
            = ((0xfdffffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[3U]) 
               | (0x2000000U & vlSelf->dout[3U]));
    }
    if ((0x4000000U & (vlSelf->dout[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[3U] 
            = ((0xfbffffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[3U]) 
               | (0x4000000U & vlSelf->dout[3U]));
    }
    if ((0x8000000U & (vlSelf->dout[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[3U] 
            = ((0xf7ffffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[3U]) 
               | (0x8000000U & vlSelf->dout[3U]));
    }
    if ((0x10000000U & (vlSelf->dout[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[3U] 
            = ((0xefffffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[3U]) 
               | (0x10000000U & vlSelf->dout[3U]));
    }
    if ((0x20000000U & (vlSelf->dout[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[3U] 
            = ((0xdfffffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[3U]) 
               | (0x20000000U & vlSelf->dout[3U]));
    }
    if ((0x40000000U & (vlSelf->dout[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[3U] 
            = ((0xbfffffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[3U]) 
               | (0x40000000U & vlSelf->dout[3U]));
    }
    if (((vlSelf->dout[3U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[3U] 
            = ((0x7fffffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[3U]) 
               | (0x80000000U & vlSelf->dout[3U]));
    }
    if ((1U & (vlSelf->dout[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[4U] 
            = ((0xfffffffeU & vlSelf->sha1_round__DOT____Vtogcov__dout[4U]) 
               | (1U & vlSelf->dout[4U]));
    }
    if ((2U & (vlSelf->dout[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[4U] 
            = ((0xfffffffdU & vlSelf->sha1_round__DOT____Vtogcov__dout[4U]) 
               | (2U & vlSelf->dout[4U]));
    }
    if ((4U & (vlSelf->dout[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[4U] 
            = ((0xfffffffbU & vlSelf->sha1_round__DOT____Vtogcov__dout[4U]) 
               | (4U & vlSelf->dout[4U]));
    }
    if ((8U & (vlSelf->dout[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[4U] 
            = ((0xfffffff7U & vlSelf->sha1_round__DOT____Vtogcov__dout[4U]) 
               | (8U & vlSelf->dout[4U]));
    }
    if ((0x10U & (vlSelf->dout[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[4U] 
            = ((0xffffffefU & vlSelf->sha1_round__DOT____Vtogcov__dout[4U]) 
               | (0x10U & vlSelf->dout[4U]));
    }
    if ((0x20U & (vlSelf->dout[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[4U] 
            = ((0xffffffdfU & vlSelf->sha1_round__DOT____Vtogcov__dout[4U]) 
               | (0x20U & vlSelf->dout[4U]));
    }
    if ((0x40U & (vlSelf->dout[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[4U] 
            = ((0xffffffbfU & vlSelf->sha1_round__DOT____Vtogcov__dout[4U]) 
               | (0x40U & vlSelf->dout[4U]));
    }
    if ((0x80U & (vlSelf->dout[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[4U] 
            = ((0xffffff7fU & vlSelf->sha1_round__DOT____Vtogcov__dout[4U]) 
               | (0x80U & vlSelf->dout[4U]));
    }
    if ((0x100U & (vlSelf->dout[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[4U] 
            = ((0xfffffeffU & vlSelf->sha1_round__DOT____Vtogcov__dout[4U]) 
               | (0x100U & vlSelf->dout[4U]));
    }
    if ((0x200U & (vlSelf->dout[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[4U] 
            = ((0xfffffdffU & vlSelf->sha1_round__DOT____Vtogcov__dout[4U]) 
               | (0x200U & vlSelf->dout[4U]));
    }
    if ((0x400U & (vlSelf->dout[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[4U] 
            = ((0xfffffbffU & vlSelf->sha1_round__DOT____Vtogcov__dout[4U]) 
               | (0x400U & vlSelf->dout[4U]));
    }
    if ((0x800U & (vlSelf->dout[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[4U] 
            = ((0xfffff7ffU & vlSelf->sha1_round__DOT____Vtogcov__dout[4U]) 
               | (0x800U & vlSelf->dout[4U]));
    }
    if ((0x1000U & (vlSelf->dout[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[4U] 
            = ((0xffffefffU & vlSelf->sha1_round__DOT____Vtogcov__dout[4U]) 
               | (0x1000U & vlSelf->dout[4U]));
    }
    if ((0x2000U & (vlSelf->dout[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[4U] 
            = ((0xffffdfffU & vlSelf->sha1_round__DOT____Vtogcov__dout[4U]) 
               | (0x2000U & vlSelf->dout[4U]));
    }
    if ((0x4000U & (vlSelf->dout[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[4U] 
            = ((0xffffbfffU & vlSelf->sha1_round__DOT____Vtogcov__dout[4U]) 
               | (0x4000U & vlSelf->dout[4U]));
    }
    if ((0x8000U & (vlSelf->dout[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[4U] 
            = ((0xffff7fffU & vlSelf->sha1_round__DOT____Vtogcov__dout[4U]) 
               | (0x8000U & vlSelf->dout[4U]));
    }
    if ((0x10000U & (vlSelf->dout[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[4U] 
            = ((0xfffeffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[4U]) 
               | (0x10000U & vlSelf->dout[4U]));
    }
    if ((0x20000U & (vlSelf->dout[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[4U] 
            = ((0xfffdffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[4U]) 
               | (0x20000U & vlSelf->dout[4U]));
    }
    if ((0x40000U & (vlSelf->dout[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[4U] 
            = ((0xfffbffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[4U]) 
               | (0x40000U & vlSelf->dout[4U]));
    }
    if ((0x80000U & (vlSelf->dout[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[4U] 
            = ((0xfff7ffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[4U]) 
               | (0x80000U & vlSelf->dout[4U]));
    }
    if ((0x100000U & (vlSelf->dout[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[4U] 
            = ((0xffefffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[4U]) 
               | (0x100000U & vlSelf->dout[4U]));
    }
    if ((0x200000U & (vlSelf->dout[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[4U] 
            = ((0xffdfffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[4U]) 
               | (0x200000U & vlSelf->dout[4U]));
    }
    if ((0x400000U & (vlSelf->dout[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[4U] 
            = ((0xffbfffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[4U]) 
               | (0x400000U & vlSelf->dout[4U]));
    }
    if ((0x800000U & (vlSelf->dout[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[4U] 
            = ((0xff7fffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[4U]) 
               | (0x800000U & vlSelf->dout[4U]));
    }
    if ((0x1000000U & (vlSelf->dout[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[4U] 
            = ((0xfeffffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[4U]) 
               | (0x1000000U & vlSelf->dout[4U]));
    }
    if ((0x2000000U & (vlSelf->dout[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[4U] 
            = ((0xfdffffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[4U]) 
               | (0x2000000U & vlSelf->dout[4U]));
    }
    if ((0x4000000U & (vlSelf->dout[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[4U] 
            = ((0xfbffffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[4U]) 
               | (0x4000000U & vlSelf->dout[4U]));
    }
    if ((0x8000000U & (vlSelf->dout[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[4U] 
            = ((0xf7ffffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[4U]) 
               | (0x8000000U & vlSelf->dout[4U]));
    }
    if ((0x10000000U & (vlSelf->dout[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[4U] 
            = ((0xefffffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[4U]) 
               | (0x10000000U & vlSelf->dout[4U]));
    }
    if ((0x20000000U & (vlSelf->dout[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[4U] 
            = ((0xdfffffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[4U]) 
               | (0x20000000U & vlSelf->dout[4U]));
    }
    if ((0x40000000U & (vlSelf->dout[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[4U] 
            = ((0xbfffffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[4U]) 
               | (0x40000000U & vlSelf->dout[4U]));
    }
    if (((vlSelf->dout[4U] ^ vlSelf->sha1_round__DOT____Vtogcov__dout[4U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelf->sha1_round__DOT____Vtogcov__dout[4U] 
            = ((0x7fffffffU & vlSelf->sha1_round__DOT____Vtogcov__dout[4U]) 
               | (0x80000000U & vlSelf->dout[4U]));
    }
}

void Vsha1_round___024root___eval(Vsha1_round___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_round__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha1_round___024root___eval\n"); );
    // Body
    Vsha1_round___024root___combo__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
}

QData Vsha1_round___024root___change_request_1(Vsha1_round___024root* vlSelf);

VL_INLINE_OPT QData Vsha1_round___024root___change_request(Vsha1_round___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_round__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha1_round___024root___change_request\n"); );
    // Body
    return (Vsha1_round___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vsha1_round___024root___change_request_1(Vsha1_round___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_round__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha1_round___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vsha1_round___024root___eval_debug_assertions(Vsha1_round___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_round__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha1_round___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG

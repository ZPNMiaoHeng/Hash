// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsha1_top.h for the primary calling header

#include "Vsha1_top___024root.h"
#include "Vsha1_top__Syms.h"

//==========

VL_INLINE_OPT void Vsha1_top___024root___combo__TOP__1(Vsha1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha1_top___024root___combo__TOP__1\n"); );
    // Body
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->sha1_top__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->sha1_top__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->rst_n) ^ (IData)(vlSelf->sha1_top__DOT____Vtogcov__rst_n))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->sha1_top__DOT____Vtogcov__rst_n = vlSelf->rst_n;
    }
    if (((IData)(vlSelf->valid) ^ (IData)(vlSelf->sha1_top__DOT____Vtogcov__valid))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->sha1_top__DOT____Vtogcov__valid = vlSelf->valid;
    }
}

extern const VlWide<16>/*511:0*/ Vsha1_top__ConstPool__CONST_93e1b771_0;

VL_INLINE_OPT void Vsha1_top___024root___sequent__TOP__3(Vsha1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha1_top___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*7:0*/ __Vdly__sha1_top__DOT__u_con__DOT__t_tem;
    // Body
    __Vdly__sha1_top__DOT__u_con__DOT__t_tem = vlSelf->sha1_top__DOT__u_con__DOT__t_tem;
    ++(vlSymsp->__Vcoverage[550]);
    if (vlSelf->rst_n) {
        if ((1U == (IData)(vlSelf->sha1_top__DOT__u_con__DOT__s_cur))) {
            ++(vlSymsp->__Vcoverage[548]);
            __Vdly__sha1_top__DOT__u_con__DOT__t_tem 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)));
        } else if ((2U == (IData)(vlSelf->sha1_top__DOT__u_con__DOT__s_cur))) {
            ++(vlSymsp->__Vcoverage[546]);
            __Vdly__sha1_top__DOT__u_con__DOT__t_tem 
                = vlSelf->sha1_top__DOT__u_con__DOT__t_tem;
        } else {
            ++(vlSymsp->__Vcoverage[547]);
            __Vdly__sha1_top__DOT__u_con__DOT__t_tem = 0U;
        }
    } else {
        ++(vlSymsp->__Vcoverage[549]);
        __Vdly__sha1_top__DOT__u_con__DOT__t_tem = 0U;
    }
    ++(vlSymsp->__Vcoverage[528]);
    if (vlSelf->rst_n) {
        if ((0U == (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem))) {
            ++(vlSymsp->__Vcoverage[526]);
            vlSelf->sha1_top__DOT__r_din[0U] = 0xc3d2e1f0U;
            vlSelf->sha1_top__DOT__r_din[1U] = 0x10325476U;
            vlSelf->sha1_top__DOT__r_din[2U] = 0x98badcfeU;
            vlSelf->sha1_top__DOT__r_din[3U] = 0xefcdab89U;
            vlSelf->sha1_top__DOT__r_din[4U] = 0x67452301U;
        } else if (((0U < (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                    & (0x50U > (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))) {
            ++(vlSymsp->__Vcoverage[524]);
            vlSelf->sha1_top__DOT__r_din[0U] = vlSelf->sha1_top__DOT__r_din_temp[0U];
            vlSelf->sha1_top__DOT__r_din[1U] = vlSelf->sha1_top__DOT__r_din_temp[1U];
            vlSelf->sha1_top__DOT__r_din[2U] = vlSelf->sha1_top__DOT__r_din_temp[2U];
            vlSelf->sha1_top__DOT__r_din[3U] = vlSelf->sha1_top__DOT__r_din_temp[3U];
            vlSelf->sha1_top__DOT__r_din[4U] = vlSelf->sha1_top__DOT__r_din_temp[4U];
        } else {
            ++(vlSymsp->__Vcoverage[525]);
            vlSelf->sha1_top__DOT__r_din[0U] = 0U;
            vlSelf->sha1_top__DOT__r_din[1U] = 0U;
            vlSelf->sha1_top__DOT__r_din[2U] = 0U;
            vlSelf->sha1_top__DOT__r_din[3U] = 0U;
            vlSelf->sha1_top__DOT__r_din[4U] = 0U;
        }
    } else {
        ++(vlSymsp->__Vcoverage[527]);
        vlSelf->sha1_top__DOT__r_din[0U] = 0U;
        vlSelf->sha1_top__DOT__r_din[1U] = 0U;
        vlSelf->sha1_top__DOT__r_din[2U] = 0U;
        vlSelf->sha1_top__DOT__r_din[3U] = 0U;
        vlSelf->sha1_top__DOT__r_din[4U] = 0U;
    }
    ++(vlSymsp->__Vcoverage[555]);
    if (vlSelf->rst_n) {
        if (((0U == (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
             & (IData)(vlSelf->valid))) {
            ++(vlSymsp->__Vcoverage[553]);
            vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0U] 
                = vlSelf->din[0U];
            vlSelf->sha1_top__DOT__u_w__DOT__din_temp[1U] 
                = vlSelf->din[1U];
            vlSelf->sha1_top__DOT__u_w__DOT__din_temp[2U] 
                = vlSelf->din[2U];
            vlSelf->sha1_top__DOT__u_w__DOT__din_temp[3U] 
                = vlSelf->din[3U];
            vlSelf->sha1_top__DOT__u_w__DOT__din_temp[4U] 
                = vlSelf->din[4U];
            vlSelf->sha1_top__DOT__u_w__DOT__din_temp[5U] 
                = vlSelf->din[5U];
            vlSelf->sha1_top__DOT__u_w__DOT__din_temp[6U] 
                = vlSelf->din[6U];
            vlSelf->sha1_top__DOT__u_w__DOT__din_temp[7U] 
                = vlSelf->din[7U];
            vlSelf->sha1_top__DOT__u_w__DOT__din_temp[8U] 
                = vlSelf->din[8U];
            vlSelf->sha1_top__DOT__u_w__DOT__din_temp[9U] 
                = vlSelf->din[9U];
            vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xaU] 
                = vlSelf->din[0xaU];
            vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xbU] 
                = vlSelf->din[0xbU];
            vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xcU] 
                = vlSelf->din[0xcU];
            vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xdU] 
                = vlSelf->din[0xdU];
            vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xeU] 
                = vlSelf->din[0xeU];
            vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xfU] 
                = vlSelf->din[0xfU];
        } else if ((0x4fU >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem))) {
            ++(vlSymsp->__Vcoverage[551]);
            vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0U] 
                = vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[0U];
            vlSelf->sha1_top__DOT__u_w__DOT__din_temp[1U] 
                = vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[1U];
            vlSelf->sha1_top__DOT__u_w__DOT__din_temp[2U] 
                = vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[2U];
            vlSelf->sha1_top__DOT__u_w__DOT__din_temp[3U] 
                = vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[3U];
            vlSelf->sha1_top__DOT__u_w__DOT__din_temp[4U] 
                = vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[4U];
            vlSelf->sha1_top__DOT__u_w__DOT__din_temp[5U] 
                = vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[5U];
            vlSelf->sha1_top__DOT__u_w__DOT__din_temp[6U] 
                = vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[6U];
            vlSelf->sha1_top__DOT__u_w__DOT__din_temp[7U] 
                = vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[7U];
            vlSelf->sha1_top__DOT__u_w__DOT__din_temp[8U] 
                = vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[8U];
            vlSelf->sha1_top__DOT__u_w__DOT__din_temp[9U] 
                = vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[9U];
            vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xaU] 
                = vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[0xaU];
            vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xbU] 
                = vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[0xbU];
            vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xcU] 
                = vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[0xcU];
            vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xdU] 
                = vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[0xdU];
            vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xeU] 
                = vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[0xeU];
            vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xfU] 
                = vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[0xfU];
        } else {
            ++(vlSymsp->__Vcoverage[552]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[554]);
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0U] = 0U;
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp[1U] = 0U;
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp[2U] = 0U;
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp[3U] = 0U;
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp[4U] = 0U;
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp[5U] = 0U;
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp[6U] = 0U;
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp[7U] = 0U;
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp[8U] = 0U;
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp[9U] = 0U;
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xaU] = 0U;
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xbU] = 0U;
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xcU] = 0U;
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xdU] = 0U;
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xeU] = 0U;
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xfU] = 0U;
    }
    vlSelf->sha1_top__DOT__u_con__DOT__t_tem = __Vdly__sha1_top__DOT__u_con__DOT__t_tem;
    ++(vlSymsp->__Vcoverage[535]);
    if (vlSelf->rst_n) {
        ++(vlSymsp->__Vcoverage[534]);
        vlSelf->sha1_top__DOT__u_con__DOT__s_cur = vlSelf->sha1_top__DOT__u_con__DOT__s_next;
    } else {
        ++(vlSymsp->__Vcoverage[533]);
        vlSelf->sha1_top__DOT__u_con__DOT__s_cur = 0U;
    }
    if ((1U & (vlSelf->sha1_top__DOT__r_din[0U] ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[0U] 
            = ((0xfffffffeU & vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]) 
               | (1U & vlSelf->sha1_top__DOT__r_din[0U]));
    }
    if ((2U & (vlSelf->sha1_top__DOT__r_din[0U] ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[0U] 
            = ((0xfffffffdU & vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]) 
               | (2U & vlSelf->sha1_top__DOT__r_din[0U]));
    }
    if ((4U & (vlSelf->sha1_top__DOT__r_din[0U] ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[0U] 
            = ((0xfffffffbU & vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]) 
               | (4U & vlSelf->sha1_top__DOT__r_din[0U]));
    }
    if ((8U & (vlSelf->sha1_top__DOT__r_din[0U] ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[0U] 
            = ((0xfffffff7U & vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]) 
               | (8U & vlSelf->sha1_top__DOT__r_din[0U]));
    }
    if ((0x10U & (vlSelf->sha1_top__DOT__r_din[0U] 
                  ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[0U] 
            = ((0xffffffefU & vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]) 
               | (0x10U & vlSelf->sha1_top__DOT__r_din[0U]));
    }
    if ((0x20U & (vlSelf->sha1_top__DOT__r_din[0U] 
                  ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[0U] 
            = ((0xffffffdfU & vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]) 
               | (0x20U & vlSelf->sha1_top__DOT__r_din[0U]));
    }
    if ((0x40U & (vlSelf->sha1_top__DOT__r_din[0U] 
                  ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[0U] 
            = ((0xffffffbfU & vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]) 
               | (0x40U & vlSelf->sha1_top__DOT__r_din[0U]));
    }
    if ((0x80U & (vlSelf->sha1_top__DOT__r_din[0U] 
                  ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[0U] 
            = ((0xffffff7fU & vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]) 
               | (0x80U & vlSelf->sha1_top__DOT__r_din[0U]));
    }
    if ((0x100U & (vlSelf->sha1_top__DOT__r_din[0U] 
                   ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[0U] 
            = ((0xfffffeffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]) 
               | (0x100U & vlSelf->sha1_top__DOT__r_din[0U]));
    }
    if ((0x200U & (vlSelf->sha1_top__DOT__r_din[0U] 
                   ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[0U] 
            = ((0xfffffdffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]) 
               | (0x200U & vlSelf->sha1_top__DOT__r_din[0U]));
    }
    if ((0x400U & (vlSelf->sha1_top__DOT__r_din[0U] 
                   ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[0U] 
            = ((0xfffffbffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]) 
               | (0x400U & vlSelf->sha1_top__DOT__r_din[0U]));
    }
    if ((0x800U & (vlSelf->sha1_top__DOT__r_din[0U] 
                   ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[0U] 
            = ((0xfffff7ffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]) 
               | (0x800U & vlSelf->sha1_top__DOT__r_din[0U]));
    }
    if ((0x1000U & (vlSelf->sha1_top__DOT__r_din[0U] 
                    ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[0U] 
            = ((0xffffefffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]) 
               | (0x1000U & vlSelf->sha1_top__DOT__r_din[0U]));
    }
    if ((0x2000U & (vlSelf->sha1_top__DOT__r_din[0U] 
                    ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[0U] 
            = ((0xffffdfffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]) 
               | (0x2000U & vlSelf->sha1_top__DOT__r_din[0U]));
    }
    if ((0x4000U & (vlSelf->sha1_top__DOT__r_din[0U] 
                    ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[0U] 
            = ((0xffffbfffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]) 
               | (0x4000U & vlSelf->sha1_top__DOT__r_din[0U]));
    }
    if ((0x8000U & (vlSelf->sha1_top__DOT__r_din[0U] 
                    ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[0U] 
            = ((0xffff7fffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]) 
               | (0x8000U & vlSelf->sha1_top__DOT__r_din[0U]));
    }
    if ((0x10000U & (vlSelf->sha1_top__DOT__r_din[0U] 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[0U] 
            = ((0xfffeffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]) 
               | (0x10000U & vlSelf->sha1_top__DOT__r_din[0U]));
    }
    if ((0x20000U & (vlSelf->sha1_top__DOT__r_din[0U] 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[0U] 
            = ((0xfffdffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]) 
               | (0x20000U & vlSelf->sha1_top__DOT__r_din[0U]));
    }
    if ((0x40000U & (vlSelf->sha1_top__DOT__r_din[0U] 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[0U] 
            = ((0xfffbffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]) 
               | (0x40000U & vlSelf->sha1_top__DOT__r_din[0U]));
    }
    if ((0x80000U & (vlSelf->sha1_top__DOT__r_din[0U] 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[0U] 
            = ((0xfff7ffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]) 
               | (0x80000U & vlSelf->sha1_top__DOT__r_din[0U]));
    }
    if ((0x100000U & (vlSelf->sha1_top__DOT__r_din[0U] 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[0U] 
            = ((0xffefffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]) 
               | (0x100000U & vlSelf->sha1_top__DOT__r_din[0U]));
    }
    if ((0x200000U & (vlSelf->sha1_top__DOT__r_din[0U] 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[0U] 
            = ((0xffdfffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]) 
               | (0x200000U & vlSelf->sha1_top__DOT__r_din[0U]));
    }
    if ((0x400000U & (vlSelf->sha1_top__DOT__r_din[0U] 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[0U] 
            = ((0xffbfffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]) 
               | (0x400000U & vlSelf->sha1_top__DOT__r_din[0U]));
    }
    if ((0x800000U & (vlSelf->sha1_top__DOT__r_din[0U] 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[0U] 
            = ((0xff7fffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]) 
               | (0x800000U & vlSelf->sha1_top__DOT__r_din[0U]));
    }
    if ((0x1000000U & (vlSelf->sha1_top__DOT__r_din[0U] 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[0U] 
            = ((0xfeffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]) 
               | (0x1000000U & vlSelf->sha1_top__DOT__r_din[0U]));
    }
    if ((0x2000000U & (vlSelf->sha1_top__DOT__r_din[0U] 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[0U] 
            = ((0xfdffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]) 
               | (0x2000000U & vlSelf->sha1_top__DOT__r_din[0U]));
    }
    if ((0x4000000U & (vlSelf->sha1_top__DOT__r_din[0U] 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[0U] 
            = ((0xfbffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]) 
               | (0x4000000U & vlSelf->sha1_top__DOT__r_din[0U]));
    }
    if ((0x8000000U & (vlSelf->sha1_top__DOT__r_din[0U] 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[0U] 
            = ((0xf7ffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]) 
               | (0x8000000U & vlSelf->sha1_top__DOT__r_din[0U]));
    }
    if ((0x10000000U & (vlSelf->sha1_top__DOT__r_din[0U] 
                        ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[0U] 
            = ((0xefffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]) 
               | (0x10000000U & vlSelf->sha1_top__DOT__r_din[0U]));
    }
    if ((0x20000000U & (vlSelf->sha1_top__DOT__r_din[0U] 
                        ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]))) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[0U] 
            = ((0xdfffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]) 
               | (0x20000000U & vlSelf->sha1_top__DOT__r_din[0U]));
    }
    if ((0x40000000U & (vlSelf->sha1_top__DOT__r_din[0U] 
                        ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[0U] 
            = ((0xbfffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]) 
               | (0x40000000U & vlSelf->sha1_top__DOT__r_din[0U]));
    }
    if (((vlSelf->sha1_top__DOT__r_din[0U] ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[0U] 
            = ((0x7fffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[0U]) 
               | (0x80000000U & vlSelf->sha1_top__DOT__r_din[0U]));
    }
    if ((1U & (vlSelf->sha1_top__DOT__r_din[1U] ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[1U] 
            = ((0xfffffffeU & vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]) 
               | (1U & vlSelf->sha1_top__DOT__r_din[1U]));
    }
    if ((2U & (vlSelf->sha1_top__DOT__r_din[1U] ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[1U] 
            = ((0xfffffffdU & vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]) 
               | (2U & vlSelf->sha1_top__DOT__r_din[1U]));
    }
    if ((4U & (vlSelf->sha1_top__DOT__r_din[1U] ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[1U] 
            = ((0xfffffffbU & vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]) 
               | (4U & vlSelf->sha1_top__DOT__r_din[1U]));
    }
    if ((8U & (vlSelf->sha1_top__DOT__r_din[1U] ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[1U] 
            = ((0xfffffff7U & vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]) 
               | (8U & vlSelf->sha1_top__DOT__r_din[1U]));
    }
    if ((0x10U & (vlSelf->sha1_top__DOT__r_din[1U] 
                  ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[1U] 
            = ((0xffffffefU & vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]) 
               | (0x10U & vlSelf->sha1_top__DOT__r_din[1U]));
    }
    if ((0x20U & (vlSelf->sha1_top__DOT__r_din[1U] 
                  ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[1U] 
            = ((0xffffffdfU & vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]) 
               | (0x20U & vlSelf->sha1_top__DOT__r_din[1U]));
    }
    if ((0x40U & (vlSelf->sha1_top__DOT__r_din[1U] 
                  ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[1U] 
            = ((0xffffffbfU & vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]) 
               | (0x40U & vlSelf->sha1_top__DOT__r_din[1U]));
    }
    if ((0x80U & (vlSelf->sha1_top__DOT__r_din[1U] 
                  ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[1U] 
            = ((0xffffff7fU & vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]) 
               | (0x80U & vlSelf->sha1_top__DOT__r_din[1U]));
    }
    if ((0x100U & (vlSelf->sha1_top__DOT__r_din[1U] 
                   ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[1U] 
            = ((0xfffffeffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]) 
               | (0x100U & vlSelf->sha1_top__DOT__r_din[1U]));
    }
    if ((0x200U & (vlSelf->sha1_top__DOT__r_din[1U] 
                   ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[1U] 
            = ((0xfffffdffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]) 
               | (0x200U & vlSelf->sha1_top__DOT__r_din[1U]));
    }
    if ((0x400U & (vlSelf->sha1_top__DOT__r_din[1U] 
                   ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[1U] 
            = ((0xfffffbffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]) 
               | (0x400U & vlSelf->sha1_top__DOT__r_din[1U]));
    }
    if ((0x800U & (vlSelf->sha1_top__DOT__r_din[1U] 
                   ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[1U] 
            = ((0xfffff7ffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]) 
               | (0x800U & vlSelf->sha1_top__DOT__r_din[1U]));
    }
    if ((0x1000U & (vlSelf->sha1_top__DOT__r_din[1U] 
                    ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[1U] 
            = ((0xffffefffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]) 
               | (0x1000U & vlSelf->sha1_top__DOT__r_din[1U]));
    }
    if ((0x2000U & (vlSelf->sha1_top__DOT__r_din[1U] 
                    ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[1U] 
            = ((0xffffdfffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]) 
               | (0x2000U & vlSelf->sha1_top__DOT__r_din[1U]));
    }
    if ((0x4000U & (vlSelf->sha1_top__DOT__r_din[1U] 
                    ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[1U] 
            = ((0xffffbfffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]) 
               | (0x4000U & vlSelf->sha1_top__DOT__r_din[1U]));
    }
    if ((0x8000U & (vlSelf->sha1_top__DOT__r_din[1U] 
                    ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[1U] 
            = ((0xffff7fffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]) 
               | (0x8000U & vlSelf->sha1_top__DOT__r_din[1U]));
    }
    if ((0x10000U & (vlSelf->sha1_top__DOT__r_din[1U] 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[1U] 
            = ((0xfffeffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]) 
               | (0x10000U & vlSelf->sha1_top__DOT__r_din[1U]));
    }
    if ((0x20000U & (vlSelf->sha1_top__DOT__r_din[1U] 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]))) {
        ++(vlSymsp->__Vcoverage[413]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[1U] 
            = ((0xfffdffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]) 
               | (0x20000U & vlSelf->sha1_top__DOT__r_din[1U]));
    }
    if ((0x40000U & (vlSelf->sha1_top__DOT__r_din[1U] 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]))) {
        ++(vlSymsp->__Vcoverage[414]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[1U] 
            = ((0xfffbffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]) 
               | (0x40000U & vlSelf->sha1_top__DOT__r_din[1U]));
    }
    if ((0x80000U & (vlSelf->sha1_top__DOT__r_din[1U] 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]))) {
        ++(vlSymsp->__Vcoverage[415]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[1U] 
            = ((0xfff7ffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]) 
               | (0x80000U & vlSelf->sha1_top__DOT__r_din[1U]));
    }
    if ((0x100000U & (vlSelf->sha1_top__DOT__r_din[1U] 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]))) {
        ++(vlSymsp->__Vcoverage[416]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[1U] 
            = ((0xffefffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]) 
               | (0x100000U & vlSelf->sha1_top__DOT__r_din[1U]));
    }
    if ((0x200000U & (vlSelf->sha1_top__DOT__r_din[1U] 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]))) {
        ++(vlSymsp->__Vcoverage[417]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[1U] 
            = ((0xffdfffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]) 
               | (0x200000U & vlSelf->sha1_top__DOT__r_din[1U]));
    }
    if ((0x400000U & (vlSelf->sha1_top__DOT__r_din[1U] 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]))) {
        ++(vlSymsp->__Vcoverage[418]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[1U] 
            = ((0xffbfffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]) 
               | (0x400000U & vlSelf->sha1_top__DOT__r_din[1U]));
    }
    if ((0x800000U & (vlSelf->sha1_top__DOT__r_din[1U] 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]))) {
        ++(vlSymsp->__Vcoverage[419]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[1U] 
            = ((0xff7fffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]) 
               | (0x800000U & vlSelf->sha1_top__DOT__r_din[1U]));
    }
    if ((0x1000000U & (vlSelf->sha1_top__DOT__r_din[1U] 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]))) {
        ++(vlSymsp->__Vcoverage[420]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[1U] 
            = ((0xfeffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]) 
               | (0x1000000U & vlSelf->sha1_top__DOT__r_din[1U]));
    }
    if ((0x2000000U & (vlSelf->sha1_top__DOT__r_din[1U] 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]))) {
        ++(vlSymsp->__Vcoverage[421]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[1U] 
            = ((0xfdffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]) 
               | (0x2000000U & vlSelf->sha1_top__DOT__r_din[1U]));
    }
    if ((0x4000000U & (vlSelf->sha1_top__DOT__r_din[1U] 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]))) {
        ++(vlSymsp->__Vcoverage[422]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[1U] 
            = ((0xfbffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]) 
               | (0x4000000U & vlSelf->sha1_top__DOT__r_din[1U]));
    }
    if ((0x8000000U & (vlSelf->sha1_top__DOT__r_din[1U] 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]))) {
        ++(vlSymsp->__Vcoverage[423]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[1U] 
            = ((0xf7ffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]) 
               | (0x8000000U & vlSelf->sha1_top__DOT__r_din[1U]));
    }
    if ((0x10000000U & (vlSelf->sha1_top__DOT__r_din[1U] 
                        ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]))) {
        ++(vlSymsp->__Vcoverage[424]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[1U] 
            = ((0xefffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]) 
               | (0x10000000U & vlSelf->sha1_top__DOT__r_din[1U]));
    }
    if ((0x20000000U & (vlSelf->sha1_top__DOT__r_din[1U] 
                        ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]))) {
        ++(vlSymsp->__Vcoverage[425]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[1U] 
            = ((0xdfffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]) 
               | (0x20000000U & vlSelf->sha1_top__DOT__r_din[1U]));
    }
    if ((0x40000000U & (vlSelf->sha1_top__DOT__r_din[1U] 
                        ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]))) {
        ++(vlSymsp->__Vcoverage[426]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[1U] 
            = ((0xbfffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]) 
               | (0x40000000U & vlSelf->sha1_top__DOT__r_din[1U]));
    }
    if (((vlSelf->sha1_top__DOT__r_din[1U] ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[427]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[1U] 
            = ((0x7fffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[1U]) 
               | (0x80000000U & vlSelf->sha1_top__DOT__r_din[1U]));
    }
    if ((1U & (vlSelf->sha1_top__DOT__r_din[2U] ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]))) {
        ++(vlSymsp->__Vcoverage[428]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[2U] 
            = ((0xfffffffeU & vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]) 
               | (1U & vlSelf->sha1_top__DOT__r_din[2U]));
    }
    if ((2U & (vlSelf->sha1_top__DOT__r_din[2U] ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[2U] 
            = ((0xfffffffdU & vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]) 
               | (2U & vlSelf->sha1_top__DOT__r_din[2U]));
    }
    if ((4U & (vlSelf->sha1_top__DOT__r_din[2U] ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]))) {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[2U] 
            = ((0xfffffffbU & vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]) 
               | (4U & vlSelf->sha1_top__DOT__r_din[2U]));
    }
    if ((8U & (vlSelf->sha1_top__DOT__r_din[2U] ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]))) {
        ++(vlSymsp->__Vcoverage[431]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[2U] 
            = ((0xfffffff7U & vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]) 
               | (8U & vlSelf->sha1_top__DOT__r_din[2U]));
    }
    if ((0x10U & (vlSelf->sha1_top__DOT__r_din[2U] 
                  ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]))) {
        ++(vlSymsp->__Vcoverage[432]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[2U] 
            = ((0xffffffefU & vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]) 
               | (0x10U & vlSelf->sha1_top__DOT__r_din[2U]));
    }
    if ((0x20U & (vlSelf->sha1_top__DOT__r_din[2U] 
                  ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]))) {
        ++(vlSymsp->__Vcoverage[433]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[2U] 
            = ((0xffffffdfU & vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]) 
               | (0x20U & vlSelf->sha1_top__DOT__r_din[2U]));
    }
    if ((0x40U & (vlSelf->sha1_top__DOT__r_din[2U] 
                  ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]))) {
        ++(vlSymsp->__Vcoverage[434]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[2U] 
            = ((0xffffffbfU & vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]) 
               | (0x40U & vlSelf->sha1_top__DOT__r_din[2U]));
    }
    if ((0x80U & (vlSelf->sha1_top__DOT__r_din[2U] 
                  ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]))) {
        ++(vlSymsp->__Vcoverage[435]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[2U] 
            = ((0xffffff7fU & vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]) 
               | (0x80U & vlSelf->sha1_top__DOT__r_din[2U]));
    }
    if ((0x100U & (vlSelf->sha1_top__DOT__r_din[2U] 
                   ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[2U] 
            = ((0xfffffeffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]) 
               | (0x100U & vlSelf->sha1_top__DOT__r_din[2U]));
    }
    if ((0x200U & (vlSelf->sha1_top__DOT__r_din[2U] 
                   ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[2U] 
            = ((0xfffffdffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]) 
               | (0x200U & vlSelf->sha1_top__DOT__r_din[2U]));
    }
    if ((0x400U & (vlSelf->sha1_top__DOT__r_din[2U] 
                   ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]))) {
        ++(vlSymsp->__Vcoverage[438]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[2U] 
            = ((0xfffffbffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]) 
               | (0x400U & vlSelf->sha1_top__DOT__r_din[2U]));
    }
    if ((0x800U & (vlSelf->sha1_top__DOT__r_din[2U] 
                   ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]))) {
        ++(vlSymsp->__Vcoverage[439]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[2U] 
            = ((0xfffff7ffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]) 
               | (0x800U & vlSelf->sha1_top__DOT__r_din[2U]));
    }
    if ((0x1000U & (vlSelf->sha1_top__DOT__r_din[2U] 
                    ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]))) {
        ++(vlSymsp->__Vcoverage[440]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[2U] 
            = ((0xffffefffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]) 
               | (0x1000U & vlSelf->sha1_top__DOT__r_din[2U]));
    }
    if ((0x2000U & (vlSelf->sha1_top__DOT__r_din[2U] 
                    ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]))) {
        ++(vlSymsp->__Vcoverage[441]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[2U] 
            = ((0xffffdfffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]) 
               | (0x2000U & vlSelf->sha1_top__DOT__r_din[2U]));
    }
    if ((0x4000U & (vlSelf->sha1_top__DOT__r_din[2U] 
                    ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]))) {
        ++(vlSymsp->__Vcoverage[442]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[2U] 
            = ((0xffffbfffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]) 
               | (0x4000U & vlSelf->sha1_top__DOT__r_din[2U]));
    }
    if ((0x8000U & (vlSelf->sha1_top__DOT__r_din[2U] 
                    ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]))) {
        ++(vlSymsp->__Vcoverage[443]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[2U] 
            = ((0xffff7fffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]) 
               | (0x8000U & vlSelf->sha1_top__DOT__r_din[2U]));
    }
    if ((0x10000U & (vlSelf->sha1_top__DOT__r_din[2U] 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]))) {
        ++(vlSymsp->__Vcoverage[444]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[2U] 
            = ((0xfffeffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]) 
               | (0x10000U & vlSelf->sha1_top__DOT__r_din[2U]));
    }
    if ((0x20000U & (vlSelf->sha1_top__DOT__r_din[2U] 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]))) {
        ++(vlSymsp->__Vcoverage[445]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[2U] 
            = ((0xfffdffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]) 
               | (0x20000U & vlSelf->sha1_top__DOT__r_din[2U]));
    }
    if ((0x40000U & (vlSelf->sha1_top__DOT__r_din[2U] 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]))) {
        ++(vlSymsp->__Vcoverage[446]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[2U] 
            = ((0xfffbffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]) 
               | (0x40000U & vlSelf->sha1_top__DOT__r_din[2U]));
    }
    if ((0x80000U & (vlSelf->sha1_top__DOT__r_din[2U] 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]))) {
        ++(vlSymsp->__Vcoverage[447]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[2U] 
            = ((0xfff7ffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]) 
               | (0x80000U & vlSelf->sha1_top__DOT__r_din[2U]));
    }
    if ((0x100000U & (vlSelf->sha1_top__DOT__r_din[2U] 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]))) {
        ++(vlSymsp->__Vcoverage[448]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[2U] 
            = ((0xffefffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]) 
               | (0x100000U & vlSelf->sha1_top__DOT__r_din[2U]));
    }
    if ((0x200000U & (vlSelf->sha1_top__DOT__r_din[2U] 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]))) {
        ++(vlSymsp->__Vcoverage[449]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[2U] 
            = ((0xffdfffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]) 
               | (0x200000U & vlSelf->sha1_top__DOT__r_din[2U]));
    }
    if ((0x400000U & (vlSelf->sha1_top__DOT__r_din[2U] 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]))) {
        ++(vlSymsp->__Vcoverage[450]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[2U] 
            = ((0xffbfffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]) 
               | (0x400000U & vlSelf->sha1_top__DOT__r_din[2U]));
    }
    if ((0x800000U & (vlSelf->sha1_top__DOT__r_din[2U] 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]))) {
        ++(vlSymsp->__Vcoverage[451]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[2U] 
            = ((0xff7fffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]) 
               | (0x800000U & vlSelf->sha1_top__DOT__r_din[2U]));
    }
    if ((0x1000000U & (vlSelf->sha1_top__DOT__r_din[2U] 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]))) {
        ++(vlSymsp->__Vcoverage[452]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[2U] 
            = ((0xfeffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]) 
               | (0x1000000U & vlSelf->sha1_top__DOT__r_din[2U]));
    }
    if ((0x2000000U & (vlSelf->sha1_top__DOT__r_din[2U] 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[2U] 
            = ((0xfdffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]) 
               | (0x2000000U & vlSelf->sha1_top__DOT__r_din[2U]));
    }
    if ((0x4000000U & (vlSelf->sha1_top__DOT__r_din[2U] 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[2U] 
            = ((0xfbffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]) 
               | (0x4000000U & vlSelf->sha1_top__DOT__r_din[2U]));
    }
    if ((0x8000000U & (vlSelf->sha1_top__DOT__r_din[2U] 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]))) {
        ++(vlSymsp->__Vcoverage[455]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[2U] 
            = ((0xf7ffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]) 
               | (0x8000000U & vlSelf->sha1_top__DOT__r_din[2U]));
    }
    if ((0x10000000U & (vlSelf->sha1_top__DOT__r_din[2U] 
                        ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]))) {
        ++(vlSymsp->__Vcoverage[456]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[2U] 
            = ((0xefffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]) 
               | (0x10000000U & vlSelf->sha1_top__DOT__r_din[2U]));
    }
    if ((0x20000000U & (vlSelf->sha1_top__DOT__r_din[2U] 
                        ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]))) {
        ++(vlSymsp->__Vcoverage[457]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[2U] 
            = ((0xdfffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]) 
               | (0x20000000U & vlSelf->sha1_top__DOT__r_din[2U]));
    }
    if ((0x40000000U & (vlSelf->sha1_top__DOT__r_din[2U] 
                        ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]))) {
        ++(vlSymsp->__Vcoverage[458]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[2U] 
            = ((0xbfffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]) 
               | (0x40000000U & vlSelf->sha1_top__DOT__r_din[2U]));
    }
    if (((vlSelf->sha1_top__DOT__r_din[2U] ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[459]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[2U] 
            = ((0x7fffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[2U]) 
               | (0x80000000U & vlSelf->sha1_top__DOT__r_din[2U]));
    }
    if ((1U & (vlSelf->sha1_top__DOT__r_din[3U] ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]))) {
        ++(vlSymsp->__Vcoverage[460]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[3U] 
            = ((0xfffffffeU & vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]) 
               | (1U & vlSelf->sha1_top__DOT__r_din[3U]));
    }
    if ((2U & (vlSelf->sha1_top__DOT__r_din[3U] ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]))) {
        ++(vlSymsp->__Vcoverage[461]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[3U] 
            = ((0xfffffffdU & vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]) 
               | (2U & vlSelf->sha1_top__DOT__r_din[3U]));
    }
    if ((4U & (vlSelf->sha1_top__DOT__r_din[3U] ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]))) {
        ++(vlSymsp->__Vcoverage[462]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[3U] 
            = ((0xfffffffbU & vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]) 
               | (4U & vlSelf->sha1_top__DOT__r_din[3U]));
    }
    if ((8U & (vlSelf->sha1_top__DOT__r_din[3U] ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]))) {
        ++(vlSymsp->__Vcoverage[463]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[3U] 
            = ((0xfffffff7U & vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]) 
               | (8U & vlSelf->sha1_top__DOT__r_din[3U]));
    }
    if ((0x10U & (vlSelf->sha1_top__DOT__r_din[3U] 
                  ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]))) {
        ++(vlSymsp->__Vcoverage[464]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[3U] 
            = ((0xffffffefU & vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]) 
               | (0x10U & vlSelf->sha1_top__DOT__r_din[3U]));
    }
    if ((0x20U & (vlSelf->sha1_top__DOT__r_din[3U] 
                  ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]))) {
        ++(vlSymsp->__Vcoverage[465]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[3U] 
            = ((0xffffffdfU & vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]) 
               | (0x20U & vlSelf->sha1_top__DOT__r_din[3U]));
    }
    if ((0x40U & (vlSelf->sha1_top__DOT__r_din[3U] 
                  ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]))) {
        ++(vlSymsp->__Vcoverage[466]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[3U] 
            = ((0xffffffbfU & vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]) 
               | (0x40U & vlSelf->sha1_top__DOT__r_din[3U]));
    }
    if ((0x80U & (vlSelf->sha1_top__DOT__r_din[3U] 
                  ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]))) {
        ++(vlSymsp->__Vcoverage[467]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[3U] 
            = ((0xffffff7fU & vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]) 
               | (0x80U & vlSelf->sha1_top__DOT__r_din[3U]));
    }
    if ((0x100U & (vlSelf->sha1_top__DOT__r_din[3U] 
                   ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]))) {
        ++(vlSymsp->__Vcoverage[468]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[3U] 
            = ((0xfffffeffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]) 
               | (0x100U & vlSelf->sha1_top__DOT__r_din[3U]));
    }
    if ((0x200U & (vlSelf->sha1_top__DOT__r_din[3U] 
                   ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]))) {
        ++(vlSymsp->__Vcoverage[469]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[3U] 
            = ((0xfffffdffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]) 
               | (0x200U & vlSelf->sha1_top__DOT__r_din[3U]));
    }
    if ((0x400U & (vlSelf->sha1_top__DOT__r_din[3U] 
                   ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]))) {
        ++(vlSymsp->__Vcoverage[470]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[3U] 
            = ((0xfffffbffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]) 
               | (0x400U & vlSelf->sha1_top__DOT__r_din[3U]));
    }
    if ((0x800U & (vlSelf->sha1_top__DOT__r_din[3U] 
                   ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]))) {
        ++(vlSymsp->__Vcoverage[471]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[3U] 
            = ((0xfffff7ffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]) 
               | (0x800U & vlSelf->sha1_top__DOT__r_din[3U]));
    }
    if ((0x1000U & (vlSelf->sha1_top__DOT__r_din[3U] 
                    ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]))) {
        ++(vlSymsp->__Vcoverage[472]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[3U] 
            = ((0xffffefffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]) 
               | (0x1000U & vlSelf->sha1_top__DOT__r_din[3U]));
    }
    if ((0x2000U & (vlSelf->sha1_top__DOT__r_din[3U] 
                    ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]))) {
        ++(vlSymsp->__Vcoverage[473]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[3U] 
            = ((0xffffdfffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]) 
               | (0x2000U & vlSelf->sha1_top__DOT__r_din[3U]));
    }
    if ((0x4000U & (vlSelf->sha1_top__DOT__r_din[3U] 
                    ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]))) {
        ++(vlSymsp->__Vcoverage[474]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[3U] 
            = ((0xffffbfffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]) 
               | (0x4000U & vlSelf->sha1_top__DOT__r_din[3U]));
    }
    if ((0x8000U & (vlSelf->sha1_top__DOT__r_din[3U] 
                    ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]))) {
        ++(vlSymsp->__Vcoverage[475]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[3U] 
            = ((0xffff7fffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]) 
               | (0x8000U & vlSelf->sha1_top__DOT__r_din[3U]));
    }
    if ((0x10000U & (vlSelf->sha1_top__DOT__r_din[3U] 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]))) {
        ++(vlSymsp->__Vcoverage[476]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[3U] 
            = ((0xfffeffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]) 
               | (0x10000U & vlSelf->sha1_top__DOT__r_din[3U]));
    }
    if ((0x20000U & (vlSelf->sha1_top__DOT__r_din[3U] 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]))) {
        ++(vlSymsp->__Vcoverage[477]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[3U] 
            = ((0xfffdffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]) 
               | (0x20000U & vlSelf->sha1_top__DOT__r_din[3U]));
    }
    if ((0x40000U & (vlSelf->sha1_top__DOT__r_din[3U] 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]))) {
        ++(vlSymsp->__Vcoverage[478]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[3U] 
            = ((0xfffbffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]) 
               | (0x40000U & vlSelf->sha1_top__DOT__r_din[3U]));
    }
    if ((0x80000U & (vlSelf->sha1_top__DOT__r_din[3U] 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]))) {
        ++(vlSymsp->__Vcoverage[479]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[3U] 
            = ((0xfff7ffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]) 
               | (0x80000U & vlSelf->sha1_top__DOT__r_din[3U]));
    }
    if ((0x100000U & (vlSelf->sha1_top__DOT__r_din[3U] 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]))) {
        ++(vlSymsp->__Vcoverage[480]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[3U] 
            = ((0xffefffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]) 
               | (0x100000U & vlSelf->sha1_top__DOT__r_din[3U]));
    }
    if ((0x200000U & (vlSelf->sha1_top__DOT__r_din[3U] 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]))) {
        ++(vlSymsp->__Vcoverage[481]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[3U] 
            = ((0xffdfffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]) 
               | (0x200000U & vlSelf->sha1_top__DOT__r_din[3U]));
    }
    if ((0x400000U & (vlSelf->sha1_top__DOT__r_din[3U] 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]))) {
        ++(vlSymsp->__Vcoverage[482]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[3U] 
            = ((0xffbfffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]) 
               | (0x400000U & vlSelf->sha1_top__DOT__r_din[3U]));
    }
    if ((0x800000U & (vlSelf->sha1_top__DOT__r_din[3U] 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]))) {
        ++(vlSymsp->__Vcoverage[483]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[3U] 
            = ((0xff7fffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]) 
               | (0x800000U & vlSelf->sha1_top__DOT__r_din[3U]));
    }
    if ((0x1000000U & (vlSelf->sha1_top__DOT__r_din[3U] 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]))) {
        ++(vlSymsp->__Vcoverage[484]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[3U] 
            = ((0xfeffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]) 
               | (0x1000000U & vlSelf->sha1_top__DOT__r_din[3U]));
    }
    if ((0x2000000U & (vlSelf->sha1_top__DOT__r_din[3U] 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]))) {
        ++(vlSymsp->__Vcoverage[485]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[3U] 
            = ((0xfdffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]) 
               | (0x2000000U & vlSelf->sha1_top__DOT__r_din[3U]));
    }
    if ((0x4000000U & (vlSelf->sha1_top__DOT__r_din[3U] 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]))) {
        ++(vlSymsp->__Vcoverage[486]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[3U] 
            = ((0xfbffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]) 
               | (0x4000000U & vlSelf->sha1_top__DOT__r_din[3U]));
    }
    if ((0x8000000U & (vlSelf->sha1_top__DOT__r_din[3U] 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]))) {
        ++(vlSymsp->__Vcoverage[487]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[3U] 
            = ((0xf7ffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]) 
               | (0x8000000U & vlSelf->sha1_top__DOT__r_din[3U]));
    }
    if ((0x10000000U & (vlSelf->sha1_top__DOT__r_din[3U] 
                        ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]))) {
        ++(vlSymsp->__Vcoverage[488]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[3U] 
            = ((0xefffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]) 
               | (0x10000000U & vlSelf->sha1_top__DOT__r_din[3U]));
    }
    if ((0x20000000U & (vlSelf->sha1_top__DOT__r_din[3U] 
                        ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]))) {
        ++(vlSymsp->__Vcoverage[489]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[3U] 
            = ((0xdfffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]) 
               | (0x20000000U & vlSelf->sha1_top__DOT__r_din[3U]));
    }
    if ((0x40000000U & (vlSelf->sha1_top__DOT__r_din[3U] 
                        ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]))) {
        ++(vlSymsp->__Vcoverage[490]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[3U] 
            = ((0xbfffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]) 
               | (0x40000000U & vlSelf->sha1_top__DOT__r_din[3U]));
    }
    if (((vlSelf->sha1_top__DOT__r_din[3U] ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[491]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[3U] 
            = ((0x7fffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[3U]) 
               | (0x80000000U & vlSelf->sha1_top__DOT__r_din[3U]));
    }
    if ((1U & (vlSelf->sha1_top__DOT__r_din[4U] ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]))) {
        ++(vlSymsp->__Vcoverage[492]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[4U] 
            = ((0xfffffffeU & vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]) 
               | (1U & vlSelf->sha1_top__DOT__r_din[4U]));
    }
    if ((2U & (vlSelf->sha1_top__DOT__r_din[4U] ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]))) {
        ++(vlSymsp->__Vcoverage[493]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[4U] 
            = ((0xfffffffdU & vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]) 
               | (2U & vlSelf->sha1_top__DOT__r_din[4U]));
    }
    if ((4U & (vlSelf->sha1_top__DOT__r_din[4U] ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]))) {
        ++(vlSymsp->__Vcoverage[494]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[4U] 
            = ((0xfffffffbU & vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]) 
               | (4U & vlSelf->sha1_top__DOT__r_din[4U]));
    }
    if ((8U & (vlSelf->sha1_top__DOT__r_din[4U] ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]))) {
        ++(vlSymsp->__Vcoverage[495]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[4U] 
            = ((0xfffffff7U & vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]) 
               | (8U & vlSelf->sha1_top__DOT__r_din[4U]));
    }
    if ((0x10U & (vlSelf->sha1_top__DOT__r_din[4U] 
                  ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]))) {
        ++(vlSymsp->__Vcoverage[496]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[4U] 
            = ((0xffffffefU & vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]) 
               | (0x10U & vlSelf->sha1_top__DOT__r_din[4U]));
    }
    if ((0x20U & (vlSelf->sha1_top__DOT__r_din[4U] 
                  ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]))) {
        ++(vlSymsp->__Vcoverage[497]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[4U] 
            = ((0xffffffdfU & vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]) 
               | (0x20U & vlSelf->sha1_top__DOT__r_din[4U]));
    }
    if ((0x40U & (vlSelf->sha1_top__DOT__r_din[4U] 
                  ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]))) {
        ++(vlSymsp->__Vcoverage[498]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[4U] 
            = ((0xffffffbfU & vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]) 
               | (0x40U & vlSelf->sha1_top__DOT__r_din[4U]));
    }
    if ((0x80U & (vlSelf->sha1_top__DOT__r_din[4U] 
                  ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]))) {
        ++(vlSymsp->__Vcoverage[499]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[4U] 
            = ((0xffffff7fU & vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]) 
               | (0x80U & vlSelf->sha1_top__DOT__r_din[4U]));
    }
    if ((0x100U & (vlSelf->sha1_top__DOT__r_din[4U] 
                   ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]))) {
        ++(vlSymsp->__Vcoverage[500]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[4U] 
            = ((0xfffffeffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]) 
               | (0x100U & vlSelf->sha1_top__DOT__r_din[4U]));
    }
    if ((0x200U & (vlSelf->sha1_top__DOT__r_din[4U] 
                   ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]))) {
        ++(vlSymsp->__Vcoverage[501]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[4U] 
            = ((0xfffffdffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]) 
               | (0x200U & vlSelf->sha1_top__DOT__r_din[4U]));
    }
    if ((0x400U & (vlSelf->sha1_top__DOT__r_din[4U] 
                   ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]))) {
        ++(vlSymsp->__Vcoverage[502]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[4U] 
            = ((0xfffffbffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]) 
               | (0x400U & vlSelf->sha1_top__DOT__r_din[4U]));
    }
    if ((0x800U & (vlSelf->sha1_top__DOT__r_din[4U] 
                   ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]))) {
        ++(vlSymsp->__Vcoverage[503]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[4U] 
            = ((0xfffff7ffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]) 
               | (0x800U & vlSelf->sha1_top__DOT__r_din[4U]));
    }
    if ((0x1000U & (vlSelf->sha1_top__DOT__r_din[4U] 
                    ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]))) {
        ++(vlSymsp->__Vcoverage[504]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[4U] 
            = ((0xffffefffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]) 
               | (0x1000U & vlSelf->sha1_top__DOT__r_din[4U]));
    }
    if ((0x2000U & (vlSelf->sha1_top__DOT__r_din[4U] 
                    ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]))) {
        ++(vlSymsp->__Vcoverage[505]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[4U] 
            = ((0xffffdfffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]) 
               | (0x2000U & vlSelf->sha1_top__DOT__r_din[4U]));
    }
    if ((0x4000U & (vlSelf->sha1_top__DOT__r_din[4U] 
                    ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]))) {
        ++(vlSymsp->__Vcoverage[506]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[4U] 
            = ((0xffffbfffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]) 
               | (0x4000U & vlSelf->sha1_top__DOT__r_din[4U]));
    }
    if ((0x8000U & (vlSelf->sha1_top__DOT__r_din[4U] 
                    ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]))) {
        ++(vlSymsp->__Vcoverage[507]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[4U] 
            = ((0xffff7fffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]) 
               | (0x8000U & vlSelf->sha1_top__DOT__r_din[4U]));
    }
    if ((0x10000U & (vlSelf->sha1_top__DOT__r_din[4U] 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]))) {
        ++(vlSymsp->__Vcoverage[508]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[4U] 
            = ((0xfffeffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]) 
               | (0x10000U & vlSelf->sha1_top__DOT__r_din[4U]));
    }
    if ((0x20000U & (vlSelf->sha1_top__DOT__r_din[4U] 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]))) {
        ++(vlSymsp->__Vcoverage[509]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[4U] 
            = ((0xfffdffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]) 
               | (0x20000U & vlSelf->sha1_top__DOT__r_din[4U]));
    }
    if ((0x40000U & (vlSelf->sha1_top__DOT__r_din[4U] 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]))) {
        ++(vlSymsp->__Vcoverage[510]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[4U] 
            = ((0xfffbffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]) 
               | (0x40000U & vlSelf->sha1_top__DOT__r_din[4U]));
    }
    if ((0x80000U & (vlSelf->sha1_top__DOT__r_din[4U] 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]))) {
        ++(vlSymsp->__Vcoverage[511]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[4U] 
            = ((0xfff7ffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]) 
               | (0x80000U & vlSelf->sha1_top__DOT__r_din[4U]));
    }
    if ((0x100000U & (vlSelf->sha1_top__DOT__r_din[4U] 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]))) {
        ++(vlSymsp->__Vcoverage[512]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[4U] 
            = ((0xffefffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]) 
               | (0x100000U & vlSelf->sha1_top__DOT__r_din[4U]));
    }
    if ((0x200000U & (vlSelf->sha1_top__DOT__r_din[4U] 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]))) {
        ++(vlSymsp->__Vcoverage[513]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[4U] 
            = ((0xffdfffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]) 
               | (0x200000U & vlSelf->sha1_top__DOT__r_din[4U]));
    }
    if ((0x400000U & (vlSelf->sha1_top__DOT__r_din[4U] 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]))) {
        ++(vlSymsp->__Vcoverage[514]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[4U] 
            = ((0xffbfffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]) 
               | (0x400000U & vlSelf->sha1_top__DOT__r_din[4U]));
    }
    if ((0x800000U & (vlSelf->sha1_top__DOT__r_din[4U] 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]))) {
        ++(vlSymsp->__Vcoverage[515]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[4U] 
            = ((0xff7fffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]) 
               | (0x800000U & vlSelf->sha1_top__DOT__r_din[4U]));
    }
    if ((0x1000000U & (vlSelf->sha1_top__DOT__r_din[4U] 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]))) {
        ++(vlSymsp->__Vcoverage[516]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[4U] 
            = ((0xfeffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]) 
               | (0x1000000U & vlSelf->sha1_top__DOT__r_din[4U]));
    }
    if ((0x2000000U & (vlSelf->sha1_top__DOT__r_din[4U] 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]))) {
        ++(vlSymsp->__Vcoverage[517]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[4U] 
            = ((0xfdffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]) 
               | (0x2000000U & vlSelf->sha1_top__DOT__r_din[4U]));
    }
    if ((0x4000000U & (vlSelf->sha1_top__DOT__r_din[4U] 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]))) {
        ++(vlSymsp->__Vcoverage[518]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[4U] 
            = ((0xfbffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]) 
               | (0x4000000U & vlSelf->sha1_top__DOT__r_din[4U]));
    }
    if ((0x8000000U & (vlSelf->sha1_top__DOT__r_din[4U] 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]))) {
        ++(vlSymsp->__Vcoverage[519]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[4U] 
            = ((0xf7ffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]) 
               | (0x8000000U & vlSelf->sha1_top__DOT__r_din[4U]));
    }
    if ((0x10000000U & (vlSelf->sha1_top__DOT__r_din[4U] 
                        ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]))) {
        ++(vlSymsp->__Vcoverage[520]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[4U] 
            = ((0xefffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]) 
               | (0x10000000U & vlSelf->sha1_top__DOT__r_din[4U]));
    }
    if ((0x20000000U & (vlSelf->sha1_top__DOT__r_din[4U] 
                        ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]))) {
        ++(vlSymsp->__Vcoverage[521]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[4U] 
            = ((0xdfffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]) 
               | (0x20000000U & vlSelf->sha1_top__DOT__r_din[4U]));
    }
    if ((0x40000000U & (vlSelf->sha1_top__DOT__r_din[4U] 
                        ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]))) {
        ++(vlSymsp->__Vcoverage[522]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[4U] 
            = ((0xbfffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]) 
               | (0x40000000U & vlSelf->sha1_top__DOT__r_din[4U]));
    }
    if (((vlSelf->sha1_top__DOT__r_din[4U] ^ vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[523]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din[4U] 
            = ((0x7fffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din[4U]) 
               | (0x80000000U & vlSelf->sha1_top__DOT__r_din[4U]));
    }
    vlSelf->sha1_top__DOT__u_round__DOT__b_shift = 
        ((vlSelf->sha1_top__DOT__r_din[3U] << 0x1eU) 
         | (vlSelf->sha1_top__DOT__r_din[3U] >> 2U));
    vlSelf->sha1_top__DOT__u_round__DOT__a_shift = 
        ((vlSelf->sha1_top__DOT__r_din[4U] << 5U) | 
         (vlSelf->sha1_top__DOT__r_din[4U] >> 0x1bU));
    if ((1U & ((IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem) 
               ^ (IData)(vlSelf->sha1_top__DOT____Vtogcov__t)))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->sha1_top__DOT____Vtogcov__t = ((0xfeU 
                                                & (IData)(vlSelf->sha1_top__DOT____Vtogcov__t)) 
                                               | (1U 
                                                  & (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)));
    }
    if ((2U & ((IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem) 
               ^ (IData)(vlSelf->sha1_top__DOT____Vtogcov__t)))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->sha1_top__DOT____Vtogcov__t = ((0xfdU 
                                                & (IData)(vlSelf->sha1_top__DOT____Vtogcov__t)) 
                                               | (2U 
                                                  & (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)));
    }
    if ((4U & ((IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem) 
               ^ (IData)(vlSelf->sha1_top__DOT____Vtogcov__t)))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->sha1_top__DOT____Vtogcov__t = ((0xfbU 
                                                & (IData)(vlSelf->sha1_top__DOT____Vtogcov__t)) 
                                               | (4U 
                                                  & (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)));
    }
    if ((8U & ((IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem) 
               ^ (IData)(vlSelf->sha1_top__DOT____Vtogcov__t)))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->sha1_top__DOT____Vtogcov__t = ((0xf7U 
                                                & (IData)(vlSelf->sha1_top__DOT____Vtogcov__t)) 
                                               | (8U 
                                                  & (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)));
    }
    if ((0x10U & ((IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem) 
                  ^ (IData)(vlSelf->sha1_top__DOT____Vtogcov__t)))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->sha1_top__DOT____Vtogcov__t = ((0xefU 
                                                & (IData)(vlSelf->sha1_top__DOT____Vtogcov__t)) 
                                               | (0x10U 
                                                  & (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)));
    }
    if ((0x20U & ((IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem) 
                  ^ (IData)(vlSelf->sha1_top__DOT____Vtogcov__t)))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->sha1_top__DOT____Vtogcov__t = ((0xdfU 
                                                & (IData)(vlSelf->sha1_top__DOT____Vtogcov__t)) 
                                               | (0x20U 
                                                  & (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)));
    }
    if ((0x40U & ((IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem) 
                  ^ (IData)(vlSelf->sha1_top__DOT____Vtogcov__t)))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->sha1_top__DOT____Vtogcov__t = ((0xbfU 
                                                & (IData)(vlSelf->sha1_top__DOT____Vtogcov__t)) 
                                               | (0x40U 
                                                  & (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)));
    }
    if ((0x80U & ((IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem) 
                  ^ (IData)(vlSelf->sha1_top__DOT____Vtogcov__t)))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->sha1_top__DOT____Vtogcov__t = ((0x7fU 
                                                & (IData)(vlSelf->sha1_top__DOT____Vtogcov__t)) 
                                               | (0x80U 
                                                  & (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)));
    }
    ++(vlSymsp->__Vcoverage[788]);
    vlSelf->sha1_top__DOT__u_round__DOT__k = 0U;
    if ((0x13U >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem))) {
        ++(vlSymsp->__Vcoverage[780]);
        vlSelf->sha1_top__DOT__u_round__DOT__k = 0x5a827999U;
    } else {
        ++(vlSymsp->__Vcoverage[781]);
    }
    if (((0x14U <= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
         & (0x27U >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))) {
        ++(vlSymsp->__Vcoverage[782]);
        vlSelf->sha1_top__DOT__u_round__DOT__k = 0x6ed9eba1U;
    } else {
        ++(vlSymsp->__Vcoverage[783]);
    }
    if (((0x28U <= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
         & (0x3bU >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))) {
        ++(vlSymsp->__Vcoverage[784]);
        vlSelf->sha1_top__DOT__u_round__DOT__k = 0x8f1bbcdcU;
    } else {
        ++(vlSymsp->__Vcoverage[785]);
    }
    if (((0x3cU <= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
         & (0x4fU >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))) {
        ++(vlSymsp->__Vcoverage[786]);
        vlSelf->sha1_top__DOT__u_round__DOT__k = 0xca62c1d6U;
    } else {
        ++(vlSymsp->__Vcoverage[787]);
    }
    ++(vlSymsp->__Vcoverage[797]);
    vlSelf->sha1_top__DOT__u_round__DOT__f = 0U;
    if ((0x13U >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem))) {
        ++(vlSymsp->__Vcoverage[789]);
        vlSelf->sha1_top__DOT__u_round__DOT__f = ((
                                                   vlSelf->sha1_top__DOT__r_din[3U] 
                                                   & vlSelf->sha1_top__DOT__r_din[2U]) 
                                                  | ((~ 
                                                      vlSelf->sha1_top__DOT__r_din[3U]) 
                                                     & vlSelf->sha1_top__DOT__r_din[1U]));
    } else {
        ++(vlSymsp->__Vcoverage[790]);
    }
    if (((0x14U <= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
         & (0x27U >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))) {
        ++(vlSymsp->__Vcoverage[791]);
        vlSelf->sha1_top__DOT__u_round__DOT__f = ((
                                                   vlSelf->sha1_top__DOT__r_din[3U] 
                                                   ^ 
                                                   vlSelf->sha1_top__DOT__r_din[2U]) 
                                                  ^ 
                                                  vlSelf->sha1_top__DOT__r_din[1U]);
    } else {
        ++(vlSymsp->__Vcoverage[792]);
    }
    if (((0x28U <= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
         & (0x3bU >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))) {
        ++(vlSymsp->__Vcoverage[793]);
        vlSelf->sha1_top__DOT__u_round__DOT__f = ((
                                                   vlSelf->sha1_top__DOT__r_din[3U] 
                                                   & (vlSelf->sha1_top__DOT__r_din[2U] 
                                                      | vlSelf->sha1_top__DOT__r_din[1U])) 
                                                  | (vlSelf->sha1_top__DOT__r_din[2U] 
                                                     & vlSelf->sha1_top__DOT__r_din[1U]));
    } else {
        ++(vlSymsp->__Vcoverage[794]);
    }
    if (((0x3cU <= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
         & (0x4fU >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))) {
        ++(vlSymsp->__Vcoverage[795]);
        vlSelf->sha1_top__DOT__u_round__DOT__f = ((
                                                   vlSelf->sha1_top__DOT__r_din[3U] 
                                                   ^ 
                                                   vlSelf->sha1_top__DOT__r_din[2U]) 
                                                  ^ 
                                                  vlSelf->sha1_top__DOT__r_din[1U]);
    } else {
        ++(vlSymsp->__Vcoverage[796]);
    }
    vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp = (
                                                   ((vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xfU] 
                                                     ^ 
                                                     vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xdU]) 
                                                    ^ 
                                                    vlSelf->sha1_top__DOT__u_w__DOT__din_temp[7U]) 
                                                   ^ 
                                                   vlSelf->sha1_top__DOT__u_w__DOT__din_temp[2U]);
    if ((1U & (vlSelf->sha1_top__DOT__u_round__DOT__b_shift 
               ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[716]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift 
            = ((0xfffffffeU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift) 
               | (1U & vlSelf->sha1_top__DOT__u_round__DOT__b_shift));
    }
    if ((2U & (vlSelf->sha1_top__DOT__u_round__DOT__b_shift 
               ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[717]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift 
            = ((0xfffffffdU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift) 
               | (2U & vlSelf->sha1_top__DOT__u_round__DOT__b_shift));
    }
    if ((4U & (vlSelf->sha1_top__DOT__u_round__DOT__b_shift 
               ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[718]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift 
            = ((0xfffffffbU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift) 
               | (4U & vlSelf->sha1_top__DOT__u_round__DOT__b_shift));
    }
    if ((8U & (vlSelf->sha1_top__DOT__u_round__DOT__b_shift 
               ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[719]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift 
            = ((0xfffffff7U & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift) 
               | (8U & vlSelf->sha1_top__DOT__u_round__DOT__b_shift));
    }
    if ((0x10U & (vlSelf->sha1_top__DOT__u_round__DOT__b_shift 
                  ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[720]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift 
            = ((0xffffffefU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift) 
               | (0x10U & vlSelf->sha1_top__DOT__u_round__DOT__b_shift));
    }
    if ((0x20U & (vlSelf->sha1_top__DOT__u_round__DOT__b_shift 
                  ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[721]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift 
            = ((0xffffffdfU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift) 
               | (0x20U & vlSelf->sha1_top__DOT__u_round__DOT__b_shift));
    }
    if ((0x40U & (vlSelf->sha1_top__DOT__u_round__DOT__b_shift 
                  ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[722]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift 
            = ((0xffffffbfU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift) 
               | (0x40U & vlSelf->sha1_top__DOT__u_round__DOT__b_shift));
    }
    if ((0x80U & (vlSelf->sha1_top__DOT__u_round__DOT__b_shift 
                  ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[723]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift 
            = ((0xffffff7fU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift) 
               | (0x80U & vlSelf->sha1_top__DOT__u_round__DOT__b_shift));
    }
    if ((0x100U & (vlSelf->sha1_top__DOT__u_round__DOT__b_shift 
                   ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[724]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift 
            = ((0xfffffeffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift) 
               | (0x100U & vlSelf->sha1_top__DOT__u_round__DOT__b_shift));
    }
    if ((0x200U & (vlSelf->sha1_top__DOT__u_round__DOT__b_shift 
                   ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[725]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift 
            = ((0xfffffdffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift) 
               | (0x200U & vlSelf->sha1_top__DOT__u_round__DOT__b_shift));
    }
    if ((0x400U & (vlSelf->sha1_top__DOT__u_round__DOT__b_shift 
                   ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[726]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift 
            = ((0xfffffbffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift) 
               | (0x400U & vlSelf->sha1_top__DOT__u_round__DOT__b_shift));
    }
    if ((0x800U & (vlSelf->sha1_top__DOT__u_round__DOT__b_shift 
                   ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[727]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift 
            = ((0xfffff7ffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift) 
               | (0x800U & vlSelf->sha1_top__DOT__u_round__DOT__b_shift));
    }
    if ((0x1000U & (vlSelf->sha1_top__DOT__u_round__DOT__b_shift 
                    ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[728]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift 
            = ((0xffffefffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift) 
               | (0x1000U & vlSelf->sha1_top__DOT__u_round__DOT__b_shift));
    }
    if ((0x2000U & (vlSelf->sha1_top__DOT__u_round__DOT__b_shift 
                    ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[729]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift 
            = ((0xffffdfffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift) 
               | (0x2000U & vlSelf->sha1_top__DOT__u_round__DOT__b_shift));
    }
    if ((0x4000U & (vlSelf->sha1_top__DOT__u_round__DOT__b_shift 
                    ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[730]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift 
            = ((0xffffbfffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift) 
               | (0x4000U & vlSelf->sha1_top__DOT__u_round__DOT__b_shift));
    }
    if ((0x8000U & (vlSelf->sha1_top__DOT__u_round__DOT__b_shift 
                    ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[731]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift 
            = ((0xffff7fffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift) 
               | (0x8000U & vlSelf->sha1_top__DOT__u_round__DOT__b_shift));
    }
    if ((0x10000U & (vlSelf->sha1_top__DOT__u_round__DOT__b_shift 
                     ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[732]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift 
            = ((0xfffeffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift) 
               | (0x10000U & vlSelf->sha1_top__DOT__u_round__DOT__b_shift));
    }
    if ((0x20000U & (vlSelf->sha1_top__DOT__u_round__DOT__b_shift 
                     ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[733]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift 
            = ((0xfffdffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift) 
               | (0x20000U & vlSelf->sha1_top__DOT__u_round__DOT__b_shift));
    }
    if ((0x40000U & (vlSelf->sha1_top__DOT__u_round__DOT__b_shift 
                     ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[734]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift 
            = ((0xfffbffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift) 
               | (0x40000U & vlSelf->sha1_top__DOT__u_round__DOT__b_shift));
    }
    if ((0x80000U & (vlSelf->sha1_top__DOT__u_round__DOT__b_shift 
                     ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[735]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift 
            = ((0xfff7ffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift) 
               | (0x80000U & vlSelf->sha1_top__DOT__u_round__DOT__b_shift));
    }
    if ((0x100000U & (vlSelf->sha1_top__DOT__u_round__DOT__b_shift 
                      ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[736]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift 
            = ((0xffefffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift) 
               | (0x100000U & vlSelf->sha1_top__DOT__u_round__DOT__b_shift));
    }
    if ((0x200000U & (vlSelf->sha1_top__DOT__u_round__DOT__b_shift 
                      ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[737]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift 
            = ((0xffdfffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift) 
               | (0x200000U & vlSelf->sha1_top__DOT__u_round__DOT__b_shift));
    }
    if ((0x400000U & (vlSelf->sha1_top__DOT__u_round__DOT__b_shift 
                      ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[738]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift 
            = ((0xffbfffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift) 
               | (0x400000U & vlSelf->sha1_top__DOT__u_round__DOT__b_shift));
    }
    if ((0x800000U & (vlSelf->sha1_top__DOT__u_round__DOT__b_shift 
                      ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[739]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift 
            = ((0xff7fffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift) 
               | (0x800000U & vlSelf->sha1_top__DOT__u_round__DOT__b_shift));
    }
    if ((0x1000000U & (vlSelf->sha1_top__DOT__u_round__DOT__b_shift 
                       ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[740]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift 
            = ((0xfeffffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift) 
               | (0x1000000U & vlSelf->sha1_top__DOT__u_round__DOT__b_shift));
    }
    if ((0x2000000U & (vlSelf->sha1_top__DOT__u_round__DOT__b_shift 
                       ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[741]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift 
            = ((0xfdffffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift) 
               | (0x2000000U & vlSelf->sha1_top__DOT__u_round__DOT__b_shift));
    }
    if ((0x4000000U & (vlSelf->sha1_top__DOT__u_round__DOT__b_shift 
                       ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[742]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift 
            = ((0xfbffffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift) 
               | (0x4000000U & vlSelf->sha1_top__DOT__u_round__DOT__b_shift));
    }
    if ((0x8000000U & (vlSelf->sha1_top__DOT__u_round__DOT__b_shift 
                       ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[743]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift 
            = ((0xf7ffffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift) 
               | (0x8000000U & vlSelf->sha1_top__DOT__u_round__DOT__b_shift));
    }
    if ((0x10000000U & (vlSelf->sha1_top__DOT__u_round__DOT__b_shift 
                        ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[744]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift 
            = ((0xefffffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift) 
               | (0x10000000U & vlSelf->sha1_top__DOT__u_round__DOT__b_shift));
    }
    if ((0x20000000U & (vlSelf->sha1_top__DOT__u_round__DOT__b_shift 
                        ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[745]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift 
            = ((0xdfffffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift) 
               | (0x20000000U & vlSelf->sha1_top__DOT__u_round__DOT__b_shift));
    }
    if ((0x40000000U & (vlSelf->sha1_top__DOT__u_round__DOT__b_shift 
                        ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift))) {
        ++(vlSymsp->__Vcoverage[746]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift 
            = ((0xbfffffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift) 
               | (0x40000000U & vlSelf->sha1_top__DOT__u_round__DOT__b_shift));
    }
    if (((vlSelf->sha1_top__DOT__u_round__DOT__b_shift 
          ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[747]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift 
            = ((0x7fffffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift) 
               | (0x80000000U & vlSelf->sha1_top__DOT__u_round__DOT__b_shift));
    }
    if ((1U & (vlSelf->sha1_top__DOT__u_round__DOT__a_shift 
               ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[684]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift 
            = ((0xfffffffeU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift) 
               | (1U & vlSelf->sha1_top__DOT__u_round__DOT__a_shift));
    }
    if ((2U & (vlSelf->sha1_top__DOT__u_round__DOT__a_shift 
               ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[685]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift 
            = ((0xfffffffdU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift) 
               | (2U & vlSelf->sha1_top__DOT__u_round__DOT__a_shift));
    }
    if ((4U & (vlSelf->sha1_top__DOT__u_round__DOT__a_shift 
               ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[686]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift 
            = ((0xfffffffbU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift) 
               | (4U & vlSelf->sha1_top__DOT__u_round__DOT__a_shift));
    }
    if ((8U & (vlSelf->sha1_top__DOT__u_round__DOT__a_shift 
               ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[687]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift 
            = ((0xfffffff7U & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift) 
               | (8U & vlSelf->sha1_top__DOT__u_round__DOT__a_shift));
    }
    if ((0x10U & (vlSelf->sha1_top__DOT__u_round__DOT__a_shift 
                  ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[688]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift 
            = ((0xffffffefU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift) 
               | (0x10U & vlSelf->sha1_top__DOT__u_round__DOT__a_shift));
    }
    if ((0x20U & (vlSelf->sha1_top__DOT__u_round__DOT__a_shift 
                  ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[689]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift 
            = ((0xffffffdfU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift) 
               | (0x20U & vlSelf->sha1_top__DOT__u_round__DOT__a_shift));
    }
    if ((0x40U & (vlSelf->sha1_top__DOT__u_round__DOT__a_shift 
                  ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[690]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift 
            = ((0xffffffbfU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift) 
               | (0x40U & vlSelf->sha1_top__DOT__u_round__DOT__a_shift));
    }
    if ((0x80U & (vlSelf->sha1_top__DOT__u_round__DOT__a_shift 
                  ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[691]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift 
            = ((0xffffff7fU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift) 
               | (0x80U & vlSelf->sha1_top__DOT__u_round__DOT__a_shift));
    }
    if ((0x100U & (vlSelf->sha1_top__DOT__u_round__DOT__a_shift 
                   ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[692]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift 
            = ((0xfffffeffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift) 
               | (0x100U & vlSelf->sha1_top__DOT__u_round__DOT__a_shift));
    }
    if ((0x200U & (vlSelf->sha1_top__DOT__u_round__DOT__a_shift 
                   ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[693]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift 
            = ((0xfffffdffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift) 
               | (0x200U & vlSelf->sha1_top__DOT__u_round__DOT__a_shift));
    }
    if ((0x400U & (vlSelf->sha1_top__DOT__u_round__DOT__a_shift 
                   ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[694]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift 
            = ((0xfffffbffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift) 
               | (0x400U & vlSelf->sha1_top__DOT__u_round__DOT__a_shift));
    }
    if ((0x800U & (vlSelf->sha1_top__DOT__u_round__DOT__a_shift 
                   ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[695]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift 
            = ((0xfffff7ffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift) 
               | (0x800U & vlSelf->sha1_top__DOT__u_round__DOT__a_shift));
    }
    if ((0x1000U & (vlSelf->sha1_top__DOT__u_round__DOT__a_shift 
                    ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[696]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift 
            = ((0xffffefffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift) 
               | (0x1000U & vlSelf->sha1_top__DOT__u_round__DOT__a_shift));
    }
    if ((0x2000U & (vlSelf->sha1_top__DOT__u_round__DOT__a_shift 
                    ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[697]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift 
            = ((0xffffdfffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift) 
               | (0x2000U & vlSelf->sha1_top__DOT__u_round__DOT__a_shift));
    }
    if ((0x4000U & (vlSelf->sha1_top__DOT__u_round__DOT__a_shift 
                    ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[698]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift 
            = ((0xffffbfffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift) 
               | (0x4000U & vlSelf->sha1_top__DOT__u_round__DOT__a_shift));
    }
    if ((0x8000U & (vlSelf->sha1_top__DOT__u_round__DOT__a_shift 
                    ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[699]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift 
            = ((0xffff7fffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift) 
               | (0x8000U & vlSelf->sha1_top__DOT__u_round__DOT__a_shift));
    }
    if ((0x10000U & (vlSelf->sha1_top__DOT__u_round__DOT__a_shift 
                     ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[700]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift 
            = ((0xfffeffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift) 
               | (0x10000U & vlSelf->sha1_top__DOT__u_round__DOT__a_shift));
    }
    if ((0x20000U & (vlSelf->sha1_top__DOT__u_round__DOT__a_shift 
                     ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[701]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift 
            = ((0xfffdffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift) 
               | (0x20000U & vlSelf->sha1_top__DOT__u_round__DOT__a_shift));
    }
    if ((0x40000U & (vlSelf->sha1_top__DOT__u_round__DOT__a_shift 
                     ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[702]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift 
            = ((0xfffbffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift) 
               | (0x40000U & vlSelf->sha1_top__DOT__u_round__DOT__a_shift));
    }
    if ((0x80000U & (vlSelf->sha1_top__DOT__u_round__DOT__a_shift 
                     ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[703]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift 
            = ((0xfff7ffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift) 
               | (0x80000U & vlSelf->sha1_top__DOT__u_round__DOT__a_shift));
    }
    if ((0x100000U & (vlSelf->sha1_top__DOT__u_round__DOT__a_shift 
                      ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[704]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift 
            = ((0xffefffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift) 
               | (0x100000U & vlSelf->sha1_top__DOT__u_round__DOT__a_shift));
    }
    if ((0x200000U & (vlSelf->sha1_top__DOT__u_round__DOT__a_shift 
                      ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[705]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift 
            = ((0xffdfffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift) 
               | (0x200000U & vlSelf->sha1_top__DOT__u_round__DOT__a_shift));
    }
    if ((0x400000U & (vlSelf->sha1_top__DOT__u_round__DOT__a_shift 
                      ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[706]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift 
            = ((0xffbfffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift) 
               | (0x400000U & vlSelf->sha1_top__DOT__u_round__DOT__a_shift));
    }
    if ((0x800000U & (vlSelf->sha1_top__DOT__u_round__DOT__a_shift 
                      ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[707]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift 
            = ((0xff7fffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift) 
               | (0x800000U & vlSelf->sha1_top__DOT__u_round__DOT__a_shift));
    }
    if ((0x1000000U & (vlSelf->sha1_top__DOT__u_round__DOT__a_shift 
                       ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[708]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift 
            = ((0xfeffffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift) 
               | (0x1000000U & vlSelf->sha1_top__DOT__u_round__DOT__a_shift));
    }
    if ((0x2000000U & (vlSelf->sha1_top__DOT__u_round__DOT__a_shift 
                       ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[709]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift 
            = ((0xfdffffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift) 
               | (0x2000000U & vlSelf->sha1_top__DOT__u_round__DOT__a_shift));
    }
    if ((0x4000000U & (vlSelf->sha1_top__DOT__u_round__DOT__a_shift 
                       ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[710]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift 
            = ((0xfbffffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift) 
               | (0x4000000U & vlSelf->sha1_top__DOT__u_round__DOT__a_shift));
    }
    if ((0x8000000U & (vlSelf->sha1_top__DOT__u_round__DOT__a_shift 
                       ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[711]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift 
            = ((0xf7ffffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift) 
               | (0x8000000U & vlSelf->sha1_top__DOT__u_round__DOT__a_shift));
    }
    if ((0x10000000U & (vlSelf->sha1_top__DOT__u_round__DOT__a_shift 
                        ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[712]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift 
            = ((0xefffffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift) 
               | (0x10000000U & vlSelf->sha1_top__DOT__u_round__DOT__a_shift));
    }
    if ((0x20000000U & (vlSelf->sha1_top__DOT__u_round__DOT__a_shift 
                        ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[713]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift 
            = ((0xdfffffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift) 
               | (0x20000000U & vlSelf->sha1_top__DOT__u_round__DOT__a_shift));
    }
    if ((0x40000000U & (vlSelf->sha1_top__DOT__u_round__DOT__a_shift 
                        ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift))) {
        ++(vlSymsp->__Vcoverage[714]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift 
            = ((0xbfffffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift) 
               | (0x40000000U & vlSelf->sha1_top__DOT__u_round__DOT__a_shift));
    }
    if (((vlSelf->sha1_top__DOT__u_round__DOT__a_shift 
          ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[715]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift 
            = ((0x7fffffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift) 
               | (0x80000000U & vlSelf->sha1_top__DOT__u_round__DOT__a_shift));
    }
    if ((1U & (vlSelf->sha1_top__DOT__u_round__DOT__k 
               ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[652]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k 
            = ((0xfffffffeU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k) 
               | (1U & vlSelf->sha1_top__DOT__u_round__DOT__k));
    }
    if ((2U & (vlSelf->sha1_top__DOT__u_round__DOT__k 
               ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[653]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k 
            = ((0xfffffffdU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k) 
               | (2U & vlSelf->sha1_top__DOT__u_round__DOT__k));
    }
    if ((4U & (vlSelf->sha1_top__DOT__u_round__DOT__k 
               ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[654]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k 
            = ((0xfffffffbU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k) 
               | (4U & vlSelf->sha1_top__DOT__u_round__DOT__k));
    }
    if ((8U & (vlSelf->sha1_top__DOT__u_round__DOT__k 
               ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[655]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k 
            = ((0xfffffff7U & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k) 
               | (8U & vlSelf->sha1_top__DOT__u_round__DOT__k));
    }
    if ((0x10U & (vlSelf->sha1_top__DOT__u_round__DOT__k 
                  ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[656]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k 
            = ((0xffffffefU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k) 
               | (0x10U & vlSelf->sha1_top__DOT__u_round__DOT__k));
    }
    if ((0x20U & (vlSelf->sha1_top__DOT__u_round__DOT__k 
                  ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[657]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k 
            = ((0xffffffdfU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k) 
               | (0x20U & vlSelf->sha1_top__DOT__u_round__DOT__k));
    }
    if ((0x40U & (vlSelf->sha1_top__DOT__u_round__DOT__k 
                  ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[658]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k 
            = ((0xffffffbfU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k) 
               | (0x40U & vlSelf->sha1_top__DOT__u_round__DOT__k));
    }
    if ((0x80U & (vlSelf->sha1_top__DOT__u_round__DOT__k 
                  ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[659]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k 
            = ((0xffffff7fU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k) 
               | (0x80U & vlSelf->sha1_top__DOT__u_round__DOT__k));
    }
    if ((0x100U & (vlSelf->sha1_top__DOT__u_round__DOT__k 
                   ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[660]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k 
            = ((0xfffffeffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k) 
               | (0x100U & vlSelf->sha1_top__DOT__u_round__DOT__k));
    }
    if ((0x200U & (vlSelf->sha1_top__DOT__u_round__DOT__k 
                   ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[661]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k 
            = ((0xfffffdffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k) 
               | (0x200U & vlSelf->sha1_top__DOT__u_round__DOT__k));
    }
    if ((0x400U & (vlSelf->sha1_top__DOT__u_round__DOT__k 
                   ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[662]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k 
            = ((0xfffffbffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k) 
               | (0x400U & vlSelf->sha1_top__DOT__u_round__DOT__k));
    }
    if ((0x800U & (vlSelf->sha1_top__DOT__u_round__DOT__k 
                   ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[663]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k 
            = ((0xfffff7ffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k) 
               | (0x800U & vlSelf->sha1_top__DOT__u_round__DOT__k));
    }
    if ((0x1000U & (vlSelf->sha1_top__DOT__u_round__DOT__k 
                    ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[664]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k 
            = ((0xffffefffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k) 
               | (0x1000U & vlSelf->sha1_top__DOT__u_round__DOT__k));
    }
    if ((0x2000U & (vlSelf->sha1_top__DOT__u_round__DOT__k 
                    ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[665]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k 
            = ((0xffffdfffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k) 
               | (0x2000U & vlSelf->sha1_top__DOT__u_round__DOT__k));
    }
    if ((0x4000U & (vlSelf->sha1_top__DOT__u_round__DOT__k 
                    ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[666]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k 
            = ((0xffffbfffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k) 
               | (0x4000U & vlSelf->sha1_top__DOT__u_round__DOT__k));
    }
    if ((0x8000U & (vlSelf->sha1_top__DOT__u_round__DOT__k 
                    ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[667]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k 
            = ((0xffff7fffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k) 
               | (0x8000U & vlSelf->sha1_top__DOT__u_round__DOT__k));
    }
    if ((0x10000U & (vlSelf->sha1_top__DOT__u_round__DOT__k 
                     ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[668]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k 
            = ((0xfffeffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k) 
               | (0x10000U & vlSelf->sha1_top__DOT__u_round__DOT__k));
    }
    if ((0x20000U & (vlSelf->sha1_top__DOT__u_round__DOT__k 
                     ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[669]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k 
            = ((0xfffdffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k) 
               | (0x20000U & vlSelf->sha1_top__DOT__u_round__DOT__k));
    }
    if ((0x40000U & (vlSelf->sha1_top__DOT__u_round__DOT__k 
                     ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[670]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k 
            = ((0xfffbffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k) 
               | (0x40000U & vlSelf->sha1_top__DOT__u_round__DOT__k));
    }
    if ((0x80000U & (vlSelf->sha1_top__DOT__u_round__DOT__k 
                     ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[671]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k 
            = ((0xfff7ffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k) 
               | (0x80000U & vlSelf->sha1_top__DOT__u_round__DOT__k));
    }
    if ((0x100000U & (vlSelf->sha1_top__DOT__u_round__DOT__k 
                      ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[672]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k 
            = ((0xffefffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k) 
               | (0x100000U & vlSelf->sha1_top__DOT__u_round__DOT__k));
    }
    if ((0x200000U & (vlSelf->sha1_top__DOT__u_round__DOT__k 
                      ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[673]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k 
            = ((0xffdfffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k) 
               | (0x200000U & vlSelf->sha1_top__DOT__u_round__DOT__k));
    }
    if ((0x400000U & (vlSelf->sha1_top__DOT__u_round__DOT__k 
                      ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[674]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k 
            = ((0xffbfffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k) 
               | (0x400000U & vlSelf->sha1_top__DOT__u_round__DOT__k));
    }
    if ((0x800000U & (vlSelf->sha1_top__DOT__u_round__DOT__k 
                      ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[675]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k 
            = ((0xff7fffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k) 
               | (0x800000U & vlSelf->sha1_top__DOT__u_round__DOT__k));
    }
    if ((0x1000000U & (vlSelf->sha1_top__DOT__u_round__DOT__k 
                       ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[676]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k 
            = ((0xfeffffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k) 
               | (0x1000000U & vlSelf->sha1_top__DOT__u_round__DOT__k));
    }
    if ((0x2000000U & (vlSelf->sha1_top__DOT__u_round__DOT__k 
                       ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[677]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k 
            = ((0xfdffffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k) 
               | (0x2000000U & vlSelf->sha1_top__DOT__u_round__DOT__k));
    }
    if ((0x4000000U & (vlSelf->sha1_top__DOT__u_round__DOT__k 
                       ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[678]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k 
            = ((0xfbffffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k) 
               | (0x4000000U & vlSelf->sha1_top__DOT__u_round__DOT__k));
    }
    if ((0x8000000U & (vlSelf->sha1_top__DOT__u_round__DOT__k 
                       ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[679]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k 
            = ((0xf7ffffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k) 
               | (0x8000000U & vlSelf->sha1_top__DOT__u_round__DOT__k));
    }
    if ((0x10000000U & (vlSelf->sha1_top__DOT__u_round__DOT__k 
                        ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[680]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k 
            = ((0xefffffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k) 
               | (0x10000000U & vlSelf->sha1_top__DOT__u_round__DOT__k));
    }
    if ((0x20000000U & (vlSelf->sha1_top__DOT__u_round__DOT__k 
                        ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[681]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k 
            = ((0xdfffffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k) 
               | (0x20000000U & vlSelf->sha1_top__DOT__u_round__DOT__k));
    }
    if ((0x40000000U & (vlSelf->sha1_top__DOT__u_round__DOT__k 
                        ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k))) {
        ++(vlSymsp->__Vcoverage[682]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k 
            = ((0xbfffffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k) 
               | (0x40000000U & vlSelf->sha1_top__DOT__u_round__DOT__k));
    }
    if (((vlSelf->sha1_top__DOT__u_round__DOT__k ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[683]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k 
            = ((0x7fffffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k) 
               | (0x80000000U & vlSelf->sha1_top__DOT__u_round__DOT__k));
    }
    if ((1U & (vlSelf->sha1_top__DOT__u_round__DOT__f 
               ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[620]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f 
            = ((0xfffffffeU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f) 
               | (1U & vlSelf->sha1_top__DOT__u_round__DOT__f));
    }
    if ((2U & (vlSelf->sha1_top__DOT__u_round__DOT__f 
               ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[621]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f 
            = ((0xfffffffdU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f) 
               | (2U & vlSelf->sha1_top__DOT__u_round__DOT__f));
    }
    if ((4U & (vlSelf->sha1_top__DOT__u_round__DOT__f 
               ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[622]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f 
            = ((0xfffffffbU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f) 
               | (4U & vlSelf->sha1_top__DOT__u_round__DOT__f));
    }
    if ((8U & (vlSelf->sha1_top__DOT__u_round__DOT__f 
               ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[623]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f 
            = ((0xfffffff7U & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f) 
               | (8U & vlSelf->sha1_top__DOT__u_round__DOT__f));
    }
    if ((0x10U & (vlSelf->sha1_top__DOT__u_round__DOT__f 
                  ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[624]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f 
            = ((0xffffffefU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f) 
               | (0x10U & vlSelf->sha1_top__DOT__u_round__DOT__f));
    }
    if ((0x20U & (vlSelf->sha1_top__DOT__u_round__DOT__f 
                  ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[625]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f 
            = ((0xffffffdfU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f) 
               | (0x20U & vlSelf->sha1_top__DOT__u_round__DOT__f));
    }
    if ((0x40U & (vlSelf->sha1_top__DOT__u_round__DOT__f 
                  ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[626]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f 
            = ((0xffffffbfU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f) 
               | (0x40U & vlSelf->sha1_top__DOT__u_round__DOT__f));
    }
    if ((0x80U & (vlSelf->sha1_top__DOT__u_round__DOT__f 
                  ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[627]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f 
            = ((0xffffff7fU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f) 
               | (0x80U & vlSelf->sha1_top__DOT__u_round__DOT__f));
    }
    if ((0x100U & (vlSelf->sha1_top__DOT__u_round__DOT__f 
                   ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[628]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f 
            = ((0xfffffeffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f) 
               | (0x100U & vlSelf->sha1_top__DOT__u_round__DOT__f));
    }
    if ((0x200U & (vlSelf->sha1_top__DOT__u_round__DOT__f 
                   ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[629]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f 
            = ((0xfffffdffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f) 
               | (0x200U & vlSelf->sha1_top__DOT__u_round__DOT__f));
    }
    if ((0x400U & (vlSelf->sha1_top__DOT__u_round__DOT__f 
                   ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[630]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f 
            = ((0xfffffbffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f) 
               | (0x400U & vlSelf->sha1_top__DOT__u_round__DOT__f));
    }
    if ((0x800U & (vlSelf->sha1_top__DOT__u_round__DOT__f 
                   ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[631]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f 
            = ((0xfffff7ffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f) 
               | (0x800U & vlSelf->sha1_top__DOT__u_round__DOT__f));
    }
    if ((0x1000U & (vlSelf->sha1_top__DOT__u_round__DOT__f 
                    ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[632]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f 
            = ((0xffffefffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f) 
               | (0x1000U & vlSelf->sha1_top__DOT__u_round__DOT__f));
    }
    if ((0x2000U & (vlSelf->sha1_top__DOT__u_round__DOT__f 
                    ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[633]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f 
            = ((0xffffdfffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f) 
               | (0x2000U & vlSelf->sha1_top__DOT__u_round__DOT__f));
    }
    if ((0x4000U & (vlSelf->sha1_top__DOT__u_round__DOT__f 
                    ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[634]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f 
            = ((0xffffbfffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f) 
               | (0x4000U & vlSelf->sha1_top__DOT__u_round__DOT__f));
    }
    if ((0x8000U & (vlSelf->sha1_top__DOT__u_round__DOT__f 
                    ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[635]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f 
            = ((0xffff7fffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f) 
               | (0x8000U & vlSelf->sha1_top__DOT__u_round__DOT__f));
    }
    if ((0x10000U & (vlSelf->sha1_top__DOT__u_round__DOT__f 
                     ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[636]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f 
            = ((0xfffeffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f) 
               | (0x10000U & vlSelf->sha1_top__DOT__u_round__DOT__f));
    }
    if ((0x20000U & (vlSelf->sha1_top__DOT__u_round__DOT__f 
                     ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[637]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f 
            = ((0xfffdffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f) 
               | (0x20000U & vlSelf->sha1_top__DOT__u_round__DOT__f));
    }
    if ((0x40000U & (vlSelf->sha1_top__DOT__u_round__DOT__f 
                     ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[638]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f 
            = ((0xfffbffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f) 
               | (0x40000U & vlSelf->sha1_top__DOT__u_round__DOT__f));
    }
    if ((0x80000U & (vlSelf->sha1_top__DOT__u_round__DOT__f 
                     ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[639]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f 
            = ((0xfff7ffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f) 
               | (0x80000U & vlSelf->sha1_top__DOT__u_round__DOT__f));
    }
    if ((0x100000U & (vlSelf->sha1_top__DOT__u_round__DOT__f 
                      ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[640]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f 
            = ((0xffefffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f) 
               | (0x100000U & vlSelf->sha1_top__DOT__u_round__DOT__f));
    }
    if ((0x200000U & (vlSelf->sha1_top__DOT__u_round__DOT__f 
                      ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[641]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f 
            = ((0xffdfffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f) 
               | (0x200000U & vlSelf->sha1_top__DOT__u_round__DOT__f));
    }
    if ((0x400000U & (vlSelf->sha1_top__DOT__u_round__DOT__f 
                      ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[642]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f 
            = ((0xffbfffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f) 
               | (0x400000U & vlSelf->sha1_top__DOT__u_round__DOT__f));
    }
    if ((0x800000U & (vlSelf->sha1_top__DOT__u_round__DOT__f 
                      ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[643]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f 
            = ((0xff7fffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f) 
               | (0x800000U & vlSelf->sha1_top__DOT__u_round__DOT__f));
    }
    if ((0x1000000U & (vlSelf->sha1_top__DOT__u_round__DOT__f 
                       ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[644]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f 
            = ((0xfeffffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f) 
               | (0x1000000U & vlSelf->sha1_top__DOT__u_round__DOT__f));
    }
    if ((0x2000000U & (vlSelf->sha1_top__DOT__u_round__DOT__f 
                       ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[645]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f 
            = ((0xfdffffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f) 
               | (0x2000000U & vlSelf->sha1_top__DOT__u_round__DOT__f));
    }
    if ((0x4000000U & (vlSelf->sha1_top__DOT__u_round__DOT__f 
                       ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[646]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f 
            = ((0xfbffffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f) 
               | (0x4000000U & vlSelf->sha1_top__DOT__u_round__DOT__f));
    }
    if ((0x8000000U & (vlSelf->sha1_top__DOT__u_round__DOT__f 
                       ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[647]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f 
            = ((0xf7ffffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f) 
               | (0x8000000U & vlSelf->sha1_top__DOT__u_round__DOT__f));
    }
    if ((0x10000000U & (vlSelf->sha1_top__DOT__u_round__DOT__f 
                        ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[648]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f 
            = ((0xefffffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f) 
               | (0x10000000U & vlSelf->sha1_top__DOT__u_round__DOT__f));
    }
    if ((0x20000000U & (vlSelf->sha1_top__DOT__u_round__DOT__f 
                        ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[649]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f 
            = ((0xdfffffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f) 
               | (0x20000000U & vlSelf->sha1_top__DOT__u_round__DOT__f));
    }
    if ((0x40000000U & (vlSelf->sha1_top__DOT__u_round__DOT__f 
                        ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[650]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f 
            = ((0xbfffffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f) 
               | (0x40000000U & vlSelf->sha1_top__DOT__u_round__DOT__f));
    }
    if (((vlSelf->sha1_top__DOT__u_round__DOT__f ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[651]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f 
            = ((0x7fffffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f) 
               | (0x80000000U & vlSelf->sha1_top__DOT__u_round__DOT__f));
    }
    if ((1U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp 
               ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[556]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfffffffeU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp) 
               | (1U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp));
    }
    if ((2U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp 
               ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[557]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfffffffdU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp) 
               | (2U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp));
    }
    if ((4U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp 
               ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[558]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfffffffbU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp) 
               | (4U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp));
    }
    if ((8U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp 
               ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[559]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfffffff7U & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp) 
               | (8U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp));
    }
    if ((0x10U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp 
                  ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[560]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp 
            = ((0xffffffefU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp) 
               | (0x10U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp));
    }
    if ((0x20U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp 
                  ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[561]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp 
            = ((0xffffffdfU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp) 
               | (0x20U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp));
    }
    if ((0x40U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp 
                  ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[562]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp 
            = ((0xffffffbfU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp) 
               | (0x40U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp));
    }
    if ((0x80U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp 
                  ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[563]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp 
            = ((0xffffff7fU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp) 
               | (0x80U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp));
    }
    if ((0x100U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp 
                   ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[564]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfffffeffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp) 
               | (0x100U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp));
    }
    if ((0x200U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp 
                   ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[565]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfffffdffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp) 
               | (0x200U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp));
    }
    if ((0x400U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp 
                   ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[566]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfffffbffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp) 
               | (0x400U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp));
    }
    if ((0x800U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp 
                   ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[567]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfffff7ffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp) 
               | (0x800U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp));
    }
    if ((0x1000U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp 
                    ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[568]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp 
            = ((0xffffefffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp) 
               | (0x1000U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp));
    }
    if ((0x2000U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp 
                    ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[569]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp 
            = ((0xffffdfffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp) 
               | (0x2000U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp));
    }
    if ((0x4000U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp 
                    ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[570]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp 
            = ((0xffffbfffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp) 
               | (0x4000U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp));
    }
    if ((0x8000U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp 
                    ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[571]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp 
            = ((0xffff7fffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp) 
               | (0x8000U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp));
    }
    if ((0x10000U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp 
                     ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[572]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfffeffffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp) 
               | (0x10000U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp));
    }
    if ((0x20000U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp 
                     ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[573]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfffdffffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp) 
               | (0x20000U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp));
    }
    if ((0x40000U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp 
                     ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[574]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfffbffffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp) 
               | (0x40000U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp));
    }
    if ((0x80000U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp 
                     ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[575]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfff7ffffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp) 
               | (0x80000U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp));
    }
    if ((0x100000U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp 
                      ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[576]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp 
            = ((0xffefffffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp) 
               | (0x100000U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp));
    }
    if ((0x200000U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp 
                      ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[577]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp 
            = ((0xffdfffffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp) 
               | (0x200000U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp));
    }
    if ((0x400000U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp 
                      ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[578]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp 
            = ((0xffbfffffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp) 
               | (0x400000U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp));
    }
    if ((0x800000U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp 
                      ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[579]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp 
            = ((0xff7fffffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp) 
               | (0x800000U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp));
    }
    if ((0x1000000U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp 
                       ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[580]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfeffffffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp) 
               | (0x1000000U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp));
    }
    if ((0x2000000U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp 
                       ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[581]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfdffffffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp) 
               | (0x2000000U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp));
    }
    if ((0x4000000U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp 
                       ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[582]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfbffffffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp) 
               | (0x4000000U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp));
    }
    if ((0x8000000U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp 
                       ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[583]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp 
            = ((0xf7ffffffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp) 
               | (0x8000000U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp));
    }
    if ((0x10000000U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp 
                        ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[584]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp 
            = ((0xefffffffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp) 
               | (0x10000000U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp));
    }
    if ((0x20000000U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp 
                        ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[585]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp 
            = ((0xdfffffffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp) 
               | (0x20000000U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp));
    }
    if ((0x40000000U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp 
                        ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[586]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp 
            = ((0xbfffffffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp) 
               | (0x40000000U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp));
    }
    if (((vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp 
          ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[587]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp 
            = ((0x7fffffffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp) 
               | (0x80000000U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp));
    }
    vlSelf->sha1_top__DOT__u_w__DOT__w_gen = ((vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp 
                                               << 1U) 
                                              | (vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp 
                                                 >> 0x1fU));
    if ((1U & ((IData)(vlSelf->sha1_top__DOT__u_con__DOT__s_cur) 
               ^ (IData)(vlSelf->sha1_top__DOT__u_con__DOT____Vtogcov__s_cur)))) {
        ++(vlSymsp->__Vcoverage[529]);
        vlSelf->sha1_top__DOT__u_con__DOT____Vtogcov__s_cur 
            = ((2U & (IData)(vlSelf->sha1_top__DOT__u_con__DOT____Vtogcov__s_cur)) 
               | (1U & (IData)(vlSelf->sha1_top__DOT__u_con__DOT__s_cur)));
    }
    if ((2U & ((IData)(vlSelf->sha1_top__DOT__u_con__DOT__s_cur) 
               ^ (IData)(vlSelf->sha1_top__DOT__u_con__DOT____Vtogcov__s_cur)))) {
        ++(vlSymsp->__Vcoverage[530]);
        vlSelf->sha1_top__DOT__u_con__DOT____Vtogcov__s_cur 
            = ((1U & (IData)(vlSelf->sha1_top__DOT__u_con__DOT____Vtogcov__s_cur)) 
               | (2U & (IData)(vlSelf->sha1_top__DOT__u_con__DOT__s_cur)));
    }
    vlSelf->ready = ((2U == (IData)(vlSelf->sha1_top__DOT__u_con__DOT__s_cur)) 
                     & (0x4fU == (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)));
    if ((0xfU >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem))) {
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[0U] 
            = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xfU];
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[1U] 
            = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0U];
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[2U] 
            = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[1U];
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[3U] 
            = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[2U];
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[4U] 
            = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[3U];
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[5U] 
            = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[4U];
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[6U] 
            = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[5U];
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[7U] 
            = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[6U];
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[8U] 
            = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[7U];
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[9U] 
            = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[8U];
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[0xaU] 
            = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[9U];
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[0xbU] 
            = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xaU];
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[0xcU] 
            = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xbU];
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[0xdU] 
            = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xcU];
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[0xeU] 
            = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xdU];
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[0xfU] 
            = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xeU];
    } else {
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[0U] 
            = (((0x10U <= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                & (0x4fU >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                ? vlSelf->sha1_top__DOT__u_w__DOT__w_gen
                : Vsha1_top__ConstPool__CONST_93e1b771_0[0U]);
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[1U] 
            = (((0x10U <= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                & (0x4fU >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0U]
                : Vsha1_top__ConstPool__CONST_93e1b771_0[1U]);
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[2U] 
            = (((0x10U <= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                & (0x4fU >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[1U]
                : Vsha1_top__ConstPool__CONST_93e1b771_0[2U]);
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[3U] 
            = (((0x10U <= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                & (0x4fU >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[2U]
                : Vsha1_top__ConstPool__CONST_93e1b771_0[3U]);
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[4U] 
            = (((0x10U <= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                & (0x4fU >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[3U]
                : Vsha1_top__ConstPool__CONST_93e1b771_0[4U]);
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[5U] 
            = (((0x10U <= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                & (0x4fU >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[4U]
                : Vsha1_top__ConstPool__CONST_93e1b771_0[5U]);
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[6U] 
            = (((0x10U <= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                & (0x4fU >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[5U]
                : Vsha1_top__ConstPool__CONST_93e1b771_0[6U]);
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[7U] 
            = (((0x10U <= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                & (0x4fU >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[6U]
                : Vsha1_top__ConstPool__CONST_93e1b771_0[7U]);
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[8U] 
            = (((0x10U <= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                & (0x4fU >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[7U]
                : Vsha1_top__ConstPool__CONST_93e1b771_0[8U]);
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[9U] 
            = (((0x10U <= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                & (0x4fU >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[8U]
                : Vsha1_top__ConstPool__CONST_93e1b771_0[9U]);
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[0xaU] 
            = (((0x10U <= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                & (0x4fU >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[9U]
                : Vsha1_top__ConstPool__CONST_93e1b771_0[0xaU]);
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[0xbU] 
            = (((0x10U <= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                & (0x4fU >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xaU]
                : Vsha1_top__ConstPool__CONST_93e1b771_0[0xbU]);
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[0xcU] 
            = (((0x10U <= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                & (0x4fU >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xbU]
                : Vsha1_top__ConstPool__CONST_93e1b771_0[0xcU]);
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[0xdU] 
            = (((0x10U <= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                & (0x4fU >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xcU]
                : Vsha1_top__ConstPool__CONST_93e1b771_0[0xdU]);
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[0xeU] 
            = (((0x10U <= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                & (0x4fU >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xdU]
                : Vsha1_top__ConstPool__CONST_93e1b771_0[0xeU]);
        vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift[0xfU] 
            = (((0x10U <= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                & (0x4fU >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xeU]
                : Vsha1_top__ConstPool__CONST_93e1b771_0[0xfU]);
    }
    if ((1U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen 
               ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[588]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen 
            = ((0xfffffffeU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen) 
               | (1U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen));
    }
    if ((2U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen 
               ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[589]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen 
            = ((0xfffffffdU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen) 
               | (2U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen));
    }
    if ((4U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen 
               ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[590]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen 
            = ((0xfffffffbU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen) 
               | (4U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen));
    }
    if ((8U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen 
               ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[591]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen 
            = ((0xfffffff7U & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen) 
               | (8U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen));
    }
    if ((0x10U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen 
                  ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[592]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen 
            = ((0xffffffefU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen) 
               | (0x10U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen));
    }
    if ((0x20U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen 
                  ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[593]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen 
            = ((0xffffffdfU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen) 
               | (0x20U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen));
    }
    if ((0x40U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen 
                  ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[594]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen 
            = ((0xffffffbfU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen) 
               | (0x40U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen));
    }
    if ((0x80U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen 
                  ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[595]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen 
            = ((0xffffff7fU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen) 
               | (0x80U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen));
    }
    if ((0x100U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen 
                   ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[596]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen 
            = ((0xfffffeffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen) 
               | (0x100U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen));
    }
    if ((0x200U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen 
                   ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[597]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen 
            = ((0xfffffdffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen) 
               | (0x200U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen));
    }
    if ((0x400U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen 
                   ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[598]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen 
            = ((0xfffffbffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen) 
               | (0x400U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen));
    }
    if ((0x800U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen 
                   ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[599]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen 
            = ((0xfffff7ffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen) 
               | (0x800U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen));
    }
    if ((0x1000U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen 
                    ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[600]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen 
            = ((0xffffefffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen) 
               | (0x1000U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen));
    }
    if ((0x2000U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen 
                    ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[601]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen 
            = ((0xffffdfffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen) 
               | (0x2000U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen));
    }
    if ((0x4000U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen 
                    ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[602]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen 
            = ((0xffffbfffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen) 
               | (0x4000U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen));
    }
    if ((0x8000U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen 
                    ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[603]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen 
            = ((0xffff7fffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen) 
               | (0x8000U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen));
    }
    if ((0x10000U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen 
                     ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[604]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen 
            = ((0xfffeffffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen) 
               | (0x10000U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen));
    }
    if ((0x20000U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen 
                     ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[605]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen 
            = ((0xfffdffffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen) 
               | (0x20000U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen));
    }
    if ((0x40000U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen 
                     ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[606]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen 
            = ((0xfffbffffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen) 
               | (0x40000U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen));
    }
    if ((0x80000U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen 
                     ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[607]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen 
            = ((0xfff7ffffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen) 
               | (0x80000U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen));
    }
    if ((0x100000U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen 
                      ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[608]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen 
            = ((0xffefffffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen) 
               | (0x100000U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen));
    }
    if ((0x200000U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen 
                      ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[609]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen 
            = ((0xffdfffffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen) 
               | (0x200000U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen));
    }
    if ((0x400000U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen 
                      ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[610]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen 
            = ((0xffbfffffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen) 
               | (0x400000U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen));
    }
    if ((0x800000U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen 
                      ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[611]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen 
            = ((0xff7fffffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen) 
               | (0x800000U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen));
    }
    if ((0x1000000U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen 
                       ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[612]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen 
            = ((0xfeffffffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen) 
               | (0x1000000U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen));
    }
    if ((0x2000000U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen 
                       ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[613]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen 
            = ((0xfdffffffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen) 
               | (0x2000000U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen));
    }
    if ((0x4000000U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen 
                       ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[614]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen 
            = ((0xfbffffffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen) 
               | (0x4000000U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen));
    }
    if ((0x8000000U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen 
                       ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[615]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen 
            = ((0xf7ffffffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen) 
               | (0x8000000U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen));
    }
    if ((0x10000000U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen 
                        ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[616]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen 
            = ((0xefffffffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen) 
               | (0x10000000U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen));
    }
    if ((0x20000000U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen 
                        ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[617]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen 
            = ((0xdfffffffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen) 
               | (0x20000000U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen));
    }
    if ((0x40000000U & (vlSelf->sha1_top__DOT__u_w__DOT__w_gen 
                        ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[618]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen 
            = ((0xbfffffffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen) 
               | (0x40000000U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen));
    }
    if (((vlSelf->sha1_top__DOT__u_w__DOT__w_gen ^ vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[619]);
        vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen 
            = ((0x7fffffffU & vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen) 
               | (0x80000000U & vlSelf->sha1_top__DOT__u_w__DOT__w_gen));
    }
    vlSelf->sha1_top__DOT__w_temp = ((0xfU >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem))
                                      ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xfU]
                                      : vlSelf->sha1_top__DOT__u_w__DOT__w_gen);
    if (((IData)(vlSelf->ready) ^ (IData)(vlSelf->sha1_top__DOT____Vtogcov__ready))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->sha1_top__DOT____Vtogcov__ready = vlSelf->ready;
    }
    if ((1U & (vlSelf->sha1_top__DOT__w_temp ^ vlSelf->sha1_top__DOT____Vtogcov__w_temp))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->sha1_top__DOT____Vtogcov__w_temp = 
            ((0xfffffffeU & vlSelf->sha1_top__DOT____Vtogcov__w_temp) 
             | (1U & vlSelf->sha1_top__DOT__w_temp));
    }
    if ((2U & (vlSelf->sha1_top__DOT__w_temp ^ vlSelf->sha1_top__DOT____Vtogcov__w_temp))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->sha1_top__DOT____Vtogcov__w_temp = 
            ((0xfffffffdU & vlSelf->sha1_top__DOT____Vtogcov__w_temp) 
             | (2U & vlSelf->sha1_top__DOT__w_temp));
    }
    if ((4U & (vlSelf->sha1_top__DOT__w_temp ^ vlSelf->sha1_top__DOT____Vtogcov__w_temp))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->sha1_top__DOT____Vtogcov__w_temp = 
            ((0xfffffffbU & vlSelf->sha1_top__DOT____Vtogcov__w_temp) 
             | (4U & vlSelf->sha1_top__DOT__w_temp));
    }
    if ((8U & (vlSelf->sha1_top__DOT__w_temp ^ vlSelf->sha1_top__DOT____Vtogcov__w_temp))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->sha1_top__DOT____Vtogcov__w_temp = 
            ((0xfffffff7U & vlSelf->sha1_top__DOT____Vtogcov__w_temp) 
             | (8U & vlSelf->sha1_top__DOT__w_temp));
    }
    if ((0x10U & (vlSelf->sha1_top__DOT__w_temp ^ vlSelf->sha1_top__DOT____Vtogcov__w_temp))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->sha1_top__DOT____Vtogcov__w_temp = 
            ((0xffffffefU & vlSelf->sha1_top__DOT____Vtogcov__w_temp) 
             | (0x10U & vlSelf->sha1_top__DOT__w_temp));
    }
    if ((0x20U & (vlSelf->sha1_top__DOT__w_temp ^ vlSelf->sha1_top__DOT____Vtogcov__w_temp))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->sha1_top__DOT____Vtogcov__w_temp = 
            ((0xffffffdfU & vlSelf->sha1_top__DOT____Vtogcov__w_temp) 
             | (0x20U & vlSelf->sha1_top__DOT__w_temp));
    }
    if ((0x40U & (vlSelf->sha1_top__DOT__w_temp ^ vlSelf->sha1_top__DOT____Vtogcov__w_temp))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->sha1_top__DOT____Vtogcov__w_temp = 
            ((0xffffffbfU & vlSelf->sha1_top__DOT____Vtogcov__w_temp) 
             | (0x40U & vlSelf->sha1_top__DOT__w_temp));
    }
    if ((0x80U & (vlSelf->sha1_top__DOT__w_temp ^ vlSelf->sha1_top__DOT____Vtogcov__w_temp))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->sha1_top__DOT____Vtogcov__w_temp = 
            ((0xffffff7fU & vlSelf->sha1_top__DOT____Vtogcov__w_temp) 
             | (0x80U & vlSelf->sha1_top__DOT__w_temp));
    }
    if ((0x100U & (vlSelf->sha1_top__DOT__w_temp ^ vlSelf->sha1_top__DOT____Vtogcov__w_temp))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->sha1_top__DOT____Vtogcov__w_temp = 
            ((0xfffffeffU & vlSelf->sha1_top__DOT____Vtogcov__w_temp) 
             | (0x100U & vlSelf->sha1_top__DOT__w_temp));
    }
    if ((0x200U & (vlSelf->sha1_top__DOT__w_temp ^ vlSelf->sha1_top__DOT____Vtogcov__w_temp))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->sha1_top__DOT____Vtogcov__w_temp = 
            ((0xfffffdffU & vlSelf->sha1_top__DOT____Vtogcov__w_temp) 
             | (0x200U & vlSelf->sha1_top__DOT__w_temp));
    }
    if ((0x400U & (vlSelf->sha1_top__DOT__w_temp ^ vlSelf->sha1_top__DOT____Vtogcov__w_temp))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->sha1_top__DOT____Vtogcov__w_temp = 
            ((0xfffffbffU & vlSelf->sha1_top__DOT____Vtogcov__w_temp) 
             | (0x400U & vlSelf->sha1_top__DOT__w_temp));
    }
    if ((0x800U & (vlSelf->sha1_top__DOT__w_temp ^ vlSelf->sha1_top__DOT____Vtogcov__w_temp))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->sha1_top__DOT____Vtogcov__w_temp = 
            ((0xfffff7ffU & vlSelf->sha1_top__DOT____Vtogcov__w_temp) 
             | (0x800U & vlSelf->sha1_top__DOT__w_temp));
    }
    if ((0x1000U & (vlSelf->sha1_top__DOT__w_temp ^ vlSelf->sha1_top__DOT____Vtogcov__w_temp))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->sha1_top__DOT____Vtogcov__w_temp = 
            ((0xffffefffU & vlSelf->sha1_top__DOT____Vtogcov__w_temp) 
             | (0x1000U & vlSelf->sha1_top__DOT__w_temp));
    }
    if ((0x2000U & (vlSelf->sha1_top__DOT__w_temp ^ vlSelf->sha1_top__DOT____Vtogcov__w_temp))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->sha1_top__DOT____Vtogcov__w_temp = 
            ((0xffffdfffU & vlSelf->sha1_top__DOT____Vtogcov__w_temp) 
             | (0x2000U & vlSelf->sha1_top__DOT__w_temp));
    }
    if ((0x4000U & (vlSelf->sha1_top__DOT__w_temp ^ vlSelf->sha1_top__DOT____Vtogcov__w_temp))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->sha1_top__DOT____Vtogcov__w_temp = 
            ((0xffffbfffU & vlSelf->sha1_top__DOT____Vtogcov__w_temp) 
             | (0x4000U & vlSelf->sha1_top__DOT__w_temp));
    }
    if ((0x8000U & (vlSelf->sha1_top__DOT__w_temp ^ vlSelf->sha1_top__DOT____Vtogcov__w_temp))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->sha1_top__DOT____Vtogcov__w_temp = 
            ((0xffff7fffU & vlSelf->sha1_top__DOT____Vtogcov__w_temp) 
             | (0x8000U & vlSelf->sha1_top__DOT__w_temp));
    }
    if ((0x10000U & (vlSelf->sha1_top__DOT__w_temp 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__w_temp))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->sha1_top__DOT____Vtogcov__w_temp = 
            ((0xfffeffffU & vlSelf->sha1_top__DOT____Vtogcov__w_temp) 
             | (0x10000U & vlSelf->sha1_top__DOT__w_temp));
    }
    if ((0x20000U & (vlSelf->sha1_top__DOT__w_temp 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__w_temp))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->sha1_top__DOT____Vtogcov__w_temp = 
            ((0xfffdffffU & vlSelf->sha1_top__DOT____Vtogcov__w_temp) 
             | (0x20000U & vlSelf->sha1_top__DOT__w_temp));
    }
    if ((0x40000U & (vlSelf->sha1_top__DOT__w_temp 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__w_temp))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->sha1_top__DOT____Vtogcov__w_temp = 
            ((0xfffbffffU & vlSelf->sha1_top__DOT____Vtogcov__w_temp) 
             | (0x40000U & vlSelf->sha1_top__DOT__w_temp));
    }
    if ((0x80000U & (vlSelf->sha1_top__DOT__w_temp 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__w_temp))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->sha1_top__DOT____Vtogcov__w_temp = 
            ((0xfff7ffffU & vlSelf->sha1_top__DOT____Vtogcov__w_temp) 
             | (0x80000U & vlSelf->sha1_top__DOT__w_temp));
    }
    if ((0x100000U & (vlSelf->sha1_top__DOT__w_temp 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__w_temp))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->sha1_top__DOT____Vtogcov__w_temp = 
            ((0xffefffffU & vlSelf->sha1_top__DOT____Vtogcov__w_temp) 
             | (0x100000U & vlSelf->sha1_top__DOT__w_temp));
    }
    if ((0x200000U & (vlSelf->sha1_top__DOT__w_temp 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__w_temp))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->sha1_top__DOT____Vtogcov__w_temp = 
            ((0xffdfffffU & vlSelf->sha1_top__DOT____Vtogcov__w_temp) 
             | (0x200000U & vlSelf->sha1_top__DOT__w_temp));
    }
    if ((0x400000U & (vlSelf->sha1_top__DOT__w_temp 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__w_temp))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->sha1_top__DOT____Vtogcov__w_temp = 
            ((0xffbfffffU & vlSelf->sha1_top__DOT____Vtogcov__w_temp) 
             | (0x400000U & vlSelf->sha1_top__DOT__w_temp));
    }
    if ((0x800000U & (vlSelf->sha1_top__DOT__w_temp 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__w_temp))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->sha1_top__DOT____Vtogcov__w_temp = 
            ((0xff7fffffU & vlSelf->sha1_top__DOT____Vtogcov__w_temp) 
             | (0x800000U & vlSelf->sha1_top__DOT__w_temp));
    }
    if ((0x1000000U & (vlSelf->sha1_top__DOT__w_temp 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__w_temp))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->sha1_top__DOT____Vtogcov__w_temp = 
            ((0xfeffffffU & vlSelf->sha1_top__DOT____Vtogcov__w_temp) 
             | (0x1000000U & vlSelf->sha1_top__DOT__w_temp));
    }
    if ((0x2000000U & (vlSelf->sha1_top__DOT__w_temp 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__w_temp))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->sha1_top__DOT____Vtogcov__w_temp = 
            ((0xfdffffffU & vlSelf->sha1_top__DOT____Vtogcov__w_temp) 
             | (0x2000000U & vlSelf->sha1_top__DOT__w_temp));
    }
    if ((0x4000000U & (vlSelf->sha1_top__DOT__w_temp 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__w_temp))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->sha1_top__DOT____Vtogcov__w_temp = 
            ((0xfbffffffU & vlSelf->sha1_top__DOT____Vtogcov__w_temp) 
             | (0x4000000U & vlSelf->sha1_top__DOT__w_temp));
    }
    if ((0x8000000U & (vlSelf->sha1_top__DOT__w_temp 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__w_temp))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->sha1_top__DOT____Vtogcov__w_temp = 
            ((0xf7ffffffU & vlSelf->sha1_top__DOT____Vtogcov__w_temp) 
             | (0x8000000U & vlSelf->sha1_top__DOT__w_temp));
    }
    if ((0x10000000U & (vlSelf->sha1_top__DOT__w_temp 
                        ^ vlSelf->sha1_top__DOT____Vtogcov__w_temp))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->sha1_top__DOT____Vtogcov__w_temp = 
            ((0xefffffffU & vlSelf->sha1_top__DOT____Vtogcov__w_temp) 
             | (0x10000000U & vlSelf->sha1_top__DOT__w_temp));
    }
    if ((0x20000000U & (vlSelf->sha1_top__DOT__w_temp 
                        ^ vlSelf->sha1_top__DOT____Vtogcov__w_temp))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->sha1_top__DOT____Vtogcov__w_temp = 
            ((0xdfffffffU & vlSelf->sha1_top__DOT____Vtogcov__w_temp) 
             | (0x20000000U & vlSelf->sha1_top__DOT__w_temp));
    }
    if ((0x40000000U & (vlSelf->sha1_top__DOT__w_temp 
                        ^ vlSelf->sha1_top__DOT____Vtogcov__w_temp))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->sha1_top__DOT____Vtogcov__w_temp = 
            ((0xbfffffffU & vlSelf->sha1_top__DOT____Vtogcov__w_temp) 
             | (0x40000000U & vlSelf->sha1_top__DOT__w_temp));
    }
    if (((vlSelf->sha1_top__DOT__w_temp ^ vlSelf->sha1_top__DOT____Vtogcov__w_temp) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->sha1_top__DOT____Vtogcov__w_temp = 
            ((0x7fffffffU & vlSelf->sha1_top__DOT____Vtogcov__w_temp) 
             | (0x80000000U & vlSelf->sha1_top__DOT__w_temp));
    }
    vlSelf->sha1_top__DOT__u_round__DOT__add_result 
        = (vlSelf->sha1_top__DOT__u_round__DOT__a_shift 
           + ((vlSelf->sha1_top__DOT__u_round__DOT__f 
               + vlSelf->sha1_top__DOT__u_round__DOT__k) 
              + (vlSelf->sha1_top__DOT__r_din[0U] + vlSelf->sha1_top__DOT__w_temp)));
    if ((1U & (vlSelf->sha1_top__DOT__u_round__DOT__add_result 
               ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[748]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result 
            = ((0xfffffffeU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result) 
               | (1U & vlSelf->sha1_top__DOT__u_round__DOT__add_result));
    }
    if ((2U & (vlSelf->sha1_top__DOT__u_round__DOT__add_result 
               ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[749]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result 
            = ((0xfffffffdU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result) 
               | (2U & vlSelf->sha1_top__DOT__u_round__DOT__add_result));
    }
    if ((4U & (vlSelf->sha1_top__DOT__u_round__DOT__add_result 
               ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[750]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result 
            = ((0xfffffffbU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result) 
               | (4U & vlSelf->sha1_top__DOT__u_round__DOT__add_result));
    }
    if ((8U & (vlSelf->sha1_top__DOT__u_round__DOT__add_result 
               ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[751]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result 
            = ((0xfffffff7U & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result) 
               | (8U & vlSelf->sha1_top__DOT__u_round__DOT__add_result));
    }
    if ((0x10U & (vlSelf->sha1_top__DOT__u_round__DOT__add_result 
                  ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[752]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result 
            = ((0xffffffefU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result) 
               | (0x10U & vlSelf->sha1_top__DOT__u_round__DOT__add_result));
    }
    if ((0x20U & (vlSelf->sha1_top__DOT__u_round__DOT__add_result 
                  ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[753]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result 
            = ((0xffffffdfU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result) 
               | (0x20U & vlSelf->sha1_top__DOT__u_round__DOT__add_result));
    }
    if ((0x40U & (vlSelf->sha1_top__DOT__u_round__DOT__add_result 
                  ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[754]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result 
            = ((0xffffffbfU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result) 
               | (0x40U & vlSelf->sha1_top__DOT__u_round__DOT__add_result));
    }
    if ((0x80U & (vlSelf->sha1_top__DOT__u_round__DOT__add_result 
                  ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[755]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result 
            = ((0xffffff7fU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result) 
               | (0x80U & vlSelf->sha1_top__DOT__u_round__DOT__add_result));
    }
    if ((0x100U & (vlSelf->sha1_top__DOT__u_round__DOT__add_result 
                   ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[756]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result 
            = ((0xfffffeffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result) 
               | (0x100U & vlSelf->sha1_top__DOT__u_round__DOT__add_result));
    }
    if ((0x200U & (vlSelf->sha1_top__DOT__u_round__DOT__add_result 
                   ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[757]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result 
            = ((0xfffffdffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result) 
               | (0x200U & vlSelf->sha1_top__DOT__u_round__DOT__add_result));
    }
    if ((0x400U & (vlSelf->sha1_top__DOT__u_round__DOT__add_result 
                   ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[758]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result 
            = ((0xfffffbffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result) 
               | (0x400U & vlSelf->sha1_top__DOT__u_round__DOT__add_result));
    }
    if ((0x800U & (vlSelf->sha1_top__DOT__u_round__DOT__add_result 
                   ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[759]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result 
            = ((0xfffff7ffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result) 
               | (0x800U & vlSelf->sha1_top__DOT__u_round__DOT__add_result));
    }
    if ((0x1000U & (vlSelf->sha1_top__DOT__u_round__DOT__add_result 
                    ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[760]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result 
            = ((0xffffefffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result) 
               | (0x1000U & vlSelf->sha1_top__DOT__u_round__DOT__add_result));
    }
    if ((0x2000U & (vlSelf->sha1_top__DOT__u_round__DOT__add_result 
                    ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[761]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result 
            = ((0xffffdfffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result) 
               | (0x2000U & vlSelf->sha1_top__DOT__u_round__DOT__add_result));
    }
    if ((0x4000U & (vlSelf->sha1_top__DOT__u_round__DOT__add_result 
                    ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[762]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result 
            = ((0xffffbfffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result) 
               | (0x4000U & vlSelf->sha1_top__DOT__u_round__DOT__add_result));
    }
    if ((0x8000U & (vlSelf->sha1_top__DOT__u_round__DOT__add_result 
                    ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[763]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result 
            = ((0xffff7fffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result) 
               | (0x8000U & vlSelf->sha1_top__DOT__u_round__DOT__add_result));
    }
    if ((0x10000U & (vlSelf->sha1_top__DOT__u_round__DOT__add_result 
                     ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[764]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result 
            = ((0xfffeffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result) 
               | (0x10000U & vlSelf->sha1_top__DOT__u_round__DOT__add_result));
    }
    if ((0x20000U & (vlSelf->sha1_top__DOT__u_round__DOT__add_result 
                     ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[765]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result 
            = ((0xfffdffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result) 
               | (0x20000U & vlSelf->sha1_top__DOT__u_round__DOT__add_result));
    }
    if ((0x40000U & (vlSelf->sha1_top__DOT__u_round__DOT__add_result 
                     ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[766]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result 
            = ((0xfffbffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result) 
               | (0x40000U & vlSelf->sha1_top__DOT__u_round__DOT__add_result));
    }
    if ((0x80000U & (vlSelf->sha1_top__DOT__u_round__DOT__add_result 
                     ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[767]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result 
            = ((0xfff7ffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result) 
               | (0x80000U & vlSelf->sha1_top__DOT__u_round__DOT__add_result));
    }
    if ((0x100000U & (vlSelf->sha1_top__DOT__u_round__DOT__add_result 
                      ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[768]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result 
            = ((0xffefffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result) 
               | (0x100000U & vlSelf->sha1_top__DOT__u_round__DOT__add_result));
    }
    if ((0x200000U & (vlSelf->sha1_top__DOT__u_round__DOT__add_result 
                      ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[769]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result 
            = ((0xffdfffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result) 
               | (0x200000U & vlSelf->sha1_top__DOT__u_round__DOT__add_result));
    }
    if ((0x400000U & (vlSelf->sha1_top__DOT__u_round__DOT__add_result 
                      ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[770]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result 
            = ((0xffbfffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result) 
               | (0x400000U & vlSelf->sha1_top__DOT__u_round__DOT__add_result));
    }
    if ((0x800000U & (vlSelf->sha1_top__DOT__u_round__DOT__add_result 
                      ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[771]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result 
            = ((0xff7fffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result) 
               | (0x800000U & vlSelf->sha1_top__DOT__u_round__DOT__add_result));
    }
    if ((0x1000000U & (vlSelf->sha1_top__DOT__u_round__DOT__add_result 
                       ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[772]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result 
            = ((0xfeffffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result) 
               | (0x1000000U & vlSelf->sha1_top__DOT__u_round__DOT__add_result));
    }
    if ((0x2000000U & (vlSelf->sha1_top__DOT__u_round__DOT__add_result 
                       ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[773]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result 
            = ((0xfdffffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result) 
               | (0x2000000U & vlSelf->sha1_top__DOT__u_round__DOT__add_result));
    }
    if ((0x4000000U & (vlSelf->sha1_top__DOT__u_round__DOT__add_result 
                       ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[774]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result 
            = ((0xfbffffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result) 
               | (0x4000000U & vlSelf->sha1_top__DOT__u_round__DOT__add_result));
    }
    if ((0x8000000U & (vlSelf->sha1_top__DOT__u_round__DOT__add_result 
                       ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[775]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result 
            = ((0xf7ffffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result) 
               | (0x8000000U & vlSelf->sha1_top__DOT__u_round__DOT__add_result));
    }
    if ((0x10000000U & (vlSelf->sha1_top__DOT__u_round__DOT__add_result 
                        ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[776]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result 
            = ((0xefffffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result) 
               | (0x10000000U & vlSelf->sha1_top__DOT__u_round__DOT__add_result));
    }
    if ((0x20000000U & (vlSelf->sha1_top__DOT__u_round__DOT__add_result 
                        ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[777]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result 
            = ((0xdfffffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result) 
               | (0x20000000U & vlSelf->sha1_top__DOT__u_round__DOT__add_result));
    }
    if ((0x40000000U & (vlSelf->sha1_top__DOT__u_round__DOT__add_result 
                        ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result))) {
        ++(vlSymsp->__Vcoverage[778]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result 
            = ((0xbfffffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result) 
               | (0x40000000U & vlSelf->sha1_top__DOT__u_round__DOT__add_result));
    }
    if (((vlSelf->sha1_top__DOT__u_round__DOT__add_result 
          ^ vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[779]);
        vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result 
            = ((0x7fffffffU & vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result) 
               | (0x80000000U & vlSelf->sha1_top__DOT__u_round__DOT__add_result));
    }
    vlSelf->sha1_top__DOT__r_din_temp[0U] = vlSelf->sha1_top__DOT__r_din[1U];
    vlSelf->sha1_top__DOT__r_din_temp[1U] = vlSelf->sha1_top__DOT__r_din[2U];
    vlSelf->sha1_top__DOT__r_din_temp[2U] = vlSelf->sha1_top__DOT__u_round__DOT__b_shift;
    vlSelf->sha1_top__DOT__r_din_temp[3U] = (IData)(
                                                    (((QData)((IData)(vlSelf->sha1_top__DOT__u_round__DOT__add_result)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->sha1_top__DOT__r_din[4U]))));
    vlSelf->sha1_top__DOT__r_din_temp[4U] = (IData)(
                                                    ((((QData)((IData)(vlSelf->sha1_top__DOT__u_round__DOT__add_result)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->sha1_top__DOT__r_din[4U]))) 
                                                     >> 0x20U));
    if ((1U & (vlSelf->sha1_top__DOT__r_din_temp[0U] 
               ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U] 
            = ((0xfffffffeU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]) 
               | (1U & vlSelf->sha1_top__DOT__r_din_temp[0U]));
    }
    if ((2U & (vlSelf->sha1_top__DOT__r_din_temp[0U] 
               ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U] 
            = ((0xfffffffdU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]) 
               | (2U & vlSelf->sha1_top__DOT__r_din_temp[0U]));
    }
    if ((4U & (vlSelf->sha1_top__DOT__r_din_temp[0U] 
               ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U] 
            = ((0xfffffffbU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]) 
               | (4U & vlSelf->sha1_top__DOT__r_din_temp[0U]));
    }
    if ((8U & (vlSelf->sha1_top__DOT__r_din_temp[0U] 
               ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U] 
            = ((0xfffffff7U & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]) 
               | (8U & vlSelf->sha1_top__DOT__r_din_temp[0U]));
    }
    if ((0x10U & (vlSelf->sha1_top__DOT__r_din_temp[0U] 
                  ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U] 
            = ((0xffffffefU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]) 
               | (0x10U & vlSelf->sha1_top__DOT__r_din_temp[0U]));
    }
    if ((0x20U & (vlSelf->sha1_top__DOT__r_din_temp[0U] 
                  ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U] 
            = ((0xffffffdfU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]) 
               | (0x20U & vlSelf->sha1_top__DOT__r_din_temp[0U]));
    }
    if ((0x40U & (vlSelf->sha1_top__DOT__r_din_temp[0U] 
                  ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U] 
            = ((0xffffffbfU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]) 
               | (0x40U & vlSelf->sha1_top__DOT__r_din_temp[0U]));
    }
    if ((0x80U & (vlSelf->sha1_top__DOT__r_din_temp[0U] 
                  ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U] 
            = ((0xffffff7fU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]) 
               | (0x80U & vlSelf->sha1_top__DOT__r_din_temp[0U]));
    }
    if ((0x100U & (vlSelf->sha1_top__DOT__r_din_temp[0U] 
                   ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U] 
            = ((0xfffffeffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]) 
               | (0x100U & vlSelf->sha1_top__DOT__r_din_temp[0U]));
    }
    if ((0x200U & (vlSelf->sha1_top__DOT__r_din_temp[0U] 
                   ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U] 
            = ((0xfffffdffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]) 
               | (0x200U & vlSelf->sha1_top__DOT__r_din_temp[0U]));
    }
    if ((0x400U & (vlSelf->sha1_top__DOT__r_din_temp[0U] 
                   ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U] 
            = ((0xfffffbffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]) 
               | (0x400U & vlSelf->sha1_top__DOT__r_din_temp[0U]));
    }
    if ((0x800U & (vlSelf->sha1_top__DOT__r_din_temp[0U] 
                   ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U] 
            = ((0xfffff7ffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]) 
               | (0x800U & vlSelf->sha1_top__DOT__r_din_temp[0U]));
    }
    if ((0x1000U & (vlSelf->sha1_top__DOT__r_din_temp[0U] 
                    ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U] 
            = ((0xffffefffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]) 
               | (0x1000U & vlSelf->sha1_top__DOT__r_din_temp[0U]));
    }
    if ((0x2000U & (vlSelf->sha1_top__DOT__r_din_temp[0U] 
                    ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U] 
            = ((0xffffdfffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]) 
               | (0x2000U & vlSelf->sha1_top__DOT__r_din_temp[0U]));
    }
    if ((0x4000U & (vlSelf->sha1_top__DOT__r_din_temp[0U] 
                    ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U] 
            = ((0xffffbfffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]) 
               | (0x4000U & vlSelf->sha1_top__DOT__r_din_temp[0U]));
    }
    if ((0x8000U & (vlSelf->sha1_top__DOT__r_din_temp[0U] 
                    ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U] 
            = ((0xffff7fffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]) 
               | (0x8000U & vlSelf->sha1_top__DOT__r_din_temp[0U]));
    }
    if ((0x10000U & (vlSelf->sha1_top__DOT__r_din_temp[0U] 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U] 
            = ((0xfffeffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]) 
               | (0x10000U & vlSelf->sha1_top__DOT__r_din_temp[0U]));
    }
    if ((0x20000U & (vlSelf->sha1_top__DOT__r_din_temp[0U] 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U] 
            = ((0xfffdffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]) 
               | (0x20000U & vlSelf->sha1_top__DOT__r_din_temp[0U]));
    }
    if ((0x40000U & (vlSelf->sha1_top__DOT__r_din_temp[0U] 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U] 
            = ((0xfffbffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]) 
               | (0x40000U & vlSelf->sha1_top__DOT__r_din_temp[0U]));
    }
    if ((0x80000U & (vlSelf->sha1_top__DOT__r_din_temp[0U] 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U] 
            = ((0xfff7ffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]) 
               | (0x80000U & vlSelf->sha1_top__DOT__r_din_temp[0U]));
    }
    if ((0x100000U & (vlSelf->sha1_top__DOT__r_din_temp[0U] 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U] 
            = ((0xffefffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]) 
               | (0x100000U & vlSelf->sha1_top__DOT__r_din_temp[0U]));
    }
    if ((0x200000U & (vlSelf->sha1_top__DOT__r_din_temp[0U] 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U] 
            = ((0xffdfffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]) 
               | (0x200000U & vlSelf->sha1_top__DOT__r_din_temp[0U]));
    }
    if ((0x400000U & (vlSelf->sha1_top__DOT__r_din_temp[0U] 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U] 
            = ((0xffbfffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]) 
               | (0x400000U & vlSelf->sha1_top__DOT__r_din_temp[0U]));
    }
    if ((0x800000U & (vlSelf->sha1_top__DOT__r_din_temp[0U] 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U] 
            = ((0xff7fffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]) 
               | (0x800000U & vlSelf->sha1_top__DOT__r_din_temp[0U]));
    }
    if ((0x1000000U & (vlSelf->sha1_top__DOT__r_din_temp[0U] 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U] 
            = ((0xfeffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]) 
               | (0x1000000U & vlSelf->sha1_top__DOT__r_din_temp[0U]));
    }
    if ((0x2000000U & (vlSelf->sha1_top__DOT__r_din_temp[0U] 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U] 
            = ((0xfdffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]) 
               | (0x2000000U & vlSelf->sha1_top__DOT__r_din_temp[0U]));
    }
    if ((0x4000000U & (vlSelf->sha1_top__DOT__r_din_temp[0U] 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U] 
            = ((0xfbffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]) 
               | (0x4000000U & vlSelf->sha1_top__DOT__r_din_temp[0U]));
    }
    if ((0x8000000U & (vlSelf->sha1_top__DOT__r_din_temp[0U] 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U] 
            = ((0xf7ffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]) 
               | (0x8000000U & vlSelf->sha1_top__DOT__r_din_temp[0U]));
    }
    if ((0x10000000U & (vlSelf->sha1_top__DOT__r_din_temp[0U] 
                        ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U] 
            = ((0xefffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]) 
               | (0x10000000U & vlSelf->sha1_top__DOT__r_din_temp[0U]));
    }
    if ((0x20000000U & (vlSelf->sha1_top__DOT__r_din_temp[0U] 
                        ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U] 
            = ((0xdfffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]) 
               | (0x20000000U & vlSelf->sha1_top__DOT__r_din_temp[0U]));
    }
    if ((0x40000000U & (vlSelf->sha1_top__DOT__r_din_temp[0U] 
                        ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U] 
            = ((0xbfffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]) 
               | (0x40000000U & vlSelf->sha1_top__DOT__r_din_temp[0U]));
    }
    if (((vlSelf->sha1_top__DOT__r_din_temp[0U] ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U] 
            = ((0x7fffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[0U]) 
               | (0x80000000U & vlSelf->sha1_top__DOT__r_din_temp[0U]));
    }
    if ((1U & (vlSelf->sha1_top__DOT__r_din_temp[1U] 
               ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U] 
            = ((0xfffffffeU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]) 
               | (1U & vlSelf->sha1_top__DOT__r_din_temp[1U]));
    }
    if ((2U & (vlSelf->sha1_top__DOT__r_din_temp[1U] 
               ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U] 
            = ((0xfffffffdU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]) 
               | (2U & vlSelf->sha1_top__DOT__r_din_temp[1U]));
    }
    if ((4U & (vlSelf->sha1_top__DOT__r_din_temp[1U] 
               ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U] 
            = ((0xfffffffbU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]) 
               | (4U & vlSelf->sha1_top__DOT__r_din_temp[1U]));
    }
    if ((8U & (vlSelf->sha1_top__DOT__r_din_temp[1U] 
               ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U] 
            = ((0xfffffff7U & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]) 
               | (8U & vlSelf->sha1_top__DOT__r_din_temp[1U]));
    }
    if ((0x10U & (vlSelf->sha1_top__DOT__r_din_temp[1U] 
                  ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U] 
            = ((0xffffffefU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]) 
               | (0x10U & vlSelf->sha1_top__DOT__r_din_temp[1U]));
    }
    if ((0x20U & (vlSelf->sha1_top__DOT__r_din_temp[1U] 
                  ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U] 
            = ((0xffffffdfU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]) 
               | (0x20U & vlSelf->sha1_top__DOT__r_din_temp[1U]));
    }
    if ((0x40U & (vlSelf->sha1_top__DOT__r_din_temp[1U] 
                  ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U] 
            = ((0xffffffbfU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]) 
               | (0x40U & vlSelf->sha1_top__DOT__r_din_temp[1U]));
    }
    if ((0x80U & (vlSelf->sha1_top__DOT__r_din_temp[1U] 
                  ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U] 
            = ((0xffffff7fU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]) 
               | (0x80U & vlSelf->sha1_top__DOT__r_din_temp[1U]));
    }
    if ((0x100U & (vlSelf->sha1_top__DOT__r_din_temp[1U] 
                   ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U] 
            = ((0xfffffeffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]) 
               | (0x100U & vlSelf->sha1_top__DOT__r_din_temp[1U]));
    }
    if ((0x200U & (vlSelf->sha1_top__DOT__r_din_temp[1U] 
                   ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U] 
            = ((0xfffffdffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]) 
               | (0x200U & vlSelf->sha1_top__DOT__r_din_temp[1U]));
    }
    if ((0x400U & (vlSelf->sha1_top__DOT__r_din_temp[1U] 
                   ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U] 
            = ((0xfffffbffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]) 
               | (0x400U & vlSelf->sha1_top__DOT__r_din_temp[1U]));
    }
    if ((0x800U & (vlSelf->sha1_top__DOT__r_din_temp[1U] 
                   ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U] 
            = ((0xfffff7ffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]) 
               | (0x800U & vlSelf->sha1_top__DOT__r_din_temp[1U]));
    }
    if ((0x1000U & (vlSelf->sha1_top__DOT__r_din_temp[1U] 
                    ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U] 
            = ((0xffffefffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]) 
               | (0x1000U & vlSelf->sha1_top__DOT__r_din_temp[1U]));
    }
    if ((0x2000U & (vlSelf->sha1_top__DOT__r_din_temp[1U] 
                    ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U] 
            = ((0xffffdfffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]) 
               | (0x2000U & vlSelf->sha1_top__DOT__r_din_temp[1U]));
    }
    if ((0x4000U & (vlSelf->sha1_top__DOT__r_din_temp[1U] 
                    ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U] 
            = ((0xffffbfffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]) 
               | (0x4000U & vlSelf->sha1_top__DOT__r_din_temp[1U]));
    }
    if ((0x8000U & (vlSelf->sha1_top__DOT__r_din_temp[1U] 
                    ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U] 
            = ((0xffff7fffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]) 
               | (0x8000U & vlSelf->sha1_top__DOT__r_din_temp[1U]));
    }
    if ((0x10000U & (vlSelf->sha1_top__DOT__r_din_temp[1U] 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U] 
            = ((0xfffeffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]) 
               | (0x10000U & vlSelf->sha1_top__DOT__r_din_temp[1U]));
    }
    if ((0x20000U & (vlSelf->sha1_top__DOT__r_din_temp[1U] 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U] 
            = ((0xfffdffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]) 
               | (0x20000U & vlSelf->sha1_top__DOT__r_din_temp[1U]));
    }
    if ((0x40000U & (vlSelf->sha1_top__DOT__r_din_temp[1U] 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U] 
            = ((0xfffbffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]) 
               | (0x40000U & vlSelf->sha1_top__DOT__r_din_temp[1U]));
    }
    if ((0x80000U & (vlSelf->sha1_top__DOT__r_din_temp[1U] 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U] 
            = ((0xfff7ffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]) 
               | (0x80000U & vlSelf->sha1_top__DOT__r_din_temp[1U]));
    }
    if ((0x100000U & (vlSelf->sha1_top__DOT__r_din_temp[1U] 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U] 
            = ((0xffefffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]) 
               | (0x100000U & vlSelf->sha1_top__DOT__r_din_temp[1U]));
    }
    if ((0x200000U & (vlSelf->sha1_top__DOT__r_din_temp[1U] 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U] 
            = ((0xffdfffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]) 
               | (0x200000U & vlSelf->sha1_top__DOT__r_din_temp[1U]));
    }
    if ((0x400000U & (vlSelf->sha1_top__DOT__r_din_temp[1U] 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U] 
            = ((0xffbfffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]) 
               | (0x400000U & vlSelf->sha1_top__DOT__r_din_temp[1U]));
    }
    if ((0x800000U & (vlSelf->sha1_top__DOT__r_din_temp[1U] 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U] 
            = ((0xff7fffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]) 
               | (0x800000U & vlSelf->sha1_top__DOT__r_din_temp[1U]));
    }
    if ((0x1000000U & (vlSelf->sha1_top__DOT__r_din_temp[1U] 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U] 
            = ((0xfeffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]) 
               | (0x1000000U & vlSelf->sha1_top__DOT__r_din_temp[1U]));
    }
    if ((0x2000000U & (vlSelf->sha1_top__DOT__r_din_temp[1U] 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U] 
            = ((0xfdffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]) 
               | (0x2000000U & vlSelf->sha1_top__DOT__r_din_temp[1U]));
    }
    if ((0x4000000U & (vlSelf->sha1_top__DOT__r_din_temp[1U] 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U] 
            = ((0xfbffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]) 
               | (0x4000000U & vlSelf->sha1_top__DOT__r_din_temp[1U]));
    }
    if ((0x8000000U & (vlSelf->sha1_top__DOT__r_din_temp[1U] 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U] 
            = ((0xf7ffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]) 
               | (0x8000000U & vlSelf->sha1_top__DOT__r_din_temp[1U]));
    }
    if ((0x10000000U & (vlSelf->sha1_top__DOT__r_din_temp[1U] 
                        ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U] 
            = ((0xefffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]) 
               | (0x10000000U & vlSelf->sha1_top__DOT__r_din_temp[1U]));
    }
    if ((0x20000000U & (vlSelf->sha1_top__DOT__r_din_temp[1U] 
                        ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U] 
            = ((0xdfffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]) 
               | (0x20000000U & vlSelf->sha1_top__DOT__r_din_temp[1U]));
    }
    if ((0x40000000U & (vlSelf->sha1_top__DOT__r_din_temp[1U] 
                        ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U] 
            = ((0xbfffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]) 
               | (0x40000000U & vlSelf->sha1_top__DOT__r_din_temp[1U]));
    }
    if (((vlSelf->sha1_top__DOT__r_din_temp[1U] ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U] 
            = ((0x7fffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[1U]) 
               | (0x80000000U & vlSelf->sha1_top__DOT__r_din_temp[1U]));
    }
    if ((1U & (vlSelf->sha1_top__DOT__r_din_temp[2U] 
               ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U] 
            = ((0xfffffffeU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]) 
               | (1U & vlSelf->sha1_top__DOT__r_din_temp[2U]));
    }
    if ((2U & (vlSelf->sha1_top__DOT__r_din_temp[2U] 
               ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U] 
            = ((0xfffffffdU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]) 
               | (2U & vlSelf->sha1_top__DOT__r_din_temp[2U]));
    }
    if ((4U & (vlSelf->sha1_top__DOT__r_din_temp[2U] 
               ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U] 
            = ((0xfffffffbU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]) 
               | (4U & vlSelf->sha1_top__DOT__r_din_temp[2U]));
    }
    if ((8U & (vlSelf->sha1_top__DOT__r_din_temp[2U] 
               ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U] 
            = ((0xfffffff7U & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]) 
               | (8U & vlSelf->sha1_top__DOT__r_din_temp[2U]));
    }
    if ((0x10U & (vlSelf->sha1_top__DOT__r_din_temp[2U] 
                  ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U] 
            = ((0xffffffefU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]) 
               | (0x10U & vlSelf->sha1_top__DOT__r_din_temp[2U]));
    }
    if ((0x20U & (vlSelf->sha1_top__DOT__r_din_temp[2U] 
                  ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U] 
            = ((0xffffffdfU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]) 
               | (0x20U & vlSelf->sha1_top__DOT__r_din_temp[2U]));
    }
    if ((0x40U & (vlSelf->sha1_top__DOT__r_din_temp[2U] 
                  ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U] 
            = ((0xffffffbfU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]) 
               | (0x40U & vlSelf->sha1_top__DOT__r_din_temp[2U]));
    }
    if ((0x80U & (vlSelf->sha1_top__DOT__r_din_temp[2U] 
                  ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U] 
            = ((0xffffff7fU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]) 
               | (0x80U & vlSelf->sha1_top__DOT__r_din_temp[2U]));
    }
    if ((0x100U & (vlSelf->sha1_top__DOT__r_din_temp[2U] 
                   ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U] 
            = ((0xfffffeffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]) 
               | (0x100U & vlSelf->sha1_top__DOT__r_din_temp[2U]));
    }
    if ((0x200U & (vlSelf->sha1_top__DOT__r_din_temp[2U] 
                   ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U] 
            = ((0xfffffdffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]) 
               | (0x200U & vlSelf->sha1_top__DOT__r_din_temp[2U]));
    }
    if ((0x400U & (vlSelf->sha1_top__DOT__r_din_temp[2U] 
                   ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U] 
            = ((0xfffffbffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]) 
               | (0x400U & vlSelf->sha1_top__DOT__r_din_temp[2U]));
    }
    if ((0x800U & (vlSelf->sha1_top__DOT__r_din_temp[2U] 
                   ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U] 
            = ((0xfffff7ffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]) 
               | (0x800U & vlSelf->sha1_top__DOT__r_din_temp[2U]));
    }
    if ((0x1000U & (vlSelf->sha1_top__DOT__r_din_temp[2U] 
                    ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U] 
            = ((0xffffefffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]) 
               | (0x1000U & vlSelf->sha1_top__DOT__r_din_temp[2U]));
    }
    if ((0x2000U & (vlSelf->sha1_top__DOT__r_din_temp[2U] 
                    ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U] 
            = ((0xffffdfffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]) 
               | (0x2000U & vlSelf->sha1_top__DOT__r_din_temp[2U]));
    }
    if ((0x4000U & (vlSelf->sha1_top__DOT__r_din_temp[2U] 
                    ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U] 
            = ((0xffffbfffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]) 
               | (0x4000U & vlSelf->sha1_top__DOT__r_din_temp[2U]));
    }
    if ((0x8000U & (vlSelf->sha1_top__DOT__r_din_temp[2U] 
                    ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U] 
            = ((0xffff7fffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]) 
               | (0x8000U & vlSelf->sha1_top__DOT__r_din_temp[2U]));
    }
    if ((0x10000U & (vlSelf->sha1_top__DOT__r_din_temp[2U] 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U] 
            = ((0xfffeffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]) 
               | (0x10000U & vlSelf->sha1_top__DOT__r_din_temp[2U]));
    }
    if ((0x20000U & (vlSelf->sha1_top__DOT__r_din_temp[2U] 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U] 
            = ((0xfffdffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]) 
               | (0x20000U & vlSelf->sha1_top__DOT__r_din_temp[2U]));
    }
    if ((0x40000U & (vlSelf->sha1_top__DOT__r_din_temp[2U] 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U] 
            = ((0xfffbffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]) 
               | (0x40000U & vlSelf->sha1_top__DOT__r_din_temp[2U]));
    }
    if ((0x80000U & (vlSelf->sha1_top__DOT__r_din_temp[2U] 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U] 
            = ((0xfff7ffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]) 
               | (0x80000U & vlSelf->sha1_top__DOT__r_din_temp[2U]));
    }
    if ((0x100000U & (vlSelf->sha1_top__DOT__r_din_temp[2U] 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U] 
            = ((0xffefffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]) 
               | (0x100000U & vlSelf->sha1_top__DOT__r_din_temp[2U]));
    }
    if ((0x200000U & (vlSelf->sha1_top__DOT__r_din_temp[2U] 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U] 
            = ((0xffdfffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]) 
               | (0x200000U & vlSelf->sha1_top__DOT__r_din_temp[2U]));
    }
    if ((0x400000U & (vlSelf->sha1_top__DOT__r_din_temp[2U] 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U] 
            = ((0xffbfffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]) 
               | (0x400000U & vlSelf->sha1_top__DOT__r_din_temp[2U]));
    }
    if ((0x800000U & (vlSelf->sha1_top__DOT__r_din_temp[2U] 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U] 
            = ((0xff7fffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]) 
               | (0x800000U & vlSelf->sha1_top__DOT__r_din_temp[2U]));
    }
    if ((0x1000000U & (vlSelf->sha1_top__DOT__r_din_temp[2U] 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U] 
            = ((0xfeffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]) 
               | (0x1000000U & vlSelf->sha1_top__DOT__r_din_temp[2U]));
    }
    if ((0x2000000U & (vlSelf->sha1_top__DOT__r_din_temp[2U] 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U] 
            = ((0xfdffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]) 
               | (0x2000000U & vlSelf->sha1_top__DOT__r_din_temp[2U]));
    }
    if ((0x4000000U & (vlSelf->sha1_top__DOT__r_din_temp[2U] 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U] 
            = ((0xfbffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]) 
               | (0x4000000U & vlSelf->sha1_top__DOT__r_din_temp[2U]));
    }
    if ((0x8000000U & (vlSelf->sha1_top__DOT__r_din_temp[2U] 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U] 
            = ((0xf7ffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]) 
               | (0x8000000U & vlSelf->sha1_top__DOT__r_din_temp[2U]));
    }
    if ((0x10000000U & (vlSelf->sha1_top__DOT__r_din_temp[2U] 
                        ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U] 
            = ((0xefffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]) 
               | (0x10000000U & vlSelf->sha1_top__DOT__r_din_temp[2U]));
    }
    if ((0x20000000U & (vlSelf->sha1_top__DOT__r_din_temp[2U] 
                        ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U] 
            = ((0xdfffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]) 
               | (0x20000000U & vlSelf->sha1_top__DOT__r_din_temp[2U]));
    }
    if ((0x40000000U & (vlSelf->sha1_top__DOT__r_din_temp[2U] 
                        ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U] 
            = ((0xbfffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]) 
               | (0x40000000U & vlSelf->sha1_top__DOT__r_din_temp[2U]));
    }
    if (((vlSelf->sha1_top__DOT__r_din_temp[2U] ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U] 
            = ((0x7fffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[2U]) 
               | (0x80000000U & vlSelf->sha1_top__DOT__r_din_temp[2U]));
    }
    if ((1U & (vlSelf->sha1_top__DOT__r_din_temp[3U] 
               ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U] 
            = ((0xfffffffeU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]) 
               | (1U & vlSelf->sha1_top__DOT__r_din_temp[3U]));
    }
    if ((2U & (vlSelf->sha1_top__DOT__r_din_temp[3U] 
               ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U] 
            = ((0xfffffffdU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]) 
               | (2U & vlSelf->sha1_top__DOT__r_din_temp[3U]));
    }
    if ((4U & (vlSelf->sha1_top__DOT__r_din_temp[3U] 
               ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U] 
            = ((0xfffffffbU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]) 
               | (4U & vlSelf->sha1_top__DOT__r_din_temp[3U]));
    }
    if ((8U & (vlSelf->sha1_top__DOT__r_din_temp[3U] 
               ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U] 
            = ((0xfffffff7U & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]) 
               | (8U & vlSelf->sha1_top__DOT__r_din_temp[3U]));
    }
    if ((0x10U & (vlSelf->sha1_top__DOT__r_din_temp[3U] 
                  ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U] 
            = ((0xffffffefU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]) 
               | (0x10U & vlSelf->sha1_top__DOT__r_din_temp[3U]));
    }
    if ((0x20U & (vlSelf->sha1_top__DOT__r_din_temp[3U] 
                  ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U] 
            = ((0xffffffdfU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]) 
               | (0x20U & vlSelf->sha1_top__DOT__r_din_temp[3U]));
    }
    if ((0x40U & (vlSelf->sha1_top__DOT__r_din_temp[3U] 
                  ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U] 
            = ((0xffffffbfU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]) 
               | (0x40U & vlSelf->sha1_top__DOT__r_din_temp[3U]));
    }
    if ((0x80U & (vlSelf->sha1_top__DOT__r_din_temp[3U] 
                  ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U] 
            = ((0xffffff7fU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]) 
               | (0x80U & vlSelf->sha1_top__DOT__r_din_temp[3U]));
    }
    if ((0x100U & (vlSelf->sha1_top__DOT__r_din_temp[3U] 
                   ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U] 
            = ((0xfffffeffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]) 
               | (0x100U & vlSelf->sha1_top__DOT__r_din_temp[3U]));
    }
    if ((0x200U & (vlSelf->sha1_top__DOT__r_din_temp[3U] 
                   ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U] 
            = ((0xfffffdffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]) 
               | (0x200U & vlSelf->sha1_top__DOT__r_din_temp[3U]));
    }
    if ((0x400U & (vlSelf->sha1_top__DOT__r_din_temp[3U] 
                   ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U] 
            = ((0xfffffbffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]) 
               | (0x400U & vlSelf->sha1_top__DOT__r_din_temp[3U]));
    }
    if ((0x800U & (vlSelf->sha1_top__DOT__r_din_temp[3U] 
                   ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U] 
            = ((0xfffff7ffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]) 
               | (0x800U & vlSelf->sha1_top__DOT__r_din_temp[3U]));
    }
    if ((0x1000U & (vlSelf->sha1_top__DOT__r_din_temp[3U] 
                    ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U] 
            = ((0xffffefffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]) 
               | (0x1000U & vlSelf->sha1_top__DOT__r_din_temp[3U]));
    }
    if ((0x2000U & (vlSelf->sha1_top__DOT__r_din_temp[3U] 
                    ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U] 
            = ((0xffffdfffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]) 
               | (0x2000U & vlSelf->sha1_top__DOT__r_din_temp[3U]));
    }
    if ((0x4000U & (vlSelf->sha1_top__DOT__r_din_temp[3U] 
                    ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U] 
            = ((0xffffbfffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]) 
               | (0x4000U & vlSelf->sha1_top__DOT__r_din_temp[3U]));
    }
    if ((0x8000U & (vlSelf->sha1_top__DOT__r_din_temp[3U] 
                    ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U] 
            = ((0xffff7fffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]) 
               | (0x8000U & vlSelf->sha1_top__DOT__r_din_temp[3U]));
    }
    if ((0x10000U & (vlSelf->sha1_top__DOT__r_din_temp[3U] 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U] 
            = ((0xfffeffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]) 
               | (0x10000U & vlSelf->sha1_top__DOT__r_din_temp[3U]));
    }
    if ((0x20000U & (vlSelf->sha1_top__DOT__r_din_temp[3U] 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U] 
            = ((0xfffdffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]) 
               | (0x20000U & vlSelf->sha1_top__DOT__r_din_temp[3U]));
    }
    if ((0x40000U & (vlSelf->sha1_top__DOT__r_din_temp[3U] 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U] 
            = ((0xfffbffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]) 
               | (0x40000U & vlSelf->sha1_top__DOT__r_din_temp[3U]));
    }
    if ((0x80000U & (vlSelf->sha1_top__DOT__r_din_temp[3U] 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U] 
            = ((0xfff7ffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]) 
               | (0x80000U & vlSelf->sha1_top__DOT__r_din_temp[3U]));
    }
    if ((0x100000U & (vlSelf->sha1_top__DOT__r_din_temp[3U] 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U] 
            = ((0xffefffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]) 
               | (0x100000U & vlSelf->sha1_top__DOT__r_din_temp[3U]));
    }
    if ((0x200000U & (vlSelf->sha1_top__DOT__r_din_temp[3U] 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U] 
            = ((0xffdfffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]) 
               | (0x200000U & vlSelf->sha1_top__DOT__r_din_temp[3U]));
    }
    if ((0x400000U & (vlSelf->sha1_top__DOT__r_din_temp[3U] 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U] 
            = ((0xffbfffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]) 
               | (0x400000U & vlSelf->sha1_top__DOT__r_din_temp[3U]));
    }
    if ((0x800000U & (vlSelf->sha1_top__DOT__r_din_temp[3U] 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U] 
            = ((0xff7fffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]) 
               | (0x800000U & vlSelf->sha1_top__DOT__r_din_temp[3U]));
    }
    if ((0x1000000U & (vlSelf->sha1_top__DOT__r_din_temp[3U] 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U] 
            = ((0xfeffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]) 
               | (0x1000000U & vlSelf->sha1_top__DOT__r_din_temp[3U]));
    }
    if ((0x2000000U & (vlSelf->sha1_top__DOT__r_din_temp[3U] 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U] 
            = ((0xfdffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]) 
               | (0x2000000U & vlSelf->sha1_top__DOT__r_din_temp[3U]));
    }
    if ((0x4000000U & (vlSelf->sha1_top__DOT__r_din_temp[3U] 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U] 
            = ((0xfbffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]) 
               | (0x4000000U & vlSelf->sha1_top__DOT__r_din_temp[3U]));
    }
    if ((0x8000000U & (vlSelf->sha1_top__DOT__r_din_temp[3U] 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U] 
            = ((0xf7ffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]) 
               | (0x8000000U & vlSelf->sha1_top__DOT__r_din_temp[3U]));
    }
    if ((0x10000000U & (vlSelf->sha1_top__DOT__r_din_temp[3U] 
                        ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U] 
            = ((0xefffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]) 
               | (0x10000000U & vlSelf->sha1_top__DOT__r_din_temp[3U]));
    }
    if ((0x20000000U & (vlSelf->sha1_top__DOT__r_din_temp[3U] 
                        ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U] 
            = ((0xdfffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]) 
               | (0x20000000U & vlSelf->sha1_top__DOT__r_din_temp[3U]));
    }
    if ((0x40000000U & (vlSelf->sha1_top__DOT__r_din_temp[3U] 
                        ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U] 
            = ((0xbfffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]) 
               | (0x40000000U & vlSelf->sha1_top__DOT__r_din_temp[3U]));
    }
    if (((vlSelf->sha1_top__DOT__r_din_temp[3U] ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U] 
            = ((0x7fffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[3U]) 
               | (0x80000000U & vlSelf->sha1_top__DOT__r_din_temp[3U]));
    }
    if ((1U & (vlSelf->sha1_top__DOT__r_din_temp[4U] 
               ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U] 
            = ((0xfffffffeU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]) 
               | (1U & vlSelf->sha1_top__DOT__r_din_temp[4U]));
    }
    if ((2U & (vlSelf->sha1_top__DOT__r_din_temp[4U] 
               ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U] 
            = ((0xfffffffdU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]) 
               | (2U & vlSelf->sha1_top__DOT__r_din_temp[4U]));
    }
    if ((4U & (vlSelf->sha1_top__DOT__r_din_temp[4U] 
               ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U] 
            = ((0xfffffffbU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]) 
               | (4U & vlSelf->sha1_top__DOT__r_din_temp[4U]));
    }
    if ((8U & (vlSelf->sha1_top__DOT__r_din_temp[4U] 
               ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U] 
            = ((0xfffffff7U & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]) 
               | (8U & vlSelf->sha1_top__DOT__r_din_temp[4U]));
    }
    if ((0x10U & (vlSelf->sha1_top__DOT__r_din_temp[4U] 
                  ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U] 
            = ((0xffffffefU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]) 
               | (0x10U & vlSelf->sha1_top__DOT__r_din_temp[4U]));
    }
    if ((0x20U & (vlSelf->sha1_top__DOT__r_din_temp[4U] 
                  ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U] 
            = ((0xffffffdfU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]) 
               | (0x20U & vlSelf->sha1_top__DOT__r_din_temp[4U]));
    }
    if ((0x40U & (vlSelf->sha1_top__DOT__r_din_temp[4U] 
                  ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U] 
            = ((0xffffffbfU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]) 
               | (0x40U & vlSelf->sha1_top__DOT__r_din_temp[4U]));
    }
    if ((0x80U & (vlSelf->sha1_top__DOT__r_din_temp[4U] 
                  ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U] 
            = ((0xffffff7fU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]) 
               | (0x80U & vlSelf->sha1_top__DOT__r_din_temp[4U]));
    }
    if ((0x100U & (vlSelf->sha1_top__DOT__r_din_temp[4U] 
                   ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U] 
            = ((0xfffffeffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]) 
               | (0x100U & vlSelf->sha1_top__DOT__r_din_temp[4U]));
    }
    if ((0x200U & (vlSelf->sha1_top__DOT__r_din_temp[4U] 
                   ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U] 
            = ((0xfffffdffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]) 
               | (0x200U & vlSelf->sha1_top__DOT__r_din_temp[4U]));
    }
    if ((0x400U & (vlSelf->sha1_top__DOT__r_din_temp[4U] 
                   ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]))) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U] 
            = ((0xfffffbffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]) 
               | (0x400U & vlSelf->sha1_top__DOT__r_din_temp[4U]));
    }
    if ((0x800U & (vlSelf->sha1_top__DOT__r_din_temp[4U] 
                   ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U] 
            = ((0xfffff7ffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]) 
               | (0x800U & vlSelf->sha1_top__DOT__r_din_temp[4U]));
    }
    if ((0x1000U & (vlSelf->sha1_top__DOT__r_din_temp[4U] 
                    ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U] 
            = ((0xffffefffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]) 
               | (0x1000U & vlSelf->sha1_top__DOT__r_din_temp[4U]));
    }
    if ((0x2000U & (vlSelf->sha1_top__DOT__r_din_temp[4U] 
                    ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U] 
            = ((0xffffdfffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]) 
               | (0x2000U & vlSelf->sha1_top__DOT__r_din_temp[4U]));
    }
    if ((0x4000U & (vlSelf->sha1_top__DOT__r_din_temp[4U] 
                    ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U] 
            = ((0xffffbfffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]) 
               | (0x4000U & vlSelf->sha1_top__DOT__r_din_temp[4U]));
    }
    if ((0x8000U & (vlSelf->sha1_top__DOT__r_din_temp[4U] 
                    ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U] 
            = ((0xffff7fffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]) 
               | (0x8000U & vlSelf->sha1_top__DOT__r_din_temp[4U]));
    }
    if ((0x10000U & (vlSelf->sha1_top__DOT__r_din_temp[4U] 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U] 
            = ((0xfffeffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]) 
               | (0x10000U & vlSelf->sha1_top__DOT__r_din_temp[4U]));
    }
    if ((0x20000U & (vlSelf->sha1_top__DOT__r_din_temp[4U] 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U] 
            = ((0xfffdffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]) 
               | (0x20000U & vlSelf->sha1_top__DOT__r_din_temp[4U]));
    }
    if ((0x40000U & (vlSelf->sha1_top__DOT__r_din_temp[4U] 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U] 
            = ((0xfffbffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]) 
               | (0x40000U & vlSelf->sha1_top__DOT__r_din_temp[4U]));
    }
    if ((0x80000U & (vlSelf->sha1_top__DOT__r_din_temp[4U] 
                     ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U] 
            = ((0xfff7ffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]) 
               | (0x80000U & vlSelf->sha1_top__DOT__r_din_temp[4U]));
    }
    if ((0x100000U & (vlSelf->sha1_top__DOT__r_din_temp[4U] 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U] 
            = ((0xffefffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]) 
               | (0x100000U & vlSelf->sha1_top__DOT__r_din_temp[4U]));
    }
    if ((0x200000U & (vlSelf->sha1_top__DOT__r_din_temp[4U] 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U] 
            = ((0xffdfffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]) 
               | (0x200000U & vlSelf->sha1_top__DOT__r_din_temp[4U]));
    }
    if ((0x400000U & (vlSelf->sha1_top__DOT__r_din_temp[4U] 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U] 
            = ((0xffbfffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]) 
               | (0x400000U & vlSelf->sha1_top__DOT__r_din_temp[4U]));
    }
    if ((0x800000U & (vlSelf->sha1_top__DOT__r_din_temp[4U] 
                      ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U] 
            = ((0xff7fffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]) 
               | (0x800000U & vlSelf->sha1_top__DOT__r_din_temp[4U]));
    }
    if ((0x1000000U & (vlSelf->sha1_top__DOT__r_din_temp[4U] 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U] 
            = ((0xfeffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]) 
               | (0x1000000U & vlSelf->sha1_top__DOT__r_din_temp[4U]));
    }
    if ((0x2000000U & (vlSelf->sha1_top__DOT__r_din_temp[4U] 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U] 
            = ((0xfdffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]) 
               | (0x2000000U & vlSelf->sha1_top__DOT__r_din_temp[4U]));
    }
    if ((0x4000000U & (vlSelf->sha1_top__DOT__r_din_temp[4U] 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U] 
            = ((0xfbffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]) 
               | (0x4000000U & vlSelf->sha1_top__DOT__r_din_temp[4U]));
    }
    if ((0x8000000U & (vlSelf->sha1_top__DOT__r_din_temp[4U] 
                       ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U] 
            = ((0xf7ffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]) 
               | (0x8000000U & vlSelf->sha1_top__DOT__r_din_temp[4U]));
    }
    if ((0x10000000U & (vlSelf->sha1_top__DOT__r_din_temp[4U] 
                        ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U] 
            = ((0xefffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]) 
               | (0x10000000U & vlSelf->sha1_top__DOT__r_din_temp[4U]));
    }
    if ((0x20000000U & (vlSelf->sha1_top__DOT__r_din_temp[4U] 
                        ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U] 
            = ((0xdfffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]) 
               | (0x20000000U & vlSelf->sha1_top__DOT__r_din_temp[4U]));
    }
    if ((0x40000000U & (vlSelf->sha1_top__DOT__r_din_temp[4U] 
                        ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U] 
            = ((0xbfffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]) 
               | (0x40000000U & vlSelf->sha1_top__DOT__r_din_temp[4U]));
    }
    if (((vlSelf->sha1_top__DOT__r_din_temp[4U] ^ vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U] 
            = ((0x7fffffffU & vlSelf->sha1_top__DOT____Vtogcov__r_din_temp[4U]) 
               | (0x80000000U & vlSelf->sha1_top__DOT__r_din_temp[4U]));
    }
    if ((0x4fU == (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem))) {
        vlSelf->dout[0U] = vlSelf->sha1_top__DOT__r_din_temp[0U];
        vlSelf->dout[1U] = vlSelf->sha1_top__DOT__r_din_temp[1U];
        vlSelf->dout[2U] = vlSelf->sha1_top__DOT__r_din_temp[2U];
        vlSelf->dout[3U] = vlSelf->sha1_top__DOT__r_din_temp[3U];
        vlSelf->dout[4U] = vlSelf->sha1_top__DOT__r_din_temp[4U];
    } else {
        vlSelf->dout[0U] = 0U;
        vlSelf->dout[1U] = 0U;
        vlSelf->dout[2U] = 0U;
        vlSelf->dout[3U] = 0U;
        vlSelf->dout[4U] = 0U;
    }
    if ((1U & (vlSelf->dout[0U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[0U] 
            = ((0xfffffffeU & vlSelf->sha1_top__DOT____Vtogcov__dout[0U]) 
               | (1U & vlSelf->dout[0U]));
    }
    if ((2U & (vlSelf->dout[0U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[0U] 
            = ((0xfffffffdU & vlSelf->sha1_top__DOT____Vtogcov__dout[0U]) 
               | (2U & vlSelf->dout[0U]));
    }
    if ((4U & (vlSelf->dout[0U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[0U] 
            = ((0xfffffffbU & vlSelf->sha1_top__DOT____Vtogcov__dout[0U]) 
               | (4U & vlSelf->dout[0U]));
    }
    if ((8U & (vlSelf->dout[0U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[0U] 
            = ((0xfffffff7U & vlSelf->sha1_top__DOT____Vtogcov__dout[0U]) 
               | (8U & vlSelf->dout[0U]));
    }
    if ((0x10U & (vlSelf->dout[0U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[0U] 
            = ((0xffffffefU & vlSelf->sha1_top__DOT____Vtogcov__dout[0U]) 
               | (0x10U & vlSelf->dout[0U]));
    }
    if ((0x20U & (vlSelf->dout[0U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[0U] 
            = ((0xffffffdfU & vlSelf->sha1_top__DOT____Vtogcov__dout[0U]) 
               | (0x20U & vlSelf->dout[0U]));
    }
    if ((0x40U & (vlSelf->dout[0U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[0U] 
            = ((0xffffffbfU & vlSelf->sha1_top__DOT____Vtogcov__dout[0U]) 
               | (0x40U & vlSelf->dout[0U]));
    }
    if ((0x80U & (vlSelf->dout[0U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[0U] 
            = ((0xffffff7fU & vlSelf->sha1_top__DOT____Vtogcov__dout[0U]) 
               | (0x80U & vlSelf->dout[0U]));
    }
    if ((0x100U & (vlSelf->dout[0U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[0U] 
            = ((0xfffffeffU & vlSelf->sha1_top__DOT____Vtogcov__dout[0U]) 
               | (0x100U & vlSelf->dout[0U]));
    }
    if ((0x200U & (vlSelf->dout[0U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[0U] 
            = ((0xfffffdffU & vlSelf->sha1_top__DOT____Vtogcov__dout[0U]) 
               | (0x200U & vlSelf->dout[0U]));
    }
    if ((0x400U & (vlSelf->dout[0U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[0U] 
            = ((0xfffffbffU & vlSelf->sha1_top__DOT____Vtogcov__dout[0U]) 
               | (0x400U & vlSelf->dout[0U]));
    }
    if ((0x800U & (vlSelf->dout[0U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[0U] 
            = ((0xfffff7ffU & vlSelf->sha1_top__DOT____Vtogcov__dout[0U]) 
               | (0x800U & vlSelf->dout[0U]));
    }
    if ((0x1000U & (vlSelf->dout[0U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[0U] 
            = ((0xffffefffU & vlSelf->sha1_top__DOT____Vtogcov__dout[0U]) 
               | (0x1000U & vlSelf->dout[0U]));
    }
    if ((0x2000U & (vlSelf->dout[0U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[0U] 
            = ((0xffffdfffU & vlSelf->sha1_top__DOT____Vtogcov__dout[0U]) 
               | (0x2000U & vlSelf->dout[0U]));
    }
    if ((0x4000U & (vlSelf->dout[0U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[0U] 
            = ((0xffffbfffU & vlSelf->sha1_top__DOT____Vtogcov__dout[0U]) 
               | (0x4000U & vlSelf->dout[0U]));
    }
    if ((0x8000U & (vlSelf->dout[0U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[0U] 
            = ((0xffff7fffU & vlSelf->sha1_top__DOT____Vtogcov__dout[0U]) 
               | (0x8000U & vlSelf->dout[0U]));
    }
    if ((0x10000U & (vlSelf->dout[0U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[0U] 
            = ((0xfffeffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[0U]) 
               | (0x10000U & vlSelf->dout[0U]));
    }
    if ((0x20000U & (vlSelf->dout[0U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[0U] 
            = ((0xfffdffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[0U]) 
               | (0x20000U & vlSelf->dout[0U]));
    }
    if ((0x40000U & (vlSelf->dout[0U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[0U] 
            = ((0xfffbffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[0U]) 
               | (0x40000U & vlSelf->dout[0U]));
    }
    if ((0x80000U & (vlSelf->dout[0U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[0U] 
            = ((0xfff7ffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[0U]) 
               | (0x80000U & vlSelf->dout[0U]));
    }
    if ((0x100000U & (vlSelf->dout[0U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[0U] 
            = ((0xffefffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[0U]) 
               | (0x100000U & vlSelf->dout[0U]));
    }
    if ((0x200000U & (vlSelf->dout[0U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[0U] 
            = ((0xffdfffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[0U]) 
               | (0x200000U & vlSelf->dout[0U]));
    }
    if ((0x400000U & (vlSelf->dout[0U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[0U] 
            = ((0xffbfffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[0U]) 
               | (0x400000U & vlSelf->dout[0U]));
    }
    if ((0x800000U & (vlSelf->dout[0U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[0U] 
            = ((0xff7fffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[0U]) 
               | (0x800000U & vlSelf->dout[0U]));
    }
    if ((0x1000000U & (vlSelf->dout[0U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[0U] 
            = ((0xfeffffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[0U]) 
               | (0x1000000U & vlSelf->dout[0U]));
    }
    if ((0x2000000U & (vlSelf->dout[0U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[0U] 
            = ((0xfdffffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[0U]) 
               | (0x2000000U & vlSelf->dout[0U]));
    }
    if ((0x4000000U & (vlSelf->dout[0U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[0U] 
            = ((0xfbffffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[0U]) 
               | (0x4000000U & vlSelf->dout[0U]));
    }
    if ((0x8000000U & (vlSelf->dout[0U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[0U] 
            = ((0xf7ffffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[0U]) 
               | (0x8000000U & vlSelf->dout[0U]));
    }
    if ((0x10000000U & (vlSelf->dout[0U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[0U] 
            = ((0xefffffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[0U]) 
               | (0x10000000U & vlSelf->dout[0U]));
    }
    if ((0x20000000U & (vlSelf->dout[0U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[0U] 
            = ((0xdfffffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[0U]) 
               | (0x20000000U & vlSelf->dout[0U]));
    }
    if ((0x40000000U & (vlSelf->dout[0U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[0U]))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[0U] 
            = ((0xbfffffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[0U]) 
               | (0x40000000U & vlSelf->dout[0U]));
    }
    if (((vlSelf->dout[0U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[0U] 
            = ((0x7fffffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[0U]) 
               | (0x80000000U & vlSelf->dout[0U]));
    }
    if ((1U & (vlSelf->dout[1U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[1U] 
            = ((0xfffffffeU & vlSelf->sha1_top__DOT____Vtogcov__dout[1U]) 
               | (1U & vlSelf->dout[1U]));
    }
    if ((2U & (vlSelf->dout[1U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[1U] 
            = ((0xfffffffdU & vlSelf->sha1_top__DOT____Vtogcov__dout[1U]) 
               | (2U & vlSelf->dout[1U]));
    }
    if ((4U & (vlSelf->dout[1U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[1U] 
            = ((0xfffffffbU & vlSelf->sha1_top__DOT____Vtogcov__dout[1U]) 
               | (4U & vlSelf->dout[1U]));
    }
    if ((8U & (vlSelf->dout[1U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[1U] 
            = ((0xfffffff7U & vlSelf->sha1_top__DOT____Vtogcov__dout[1U]) 
               | (8U & vlSelf->dout[1U]));
    }
    if ((0x10U & (vlSelf->dout[1U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[1U] 
            = ((0xffffffefU & vlSelf->sha1_top__DOT____Vtogcov__dout[1U]) 
               | (0x10U & vlSelf->dout[1U]));
    }
    if ((0x20U & (vlSelf->dout[1U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[1U] 
            = ((0xffffffdfU & vlSelf->sha1_top__DOT____Vtogcov__dout[1U]) 
               | (0x20U & vlSelf->dout[1U]));
    }
    if ((0x40U & (vlSelf->dout[1U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[1U] 
            = ((0xffffffbfU & vlSelf->sha1_top__DOT____Vtogcov__dout[1U]) 
               | (0x40U & vlSelf->dout[1U]));
    }
    if ((0x80U & (vlSelf->dout[1U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[1U] 
            = ((0xffffff7fU & vlSelf->sha1_top__DOT____Vtogcov__dout[1U]) 
               | (0x80U & vlSelf->dout[1U]));
    }
    if ((0x100U & (vlSelf->dout[1U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[1U] 
            = ((0xfffffeffU & vlSelf->sha1_top__DOT____Vtogcov__dout[1U]) 
               | (0x100U & vlSelf->dout[1U]));
    }
    if ((0x200U & (vlSelf->dout[1U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[1U] 
            = ((0xfffffdffU & vlSelf->sha1_top__DOT____Vtogcov__dout[1U]) 
               | (0x200U & vlSelf->dout[1U]));
    }
    if ((0x400U & (vlSelf->dout[1U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[1U] 
            = ((0xfffffbffU & vlSelf->sha1_top__DOT____Vtogcov__dout[1U]) 
               | (0x400U & vlSelf->dout[1U]));
    }
    if ((0x800U & (vlSelf->dout[1U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[1U] 
            = ((0xfffff7ffU & vlSelf->sha1_top__DOT____Vtogcov__dout[1U]) 
               | (0x800U & vlSelf->dout[1U]));
    }
    if ((0x1000U & (vlSelf->dout[1U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[1U] 
            = ((0xffffefffU & vlSelf->sha1_top__DOT____Vtogcov__dout[1U]) 
               | (0x1000U & vlSelf->dout[1U]));
    }
    if ((0x2000U & (vlSelf->dout[1U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[1U] 
            = ((0xffffdfffU & vlSelf->sha1_top__DOT____Vtogcov__dout[1U]) 
               | (0x2000U & vlSelf->dout[1U]));
    }
    if ((0x4000U & (vlSelf->dout[1U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[1U] 
            = ((0xffffbfffU & vlSelf->sha1_top__DOT____Vtogcov__dout[1U]) 
               | (0x4000U & vlSelf->dout[1U]));
    }
    if ((0x8000U & (vlSelf->dout[1U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[1U] 
            = ((0xffff7fffU & vlSelf->sha1_top__DOT____Vtogcov__dout[1U]) 
               | (0x8000U & vlSelf->dout[1U]));
    }
    if ((0x10000U & (vlSelf->dout[1U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[1U] 
            = ((0xfffeffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[1U]) 
               | (0x10000U & vlSelf->dout[1U]));
    }
    if ((0x20000U & (vlSelf->dout[1U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[1U] 
            = ((0xfffdffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[1U]) 
               | (0x20000U & vlSelf->dout[1U]));
    }
    if ((0x40000U & (vlSelf->dout[1U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[1U] 
            = ((0xfffbffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[1U]) 
               | (0x40000U & vlSelf->dout[1U]));
    }
    if ((0x80000U & (vlSelf->dout[1U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[1U] 
            = ((0xfff7ffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[1U]) 
               | (0x80000U & vlSelf->dout[1U]));
    }
    if ((0x100000U & (vlSelf->dout[1U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[1U] 
            = ((0xffefffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[1U]) 
               | (0x100000U & vlSelf->dout[1U]));
    }
    if ((0x200000U & (vlSelf->dout[1U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[1U] 
            = ((0xffdfffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[1U]) 
               | (0x200000U & vlSelf->dout[1U]));
    }
    if ((0x400000U & (vlSelf->dout[1U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[1U] 
            = ((0xffbfffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[1U]) 
               | (0x400000U & vlSelf->dout[1U]));
    }
    if ((0x800000U & (vlSelf->dout[1U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[1U] 
            = ((0xff7fffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[1U]) 
               | (0x800000U & vlSelf->dout[1U]));
    }
    if ((0x1000000U & (vlSelf->dout[1U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[1U] 
            = ((0xfeffffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[1U]) 
               | (0x1000000U & vlSelf->dout[1U]));
    }
    if ((0x2000000U & (vlSelf->dout[1U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[1U] 
            = ((0xfdffffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[1U]) 
               | (0x2000000U & vlSelf->dout[1U]));
    }
    if ((0x4000000U & (vlSelf->dout[1U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[1U] 
            = ((0xfbffffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[1U]) 
               | (0x4000000U & vlSelf->dout[1U]));
    }
    if ((0x8000000U & (vlSelf->dout[1U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[1U] 
            = ((0xf7ffffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[1U]) 
               | (0x8000000U & vlSelf->dout[1U]));
    }
    if ((0x10000000U & (vlSelf->dout[1U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[1U] 
            = ((0xefffffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[1U]) 
               | (0x10000000U & vlSelf->dout[1U]));
    }
    if ((0x20000000U & (vlSelf->dout[1U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[1U] 
            = ((0xdfffffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[1U]) 
               | (0x20000000U & vlSelf->dout[1U]));
    }
    if ((0x40000000U & (vlSelf->dout[1U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[1U]))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[1U] 
            = ((0xbfffffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[1U]) 
               | (0x40000000U & vlSelf->dout[1U]));
    }
    if (((vlSelf->dout[1U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[1U] 
            = ((0x7fffffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[1U]) 
               | (0x80000000U & vlSelf->dout[1U]));
    }
    if ((1U & (vlSelf->dout[2U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[2U] 
            = ((0xfffffffeU & vlSelf->sha1_top__DOT____Vtogcov__dout[2U]) 
               | (1U & vlSelf->dout[2U]));
    }
    if ((2U & (vlSelf->dout[2U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[2U] 
            = ((0xfffffffdU & vlSelf->sha1_top__DOT____Vtogcov__dout[2U]) 
               | (2U & vlSelf->dout[2U]));
    }
    if ((4U & (vlSelf->dout[2U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[2U] 
            = ((0xfffffffbU & vlSelf->sha1_top__DOT____Vtogcov__dout[2U]) 
               | (4U & vlSelf->dout[2U]));
    }
    if ((8U & (vlSelf->dout[2U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[2U] 
            = ((0xfffffff7U & vlSelf->sha1_top__DOT____Vtogcov__dout[2U]) 
               | (8U & vlSelf->dout[2U]));
    }
    if ((0x10U & (vlSelf->dout[2U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[2U] 
            = ((0xffffffefU & vlSelf->sha1_top__DOT____Vtogcov__dout[2U]) 
               | (0x10U & vlSelf->dout[2U]));
    }
    if ((0x20U & (vlSelf->dout[2U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[2U] 
            = ((0xffffffdfU & vlSelf->sha1_top__DOT____Vtogcov__dout[2U]) 
               | (0x20U & vlSelf->dout[2U]));
    }
    if ((0x40U & (vlSelf->dout[2U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[2U] 
            = ((0xffffffbfU & vlSelf->sha1_top__DOT____Vtogcov__dout[2U]) 
               | (0x40U & vlSelf->dout[2U]));
    }
    if ((0x80U & (vlSelf->dout[2U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[2U] 
            = ((0xffffff7fU & vlSelf->sha1_top__DOT____Vtogcov__dout[2U]) 
               | (0x80U & vlSelf->dout[2U]));
    }
    if ((0x100U & (vlSelf->dout[2U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[2U] 
            = ((0xfffffeffU & vlSelf->sha1_top__DOT____Vtogcov__dout[2U]) 
               | (0x100U & vlSelf->dout[2U]));
    }
    if ((0x200U & (vlSelf->dout[2U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[2U] 
            = ((0xfffffdffU & vlSelf->sha1_top__DOT____Vtogcov__dout[2U]) 
               | (0x200U & vlSelf->dout[2U]));
    }
    if ((0x400U & (vlSelf->dout[2U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[2U] 
            = ((0xfffffbffU & vlSelf->sha1_top__DOT____Vtogcov__dout[2U]) 
               | (0x400U & vlSelf->dout[2U]));
    }
    if ((0x800U & (vlSelf->dout[2U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[2U] 
            = ((0xfffff7ffU & vlSelf->sha1_top__DOT____Vtogcov__dout[2U]) 
               | (0x800U & vlSelf->dout[2U]));
    }
    if ((0x1000U & (vlSelf->dout[2U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[2U] 
            = ((0xffffefffU & vlSelf->sha1_top__DOT____Vtogcov__dout[2U]) 
               | (0x1000U & vlSelf->dout[2U]));
    }
    if ((0x2000U & (vlSelf->dout[2U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[2U] 
            = ((0xffffdfffU & vlSelf->sha1_top__DOT____Vtogcov__dout[2U]) 
               | (0x2000U & vlSelf->dout[2U]));
    }
    if ((0x4000U & (vlSelf->dout[2U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[2U] 
            = ((0xffffbfffU & vlSelf->sha1_top__DOT____Vtogcov__dout[2U]) 
               | (0x4000U & vlSelf->dout[2U]));
    }
    if ((0x8000U & (vlSelf->dout[2U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[2U] 
            = ((0xffff7fffU & vlSelf->sha1_top__DOT____Vtogcov__dout[2U]) 
               | (0x8000U & vlSelf->dout[2U]));
    }
    if ((0x10000U & (vlSelf->dout[2U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[2U] 
            = ((0xfffeffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[2U]) 
               | (0x10000U & vlSelf->dout[2U]));
    }
    if ((0x20000U & (vlSelf->dout[2U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[2U] 
            = ((0xfffdffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[2U]) 
               | (0x20000U & vlSelf->dout[2U]));
    }
    if ((0x40000U & (vlSelf->dout[2U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[2U] 
            = ((0xfffbffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[2U]) 
               | (0x40000U & vlSelf->dout[2U]));
    }
    if ((0x80000U & (vlSelf->dout[2U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[2U] 
            = ((0xfff7ffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[2U]) 
               | (0x80000U & vlSelf->dout[2U]));
    }
    if ((0x100000U & (vlSelf->dout[2U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[2U] 
            = ((0xffefffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[2U]) 
               | (0x100000U & vlSelf->dout[2U]));
    }
    if ((0x200000U & (vlSelf->dout[2U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[2U] 
            = ((0xffdfffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[2U]) 
               | (0x200000U & vlSelf->dout[2U]));
    }
    if ((0x400000U & (vlSelf->dout[2U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[2U] 
            = ((0xffbfffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[2U]) 
               | (0x400000U & vlSelf->dout[2U]));
    }
    if ((0x800000U & (vlSelf->dout[2U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[2U] 
            = ((0xff7fffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[2U]) 
               | (0x800000U & vlSelf->dout[2U]));
    }
    if ((0x1000000U & (vlSelf->dout[2U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[2U] 
            = ((0xfeffffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[2U]) 
               | (0x1000000U & vlSelf->dout[2U]));
    }
    if ((0x2000000U & (vlSelf->dout[2U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[2U] 
            = ((0xfdffffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[2U]) 
               | (0x2000000U & vlSelf->dout[2U]));
    }
    if ((0x4000000U & (vlSelf->dout[2U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[2U] 
            = ((0xfbffffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[2U]) 
               | (0x4000000U & vlSelf->dout[2U]));
    }
    if ((0x8000000U & (vlSelf->dout[2U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[2U] 
            = ((0xf7ffffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[2U]) 
               | (0x8000000U & vlSelf->dout[2U]));
    }
    if ((0x10000000U & (vlSelf->dout[2U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[2U] 
            = ((0xefffffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[2U]) 
               | (0x10000000U & vlSelf->dout[2U]));
    }
    if ((0x20000000U & (vlSelf->dout[2U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[2U] 
            = ((0xdfffffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[2U]) 
               | (0x20000000U & vlSelf->dout[2U]));
    }
    if ((0x40000000U & (vlSelf->dout[2U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[2U]))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[2U] 
            = ((0xbfffffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[2U]) 
               | (0x40000000U & vlSelf->dout[2U]));
    }
    if (((vlSelf->dout[2U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[2U] 
            = ((0x7fffffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[2U]) 
               | (0x80000000U & vlSelf->dout[2U]));
    }
    if ((1U & (vlSelf->dout[3U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[3U] 
            = ((0xfffffffeU & vlSelf->sha1_top__DOT____Vtogcov__dout[3U]) 
               | (1U & vlSelf->dout[3U]));
    }
    if ((2U & (vlSelf->dout[3U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[3U] 
            = ((0xfffffffdU & vlSelf->sha1_top__DOT____Vtogcov__dout[3U]) 
               | (2U & vlSelf->dout[3U]));
    }
    if ((4U & (vlSelf->dout[3U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[3U] 
            = ((0xfffffffbU & vlSelf->sha1_top__DOT____Vtogcov__dout[3U]) 
               | (4U & vlSelf->dout[3U]));
    }
    if ((8U & (vlSelf->dout[3U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[3U] 
            = ((0xfffffff7U & vlSelf->sha1_top__DOT____Vtogcov__dout[3U]) 
               | (8U & vlSelf->dout[3U]));
    }
    if ((0x10U & (vlSelf->dout[3U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[3U] 
            = ((0xffffffefU & vlSelf->sha1_top__DOT____Vtogcov__dout[3U]) 
               | (0x10U & vlSelf->dout[3U]));
    }
    if ((0x20U & (vlSelf->dout[3U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[3U] 
            = ((0xffffffdfU & vlSelf->sha1_top__DOT____Vtogcov__dout[3U]) 
               | (0x20U & vlSelf->dout[3U]));
    }
    if ((0x40U & (vlSelf->dout[3U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[3U] 
            = ((0xffffffbfU & vlSelf->sha1_top__DOT____Vtogcov__dout[3U]) 
               | (0x40U & vlSelf->dout[3U]));
    }
    if ((0x80U & (vlSelf->dout[3U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[3U] 
            = ((0xffffff7fU & vlSelf->sha1_top__DOT____Vtogcov__dout[3U]) 
               | (0x80U & vlSelf->dout[3U]));
    }
    if ((0x100U & (vlSelf->dout[3U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[3U] 
            = ((0xfffffeffU & vlSelf->sha1_top__DOT____Vtogcov__dout[3U]) 
               | (0x100U & vlSelf->dout[3U]));
    }
    if ((0x200U & (vlSelf->dout[3U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[3U] 
            = ((0xfffffdffU & vlSelf->sha1_top__DOT____Vtogcov__dout[3U]) 
               | (0x200U & vlSelf->dout[3U]));
    }
    if ((0x400U & (vlSelf->dout[3U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[3U] 
            = ((0xfffffbffU & vlSelf->sha1_top__DOT____Vtogcov__dout[3U]) 
               | (0x400U & vlSelf->dout[3U]));
    }
    if ((0x800U & (vlSelf->dout[3U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[3U] 
            = ((0xfffff7ffU & vlSelf->sha1_top__DOT____Vtogcov__dout[3U]) 
               | (0x800U & vlSelf->dout[3U]));
    }
    if ((0x1000U & (vlSelf->dout[3U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[3U] 
            = ((0xffffefffU & vlSelf->sha1_top__DOT____Vtogcov__dout[3U]) 
               | (0x1000U & vlSelf->dout[3U]));
    }
    if ((0x2000U & (vlSelf->dout[3U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[3U] 
            = ((0xffffdfffU & vlSelf->sha1_top__DOT____Vtogcov__dout[3U]) 
               | (0x2000U & vlSelf->dout[3U]));
    }
    if ((0x4000U & (vlSelf->dout[3U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[3U] 
            = ((0xffffbfffU & vlSelf->sha1_top__DOT____Vtogcov__dout[3U]) 
               | (0x4000U & vlSelf->dout[3U]));
    }
    if ((0x8000U & (vlSelf->dout[3U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[3U] 
            = ((0xffff7fffU & vlSelf->sha1_top__DOT____Vtogcov__dout[3U]) 
               | (0x8000U & vlSelf->dout[3U]));
    }
    if ((0x10000U & (vlSelf->dout[3U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[3U] 
            = ((0xfffeffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[3U]) 
               | (0x10000U & vlSelf->dout[3U]));
    }
    if ((0x20000U & (vlSelf->dout[3U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[3U] 
            = ((0xfffdffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[3U]) 
               | (0x20000U & vlSelf->dout[3U]));
    }
    if ((0x40000U & (vlSelf->dout[3U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[3U] 
            = ((0xfffbffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[3U]) 
               | (0x40000U & vlSelf->dout[3U]));
    }
    if ((0x80000U & (vlSelf->dout[3U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[3U] 
            = ((0xfff7ffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[3U]) 
               | (0x80000U & vlSelf->dout[3U]));
    }
    if ((0x100000U & (vlSelf->dout[3U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[3U] 
            = ((0xffefffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[3U]) 
               | (0x100000U & vlSelf->dout[3U]));
    }
    if ((0x200000U & (vlSelf->dout[3U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[3U] 
            = ((0xffdfffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[3U]) 
               | (0x200000U & vlSelf->dout[3U]));
    }
    if ((0x400000U & (vlSelf->dout[3U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[3U] 
            = ((0xffbfffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[3U]) 
               | (0x400000U & vlSelf->dout[3U]));
    }
    if ((0x800000U & (vlSelf->dout[3U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[3U] 
            = ((0xff7fffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[3U]) 
               | (0x800000U & vlSelf->dout[3U]));
    }
    if ((0x1000000U & (vlSelf->dout[3U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[3U] 
            = ((0xfeffffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[3U]) 
               | (0x1000000U & vlSelf->dout[3U]));
    }
    if ((0x2000000U & (vlSelf->dout[3U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[3U] 
            = ((0xfdffffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[3U]) 
               | (0x2000000U & vlSelf->dout[3U]));
    }
    if ((0x4000000U & (vlSelf->dout[3U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[3U] 
            = ((0xfbffffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[3U]) 
               | (0x4000000U & vlSelf->dout[3U]));
    }
    if ((0x8000000U & (vlSelf->dout[3U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[3U] 
            = ((0xf7ffffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[3U]) 
               | (0x8000000U & vlSelf->dout[3U]));
    }
    if ((0x10000000U & (vlSelf->dout[3U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[3U] 
            = ((0xefffffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[3U]) 
               | (0x10000000U & vlSelf->dout[3U]));
    }
    if ((0x20000000U & (vlSelf->dout[3U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[3U] 
            = ((0xdfffffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[3U]) 
               | (0x20000000U & vlSelf->dout[3U]));
    }
    if ((0x40000000U & (vlSelf->dout[3U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[3U]))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[3U] 
            = ((0xbfffffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[3U]) 
               | (0x40000000U & vlSelf->dout[3U]));
    }
    if (((vlSelf->dout[3U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[3U] 
            = ((0x7fffffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[3U]) 
               | (0x80000000U & vlSelf->dout[3U]));
    }
    if ((1U & (vlSelf->dout[4U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[4U] 
            = ((0xfffffffeU & vlSelf->sha1_top__DOT____Vtogcov__dout[4U]) 
               | (1U & vlSelf->dout[4U]));
    }
    if ((2U & (vlSelf->dout[4U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[4U] 
            = ((0xfffffffdU & vlSelf->sha1_top__DOT____Vtogcov__dout[4U]) 
               | (2U & vlSelf->dout[4U]));
    }
    if ((4U & (vlSelf->dout[4U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[4U] 
            = ((0xfffffffbU & vlSelf->sha1_top__DOT____Vtogcov__dout[4U]) 
               | (4U & vlSelf->dout[4U]));
    }
    if ((8U & (vlSelf->dout[4U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[4U] 
            = ((0xfffffff7U & vlSelf->sha1_top__DOT____Vtogcov__dout[4U]) 
               | (8U & vlSelf->dout[4U]));
    }
    if ((0x10U & (vlSelf->dout[4U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[4U] 
            = ((0xffffffefU & vlSelf->sha1_top__DOT____Vtogcov__dout[4U]) 
               | (0x10U & vlSelf->dout[4U]));
    }
    if ((0x20U & (vlSelf->dout[4U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[4U] 
            = ((0xffffffdfU & vlSelf->sha1_top__DOT____Vtogcov__dout[4U]) 
               | (0x20U & vlSelf->dout[4U]));
    }
    if ((0x40U & (vlSelf->dout[4U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[4U] 
            = ((0xffffffbfU & vlSelf->sha1_top__DOT____Vtogcov__dout[4U]) 
               | (0x40U & vlSelf->dout[4U]));
    }
    if ((0x80U & (vlSelf->dout[4U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[4U] 
            = ((0xffffff7fU & vlSelf->sha1_top__DOT____Vtogcov__dout[4U]) 
               | (0x80U & vlSelf->dout[4U]));
    }
    if ((0x100U & (vlSelf->dout[4U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[4U] 
            = ((0xfffffeffU & vlSelf->sha1_top__DOT____Vtogcov__dout[4U]) 
               | (0x100U & vlSelf->dout[4U]));
    }
    if ((0x200U & (vlSelf->dout[4U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[4U] 
            = ((0xfffffdffU & vlSelf->sha1_top__DOT____Vtogcov__dout[4U]) 
               | (0x200U & vlSelf->dout[4U]));
    }
    if ((0x400U & (vlSelf->dout[4U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[4U] 
            = ((0xfffffbffU & vlSelf->sha1_top__DOT____Vtogcov__dout[4U]) 
               | (0x400U & vlSelf->dout[4U]));
    }
    if ((0x800U & (vlSelf->dout[4U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[4U] 
            = ((0xfffff7ffU & vlSelf->sha1_top__DOT____Vtogcov__dout[4U]) 
               | (0x800U & vlSelf->dout[4U]));
    }
    if ((0x1000U & (vlSelf->dout[4U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[4U] 
            = ((0xffffefffU & vlSelf->sha1_top__DOT____Vtogcov__dout[4U]) 
               | (0x1000U & vlSelf->dout[4U]));
    }
    if ((0x2000U & (vlSelf->dout[4U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[4U] 
            = ((0xffffdfffU & vlSelf->sha1_top__DOT____Vtogcov__dout[4U]) 
               | (0x2000U & vlSelf->dout[4U]));
    }
    if ((0x4000U & (vlSelf->dout[4U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[4U] 
            = ((0xffffbfffU & vlSelf->sha1_top__DOT____Vtogcov__dout[4U]) 
               | (0x4000U & vlSelf->dout[4U]));
    }
    if ((0x8000U & (vlSelf->dout[4U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[4U] 
            = ((0xffff7fffU & vlSelf->sha1_top__DOT____Vtogcov__dout[4U]) 
               | (0x8000U & vlSelf->dout[4U]));
    }
    if ((0x10000U & (vlSelf->dout[4U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[4U] 
            = ((0xfffeffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[4U]) 
               | (0x10000U & vlSelf->dout[4U]));
    }
    if ((0x20000U & (vlSelf->dout[4U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[4U] 
            = ((0xfffdffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[4U]) 
               | (0x20000U & vlSelf->dout[4U]));
    }
    if ((0x40000U & (vlSelf->dout[4U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[4U] 
            = ((0xfffbffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[4U]) 
               | (0x40000U & vlSelf->dout[4U]));
    }
    if ((0x80000U & (vlSelf->dout[4U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[4U] 
            = ((0xfff7ffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[4U]) 
               | (0x80000U & vlSelf->dout[4U]));
    }
    if ((0x100000U & (vlSelf->dout[4U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[4U] 
            = ((0xffefffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[4U]) 
               | (0x100000U & vlSelf->dout[4U]));
    }
    if ((0x200000U & (vlSelf->dout[4U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[4U] 
            = ((0xffdfffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[4U]) 
               | (0x200000U & vlSelf->dout[4U]));
    }
    if ((0x400000U & (vlSelf->dout[4U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[4U] 
            = ((0xffbfffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[4U]) 
               | (0x400000U & vlSelf->dout[4U]));
    }
    if ((0x800000U & (vlSelf->dout[4U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[4U] 
            = ((0xff7fffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[4U]) 
               | (0x800000U & vlSelf->dout[4U]));
    }
    if ((0x1000000U & (vlSelf->dout[4U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[4U] 
            = ((0xfeffffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[4U]) 
               | (0x1000000U & vlSelf->dout[4U]));
    }
    if ((0x2000000U & (vlSelf->dout[4U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[4U] 
            = ((0xfdffffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[4U]) 
               | (0x2000000U & vlSelf->dout[4U]));
    }
    if ((0x4000000U & (vlSelf->dout[4U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[4U] 
            = ((0xfbffffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[4U]) 
               | (0x4000000U & vlSelf->dout[4U]));
    }
    if ((0x8000000U & (vlSelf->dout[4U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[4U] 
            = ((0xf7ffffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[4U]) 
               | (0x8000000U & vlSelf->dout[4U]));
    }
    if ((0x10000000U & (vlSelf->dout[4U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[4U] 
            = ((0xefffffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[4U]) 
               | (0x10000000U & vlSelf->dout[4U]));
    }
    if ((0x20000000U & (vlSelf->dout[4U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[4U] 
            = ((0xdfffffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[4U]) 
               | (0x20000000U & vlSelf->dout[4U]));
    }
    if ((0x40000000U & (vlSelf->dout[4U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[4U]))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[4U] 
            = ((0xbfffffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[4U]) 
               | (0x40000000U & vlSelf->dout[4U]));
    }
    if (((vlSelf->dout[4U] ^ vlSelf->sha1_top__DOT____Vtogcov__dout[4U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->sha1_top__DOT____Vtogcov__dout[4U] 
            = ((0x7fffffffU & vlSelf->sha1_top__DOT____Vtogcov__dout[4U]) 
               | (0x80000000U & vlSelf->dout[4U]));
    }
}

VL_INLINE_OPT void Vsha1_top___024root___combo__TOP__4(Vsha1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha1_top___024root___combo__TOP__4\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[545]);
    if ((0U == (IData)(vlSelf->sha1_top__DOT__u_con__DOT__s_cur))) {
        ++(vlSymsp->__Vcoverage[538]);
        if (vlSelf->valid) {
            ++(vlSymsp->__Vcoverage[536]);
            vlSelf->sha1_top__DOT__u_con__DOT__s_next = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[537]);
            vlSelf->sha1_top__DOT__u_con__DOT__s_next = 0U;
        }
    } else if ((1U == (IData)(vlSelf->sha1_top__DOT__u_con__DOT__s_cur))) {
        ++(vlSymsp->__Vcoverage[542]);
        if ((0x4eU > (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem))) {
            ++(vlSymsp->__Vcoverage[541]);
            vlSelf->sha1_top__DOT__u_con__DOT__s_next = 1U;
        } else if ((0x4eU == (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem))) {
            ++(vlSymsp->__Vcoverage[539]);
            vlSelf->sha1_top__DOT__u_con__DOT__s_next = 2U;
        } else {
            ++(vlSymsp->__Vcoverage[540]);
            vlSelf->sha1_top__DOT__u_con__DOT__s_next = 0U;
        }
    } else if ((2U == (IData)(vlSelf->sha1_top__DOT__u_con__DOT__s_cur))) {
        ++(vlSymsp->__Vcoverage[543]);
        vlSelf->sha1_top__DOT__u_con__DOT__s_next = 0U;
    } else {
        ++(vlSymsp->__Vcoverage[544]);
        vlSelf->sha1_top__DOT__u_con__DOT__s_next = 0U;
    }
    if ((1U & ((IData)(vlSelf->sha1_top__DOT__u_con__DOT__s_next) 
               ^ (IData)(vlSelf->sha1_top__DOT__u_con__DOT____Vtogcov__s_next)))) {
        ++(vlSymsp->__Vcoverage[531]);
        vlSelf->sha1_top__DOT__u_con__DOT____Vtogcov__s_next 
            = ((2U & (IData)(vlSelf->sha1_top__DOT__u_con__DOT____Vtogcov__s_next)) 
               | (1U & (IData)(vlSelf->sha1_top__DOT__u_con__DOT__s_next)));
    }
    if ((2U & ((IData)(vlSelf->sha1_top__DOT__u_con__DOT__s_next) 
               ^ (IData)(vlSelf->sha1_top__DOT__u_con__DOT____Vtogcov__s_next)))) {
        ++(vlSymsp->__Vcoverage[532]);
        vlSelf->sha1_top__DOT__u_con__DOT____Vtogcov__s_next 
            = ((1U & (IData)(vlSelf->sha1_top__DOT__u_con__DOT____Vtogcov__s_next)) 
               | (2U & (IData)(vlSelf->sha1_top__DOT__u_con__DOT__s_next)));
    }
}

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

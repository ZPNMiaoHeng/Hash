// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsha1_w.h for the primary calling header

#include "Vsha1_w___024root.h"
#include "Vsha1_w__Syms.h"

//==========


void Vsha1_w___024root___ctor_var_reset(Vsha1_w___024root* vlSelf);

Vsha1_w___024root::Vsha1_w___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vsha1_w___024root___ctor_var_reset(this);
}

void Vsha1_w___024root___configure_coverage(Vsha1_w___024root* vlSelf, bool first);

void Vsha1_w___024root::__Vconfigure(Vsha1_w__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
    Vsha1_w___024root___configure_coverage(this, first);
}

Vsha1_w___024root::~Vsha1_w___024root() {
}

// Coverage
void Vsha1_w___024root::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}

extern const VlWide<16>/*511:0*/ Vsha1_w__ConstPool__CONST_93e1b771_0;

void Vsha1_w___024root___settle__TOP__2(Vsha1_w___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_w__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha1_w___024root___settle__TOP__2\n"); );
    // Body
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->sha1_w__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->sha1_w__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->rst_n) ^ (IData)(vlSelf->sha1_w__DOT____Vtogcov__rst_n))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->sha1_w__DOT____Vtogcov__rst_n = vlSelf->rst_n;
    }
    if (((IData)(vlSelf->valid) ^ (IData)(vlSelf->sha1_w__DOT____Vtogcov__valid))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->sha1_w__DOT____Vtogcov__valid = vlSelf->valid;
    }
    if ((1U & ((IData)(vlSelf->round) ^ (IData)(vlSelf->sha1_w__DOT____Vtogcov__round)))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->sha1_w__DOT____Vtogcov__round = ((0xfeU 
                                                  & (IData)(vlSelf->sha1_w__DOT____Vtogcov__round)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->round)));
    }
    if ((2U & ((IData)(vlSelf->round) ^ (IData)(vlSelf->sha1_w__DOT____Vtogcov__round)))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->sha1_w__DOT____Vtogcov__round = ((0xfdU 
                                                  & (IData)(vlSelf->sha1_w__DOT____Vtogcov__round)) 
                                                 | (2U 
                                                    & (IData)(vlSelf->round)));
    }
    if ((4U & ((IData)(vlSelf->round) ^ (IData)(vlSelf->sha1_w__DOT____Vtogcov__round)))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->sha1_w__DOT____Vtogcov__round = ((0xfbU 
                                                  & (IData)(vlSelf->sha1_w__DOT____Vtogcov__round)) 
                                                 | (4U 
                                                    & (IData)(vlSelf->round)));
    }
    if ((8U & ((IData)(vlSelf->round) ^ (IData)(vlSelf->sha1_w__DOT____Vtogcov__round)))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->sha1_w__DOT____Vtogcov__round = ((0xf7U 
                                                  & (IData)(vlSelf->sha1_w__DOT____Vtogcov__round)) 
                                                 | (8U 
                                                    & (IData)(vlSelf->round)));
    }
    if ((0x10U & ((IData)(vlSelf->round) ^ (IData)(vlSelf->sha1_w__DOT____Vtogcov__round)))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->sha1_w__DOT____Vtogcov__round = ((0xefU 
                                                  & (IData)(vlSelf->sha1_w__DOT____Vtogcov__round)) 
                                                 | (0x10U 
                                                    & (IData)(vlSelf->round)));
    }
    if ((0x20U & ((IData)(vlSelf->round) ^ (IData)(vlSelf->sha1_w__DOT____Vtogcov__round)))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->sha1_w__DOT____Vtogcov__round = ((0xdfU 
                                                  & (IData)(vlSelf->sha1_w__DOT____Vtogcov__round)) 
                                                 | (0x20U 
                                                    & (IData)(vlSelf->round)));
    }
    if ((0x40U & ((IData)(vlSelf->round) ^ (IData)(vlSelf->sha1_w__DOT____Vtogcov__round)))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->sha1_w__DOT____Vtogcov__round = ((0xbfU 
                                                  & (IData)(vlSelf->sha1_w__DOT____Vtogcov__round)) 
                                                 | (0x40U 
                                                    & (IData)(vlSelf->round)));
    }
    if ((0x80U & ((IData)(vlSelf->round) ^ (IData)(vlSelf->sha1_w__DOT____Vtogcov__round)))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->sha1_w__DOT____Vtogcov__round = ((0x7fU 
                                                  & (IData)(vlSelf->sha1_w__DOT____Vtogcov__round)) 
                                                 | (0x80U 
                                                    & (IData)(vlSelf->round)));
    }
    vlSelf->sha1_w__DOT__w_gen_temp = (((vlSelf->sha1_w__DOT__din_temp[0xfU] 
                                         ^ vlSelf->sha1_w__DOT__din_temp[0xdU]) 
                                        ^ vlSelf->sha1_w__DOT__din_temp[7U]) 
                                       ^ vlSelf->sha1_w__DOT__din_temp[2U]);
    if ((1U & (vlSelf->sha1_w__DOT__w_gen_temp ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfffffffeU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (1U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((2U & (vlSelf->sha1_w__DOT__w_gen_temp ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfffffffdU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (2U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((4U & (vlSelf->sha1_w__DOT__w_gen_temp ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfffffffbU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (4U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((8U & (vlSelf->sha1_w__DOT__w_gen_temp ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfffffff7U & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (8U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x10U & (vlSelf->sha1_w__DOT__w_gen_temp ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xffffffefU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x10U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x20U & (vlSelf->sha1_w__DOT__w_gen_temp ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xffffffdfU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x20U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x40U & (vlSelf->sha1_w__DOT__w_gen_temp ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xffffffbfU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x40U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x80U & (vlSelf->sha1_w__DOT__w_gen_temp ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xffffff7fU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x80U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x100U & (vlSelf->sha1_w__DOT__w_gen_temp 
                   ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfffffeffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x100U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x200U & (vlSelf->sha1_w__DOT__w_gen_temp 
                   ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfffffdffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x200U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x400U & (vlSelf->sha1_w__DOT__w_gen_temp 
                   ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfffffbffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x400U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x800U & (vlSelf->sha1_w__DOT__w_gen_temp 
                   ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfffff7ffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x800U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x1000U & (vlSelf->sha1_w__DOT__w_gen_temp 
                    ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xffffefffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x1000U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x2000U & (vlSelf->sha1_w__DOT__w_gen_temp 
                    ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xffffdfffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x2000U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x4000U & (vlSelf->sha1_w__DOT__w_gen_temp 
                    ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xffffbfffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x4000U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x8000U & (vlSelf->sha1_w__DOT__w_gen_temp 
                    ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xffff7fffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x8000U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x10000U & (vlSelf->sha1_w__DOT__w_gen_temp 
                     ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfffeffffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x10000U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x20000U & (vlSelf->sha1_w__DOT__w_gen_temp 
                     ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfffdffffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x20000U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x40000U & (vlSelf->sha1_w__DOT__w_gen_temp 
                     ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfffbffffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x40000U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x80000U & (vlSelf->sha1_w__DOT__w_gen_temp 
                     ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfff7ffffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x80000U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x100000U & (vlSelf->sha1_w__DOT__w_gen_temp 
                      ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xffefffffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x100000U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x200000U & (vlSelf->sha1_w__DOT__w_gen_temp 
                      ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xffdfffffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x200000U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x400000U & (vlSelf->sha1_w__DOT__w_gen_temp 
                      ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xffbfffffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x400000U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x800000U & (vlSelf->sha1_w__DOT__w_gen_temp 
                      ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xff7fffffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x800000U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x1000000U & (vlSelf->sha1_w__DOT__w_gen_temp 
                       ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfeffffffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x1000000U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x2000000U & (vlSelf->sha1_w__DOT__w_gen_temp 
                       ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfdffffffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x2000000U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x4000000U & (vlSelf->sha1_w__DOT__w_gen_temp 
                       ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xfbffffffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x4000000U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x8000000U & (vlSelf->sha1_w__DOT__w_gen_temp 
                       ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xf7ffffffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x8000000U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x10000000U & (vlSelf->sha1_w__DOT__w_gen_temp 
                        ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xefffffffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x10000000U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x20000000U & (vlSelf->sha1_w__DOT__w_gen_temp 
                        ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xdfffffffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x20000000U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if ((0x40000000U & (vlSelf->sha1_w__DOT__w_gen_temp 
                        ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0xbfffffffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x40000000U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    if (((vlSelf->sha1_w__DOT__w_gen_temp ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp 
            = ((0x7fffffffU & vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp) 
               | (0x80000000U & vlSelf->sha1_w__DOT__w_gen_temp));
    }
    vlSelf->sha1_w__DOT__w_gen = ((vlSelf->sha1_w__DOT__w_gen_temp 
                                   << 1U) | (vlSelf->sha1_w__DOT__w_gen_temp 
                                             >> 0x1fU));
    if ((0x10U >= (IData)(vlSelf->round))) {
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
    } else {
        vlSelf->sha1_w__DOT__din_temp_shift[0U] = (
                                                   ((0x10U 
                                                     < (IData)(vlSelf->round)) 
                                                    & (0x50U 
                                                       >= (IData)(vlSelf->round)))
                                                    ? vlSelf->sha1_w__DOT__w_gen
                                                    : 
                                                   Vsha1_w__ConstPool__CONST_93e1b771_0[0U]);
        vlSelf->sha1_w__DOT__din_temp_shift[1U] = (
                                                   ((0x10U 
                                                     < (IData)(vlSelf->round)) 
                                                    & (0x50U 
                                                       >= (IData)(vlSelf->round)))
                                                    ? 
                                                   vlSelf->sha1_w__DOT__din_temp[0U]
                                                    : 
                                                   Vsha1_w__ConstPool__CONST_93e1b771_0[1U]);
        vlSelf->sha1_w__DOT__din_temp_shift[2U] = (
                                                   ((0x10U 
                                                     < (IData)(vlSelf->round)) 
                                                    & (0x50U 
                                                       >= (IData)(vlSelf->round)))
                                                    ? 
                                                   vlSelf->sha1_w__DOT__din_temp[1U]
                                                    : 
                                                   Vsha1_w__ConstPool__CONST_93e1b771_0[2U]);
        vlSelf->sha1_w__DOT__din_temp_shift[3U] = (
                                                   ((0x10U 
                                                     < (IData)(vlSelf->round)) 
                                                    & (0x50U 
                                                       >= (IData)(vlSelf->round)))
                                                    ? 
                                                   vlSelf->sha1_w__DOT__din_temp[2U]
                                                    : 
                                                   Vsha1_w__ConstPool__CONST_93e1b771_0[3U]);
        vlSelf->sha1_w__DOT__din_temp_shift[4U] = (
                                                   ((0x10U 
                                                     < (IData)(vlSelf->round)) 
                                                    & (0x50U 
                                                       >= (IData)(vlSelf->round)))
                                                    ? 
                                                   vlSelf->sha1_w__DOT__din_temp[3U]
                                                    : 
                                                   Vsha1_w__ConstPool__CONST_93e1b771_0[4U]);
        vlSelf->sha1_w__DOT__din_temp_shift[5U] = (
                                                   ((0x10U 
                                                     < (IData)(vlSelf->round)) 
                                                    & (0x50U 
                                                       >= (IData)(vlSelf->round)))
                                                    ? 
                                                   vlSelf->sha1_w__DOT__din_temp[4U]
                                                    : 
                                                   Vsha1_w__ConstPool__CONST_93e1b771_0[5U]);
        vlSelf->sha1_w__DOT__din_temp_shift[6U] = (
                                                   ((0x10U 
                                                     < (IData)(vlSelf->round)) 
                                                    & (0x50U 
                                                       >= (IData)(vlSelf->round)))
                                                    ? 
                                                   vlSelf->sha1_w__DOT__din_temp[5U]
                                                    : 
                                                   Vsha1_w__ConstPool__CONST_93e1b771_0[6U]);
        vlSelf->sha1_w__DOT__din_temp_shift[7U] = (
                                                   ((0x10U 
                                                     < (IData)(vlSelf->round)) 
                                                    & (0x50U 
                                                       >= (IData)(vlSelf->round)))
                                                    ? 
                                                   vlSelf->sha1_w__DOT__din_temp[6U]
                                                    : 
                                                   Vsha1_w__ConstPool__CONST_93e1b771_0[7U]);
        vlSelf->sha1_w__DOT__din_temp_shift[8U] = (
                                                   ((0x10U 
                                                     < (IData)(vlSelf->round)) 
                                                    & (0x50U 
                                                       >= (IData)(vlSelf->round)))
                                                    ? 
                                                   vlSelf->sha1_w__DOT__din_temp[7U]
                                                    : 
                                                   Vsha1_w__ConstPool__CONST_93e1b771_0[8U]);
        vlSelf->sha1_w__DOT__din_temp_shift[9U] = (
                                                   ((0x10U 
                                                     < (IData)(vlSelf->round)) 
                                                    & (0x50U 
                                                       >= (IData)(vlSelf->round)))
                                                    ? 
                                                   vlSelf->sha1_w__DOT__din_temp[8U]
                                                    : 
                                                   Vsha1_w__ConstPool__CONST_93e1b771_0[9U]);
        vlSelf->sha1_w__DOT__din_temp_shift[0xaU] = 
            (((0x10U < (IData)(vlSelf->round)) & (0x50U 
                                                  >= (IData)(vlSelf->round)))
              ? vlSelf->sha1_w__DOT__din_temp[9U] : 
             Vsha1_w__ConstPool__CONST_93e1b771_0[0xaU]);
        vlSelf->sha1_w__DOT__din_temp_shift[0xbU] = 
            (((0x10U < (IData)(vlSelf->round)) & (0x50U 
                                                  >= (IData)(vlSelf->round)))
              ? vlSelf->sha1_w__DOT__din_temp[0xaU]
              : Vsha1_w__ConstPool__CONST_93e1b771_0[0xbU]);
        vlSelf->sha1_w__DOT__din_temp_shift[0xcU] = 
            (((0x10U < (IData)(vlSelf->round)) & (0x50U 
                                                  >= (IData)(vlSelf->round)))
              ? vlSelf->sha1_w__DOT__din_temp[0xbU]
              : Vsha1_w__ConstPool__CONST_93e1b771_0[0xcU]);
        vlSelf->sha1_w__DOT__din_temp_shift[0xdU] = 
            (((0x10U < (IData)(vlSelf->round)) & (0x50U 
                                                  >= (IData)(vlSelf->round)))
              ? vlSelf->sha1_w__DOT__din_temp[0xcU]
              : Vsha1_w__ConstPool__CONST_93e1b771_0[0xdU]);
        vlSelf->sha1_w__DOT__din_temp_shift[0xeU] = 
            (((0x10U < (IData)(vlSelf->round)) & (0x50U 
                                                  >= (IData)(vlSelf->round)))
              ? vlSelf->sha1_w__DOT__din_temp[0xdU]
              : Vsha1_w__ConstPool__CONST_93e1b771_0[0xeU]);
        vlSelf->sha1_w__DOT__din_temp_shift[0xfU] = 
            (((0x10U < (IData)(vlSelf->round)) & (0x50U 
                                                  >= (IData)(vlSelf->round)))
              ? vlSelf->sha1_w__DOT__din_temp[0xeU]
              : Vsha1_w__ConstPool__CONST_93e1b771_0[0xfU]);
    }
    if ((1U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xfffffffeU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (1U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((2U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xfffffffdU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (2U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((4U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xfffffffbU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (4U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((8U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xfffffff7U 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (8U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x10U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xffffffefU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x10U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x20U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xffffffdfU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x20U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x40U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xffffffbfU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x40U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x80U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xffffff7fU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x80U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x100U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xfffffeffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x100U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x200U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xfffffdffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x200U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x400U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xfffffbffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x400U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x800U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xfffff7ffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x800U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x1000U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xffffefffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x1000U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x2000U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xffffdfffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x2000U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x4000U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xffffbfffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x4000U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x8000U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xffff7fffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x8000U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x10000U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xfffeffffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x10000U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x20000U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xfffdffffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x20000U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x40000U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xfffbffffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x40000U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x80000U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xfff7ffffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x80000U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x100000U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xffefffffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x100000U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x200000U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xffdfffffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x200000U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x400000U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xffbfffffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x400000U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x800000U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xff7fffffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x800000U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x1000000U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xfeffffffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x1000000U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x2000000U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xfdffffffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x2000000U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x4000000U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xfbffffffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x4000000U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x8000000U & (vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xf7ffffffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x8000000U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x10000000U & (vlSelf->sha1_w__DOT__w_gen 
                        ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xefffffffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x10000000U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x20000000U & (vlSelf->sha1_w__DOT__w_gen 
                        ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xdfffffffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x20000000U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if ((0x40000000U & (vlSelf->sha1_w__DOT__w_gen 
                        ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0xbfffffffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x40000000U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    if (((vlSelf->sha1_w__DOT__w_gen ^ vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->sha1_w__DOT____Vtogcov__w_gen = ((0x7fffffffU 
                                                  & vlSelf->sha1_w__DOT____Vtogcov__w_gen) 
                                                 | (0x80000000U 
                                                    & vlSelf->sha1_w__DOT__w_gen));
    }
    vlSelf->w = ((0x10U >= (IData)(vlSelf->round)) ? 
                 vlSelf->sha1_w__DOT__din_temp[0xfU]
                  : vlSelf->sha1_w__DOT__w_gen);
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

void Vsha1_w___024root___eval_initial(Vsha1_w___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_w__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha1_w___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
}

void Vsha1_w___024root___eval_settle(Vsha1_w___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_w__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha1_w___024root___eval_settle\n"); );
    // Body
    Vsha1_w___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vsha1_w___024root___final(Vsha1_w___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_w__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha1_w___024root___final\n"); );
}

void Vsha1_w___024root___ctor_var_reset(Vsha1_w___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_w__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha1_w___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->valid = VL_RAND_RESET_I(1);
    vlSelf->round = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(512, vlSelf->din);
    vlSelf->w = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(512, vlSelf->sha1_w__DOT__din_temp);
    VL_RAND_RESET_W(512, vlSelf->sha1_w__DOT__din_temp_shift);
    vlSelf->sha1_w__DOT__w_gen_temp = VL_RAND_RESET_I(32);
    vlSelf->sha1_w__DOT__w_gen = VL_RAND_RESET_I(32);
    vlSelf->sha1_w__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->sha1_w__DOT____Vtogcov__rst_n = VL_RAND_RESET_I(1);
    vlSelf->sha1_w__DOT____Vtogcov__valid = VL_RAND_RESET_I(1);
    vlSelf->sha1_w__DOT____Vtogcov__round = VL_RAND_RESET_I(8);
    vlSelf->sha1_w__DOT____Vtogcov__w = VL_RAND_RESET_I(32);
    vlSelf->sha1_w__DOT____Vtogcov__w_gen_temp = VL_RAND_RESET_I(32);
    vlSelf->sha1_w__DOT____Vtogcov__w_gen = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}

void Vsha1_w___024root___configure_coverage(Vsha1_w___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_w__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha1_w___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "v/src/sha1_pipeline/sha1_w.v", 17, 20, ".sha1_w", "v_toggle/sha1_w", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "v/src/sha1_pipeline/sha1_w.v", 18, 20, ".sha1_w", "v_toggle/sha1_w", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "v/src/sha1_pipeline/sha1_w.v", 19, 20, ".sha1_w", "v_toggle/sha1_w", "valid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "v/src/sha1_pipeline/sha1_w.v", 20, 20, ".sha1_w", "v_toggle/sha1_w", "round[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "v/src/sha1_pipeline/sha1_w.v", 20, 20, ".sha1_w", "v_toggle/sha1_w", "round[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "v/src/sha1_pipeline/sha1_w.v", 20, 20, ".sha1_w", "v_toggle/sha1_w", "round[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "v/src/sha1_pipeline/sha1_w.v", 20, 20, ".sha1_w", "v_toggle/sha1_w", "round[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "v/src/sha1_pipeline/sha1_w.v", 20, 20, ".sha1_w", "v_toggle/sha1_w", "round[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "v/src/sha1_pipeline/sha1_w.v", 20, 20, ".sha1_w", "v_toggle/sha1_w", "round[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "v/src/sha1_pipeline/sha1_w.v", 20, 20, ".sha1_w", "v_toggle/sha1_w", "round[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "v/src/sha1_pipeline/sha1_w.v", 20, 20, ".sha1_w", "v_toggle/sha1_w", "round[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "v/src/sha1_pipeline/sha1_w.v", 24, 21, ".sha1_w", "v_toggle/sha1_w", "w[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "v/src/sha1_pipeline/sha1_w.v", 24, 21, ".sha1_w", "v_toggle/sha1_w", "w[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "v/src/sha1_pipeline/sha1_w.v", 24, 21, ".sha1_w", "v_toggle/sha1_w", "w[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "v/src/sha1_pipeline/sha1_w.v", 24, 21, ".sha1_w", "v_toggle/sha1_w", "w[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "v/src/sha1_pipeline/sha1_w.v", 24, 21, ".sha1_w", "v_toggle/sha1_w", "w[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "v/src/sha1_pipeline/sha1_w.v", 24, 21, ".sha1_w", "v_toggle/sha1_w", "w[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "v/src/sha1_pipeline/sha1_w.v", 24, 21, ".sha1_w", "v_toggle/sha1_w", "w[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "v/src/sha1_pipeline/sha1_w.v", 24, 21, ".sha1_w", "v_toggle/sha1_w", "w[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "v/src/sha1_pipeline/sha1_w.v", 24, 21, ".sha1_w", "v_toggle/sha1_w", "w[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "v/src/sha1_pipeline/sha1_w.v", 24, 21, ".sha1_w", "v_toggle/sha1_w", "w[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "v/src/sha1_pipeline/sha1_w.v", 24, 21, ".sha1_w", "v_toggle/sha1_w", "w[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "v/src/sha1_pipeline/sha1_w.v", 24, 21, ".sha1_w", "v_toggle/sha1_w", "w[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "v/src/sha1_pipeline/sha1_w.v", 24, 21, ".sha1_w", "v_toggle/sha1_w", "w[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "v/src/sha1_pipeline/sha1_w.v", 24, 21, ".sha1_w", "v_toggle/sha1_w", "w[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "v/src/sha1_pipeline/sha1_w.v", 24, 21, ".sha1_w", "v_toggle/sha1_w", "w[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "v/src/sha1_pipeline/sha1_w.v", 24, 21, ".sha1_w", "v_toggle/sha1_w", "w[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "v/src/sha1_pipeline/sha1_w.v", 24, 21, ".sha1_w", "v_toggle/sha1_w", "w[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "v/src/sha1_pipeline/sha1_w.v", 24, 21, ".sha1_w", "v_toggle/sha1_w", "w[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "v/src/sha1_pipeline/sha1_w.v", 24, 21, ".sha1_w", "v_toggle/sha1_w", "w[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "v/src/sha1_pipeline/sha1_w.v", 24, 21, ".sha1_w", "v_toggle/sha1_w", "w[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "v/src/sha1_pipeline/sha1_w.v", 24, 21, ".sha1_w", "v_toggle/sha1_w", "w[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "v/src/sha1_pipeline/sha1_w.v", 24, 21, ".sha1_w", "v_toggle/sha1_w", "w[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "v/src/sha1_pipeline/sha1_w.v", 24, 21, ".sha1_w", "v_toggle/sha1_w", "w[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "v/src/sha1_pipeline/sha1_w.v", 24, 21, ".sha1_w", "v_toggle/sha1_w", "w[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "v/src/sha1_pipeline/sha1_w.v", 24, 21, ".sha1_w", "v_toggle/sha1_w", "w[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "v/src/sha1_pipeline/sha1_w.v", 24, 21, ".sha1_w", "v_toggle/sha1_w", "w[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "v/src/sha1_pipeline/sha1_w.v", 24, 21, ".sha1_w", "v_toggle/sha1_w", "w[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "v/src/sha1_pipeline/sha1_w.v", 24, 21, ".sha1_w", "v_toggle/sha1_w", "w[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "v/src/sha1_pipeline/sha1_w.v", 24, 21, ".sha1_w", "v_toggle/sha1_w", "w[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "v/src/sha1_pipeline/sha1_w.v", 24, 21, ".sha1_w", "v_toggle/sha1_w", "w[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "v/src/sha1_pipeline/sha1_w.v", 24, 21, ".sha1_w", "v_toggle/sha1_w", "w[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "v/src/sha1_pipeline/sha1_w.v", 24, 21, ".sha1_w", "v_toggle/sha1_w", "w[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "v/src/sha1_pipeline/sha1_w.v", 36, 14, ".sha1_w", "v_line/sha1_w", "if", "36-37");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "v/src/sha1_pipeline/sha1_w.v", 36, 15, ".sha1_w", "v_line/sha1_w", "else", "39");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "v/src/sha1_pipeline/sha1_w.v", 34, 14, ".sha1_w", "v_line/sha1_w", "elsif", "34-35");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "v/src/sha1_pipeline/sha1_w.v", 32, 5, ".sha1_w", "v_line/sha1_w", "elsif", "32-33");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "v/src/sha1_pipeline/sha1_w.v", 31, 3, ".sha1_w", "v_line/sha1_w", "block", "31");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "v/src/sha1_pipeline/sha1_w.v", 43, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen_temp[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "v/src/sha1_pipeline/sha1_w.v", 43, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen_temp[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "v/src/sha1_pipeline/sha1_w.v", 43, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen_temp[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "v/src/sha1_pipeline/sha1_w.v", 43, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen_temp[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "v/src/sha1_pipeline/sha1_w.v", 43, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen_temp[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "v/src/sha1_pipeline/sha1_w.v", 43, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen_temp[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "v/src/sha1_pipeline/sha1_w.v", 43, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen_temp[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "v/src/sha1_pipeline/sha1_w.v", 43, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen_temp[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "v/src/sha1_pipeline/sha1_w.v", 43, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen_temp[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "v/src/sha1_pipeline/sha1_w.v", 43, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen_temp[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "v/src/sha1_pipeline/sha1_w.v", 43, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen_temp[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "v/src/sha1_pipeline/sha1_w.v", 43, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen_temp[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "v/src/sha1_pipeline/sha1_w.v", 43, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen_temp[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "v/src/sha1_pipeline/sha1_w.v", 43, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen_temp[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "v/src/sha1_pipeline/sha1_w.v", 43, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen_temp[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "v/src/sha1_pipeline/sha1_w.v", 43, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen_temp[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "v/src/sha1_pipeline/sha1_w.v", 43, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen_temp[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "v/src/sha1_pipeline/sha1_w.v", 43, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen_temp[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "v/src/sha1_pipeline/sha1_w.v", 43, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen_temp[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "v/src/sha1_pipeline/sha1_w.v", 43, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen_temp[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "v/src/sha1_pipeline/sha1_w.v", 43, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen_temp[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "v/src/sha1_pipeline/sha1_w.v", 43, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen_temp[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "v/src/sha1_pipeline/sha1_w.v", 43, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen_temp[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "v/src/sha1_pipeline/sha1_w.v", 43, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen_temp[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "v/src/sha1_pipeline/sha1_w.v", 43, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen_temp[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "v/src/sha1_pipeline/sha1_w.v", 43, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen_temp[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "v/src/sha1_pipeline/sha1_w.v", 43, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen_temp[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "v/src/sha1_pipeline/sha1_w.v", 43, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen_temp[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "v/src/sha1_pipeline/sha1_w.v", 43, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen_temp[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "v/src/sha1_pipeline/sha1_w.v", 43, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen_temp[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "v/src/sha1_pipeline/sha1_w.v", 43, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen_temp[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "v/src/sha1_pipeline/sha1_w.v", 43, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen_temp[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "v/src/sha1_pipeline/sha1_w.v", 44, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "v/src/sha1_pipeline/sha1_w.v", 44, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "v/src/sha1_pipeline/sha1_w.v", 44, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "v/src/sha1_pipeline/sha1_w.v", 44, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "v/src/sha1_pipeline/sha1_w.v", 44, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "v/src/sha1_pipeline/sha1_w.v", 44, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "v/src/sha1_pipeline/sha1_w.v", 44, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "v/src/sha1_pipeline/sha1_w.v", 44, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "v/src/sha1_pipeline/sha1_w.v", 44, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "v/src/sha1_pipeline/sha1_w.v", 44, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "v/src/sha1_pipeline/sha1_w.v", 44, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "v/src/sha1_pipeline/sha1_w.v", 44, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "v/src/sha1_pipeline/sha1_w.v", 44, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "v/src/sha1_pipeline/sha1_w.v", 44, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "v/src/sha1_pipeline/sha1_w.v", 44, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "v/src/sha1_pipeline/sha1_w.v", 44, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "v/src/sha1_pipeline/sha1_w.v", 44, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "v/src/sha1_pipeline/sha1_w.v", 44, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "v/src/sha1_pipeline/sha1_w.v", 44, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "v/src/sha1_pipeline/sha1_w.v", 44, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "v/src/sha1_pipeline/sha1_w.v", 44, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "v/src/sha1_pipeline/sha1_w.v", 44, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "v/src/sha1_pipeline/sha1_w.v", 44, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "v/src/sha1_pipeline/sha1_w.v", 44, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "v/src/sha1_pipeline/sha1_w.v", 44, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "v/src/sha1_pipeline/sha1_w.v", 44, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "v/src/sha1_pipeline/sha1_w.v", 44, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "v/src/sha1_pipeline/sha1_w.v", 44, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "v/src/sha1_pipeline/sha1_w.v", 44, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "v/src/sha1_pipeline/sha1_w.v", 44, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "v/src/sha1_pipeline/sha1_w.v", 44, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "v/src/sha1_pipeline/sha1_w.v", 44, 17, ".sha1_w", "v_toggle/sha1_w", "w_gen[31]", "");
}

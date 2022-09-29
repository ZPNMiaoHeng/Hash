// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsha1_top.h for the primary calling header

#include "Vsha1_top___024root.h"
#include "Vsha1_top__Syms.h"

//==========


void Vsha1_top___024root___ctor_var_reset(Vsha1_top___024root* vlSelf);

Vsha1_top___024root::Vsha1_top___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vsha1_top___024root___ctor_var_reset(this);
}

void Vsha1_top___024root___configure_coverage(Vsha1_top___024root* vlSelf, bool first);

void Vsha1_top___024root::__Vconfigure(Vsha1_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
    Vsha1_top___024root___configure_coverage(this, first);
}

Vsha1_top___024root::~Vsha1_top___024root() {
}

// Coverage
void Vsha1_top___024root::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}

extern const VlWide<16>/*511:0*/ Vsha1_top__ConstPool__CONST_93e1b771_0;

void Vsha1_top___024root___settle__TOP__2(Vsha1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha1_top___024root___settle__TOP__2\n"); );
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
    vlSelf->sha1_top__DOT__u_round__DOT__a_shift = 
        ((vlSelf->sha1_top__DOT__r_din[4U] << 5U) | 
         (vlSelf->sha1_top__DOT__r_din[4U] >> 0x1bU));
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
    if (((IData)(vlSelf->ready) ^ (IData)(vlSelf->sha1_top__DOT____Vtogcov__ready))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->sha1_top__DOT____Vtogcov__ready = vlSelf->ready;
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

void Vsha1_top___024root___eval_initial(Vsha1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha1_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
}

void Vsha1_top___024root___eval_settle(Vsha1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha1_top___024root___eval_settle\n"); );
    // Body
    Vsha1_top___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vsha1_top___024root___final(Vsha1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha1_top___024root___final\n"); );
}

void Vsha1_top___024root___ctor_var_reset(Vsha1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha1_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->din);
    VL_RAND_RESET_W(160, vlSelf->dout);
    vlSelf->ready = VL_RAND_RESET_I(1);
    vlSelf->sha1_top__DOT__w_temp = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->sha1_top__DOT__r_din_temp);
    VL_RAND_RESET_W(160, vlSelf->sha1_top__DOT__r_din);
    vlSelf->sha1_top__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->sha1_top__DOT____Vtogcov__rst_n = VL_RAND_RESET_I(1);
    vlSelf->sha1_top__DOT____Vtogcov__valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(160, vlSelf->sha1_top__DOT____Vtogcov__dout);
    vlSelf->sha1_top__DOT____Vtogcov__ready = VL_RAND_RESET_I(1);
    vlSelf->sha1_top__DOT____Vtogcov__t = VL_RAND_RESET_I(8);
    vlSelf->sha1_top__DOT____Vtogcov__w_temp = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->sha1_top__DOT____Vtogcov__r_din_temp);
    VL_RAND_RESET_W(160, vlSelf->sha1_top__DOT____Vtogcov__r_din);
    vlSelf->sha1_top__DOT__u_con__DOT__t_tem = VL_RAND_RESET_I(8);
    vlSelf->sha1_top__DOT__u_con__DOT__s_cur = VL_RAND_RESET_I(2);
    vlSelf->sha1_top__DOT__u_con__DOT__s_next = VL_RAND_RESET_I(2);
    vlSelf->sha1_top__DOT__u_con__DOT____Vtogcov__s_cur = VL_RAND_RESET_I(2);
    vlSelf->sha1_top__DOT__u_con__DOT____Vtogcov__s_next = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(512, vlSelf->sha1_top__DOT__u_w__DOT__din_temp);
    VL_RAND_RESET_W(512, vlSelf->sha1_top__DOT__u_w__DOT__din_temp_shift);
    vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp = VL_RAND_RESET_I(32);
    vlSelf->sha1_top__DOT__u_w__DOT__w_gen = VL_RAND_RESET_I(32);
    vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp = VL_RAND_RESET_I(32);
    vlSelf->sha1_top__DOT__u_w__DOT____Vtogcov__w_gen = VL_RAND_RESET_I(32);
    vlSelf->sha1_top__DOT__u_round__DOT__f = VL_RAND_RESET_I(32);
    vlSelf->sha1_top__DOT__u_round__DOT__k = VL_RAND_RESET_I(32);
    vlSelf->sha1_top__DOT__u_round__DOT__a_shift = VL_RAND_RESET_I(32);
    vlSelf->sha1_top__DOT__u_round__DOT__b_shift = VL_RAND_RESET_I(32);
    vlSelf->sha1_top__DOT__u_round__DOT__add_result = VL_RAND_RESET_I(32);
    vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__f = VL_RAND_RESET_I(32);
    vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__k = VL_RAND_RESET_I(32);
    vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__a_shift = VL_RAND_RESET_I(32);
    vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__b_shift = VL_RAND_RESET_I(32);
    vlSelf->sha1_top__DOT__u_round__DOT____Vtogcov__add_result = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}

void Vsha1_top___024root___configure_coverage(Vsha1_top___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha1_top___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "v/src/sha1_top.v", 11, 18, ".sha1_top", "v_toggle/sha1_top", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "v/src/sha1_top.v", 12, 18, ".sha1_top", "v_toggle/sha1_top", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "v/src/sha1_top.v", 13, 18, ".sha1_top", "v_toggle/sha1_top", "valid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[64]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[65]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[66]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[67]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[68]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[69]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[70]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[71]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[72]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[73]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[74]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[75]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[76]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[77]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[78]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[79]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[80]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[81]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[82]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[83]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[84]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[85]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[86]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[87]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[88]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[89]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[90]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[91]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[92]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[93]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[94]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[95]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[96]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[97]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[98]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[99]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[100]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[101]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[102]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[103]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[104]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[105]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[106]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[107]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[108]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[109]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[110]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[111]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[112]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[113]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[114]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[115]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[116]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[117]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[118]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[119]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[120]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[121]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[122]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[123]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[124]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[125]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[126]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[127]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[128]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[129]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[130]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[131]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[132]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[133]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[134]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[135]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[136]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[137]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[138]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[139]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[140]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[141]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[142]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[143]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[144]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[145]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[146]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[147]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[148]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[149]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[150]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[151]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[152]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[153]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[154]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[155]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[156]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[157]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[158]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "v/src/sha1_top.v", 16, 19, ".sha1_top", "v_toggle/sha1_top", "dout[159]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "v/src/sha1_top.v", 17, 19, ".sha1_top", "v_toggle/sha1_top", "ready", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "v/src/sha1_top.v", 25, 16, ".sha1_top", "v_toggle/sha1_top", "t[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "v/src/sha1_top.v", 25, 16, ".sha1_top", "v_toggle/sha1_top", "t[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "v/src/sha1_top.v", 25, 16, ".sha1_top", "v_toggle/sha1_top", "t[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "v/src/sha1_top.v", 25, 16, ".sha1_top", "v_toggle/sha1_top", "t[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "v/src/sha1_top.v", 25, 16, ".sha1_top", "v_toggle/sha1_top", "t[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "v/src/sha1_top.v", 25, 16, ".sha1_top", "v_toggle/sha1_top", "t[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "v/src/sha1_top.v", 25, 16, ".sha1_top", "v_toggle/sha1_top", "t[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "v/src/sha1_top.v", 25, 16, ".sha1_top", "v_toggle/sha1_top", "t[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "v/src/sha1_top.v", 26, 16, ".sha1_top", "v_toggle/sha1_top", "w_temp[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "v/src/sha1_top.v", 26, 16, ".sha1_top", "v_toggle/sha1_top", "w_temp[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "v/src/sha1_top.v", 26, 16, ".sha1_top", "v_toggle/sha1_top", "w_temp[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "v/src/sha1_top.v", 26, 16, ".sha1_top", "v_toggle/sha1_top", "w_temp[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "v/src/sha1_top.v", 26, 16, ".sha1_top", "v_toggle/sha1_top", "w_temp[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "v/src/sha1_top.v", 26, 16, ".sha1_top", "v_toggle/sha1_top", "w_temp[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "v/src/sha1_top.v", 26, 16, ".sha1_top", "v_toggle/sha1_top", "w_temp[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "v/src/sha1_top.v", 26, 16, ".sha1_top", "v_toggle/sha1_top", "w_temp[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "v/src/sha1_top.v", 26, 16, ".sha1_top", "v_toggle/sha1_top", "w_temp[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "v/src/sha1_top.v", 26, 16, ".sha1_top", "v_toggle/sha1_top", "w_temp[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "v/src/sha1_top.v", 26, 16, ".sha1_top", "v_toggle/sha1_top", "w_temp[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "v/src/sha1_top.v", 26, 16, ".sha1_top", "v_toggle/sha1_top", "w_temp[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "v/src/sha1_top.v", 26, 16, ".sha1_top", "v_toggle/sha1_top", "w_temp[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "v/src/sha1_top.v", 26, 16, ".sha1_top", "v_toggle/sha1_top", "w_temp[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "v/src/sha1_top.v", 26, 16, ".sha1_top", "v_toggle/sha1_top", "w_temp[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "v/src/sha1_top.v", 26, 16, ".sha1_top", "v_toggle/sha1_top", "w_temp[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "v/src/sha1_top.v", 26, 16, ".sha1_top", "v_toggle/sha1_top", "w_temp[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "v/src/sha1_top.v", 26, 16, ".sha1_top", "v_toggle/sha1_top", "w_temp[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "v/src/sha1_top.v", 26, 16, ".sha1_top", "v_toggle/sha1_top", "w_temp[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "v/src/sha1_top.v", 26, 16, ".sha1_top", "v_toggle/sha1_top", "w_temp[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "v/src/sha1_top.v", 26, 16, ".sha1_top", "v_toggle/sha1_top", "w_temp[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "v/src/sha1_top.v", 26, 16, ".sha1_top", "v_toggle/sha1_top", "w_temp[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "v/src/sha1_top.v", 26, 16, ".sha1_top", "v_toggle/sha1_top", "w_temp[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "v/src/sha1_top.v", 26, 16, ".sha1_top", "v_toggle/sha1_top", "w_temp[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "v/src/sha1_top.v", 26, 16, ".sha1_top", "v_toggle/sha1_top", "w_temp[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "v/src/sha1_top.v", 26, 16, ".sha1_top", "v_toggle/sha1_top", "w_temp[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "v/src/sha1_top.v", 26, 16, ".sha1_top", "v_toggle/sha1_top", "w_temp[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "v/src/sha1_top.v", 26, 16, ".sha1_top", "v_toggle/sha1_top", "w_temp[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "v/src/sha1_top.v", 26, 16, ".sha1_top", "v_toggle/sha1_top", "w_temp[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "v/src/sha1_top.v", 26, 16, ".sha1_top", "v_toggle/sha1_top", "w_temp[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "v/src/sha1_top.v", 26, 16, ".sha1_top", "v_toggle/sha1_top", "w_temp[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "v/src/sha1_top.v", 26, 16, ".sha1_top", "v_toggle/sha1_top", "w_temp[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[64]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[65]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[66]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[67]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[68]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[69]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[70]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[71]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[72]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[73]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[74]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[75]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[76]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[77]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[78]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[79]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[80]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[81]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[82]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[83]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[84]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[85]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[86]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[87]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[88]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[89]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[90]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[295]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[91]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[296]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[92]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[297]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[93]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[298]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[94]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[299]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[95]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[300]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[96]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[301]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[97]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[302]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[98]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[303]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[99]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[304]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[100]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[305]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[101]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[306]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[102]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[307]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[103]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[308]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[104]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[309]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[105]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[310]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[106]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[311]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[107]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[312]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[108]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[313]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[109]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[314]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[110]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[315]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[111]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[316]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[112]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[317]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[113]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[318]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[114]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[319]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[115]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[320]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[116]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[321]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[117]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[322]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[118]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[323]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[119]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[324]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[120]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[325]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[121]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[326]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[122]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[327]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[123]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[328]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[124]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[329]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[125]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[330]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[126]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[331]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[127]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[332]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[128]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[333]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[129]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[334]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[130]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[335]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[131]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[336]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[132]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[337]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[133]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[338]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[134]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[339]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[135]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[340]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[136]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[341]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[137]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[342]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[138]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[343]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[139]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[344]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[140]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[345]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[141]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[346]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[142]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[347]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[143]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[348]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[144]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[349]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[145]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[350]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[146]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[351]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[147]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[352]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[148]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[149]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[354]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[150]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[355]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[151]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[356]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[152]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[357]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[153]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[358]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[154]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[359]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[155]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[360]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[156]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[361]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[157]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[362]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[158]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[363]), first, "v/src/sha1_top.v", 27, 18, ".sha1_top", "v_toggle/sha1_top", "r_din_temp[159]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[364]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[365]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[366]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[367]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[368]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[369]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[370]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[371]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[372]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[373]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[374]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[375]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[376]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[377]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[378]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[379]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[380]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[381]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[382]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[383]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[384]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[385]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[386]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[387]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[388]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[389]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[390]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[391]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[392]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[393]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[394]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[395]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[396]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[397]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[398]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[399]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[400]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[401]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[402]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[403]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[404]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[405]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[406]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[407]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[408]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[409]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[410]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[411]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[412]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[413]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[414]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[415]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[416]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[417]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[418]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[419]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[420]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[421]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[422]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[423]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[424]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[425]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[426]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[427]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[428]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[64]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[429]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[65]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[430]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[66]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[431]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[67]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[432]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[68]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[433]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[69]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[434]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[70]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[435]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[71]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[436]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[72]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[437]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[73]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[438]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[74]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[439]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[75]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[440]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[76]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[441]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[77]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[442]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[78]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[443]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[79]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[444]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[80]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[445]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[81]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[446]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[82]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[447]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[83]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[448]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[84]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[449]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[85]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[450]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[86]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[451]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[87]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[452]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[88]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[453]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[89]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[454]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[90]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[455]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[91]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[456]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[92]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[457]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[93]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[458]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[94]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[459]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[95]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[460]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[96]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[461]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[97]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[462]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[98]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[463]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[99]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[464]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[100]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[465]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[101]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[466]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[102]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[467]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[103]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[468]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[104]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[469]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[105]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[470]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[106]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[471]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[107]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[472]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[108]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[473]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[109]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[474]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[110]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[475]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[111]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[476]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[112]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[477]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[113]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[478]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[114]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[479]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[115]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[480]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[116]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[481]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[117]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[482]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[118]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[483]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[119]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[484]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[120]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[485]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[121]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[486]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[122]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[487]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[123]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[488]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[124]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[489]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[125]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[490]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[126]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[491]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[127]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[492]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[128]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[493]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[129]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[494]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[130]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[495]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[131]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[496]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[132]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[497]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[133]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[498]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[134]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[499]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[135]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[500]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[136]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[501]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[137]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[502]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[138]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[503]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[139]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[504]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[140]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[505]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[141]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[506]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[142]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[507]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[143]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[508]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[144]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[509]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[145]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[510]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[146]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[147]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[512]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[148]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[513]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[149]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[514]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[150]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[515]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[151]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[516]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[152]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[517]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[153]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[518]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[154]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[519]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[155]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[156]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[521]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[157]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[522]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[158]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[523]), first, "v/src/sha1_top.v", 28, 18, ".sha1_top", "v_toggle/sha1_top", "r_din[159]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[524]), first, "v/src/sha1_top.v", 35, 12, ".sha1_top", "v_line/sha1_top", "if", "35-36");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[525]), first, "v/src/sha1_top.v", 35, 13, ".sha1_top", "v_line/sha1_top", "else", "37-38");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[526]), first, "v/src/sha1_top.v", 33, 12, ".sha1_top", "v_line/sha1_top", "elsif", "33-34");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[527]), first, "v/src/sha1_top.v", 31, 3, ".sha1_top", "v_line/sha1_top", "elsif", "31-32");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[528]), first, "v/src/sha1_top.v", 30, 1, ".sha1_top", "v_line/sha1_top", "block", "30");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "v/src/sha1_con.v", 2, 17, ".sha1_top.u_con", "v_toggle/sha1_con", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "v/src/sha1_con.v", 3, 17, ".sha1_top.u_con", "v_toggle/sha1_con", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "v/src/sha1_con.v", 4, 17, ".sha1_top.u_con", "v_toggle/sha1_con", "valid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "v/src/sha1_con.v", 6, 17, ".sha1_top.u_con", "v_toggle/sha1_con", "t[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "v/src/sha1_con.v", 6, 17, ".sha1_top.u_con", "v_toggle/sha1_con", "t[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "v/src/sha1_con.v", 6, 17, ".sha1_top.u_con", "v_toggle/sha1_con", "t[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "v/src/sha1_con.v", 6, 17, ".sha1_top.u_con", "v_toggle/sha1_con", "t[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "v/src/sha1_con.v", 6, 17, ".sha1_top.u_con", "v_toggle/sha1_con", "t[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "v/src/sha1_con.v", 6, 17, ".sha1_top.u_con", "v_toggle/sha1_con", "t[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "v/src/sha1_con.v", 6, 17, ".sha1_top.u_con", "v_toggle/sha1_con", "t[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "v/src/sha1_con.v", 6, 17, ".sha1_top.u_con", "v_toggle/sha1_con", "t[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "v/src/sha1_con.v", 7, 17, ".sha1_top.u_con", "v_toggle/sha1_con", "ready_t", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "v/src/sha1_con.v", 14, 14, ".sha1_top.u_con", "v_toggle/sha1_con", "t_tem[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "v/src/sha1_con.v", 14, 14, ".sha1_top.u_con", "v_toggle/sha1_con", "t_tem[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "v/src/sha1_con.v", 14, 14, ".sha1_top.u_con", "v_toggle/sha1_con", "t_tem[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "v/src/sha1_con.v", 14, 14, ".sha1_top.u_con", "v_toggle/sha1_con", "t_tem[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "v/src/sha1_con.v", 14, 14, ".sha1_top.u_con", "v_toggle/sha1_con", "t_tem[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "v/src/sha1_con.v", 14, 14, ".sha1_top.u_con", "v_toggle/sha1_con", "t_tem[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "v/src/sha1_con.v", 14, 14, ".sha1_top.u_con", "v_toggle/sha1_con", "t_tem[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "v/src/sha1_con.v", 14, 14, ".sha1_top.u_con", "v_toggle/sha1_con", "t_tem[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[529]), first, "v/src/sha1_con.v", 15, 14, ".sha1_top.u_con", "v_toggle/sha1_con", "s_cur[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[530]), first, "v/src/sha1_con.v", 15, 14, ".sha1_top.u_con", "v_toggle/sha1_con", "s_cur[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[531]), first, "v/src/sha1_con.v", 15, 21, ".sha1_top.u_con", "v_toggle/sha1_con", "s_next[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[532]), first, "v/src/sha1_con.v", 15, 21, ".sha1_top.u_con", "v_toggle/sha1_con", "s_next[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[533]), first, "v/src/sha1_con.v", 19, 5, ".sha1_top.u_con", "v_branch/sha1_con", "if", "19-20");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[534]), first, "v/src/sha1_con.v", 19, 6, ".sha1_top.u_con", "v_branch/sha1_con", "else", "22-23");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[535]), first, "v/src/sha1_con.v", 18, 3, ".sha1_top.u_con", "v_line/sha1_con", "block", "18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[536]), first, "v/src/sha1_con.v", 31, 9, ".sha1_top.u_con", "v_branch/sha1_con", "if", "31-32");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[537]), first, "v/src/sha1_con.v", 31, 10, ".sha1_top.u_con", "v_branch/sha1_con", "else", "34");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[538]), first, "v/src/sha1_con.v", 30, 11, ".sha1_top.u_con", "v_line/sha1_con", "case", "30");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[539]), first, "v/src/sha1_con.v", 41, 14, ".sha1_top.u_con", "v_line/sha1_con", "if", "41-42");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[540]), first, "v/src/sha1_con.v", 41, 15, ".sha1_top.u_con", "v_line/sha1_con", "else", "44-45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[541]), first, "v/src/sha1_con.v", 38, 9, ".sha1_top.u_con", "v_line/sha1_con", "elsif", "38-39");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[542]), first, "v/src/sha1_con.v", 37, 12, ".sha1_top.u_con", "v_line/sha1_con", "case", "37");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[543]), first, "v/src/sha1_con.v", 49, 11, ".sha1_top.u_con", "v_line/sha1_con", "case", "49-50");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[544]), first, "v/src/sha1_con.v", 52, 7, ".sha1_top.u_con", "v_line/sha1_con", "case", "52");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[545]), first, "v/src/sha1_con.v", 28, 3, ".sha1_top.u_con", "v_line/sha1_con", "block", "28-29");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[546]), first, "v/src/sha1_con.v", 63, 10, ".sha1_top.u_con", "v_line/sha1_con", "if", "63-64");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[547]), first, "v/src/sha1_con.v", 63, 11, ".sha1_top.u_con", "v_line/sha1_con", "else", "66-67");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[548]), first, "v/src/sha1_con.v", 60, 10, ".sha1_top.u_con", "v_line/sha1_con", "elsif", "60-61");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[549]), first, "v/src/sha1_con.v", 58, 5, ".sha1_top.u_con", "v_line/sha1_con", "elsif", "58-59");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[550]), first, "v/src/sha1_con.v", 57, 3, ".sha1_top.u_con", "v_line/sha1_con", "block", "57");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "v/src/sha1_w.v", 13, 20, ".sha1_top.u_w", "v_toggle/sha1_w", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "v/src/sha1_w.v", 14, 20, ".sha1_top.u_w", "v_toggle/sha1_w", "rst_n", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "v/src/sha1_w.v", 15, 20, ".sha1_top.u_w", "v_toggle/sha1_w", "valid_w", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "v/src/sha1_w.v", 16, 20, ".sha1_top.u_w", "v_toggle/sha1_w", "t[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "v/src/sha1_w.v", 16, 20, ".sha1_top.u_w", "v_toggle/sha1_w", "t[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "v/src/sha1_w.v", 16, 20, ".sha1_top.u_w", "v_toggle/sha1_w", "t[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "v/src/sha1_w.v", 16, 20, ".sha1_top.u_w", "v_toggle/sha1_w", "t[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "v/src/sha1_w.v", 16, 20, ".sha1_top.u_w", "v_toggle/sha1_w", "t[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "v/src/sha1_w.v", 16, 20, ".sha1_top.u_w", "v_toggle/sha1_w", "t[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "v/src/sha1_w.v", 16, 20, ".sha1_top.u_w", "v_toggle/sha1_w", "t[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "v/src/sha1_w.v", 16, 20, ".sha1_top.u_w", "v_toggle/sha1_w", "t[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "v/src/sha1_w.v", 19, 21, ".sha1_top.u_w", "v_toggle/sha1_w", "w[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "v/src/sha1_w.v", 19, 21, ".sha1_top.u_w", "v_toggle/sha1_w", "w[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "v/src/sha1_w.v", 19, 21, ".sha1_top.u_w", "v_toggle/sha1_w", "w[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "v/src/sha1_w.v", 19, 21, ".sha1_top.u_w", "v_toggle/sha1_w", "w[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "v/src/sha1_w.v", 19, 21, ".sha1_top.u_w", "v_toggle/sha1_w", "w[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "v/src/sha1_w.v", 19, 21, ".sha1_top.u_w", "v_toggle/sha1_w", "w[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "v/src/sha1_w.v", 19, 21, ".sha1_top.u_w", "v_toggle/sha1_w", "w[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "v/src/sha1_w.v", 19, 21, ".sha1_top.u_w", "v_toggle/sha1_w", "w[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "v/src/sha1_w.v", 19, 21, ".sha1_top.u_w", "v_toggle/sha1_w", "w[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "v/src/sha1_w.v", 19, 21, ".sha1_top.u_w", "v_toggle/sha1_w", "w[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "v/src/sha1_w.v", 19, 21, ".sha1_top.u_w", "v_toggle/sha1_w", "w[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "v/src/sha1_w.v", 19, 21, ".sha1_top.u_w", "v_toggle/sha1_w", "w[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "v/src/sha1_w.v", 19, 21, ".sha1_top.u_w", "v_toggle/sha1_w", "w[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "v/src/sha1_w.v", 19, 21, ".sha1_top.u_w", "v_toggle/sha1_w", "w[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "v/src/sha1_w.v", 19, 21, ".sha1_top.u_w", "v_toggle/sha1_w", "w[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "v/src/sha1_w.v", 19, 21, ".sha1_top.u_w", "v_toggle/sha1_w", "w[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "v/src/sha1_w.v", 19, 21, ".sha1_top.u_w", "v_toggle/sha1_w", "w[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "v/src/sha1_w.v", 19, 21, ".sha1_top.u_w", "v_toggle/sha1_w", "w[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "v/src/sha1_w.v", 19, 21, ".sha1_top.u_w", "v_toggle/sha1_w", "w[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "v/src/sha1_w.v", 19, 21, ".sha1_top.u_w", "v_toggle/sha1_w", "w[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "v/src/sha1_w.v", 19, 21, ".sha1_top.u_w", "v_toggle/sha1_w", "w[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "v/src/sha1_w.v", 19, 21, ".sha1_top.u_w", "v_toggle/sha1_w", "w[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "v/src/sha1_w.v", 19, 21, ".sha1_top.u_w", "v_toggle/sha1_w", "w[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "v/src/sha1_w.v", 19, 21, ".sha1_top.u_w", "v_toggle/sha1_w", "w[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "v/src/sha1_w.v", 19, 21, ".sha1_top.u_w", "v_toggle/sha1_w", "w[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "v/src/sha1_w.v", 19, 21, ".sha1_top.u_w", "v_toggle/sha1_w", "w[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "v/src/sha1_w.v", 19, 21, ".sha1_top.u_w", "v_toggle/sha1_w", "w[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "v/src/sha1_w.v", 19, 21, ".sha1_top.u_w", "v_toggle/sha1_w", "w[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "v/src/sha1_w.v", 19, 21, ".sha1_top.u_w", "v_toggle/sha1_w", "w[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "v/src/sha1_w.v", 19, 21, ".sha1_top.u_w", "v_toggle/sha1_w", "w[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "v/src/sha1_w.v", 19, 21, ".sha1_top.u_w", "v_toggle/sha1_w", "w[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "v/src/sha1_w.v", 19, 21, ".sha1_top.u_w", "v_toggle/sha1_w", "w[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[551]), first, "v/src/sha1_w.v", 31, 14, ".sha1_top.u_w", "v_branch/sha1_w", "if", "31-32");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[552]), first, "v/src/sha1_w.v", 31, 15, ".sha1_top.u_w", "v_branch/sha1_w", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[553]), first, "v/src/sha1_w.v", 29, 14, ".sha1_top.u_w", "v_line/sha1_w", "elsif", "29-30");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[554]), first, "v/src/sha1_w.v", 27, 5, ".sha1_top.u_w", "v_line/sha1_w", "elsif", "27-28");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[555]), first, "v/src/sha1_w.v", 26, 3, ".sha1_top.u_w", "v_line/sha1_w", "block", "26");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[556]), first, "v/src/sha1_w.v", 37, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen_temp[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[557]), first, "v/src/sha1_w.v", 37, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen_temp[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[558]), first, "v/src/sha1_w.v", 37, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen_temp[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[559]), first, "v/src/sha1_w.v", 37, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen_temp[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[560]), first, "v/src/sha1_w.v", 37, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen_temp[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[561]), first, "v/src/sha1_w.v", 37, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen_temp[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[562]), first, "v/src/sha1_w.v", 37, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen_temp[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[563]), first, "v/src/sha1_w.v", 37, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen_temp[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[564]), first, "v/src/sha1_w.v", 37, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen_temp[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[565]), first, "v/src/sha1_w.v", 37, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen_temp[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[566]), first, "v/src/sha1_w.v", 37, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen_temp[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[567]), first, "v/src/sha1_w.v", 37, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen_temp[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[568]), first, "v/src/sha1_w.v", 37, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen_temp[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[569]), first, "v/src/sha1_w.v", 37, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen_temp[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[570]), first, "v/src/sha1_w.v", 37, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen_temp[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[571]), first, "v/src/sha1_w.v", 37, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen_temp[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[572]), first, "v/src/sha1_w.v", 37, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen_temp[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[573]), first, "v/src/sha1_w.v", 37, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen_temp[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[574]), first, "v/src/sha1_w.v", 37, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen_temp[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[575]), first, "v/src/sha1_w.v", 37, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen_temp[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[576]), first, "v/src/sha1_w.v", 37, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen_temp[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[577]), first, "v/src/sha1_w.v", 37, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen_temp[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[578]), first, "v/src/sha1_w.v", 37, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen_temp[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[579]), first, "v/src/sha1_w.v", 37, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen_temp[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[580]), first, "v/src/sha1_w.v", 37, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen_temp[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[581]), first, "v/src/sha1_w.v", 37, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen_temp[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[582]), first, "v/src/sha1_w.v", 37, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen_temp[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[583]), first, "v/src/sha1_w.v", 37, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen_temp[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[584]), first, "v/src/sha1_w.v", 37, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen_temp[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[585]), first, "v/src/sha1_w.v", 37, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen_temp[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[586]), first, "v/src/sha1_w.v", 37, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen_temp[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[587]), first, "v/src/sha1_w.v", 37, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen_temp[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[588]), first, "v/src/sha1_w.v", 38, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[589]), first, "v/src/sha1_w.v", 38, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[590]), first, "v/src/sha1_w.v", 38, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[591]), first, "v/src/sha1_w.v", 38, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[592]), first, "v/src/sha1_w.v", 38, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[593]), first, "v/src/sha1_w.v", 38, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[594]), first, "v/src/sha1_w.v", 38, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[595]), first, "v/src/sha1_w.v", 38, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[596]), first, "v/src/sha1_w.v", 38, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[597]), first, "v/src/sha1_w.v", 38, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[598]), first, "v/src/sha1_w.v", 38, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[599]), first, "v/src/sha1_w.v", 38, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[600]), first, "v/src/sha1_w.v", 38, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[601]), first, "v/src/sha1_w.v", 38, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[602]), first, "v/src/sha1_w.v", 38, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[603]), first, "v/src/sha1_w.v", 38, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[604]), first, "v/src/sha1_w.v", 38, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[605]), first, "v/src/sha1_w.v", 38, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[606]), first, "v/src/sha1_w.v", 38, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[607]), first, "v/src/sha1_w.v", 38, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[608]), first, "v/src/sha1_w.v", 38, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[609]), first, "v/src/sha1_w.v", 38, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[610]), first, "v/src/sha1_w.v", 38, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[611]), first, "v/src/sha1_w.v", 38, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[612]), first, "v/src/sha1_w.v", 38, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[613]), first, "v/src/sha1_w.v", 38, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[614]), first, "v/src/sha1_w.v", 38, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[615]), first, "v/src/sha1_w.v", 38, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[616]), first, "v/src/sha1_w.v", 38, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[617]), first, "v/src/sha1_w.v", 38, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[618]), first, "v/src/sha1_w.v", 38, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[619]), first, "v/src/sha1_w.v", 38, 17, ".sha1_top.u_w", "v_toggle/sha1_w", "w_gen[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[364]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[365]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[366]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[367]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[368]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[369]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[370]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[371]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[372]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[373]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[374]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[375]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[376]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[377]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[378]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[379]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[380]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[381]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[382]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[383]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[384]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[385]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[386]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[387]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[388]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[389]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[390]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[391]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[392]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[393]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[394]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[395]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[396]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[397]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[398]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[399]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[400]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[401]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[402]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[403]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[404]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[405]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[406]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[407]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[408]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[409]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[410]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[411]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[412]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[413]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[414]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[415]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[416]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[417]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[418]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[419]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[420]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[421]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[422]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[423]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[424]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[425]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[426]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[427]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[428]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[64]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[429]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[65]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[430]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[66]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[431]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[67]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[432]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[68]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[433]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[69]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[434]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[70]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[435]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[71]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[436]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[72]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[437]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[73]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[438]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[74]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[439]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[75]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[440]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[76]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[441]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[77]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[442]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[78]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[443]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[79]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[444]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[80]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[445]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[81]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[446]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[82]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[447]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[83]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[448]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[84]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[449]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[85]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[450]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[86]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[451]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[87]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[452]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[88]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[453]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[89]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[454]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[90]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[455]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[91]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[456]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[92]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[457]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[93]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[458]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[94]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[459]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[95]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[460]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[96]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[461]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[97]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[462]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[98]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[463]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[99]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[464]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[100]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[465]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[101]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[466]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[102]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[467]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[103]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[468]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[104]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[469]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[105]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[470]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[106]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[471]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[107]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[472]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[108]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[473]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[109]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[474]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[110]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[475]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[111]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[476]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[112]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[477]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[113]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[478]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[114]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[479]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[115]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[480]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[116]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[481]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[117]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[482]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[118]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[483]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[119]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[484]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[120]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[485]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[121]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[486]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[122]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[487]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[123]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[488]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[124]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[489]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[125]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[490]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[126]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[491]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[127]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[492]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[128]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[493]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[129]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[494]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[130]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[495]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[131]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[496]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[132]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[497]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[133]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[498]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[134]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[499]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[135]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[500]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[136]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[501]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[137]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[502]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[138]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[503]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[139]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[504]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[140]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[505]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[141]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[506]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[142]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[507]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[143]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[508]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[144]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[509]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[145]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[510]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[146]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[147]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[512]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[148]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[513]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[149]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[514]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[150]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[515]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[151]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[516]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[152]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[517]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[153]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[518]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[154]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[519]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[155]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[156]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[521]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[157]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[522]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[158]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[523]), first, "v/src/sha1_round.v", 17, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_din[159]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "v/src/sha1_round.v", 18, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "w[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "v/src/sha1_round.v", 18, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "w[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "v/src/sha1_round.v", 18, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "w[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "v/src/sha1_round.v", 18, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "w[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "v/src/sha1_round.v", 18, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "w[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "v/src/sha1_round.v", 18, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "w[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "v/src/sha1_round.v", 18, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "w[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "v/src/sha1_round.v", 18, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "w[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "v/src/sha1_round.v", 18, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "w[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "v/src/sha1_round.v", 18, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "w[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "v/src/sha1_round.v", 18, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "w[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "v/src/sha1_round.v", 18, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "w[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "v/src/sha1_round.v", 18, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "w[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "v/src/sha1_round.v", 18, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "w[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "v/src/sha1_round.v", 18, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "w[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "v/src/sha1_round.v", 18, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "w[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "v/src/sha1_round.v", 18, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "w[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "v/src/sha1_round.v", 18, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "w[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "v/src/sha1_round.v", 18, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "w[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "v/src/sha1_round.v", 18, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "w[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "v/src/sha1_round.v", 18, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "w[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "v/src/sha1_round.v", 18, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "w[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "v/src/sha1_round.v", 18, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "w[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "v/src/sha1_round.v", 18, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "w[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "v/src/sha1_round.v", 18, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "w[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "v/src/sha1_round.v", 18, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "w[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "v/src/sha1_round.v", 18, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "w[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "v/src/sha1_round.v", 18, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "w[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "v/src/sha1_round.v", 18, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "w[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "v/src/sha1_round.v", 18, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "w[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "v/src/sha1_round.v", 18, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "w[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "v/src/sha1_round.v", 18, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "w[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "v/src/sha1_round.v", 19, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "round[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "v/src/sha1_round.v", 19, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "round[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "v/src/sha1_round.v", 19, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "round[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "v/src/sha1_round.v", 19, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "round[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "v/src/sha1_round.v", 19, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "round[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "v/src/sha1_round.v", 19, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "round[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "v/src/sha1_round.v", 19, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "round[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "v/src/sha1_round.v", 19, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "round[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[64]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[65]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[66]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[67]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[68]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[69]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[70]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[71]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[72]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[73]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[74]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[75]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[76]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[77]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[78]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[79]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[80]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[81]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[82]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[83]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[84]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[85]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[86]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[87]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[88]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[89]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[90]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[295]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[91]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[296]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[92]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[297]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[93]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[298]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[94]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[299]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[95]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[300]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[96]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[301]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[97]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[302]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[98]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[303]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[99]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[304]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[100]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[305]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[101]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[306]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[102]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[307]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[103]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[308]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[104]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[309]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[105]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[310]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[106]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[311]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[107]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[312]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[108]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[313]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[109]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[314]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[110]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[315]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[111]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[316]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[112]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[317]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[113]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[318]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[114]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[319]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[115]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[320]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[116]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[321]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[117]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[322]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[118]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[323]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[119]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[324]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[120]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[325]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[121]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[326]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[122]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[327]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[123]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[328]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[124]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[329]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[125]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[330]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[126]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[331]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[127]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[332]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[128]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[333]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[129]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[334]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[130]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[335]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[131]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[336]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[132]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[337]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[133]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[338]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[134]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[339]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[135]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[340]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[136]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[341]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[137]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[342]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[138]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[343]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[139]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[344]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[140]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[345]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[141]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[346]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[142]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[347]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[143]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[348]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[144]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[349]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[145]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[350]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[146]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[351]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[147]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[352]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[148]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[149]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[354]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[150]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[355]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[151]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[356]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[152]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[357]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[153]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[358]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[154]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[359]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[155]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[360]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[156]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[361]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[157]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[362]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[158]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[363]), first, "v/src/sha1_round.v", 22, 26, ".sha1_top.u_round", "v_toggle/sha1_round", "r_dout[159]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[620]), first, "v/src/sha1_round.v", 27, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "f[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[621]), first, "v/src/sha1_round.v", 27, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "f[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[622]), first, "v/src/sha1_round.v", 27, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "f[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[623]), first, "v/src/sha1_round.v", 27, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "f[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[624]), first, "v/src/sha1_round.v", 27, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "f[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[625]), first, "v/src/sha1_round.v", 27, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "f[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[626]), first, "v/src/sha1_round.v", 27, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "f[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[627]), first, "v/src/sha1_round.v", 27, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "f[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[628]), first, "v/src/sha1_round.v", 27, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "f[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[629]), first, "v/src/sha1_round.v", 27, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "f[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[630]), first, "v/src/sha1_round.v", 27, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "f[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[631]), first, "v/src/sha1_round.v", 27, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "f[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[632]), first, "v/src/sha1_round.v", 27, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "f[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[633]), first, "v/src/sha1_round.v", 27, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "f[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[634]), first, "v/src/sha1_round.v", 27, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "f[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[635]), first, "v/src/sha1_round.v", 27, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "f[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[636]), first, "v/src/sha1_round.v", 27, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "f[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[637]), first, "v/src/sha1_round.v", 27, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "f[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[638]), first, "v/src/sha1_round.v", 27, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "f[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[639]), first, "v/src/sha1_round.v", 27, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "f[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[640]), first, "v/src/sha1_round.v", 27, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "f[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[641]), first, "v/src/sha1_round.v", 27, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "f[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[642]), first, "v/src/sha1_round.v", 27, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "f[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[643]), first, "v/src/sha1_round.v", 27, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "f[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[644]), first, "v/src/sha1_round.v", 27, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "f[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[645]), first, "v/src/sha1_round.v", 27, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "f[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[646]), first, "v/src/sha1_round.v", 27, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "f[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[647]), first, "v/src/sha1_round.v", 27, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "f[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[648]), first, "v/src/sha1_round.v", 27, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "f[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[649]), first, "v/src/sha1_round.v", 27, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "f[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[650]), first, "v/src/sha1_round.v", 27, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "f[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[651]), first, "v/src/sha1_round.v", 27, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "f[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[652]), first, "v/src/sha1_round.v", 28, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "k[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[653]), first, "v/src/sha1_round.v", 28, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "k[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[654]), first, "v/src/sha1_round.v", 28, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "k[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[655]), first, "v/src/sha1_round.v", 28, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "k[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[656]), first, "v/src/sha1_round.v", 28, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "k[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[657]), first, "v/src/sha1_round.v", 28, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "k[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[658]), first, "v/src/sha1_round.v", 28, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "k[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[659]), first, "v/src/sha1_round.v", 28, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "k[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[660]), first, "v/src/sha1_round.v", 28, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "k[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[661]), first, "v/src/sha1_round.v", 28, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "k[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[662]), first, "v/src/sha1_round.v", 28, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "k[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[663]), first, "v/src/sha1_round.v", 28, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "k[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[664]), first, "v/src/sha1_round.v", 28, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "k[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[665]), first, "v/src/sha1_round.v", 28, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "k[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[666]), first, "v/src/sha1_round.v", 28, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "k[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[667]), first, "v/src/sha1_round.v", 28, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "k[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[668]), first, "v/src/sha1_round.v", 28, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "k[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[669]), first, "v/src/sha1_round.v", 28, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "k[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[670]), first, "v/src/sha1_round.v", 28, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "k[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[671]), first, "v/src/sha1_round.v", 28, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "k[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[672]), first, "v/src/sha1_round.v", 28, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "k[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[673]), first, "v/src/sha1_round.v", 28, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "k[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[674]), first, "v/src/sha1_round.v", 28, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "k[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[675]), first, "v/src/sha1_round.v", 28, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "k[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[676]), first, "v/src/sha1_round.v", 28, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "k[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[677]), first, "v/src/sha1_round.v", 28, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "k[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[678]), first, "v/src/sha1_round.v", 28, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "k[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[679]), first, "v/src/sha1_round.v", 28, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "k[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[680]), first, "v/src/sha1_round.v", 28, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "k[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[681]), first, "v/src/sha1_round.v", 28, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "k[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[682]), first, "v/src/sha1_round.v", 28, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "k[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[683]), first, "v/src/sha1_round.v", 28, 18, ".sha1_top.u_round", "v_toggle/sha1_round", "k[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[684]), first, "v/src/sha1_round.v", 29, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a_shift[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[685]), first, "v/src/sha1_round.v", 29, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a_shift[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[686]), first, "v/src/sha1_round.v", 29, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a_shift[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[687]), first, "v/src/sha1_round.v", 29, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a_shift[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[688]), first, "v/src/sha1_round.v", 29, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a_shift[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[689]), first, "v/src/sha1_round.v", 29, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a_shift[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[690]), first, "v/src/sha1_round.v", 29, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a_shift[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[691]), first, "v/src/sha1_round.v", 29, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a_shift[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[692]), first, "v/src/sha1_round.v", 29, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a_shift[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[693]), first, "v/src/sha1_round.v", 29, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a_shift[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[694]), first, "v/src/sha1_round.v", 29, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a_shift[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[695]), first, "v/src/sha1_round.v", 29, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a_shift[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[696]), first, "v/src/sha1_round.v", 29, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a_shift[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[697]), first, "v/src/sha1_round.v", 29, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a_shift[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[698]), first, "v/src/sha1_round.v", 29, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a_shift[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[699]), first, "v/src/sha1_round.v", 29, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a_shift[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[700]), first, "v/src/sha1_round.v", 29, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a_shift[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[701]), first, "v/src/sha1_round.v", 29, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a_shift[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[702]), first, "v/src/sha1_round.v", 29, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a_shift[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[703]), first, "v/src/sha1_round.v", 29, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a_shift[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[704]), first, "v/src/sha1_round.v", 29, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a_shift[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[705]), first, "v/src/sha1_round.v", 29, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a_shift[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[706]), first, "v/src/sha1_round.v", 29, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a_shift[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[707]), first, "v/src/sha1_round.v", 29, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a_shift[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[708]), first, "v/src/sha1_round.v", 29, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a_shift[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[709]), first, "v/src/sha1_round.v", 29, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a_shift[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[710]), first, "v/src/sha1_round.v", 29, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a_shift[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[711]), first, "v/src/sha1_round.v", 29, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a_shift[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[712]), first, "v/src/sha1_round.v", 29, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a_shift[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[713]), first, "v/src/sha1_round.v", 29, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a_shift[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[714]), first, "v/src/sha1_round.v", 29, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a_shift[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[715]), first, "v/src/sha1_round.v", 29, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a_shift[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[716]), first, "v/src/sha1_round.v", 29, 28, ".sha1_top.u_round", "v_toggle/sha1_round", "b_shift[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[717]), first, "v/src/sha1_round.v", 29, 28, ".sha1_top.u_round", "v_toggle/sha1_round", "b_shift[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[718]), first, "v/src/sha1_round.v", 29, 28, ".sha1_top.u_round", "v_toggle/sha1_round", "b_shift[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[719]), first, "v/src/sha1_round.v", 29, 28, ".sha1_top.u_round", "v_toggle/sha1_round", "b_shift[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[720]), first, "v/src/sha1_round.v", 29, 28, ".sha1_top.u_round", "v_toggle/sha1_round", "b_shift[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[721]), first, "v/src/sha1_round.v", 29, 28, ".sha1_top.u_round", "v_toggle/sha1_round", "b_shift[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[722]), first, "v/src/sha1_round.v", 29, 28, ".sha1_top.u_round", "v_toggle/sha1_round", "b_shift[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[723]), first, "v/src/sha1_round.v", 29, 28, ".sha1_top.u_round", "v_toggle/sha1_round", "b_shift[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[724]), first, "v/src/sha1_round.v", 29, 28, ".sha1_top.u_round", "v_toggle/sha1_round", "b_shift[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[725]), first, "v/src/sha1_round.v", 29, 28, ".sha1_top.u_round", "v_toggle/sha1_round", "b_shift[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[726]), first, "v/src/sha1_round.v", 29, 28, ".sha1_top.u_round", "v_toggle/sha1_round", "b_shift[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[727]), first, "v/src/sha1_round.v", 29, 28, ".sha1_top.u_round", "v_toggle/sha1_round", "b_shift[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[728]), first, "v/src/sha1_round.v", 29, 28, ".sha1_top.u_round", "v_toggle/sha1_round", "b_shift[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[729]), first, "v/src/sha1_round.v", 29, 28, ".sha1_top.u_round", "v_toggle/sha1_round", "b_shift[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[730]), first, "v/src/sha1_round.v", 29, 28, ".sha1_top.u_round", "v_toggle/sha1_round", "b_shift[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[731]), first, "v/src/sha1_round.v", 29, 28, ".sha1_top.u_round", "v_toggle/sha1_round", "b_shift[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[732]), first, "v/src/sha1_round.v", 29, 28, ".sha1_top.u_round", "v_toggle/sha1_round", "b_shift[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[733]), first, "v/src/sha1_round.v", 29, 28, ".sha1_top.u_round", "v_toggle/sha1_round", "b_shift[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[734]), first, "v/src/sha1_round.v", 29, 28, ".sha1_top.u_round", "v_toggle/sha1_round", "b_shift[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[735]), first, "v/src/sha1_round.v", 29, 28, ".sha1_top.u_round", "v_toggle/sha1_round", "b_shift[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[736]), first, "v/src/sha1_round.v", 29, 28, ".sha1_top.u_round", "v_toggle/sha1_round", "b_shift[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[737]), first, "v/src/sha1_round.v", 29, 28, ".sha1_top.u_round", "v_toggle/sha1_round", "b_shift[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[738]), first, "v/src/sha1_round.v", 29, 28, ".sha1_top.u_round", "v_toggle/sha1_round", "b_shift[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[739]), first, "v/src/sha1_round.v", 29, 28, ".sha1_top.u_round", "v_toggle/sha1_round", "b_shift[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[740]), first, "v/src/sha1_round.v", 29, 28, ".sha1_top.u_round", "v_toggle/sha1_round", "b_shift[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[741]), first, "v/src/sha1_round.v", 29, 28, ".sha1_top.u_round", "v_toggle/sha1_round", "b_shift[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[742]), first, "v/src/sha1_round.v", 29, 28, ".sha1_top.u_round", "v_toggle/sha1_round", "b_shift[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[743]), first, "v/src/sha1_round.v", 29, 28, ".sha1_top.u_round", "v_toggle/sha1_round", "b_shift[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[744]), first, "v/src/sha1_round.v", 29, 28, ".sha1_top.u_round", "v_toggle/sha1_round", "b_shift[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[745]), first, "v/src/sha1_round.v", 29, 28, ".sha1_top.u_round", "v_toggle/sha1_round", "b_shift[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[746]), first, "v/src/sha1_round.v", 29, 28, ".sha1_top.u_round", "v_toggle/sha1_round", "b_shift[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[747]), first, "v/src/sha1_round.v", 29, 28, ".sha1_top.u_round", "v_toggle/sha1_round", "b_shift[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[748]), first, "v/src/sha1_round.v", 29, 37, ".sha1_top.u_round", "v_toggle/sha1_round", "add_result[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[749]), first, "v/src/sha1_round.v", 29, 37, ".sha1_top.u_round", "v_toggle/sha1_round", "add_result[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[750]), first, "v/src/sha1_round.v", 29, 37, ".sha1_top.u_round", "v_toggle/sha1_round", "add_result[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[751]), first, "v/src/sha1_round.v", 29, 37, ".sha1_top.u_round", "v_toggle/sha1_round", "add_result[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[752]), first, "v/src/sha1_round.v", 29, 37, ".sha1_top.u_round", "v_toggle/sha1_round", "add_result[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[753]), first, "v/src/sha1_round.v", 29, 37, ".sha1_top.u_round", "v_toggle/sha1_round", "add_result[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[754]), first, "v/src/sha1_round.v", 29, 37, ".sha1_top.u_round", "v_toggle/sha1_round", "add_result[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[755]), first, "v/src/sha1_round.v", 29, 37, ".sha1_top.u_round", "v_toggle/sha1_round", "add_result[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[756]), first, "v/src/sha1_round.v", 29, 37, ".sha1_top.u_round", "v_toggle/sha1_round", "add_result[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[757]), first, "v/src/sha1_round.v", 29, 37, ".sha1_top.u_round", "v_toggle/sha1_round", "add_result[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[758]), first, "v/src/sha1_round.v", 29, 37, ".sha1_top.u_round", "v_toggle/sha1_round", "add_result[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[759]), first, "v/src/sha1_round.v", 29, 37, ".sha1_top.u_round", "v_toggle/sha1_round", "add_result[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[760]), first, "v/src/sha1_round.v", 29, 37, ".sha1_top.u_round", "v_toggle/sha1_round", "add_result[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[761]), first, "v/src/sha1_round.v", 29, 37, ".sha1_top.u_round", "v_toggle/sha1_round", "add_result[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[762]), first, "v/src/sha1_round.v", 29, 37, ".sha1_top.u_round", "v_toggle/sha1_round", "add_result[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[763]), first, "v/src/sha1_round.v", 29, 37, ".sha1_top.u_round", "v_toggle/sha1_round", "add_result[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[764]), first, "v/src/sha1_round.v", 29, 37, ".sha1_top.u_round", "v_toggle/sha1_round", "add_result[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[765]), first, "v/src/sha1_round.v", 29, 37, ".sha1_top.u_round", "v_toggle/sha1_round", "add_result[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[766]), first, "v/src/sha1_round.v", 29, 37, ".sha1_top.u_round", "v_toggle/sha1_round", "add_result[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[767]), first, "v/src/sha1_round.v", 29, 37, ".sha1_top.u_round", "v_toggle/sha1_round", "add_result[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[768]), first, "v/src/sha1_round.v", 29, 37, ".sha1_top.u_round", "v_toggle/sha1_round", "add_result[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[769]), first, "v/src/sha1_round.v", 29, 37, ".sha1_top.u_round", "v_toggle/sha1_round", "add_result[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[770]), first, "v/src/sha1_round.v", 29, 37, ".sha1_top.u_round", "v_toggle/sha1_round", "add_result[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[771]), first, "v/src/sha1_round.v", 29, 37, ".sha1_top.u_round", "v_toggle/sha1_round", "add_result[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[772]), first, "v/src/sha1_round.v", 29, 37, ".sha1_top.u_round", "v_toggle/sha1_round", "add_result[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[773]), first, "v/src/sha1_round.v", 29, 37, ".sha1_top.u_round", "v_toggle/sha1_round", "add_result[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[774]), first, "v/src/sha1_round.v", 29, 37, ".sha1_top.u_round", "v_toggle/sha1_round", "add_result[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[775]), first, "v/src/sha1_round.v", 29, 37, ".sha1_top.u_round", "v_toggle/sha1_round", "add_result[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[776]), first, "v/src/sha1_round.v", 29, 37, ".sha1_top.u_round", "v_toggle/sha1_round", "add_result[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[777]), first, "v/src/sha1_round.v", 29, 37, ".sha1_top.u_round", "v_toggle/sha1_round", "add_result[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[778]), first, "v/src/sha1_round.v", 29, 37, ".sha1_top.u_round", "v_toggle/sha1_round", "add_result[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[779]), first, "v/src/sha1_round.v", 29, 37, ".sha1_top.u_round", "v_toggle/sha1_round", "add_result[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[492]), first, "v/src/sha1_round.v", 30, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[493]), first, "v/src/sha1_round.v", 30, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[494]), first, "v/src/sha1_round.v", 30, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[495]), first, "v/src/sha1_round.v", 30, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[496]), first, "v/src/sha1_round.v", 30, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[497]), first, "v/src/sha1_round.v", 30, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[498]), first, "v/src/sha1_round.v", 30, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[499]), first, "v/src/sha1_round.v", 30, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[500]), first, "v/src/sha1_round.v", 30, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[501]), first, "v/src/sha1_round.v", 30, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[502]), first, "v/src/sha1_round.v", 30, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[503]), first, "v/src/sha1_round.v", 30, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[504]), first, "v/src/sha1_round.v", 30, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[505]), first, "v/src/sha1_round.v", 30, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[506]), first, "v/src/sha1_round.v", 30, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[507]), first, "v/src/sha1_round.v", 30, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[508]), first, "v/src/sha1_round.v", 30, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[509]), first, "v/src/sha1_round.v", 30, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[510]), first, "v/src/sha1_round.v", 30, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "v/src/sha1_round.v", 30, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[512]), first, "v/src/sha1_round.v", 30, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[513]), first, "v/src/sha1_round.v", 30, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[514]), first, "v/src/sha1_round.v", 30, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[515]), first, "v/src/sha1_round.v", 30, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[516]), first, "v/src/sha1_round.v", 30, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[517]), first, "v/src/sha1_round.v", 30, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[518]), first, "v/src/sha1_round.v", 30, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[519]), first, "v/src/sha1_round.v", 30, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "v/src/sha1_round.v", 30, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[521]), first, "v/src/sha1_round.v", 30, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[522]), first, "v/src/sha1_round.v", 30, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[523]), first, "v/src/sha1_round.v", 30, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "a[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[460]), first, "v/src/sha1_round.v", 31, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[461]), first, "v/src/sha1_round.v", 31, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[462]), first, "v/src/sha1_round.v", 31, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[463]), first, "v/src/sha1_round.v", 31, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[464]), first, "v/src/sha1_round.v", 31, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "b[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[465]), first, "v/src/sha1_round.v", 31, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "b[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[466]), first, "v/src/sha1_round.v", 31, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "b[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[467]), first, "v/src/sha1_round.v", 31, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "b[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[468]), first, "v/src/sha1_round.v", 31, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "b[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[469]), first, "v/src/sha1_round.v", 31, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "b[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[470]), first, "v/src/sha1_round.v", 31, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "b[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[471]), first, "v/src/sha1_round.v", 31, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "b[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[472]), first, "v/src/sha1_round.v", 31, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "b[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[473]), first, "v/src/sha1_round.v", 31, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "b[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[474]), first, "v/src/sha1_round.v", 31, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "b[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[475]), first, "v/src/sha1_round.v", 31, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "b[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[476]), first, "v/src/sha1_round.v", 31, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "b[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[477]), first, "v/src/sha1_round.v", 31, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "b[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[478]), first, "v/src/sha1_round.v", 31, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "b[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[479]), first, "v/src/sha1_round.v", 31, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "b[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[480]), first, "v/src/sha1_round.v", 31, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "b[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[481]), first, "v/src/sha1_round.v", 31, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "b[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[482]), first, "v/src/sha1_round.v", 31, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "b[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[483]), first, "v/src/sha1_round.v", 31, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "b[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[484]), first, "v/src/sha1_round.v", 31, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "b[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[485]), first, "v/src/sha1_round.v", 31, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "b[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[486]), first, "v/src/sha1_round.v", 31, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "b[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[487]), first, "v/src/sha1_round.v", 31, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "b[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[488]), first, "v/src/sha1_round.v", 31, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "b[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[489]), first, "v/src/sha1_round.v", 31, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "b[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[490]), first, "v/src/sha1_round.v", 31, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "b[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[491]), first, "v/src/sha1_round.v", 31, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "b[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[428]), first, "v/src/sha1_round.v", 32, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "c[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[429]), first, "v/src/sha1_round.v", 32, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "c[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[430]), first, "v/src/sha1_round.v", 32, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "c[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[431]), first, "v/src/sha1_round.v", 32, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "c[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[432]), first, "v/src/sha1_round.v", 32, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "c[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[433]), first, "v/src/sha1_round.v", 32, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "c[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[434]), first, "v/src/sha1_round.v", 32, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "c[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[435]), first, "v/src/sha1_round.v", 32, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "c[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[436]), first, "v/src/sha1_round.v", 32, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "c[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[437]), first, "v/src/sha1_round.v", 32, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "c[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[438]), first, "v/src/sha1_round.v", 32, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "c[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[439]), first, "v/src/sha1_round.v", 32, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "c[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[440]), first, "v/src/sha1_round.v", 32, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "c[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[441]), first, "v/src/sha1_round.v", 32, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "c[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[442]), first, "v/src/sha1_round.v", 32, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "c[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[443]), first, "v/src/sha1_round.v", 32, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "c[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[444]), first, "v/src/sha1_round.v", 32, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "c[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[445]), first, "v/src/sha1_round.v", 32, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "c[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[446]), first, "v/src/sha1_round.v", 32, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "c[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[447]), first, "v/src/sha1_round.v", 32, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "c[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[448]), first, "v/src/sha1_round.v", 32, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "c[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[449]), first, "v/src/sha1_round.v", 32, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "c[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[450]), first, "v/src/sha1_round.v", 32, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "c[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[451]), first, "v/src/sha1_round.v", 32, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "c[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[452]), first, "v/src/sha1_round.v", 32, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "c[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[453]), first, "v/src/sha1_round.v", 32, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "c[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[454]), first, "v/src/sha1_round.v", 32, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "c[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[455]), first, "v/src/sha1_round.v", 32, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "c[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[456]), first, "v/src/sha1_round.v", 32, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "c[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[457]), first, "v/src/sha1_round.v", 32, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "c[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[458]), first, "v/src/sha1_round.v", 32, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "c[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[459]), first, "v/src/sha1_round.v", 32, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "c[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[396]), first, "v/src/sha1_round.v", 33, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[397]), first, "v/src/sha1_round.v", 33, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[398]), first, "v/src/sha1_round.v", 33, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "d[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[399]), first, "v/src/sha1_round.v", 33, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "d[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[400]), first, "v/src/sha1_round.v", 33, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "d[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[401]), first, "v/src/sha1_round.v", 33, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "d[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[402]), first, "v/src/sha1_round.v", 33, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "d[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[403]), first, "v/src/sha1_round.v", 33, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "d[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[404]), first, "v/src/sha1_round.v", 33, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "d[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[405]), first, "v/src/sha1_round.v", 33, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "d[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[406]), first, "v/src/sha1_round.v", 33, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "d[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[407]), first, "v/src/sha1_round.v", 33, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "d[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[408]), first, "v/src/sha1_round.v", 33, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "d[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[409]), first, "v/src/sha1_round.v", 33, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "d[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[410]), first, "v/src/sha1_round.v", 33, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "d[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[411]), first, "v/src/sha1_round.v", 33, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "d[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[412]), first, "v/src/sha1_round.v", 33, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "d[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[413]), first, "v/src/sha1_round.v", 33, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "d[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[414]), first, "v/src/sha1_round.v", 33, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "d[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[415]), first, "v/src/sha1_round.v", 33, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "d[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[416]), first, "v/src/sha1_round.v", 33, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "d[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[417]), first, "v/src/sha1_round.v", 33, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "d[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[418]), first, "v/src/sha1_round.v", 33, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "d[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[419]), first, "v/src/sha1_round.v", 33, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "d[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[420]), first, "v/src/sha1_round.v", 33, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "d[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[421]), first, "v/src/sha1_round.v", 33, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "d[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[422]), first, "v/src/sha1_round.v", 33, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "d[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[423]), first, "v/src/sha1_round.v", 33, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "d[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[424]), first, "v/src/sha1_round.v", 33, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "d[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[425]), first, "v/src/sha1_round.v", 33, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "d[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[426]), first, "v/src/sha1_round.v", 33, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "d[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[427]), first, "v/src/sha1_round.v", 33, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "d[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[364]), first, "v/src/sha1_round.v", 34, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "e[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[365]), first, "v/src/sha1_round.v", 34, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "e[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[366]), first, "v/src/sha1_round.v", 34, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "e[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[367]), first, "v/src/sha1_round.v", 34, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "e[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[368]), first, "v/src/sha1_round.v", 34, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "e[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[369]), first, "v/src/sha1_round.v", 34, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "e[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[370]), first, "v/src/sha1_round.v", 34, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "e[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[371]), first, "v/src/sha1_round.v", 34, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "e[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[372]), first, "v/src/sha1_round.v", 34, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "e[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[373]), first, "v/src/sha1_round.v", 34, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "e[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[374]), first, "v/src/sha1_round.v", 34, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "e[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[375]), first, "v/src/sha1_round.v", 34, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "e[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[376]), first, "v/src/sha1_round.v", 34, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "e[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[377]), first, "v/src/sha1_round.v", 34, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "e[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[378]), first, "v/src/sha1_round.v", 34, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "e[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[379]), first, "v/src/sha1_round.v", 34, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "e[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[380]), first, "v/src/sha1_round.v", 34, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "e[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[381]), first, "v/src/sha1_round.v", 34, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "e[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[382]), first, "v/src/sha1_round.v", 34, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "e[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[383]), first, "v/src/sha1_round.v", 34, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "e[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[384]), first, "v/src/sha1_round.v", 34, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "e[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[385]), first, "v/src/sha1_round.v", 34, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "e[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[386]), first, "v/src/sha1_round.v", 34, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "e[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[387]), first, "v/src/sha1_round.v", 34, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "e[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[388]), first, "v/src/sha1_round.v", 34, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "e[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[389]), first, "v/src/sha1_round.v", 34, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "e[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[390]), first, "v/src/sha1_round.v", 34, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "e[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[391]), first, "v/src/sha1_round.v", 34, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "e[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[392]), first, "v/src/sha1_round.v", 34, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "e[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[393]), first, "v/src/sha1_round.v", 34, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "e[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[394]), first, "v/src/sha1_round.v", 34, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "e[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[395]), first, "v/src/sha1_round.v", 34, 19, ".sha1_top.u_round", "v_toggle/sha1_round", "e[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[780]), first, "v/src/sha1_round.v", 38, 9, ".sha1_top.u_round", "v_branch/sha1_round", "if", "38");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[781]), first, "v/src/sha1_round.v", 38, 10, ".sha1_top.u_round", "v_branch/sha1_round", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[782]), first, "v/src/sha1_round.v", 39, 9, ".sha1_top.u_round", "v_branch/sha1_round", "if", "39");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[783]), first, "v/src/sha1_round.v", 39, 10, ".sha1_top.u_round", "v_branch/sha1_round", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[784]), first, "v/src/sha1_round.v", 40, 9, ".sha1_top.u_round", "v_branch/sha1_round", "if", "40");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[785]), first, "v/src/sha1_round.v", 40, 10, ".sha1_top.u_round", "v_branch/sha1_round", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[786]), first, "v/src/sha1_round.v", 41, 9, ".sha1_top.u_round", "v_branch/sha1_round", "if", "41");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[787]), first, "v/src/sha1_round.v", 41, 10, ".sha1_top.u_round", "v_branch/sha1_round", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[788]), first, "v/src/sha1_round.v", 36, 5, ".sha1_top.u_round", "v_line/sha1_round", "block", "36-37");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[789]), first, "v/src/sha1_round.v", 46, 9, ".sha1_top.u_round", "v_branch/sha1_round", "if", "46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[790]), first, "v/src/sha1_round.v", 46, 10, ".sha1_top.u_round", "v_branch/sha1_round", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[791]), first, "v/src/sha1_round.v", 47, 9, ".sha1_top.u_round", "v_branch/sha1_round", "if", "47");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[792]), first, "v/src/sha1_round.v", 47, 10, ".sha1_top.u_round", "v_branch/sha1_round", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[793]), first, "v/src/sha1_round.v", 48, 9, ".sha1_top.u_round", "v_branch/sha1_round", "if", "48");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[794]), first, "v/src/sha1_round.v", 48, 10, ".sha1_top.u_round", "v_branch/sha1_round", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[795]), first, "v/src/sha1_round.v", 49, 9, ".sha1_top.u_round", "v_branch/sha1_round", "if", "49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[796]), first, "v/src/sha1_round.v", 49, 10, ".sha1_top.u_round", "v_branch/sha1_round", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[797]), first, "v/src/sha1_round.v", 44, 5, ".sha1_top.u_round", "v_line/sha1_round", "block", "44-45");
}

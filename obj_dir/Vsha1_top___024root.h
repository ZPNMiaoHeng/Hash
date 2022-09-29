// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsha1_top.h for the primary calling header

#ifndef VERILATED_VSHA1_TOP___024ROOT_H_
#define VERILATED_VSHA1_TOP___024ROOT_H_  // guard

#include "verilated_heavy.h"
#include "verilated_cov.h"

//==========

class Vsha1_top__Syms;
class Vsha1_top_VerilatedVcd;


//----------

VL_MODULE(Vsha1_top___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(valid,0,0);
    VL_OUT8(ready,0,0);
    VL_INW(din,511,0,16);
    VL_OUTW(dout,159,0,5);

    // LOCAL SIGNALS
    CData/*7:0*/ sha1_top__DOT__u_con__DOT__t_tem;
    CData/*1:0*/ sha1_top__DOT__u_con__DOT__s_cur;
    CData/*1:0*/ sha1_top__DOT__u_con__DOT__s_next;
    IData/*31:0*/ sha1_top__DOT__w_temp;
    VlWide<5>/*159:0*/ sha1_top__DOT__r_din_temp;
    VlWide<5>/*159:0*/ sha1_top__DOT__r_din;
    VlWide<16>/*511:0*/ sha1_top__DOT__u_w__DOT__din_temp;
    VlWide<16>/*511:0*/ sha1_top__DOT__u_w__DOT__din_temp_shift;
    IData/*31:0*/ sha1_top__DOT__u_w__DOT__w_gen_temp;
    IData/*31:0*/ sha1_top__DOT__u_w__DOT__w_gen;
    IData/*31:0*/ sha1_top__DOT__u_round__DOT__f;
    IData/*31:0*/ sha1_top__DOT__u_round__DOT__k;
    IData/*31:0*/ sha1_top__DOT__u_round__DOT__a_shift;
    IData/*31:0*/ sha1_top__DOT__u_round__DOT__b_shift;
    IData/*31:0*/ sha1_top__DOT__u_round__DOT__add_result;

    // LOCAL VARIABLES
    CData/*0:0*/ sha1_top__DOT____Vtogcov__clk;
    CData/*0:0*/ sha1_top__DOT____Vtogcov__rst_n;
    CData/*0:0*/ sha1_top__DOT____Vtogcov__valid;
    CData/*0:0*/ sha1_top__DOT____Vtogcov__ready;
    CData/*7:0*/ sha1_top__DOT____Vtogcov__t;
    CData/*1:0*/ sha1_top__DOT__u_con__DOT____Vtogcov__s_cur;
    CData/*1:0*/ sha1_top__DOT__u_con__DOT____Vtogcov__s_next;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst_n;
    VlWide<5>/*159:0*/ sha1_top__DOT____Vtogcov__dout;
    IData/*31:0*/ sha1_top__DOT____Vtogcov__w_temp;
    VlWide<5>/*159:0*/ sha1_top__DOT____Vtogcov__r_din_temp;
    VlWide<5>/*159:0*/ sha1_top__DOT____Vtogcov__r_din;
    IData/*31:0*/ sha1_top__DOT__u_w__DOT____Vtogcov__w_gen_temp;
    IData/*31:0*/ sha1_top__DOT__u_w__DOT____Vtogcov__w_gen;
    IData/*31:0*/ sha1_top__DOT__u_round__DOT____Vtogcov__f;
    IData/*31:0*/ sha1_top__DOT__u_round__DOT____Vtogcov__k;
    IData/*31:0*/ sha1_top__DOT__u_round__DOT____Vtogcov__a_shift;
    IData/*31:0*/ sha1_top__DOT__u_round__DOT____Vtogcov__b_shift;
    IData/*31:0*/ sha1_top__DOT__u_round__DOT____Vtogcov__add_result;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vsha1_top__Syms* vlSymsp;  // Symbol table
    // Coverage
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vsha1_top___024root);  ///< Copying not allowed
  public:
    Vsha1_top___024root(const char* name);
    ~Vsha1_top___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vsha1_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard

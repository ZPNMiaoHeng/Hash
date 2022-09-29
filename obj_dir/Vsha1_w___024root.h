// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsha1_w.h for the primary calling header

#ifndef VERILATED_VSHA1_W___024ROOT_H_
#define VERILATED_VSHA1_W___024ROOT_H_  // guard

#include "verilated_heavy.h"
#include "verilated_cov.h"

//==========

class Vsha1_w__Syms;
class Vsha1_w_VerilatedVcd;


//----------

VL_MODULE(Vsha1_w___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(valid_w,0,0);
    VL_IN8(t,7,0);
    VL_OUT8(ready_w,0,0);
    VL_INW(din,511,0,16);
    VL_OUT(w,31,0);

    // LOCAL SIGNALS
    VlWide<16>/*511:0*/ sha1_w__DOT__din_temp;
    VlWide<16>/*511:0*/ sha1_w__DOT__din_temp_shift;
    IData/*31:0*/ sha1_w__DOT__w_gen_temp;
    IData/*31:0*/ sha1_w__DOT__w_gen;

    // LOCAL VARIABLES
    CData/*0:0*/ sha1_w__DOT____Vtogcov__clk;
    CData/*0:0*/ sha1_w__DOT____Vtogcov__rst_n;
    CData/*0:0*/ sha1_w__DOT____Vtogcov__valid_w;
    CData/*7:0*/ sha1_w__DOT____Vtogcov__t;
    CData/*0:0*/ sha1_w__DOT____Vtogcov__ready_w;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst_n;
    IData/*31:0*/ sha1_w__DOT____Vtogcov__w;
    IData/*31:0*/ sha1_w__DOT____Vtogcov__w_gen_temp;
    IData/*31:0*/ sha1_w__DOT____Vtogcov__w_gen;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vsha1_w__Syms* vlSymsp;  // Symbol table
    // Coverage
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vsha1_w___024root);  ///< Copying not allowed
  public:
    Vsha1_w___024root(const char* name);
    ~Vsha1_w___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vsha1_w__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsha1_round.h for the primary calling header

#ifndef VERILATED_VSHA1_ROUND___024ROOT_H_
#define VERILATED_VSHA1_ROUND___024ROOT_H_  // guard

#include "verilated_heavy.h"
#include "verilated_cov.h"

//==========

class Vsha1_round__Syms;
class Vsha1_round_VerilatedVcd;


//----------

VL_MODULE(Vsha1_round___024root) {
  public:

    // PORTS
    VL_IN8(round,7,0);
    VL_INW(din,159,0,5);
    VL_IN(w,31,0);
    VL_OUTW(dout,159,0,5);

    // LOCAL SIGNALS
    IData/*31:0*/ sha1_round__DOT__f;
    IData/*31:0*/ sha1_round__DOT__k;
    IData/*31:0*/ sha1_round__DOT__a_shift;
    IData/*31:0*/ sha1_round__DOT__b_shift;
    IData/*31:0*/ sha1_round__DOT__add_result;

    // LOCAL VARIABLES
    CData/*7:0*/ sha1_round__DOT____Vtogcov__round;
    VlWide<5>/*159:0*/ sha1_round__DOT____Vtogcov__din;
    IData/*31:0*/ sha1_round__DOT____Vtogcov__w;
    VlWide<5>/*159:0*/ sha1_round__DOT____Vtogcov__dout;
    IData/*31:0*/ sha1_round__DOT____Vtogcov__f;
    IData/*31:0*/ sha1_round__DOT____Vtogcov__k;
    IData/*31:0*/ sha1_round__DOT____Vtogcov__a_shift;
    IData/*31:0*/ sha1_round__DOT____Vtogcov__b_shift;
    IData/*31:0*/ sha1_round__DOT____Vtogcov__add_result;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vsha1_round__Syms* vlSymsp;  // Symbol table
    // Coverage
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vsha1_round___024root);  ///< Copying not allowed
  public:
    Vsha1_round___024root(const char* name);
    ~Vsha1_round___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vsha1_round__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard

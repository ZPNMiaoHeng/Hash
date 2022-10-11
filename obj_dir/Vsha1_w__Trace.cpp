// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsha1_w__Syms.h"


void Vsha1_w___024root__traceChgSub0(Vsha1_w___024root* vlSelf, VerilatedVcd* tracep);

void Vsha1_w___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vsha1_w___024root* const __restrict vlSelf = static_cast<Vsha1_w___024root*>(voidSelf);
    Vsha1_w__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vsha1_w___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

extern const VlWide<16>/*511:0*/ Vsha1_w__ConstPool__CONST_93e1b771_0;

void Vsha1_w___024root__traceChgSub0(Vsha1_w___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_w__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<16>/*511:0*/ __Vtemp32;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgWData(oldp+0,(vlSelf->sha1_w__DOT__din_temp),512);
            tracep->chgIData(oldp+16,(vlSelf->sha1_w__DOT__w_gen_temp),32);
            tracep->chgIData(oldp+17,(vlSelf->sha1_w__DOT__w_gen),32);
        }
        tracep->chgBit(oldp+18,(vlSelf->clk));
        tracep->chgBit(oldp+19,(vlSelf->rst_n));
        tracep->chgBit(oldp+20,(vlSelf->valid));
        tracep->chgCData(oldp+21,(vlSelf->round),8);
        tracep->chgWData(oldp+22,(vlSelf->din),512);
        tracep->chgIData(oldp+38,(vlSelf->w),32);
        if ((0x10U >= (IData)(vlSelf->round))) {
            __Vtemp32[0U] = vlSelf->sha1_w__DOT__din_temp[0xfU];
            __Vtemp32[1U] = vlSelf->sha1_w__DOT__din_temp[0U];
            __Vtemp32[2U] = vlSelf->sha1_w__DOT__din_temp[1U];
            __Vtemp32[3U] = vlSelf->sha1_w__DOT__din_temp[2U];
            __Vtemp32[4U] = vlSelf->sha1_w__DOT__din_temp[3U];
            __Vtemp32[5U] = vlSelf->sha1_w__DOT__din_temp[4U];
            __Vtemp32[6U] = vlSelf->sha1_w__DOT__din_temp[5U];
            __Vtemp32[7U] = vlSelf->sha1_w__DOT__din_temp[6U];
            __Vtemp32[8U] = vlSelf->sha1_w__DOT__din_temp[7U];
            __Vtemp32[9U] = vlSelf->sha1_w__DOT__din_temp[8U];
            __Vtemp32[0xaU] = vlSelf->sha1_w__DOT__din_temp[9U];
            __Vtemp32[0xbU] = vlSelf->sha1_w__DOT__din_temp[0xaU];
            __Vtemp32[0xcU] = vlSelf->sha1_w__DOT__din_temp[0xbU];
            __Vtemp32[0xdU] = vlSelf->sha1_w__DOT__din_temp[0xcU];
            __Vtemp32[0xeU] = vlSelf->sha1_w__DOT__din_temp[0xdU];
            __Vtemp32[0xfU] = vlSelf->sha1_w__DOT__din_temp[0xeU];
        } else {
            __Vtemp32[0U] = (((0x10U < (IData)(vlSelf->round)) 
                              & (0x50U >= (IData)(vlSelf->round)))
                              ? vlSelf->sha1_w__DOT__w_gen
                              : Vsha1_w__ConstPool__CONST_93e1b771_0[0U]);
            __Vtemp32[1U] = (((0x10U < (IData)(vlSelf->round)) 
                              & (0x50U >= (IData)(vlSelf->round)))
                              ? vlSelf->sha1_w__DOT__din_temp[0U]
                              : Vsha1_w__ConstPool__CONST_93e1b771_0[1U]);
            __Vtemp32[2U] = (((0x10U < (IData)(vlSelf->round)) 
                              & (0x50U >= (IData)(vlSelf->round)))
                              ? vlSelf->sha1_w__DOT__din_temp[1U]
                              : Vsha1_w__ConstPool__CONST_93e1b771_0[2U]);
            __Vtemp32[3U] = (((0x10U < (IData)(vlSelf->round)) 
                              & (0x50U >= (IData)(vlSelf->round)))
                              ? vlSelf->sha1_w__DOT__din_temp[2U]
                              : Vsha1_w__ConstPool__CONST_93e1b771_0[3U]);
            __Vtemp32[4U] = (((0x10U < (IData)(vlSelf->round)) 
                              & (0x50U >= (IData)(vlSelf->round)))
                              ? vlSelf->sha1_w__DOT__din_temp[3U]
                              : Vsha1_w__ConstPool__CONST_93e1b771_0[4U]);
            __Vtemp32[5U] = (((0x10U < (IData)(vlSelf->round)) 
                              & (0x50U >= (IData)(vlSelf->round)))
                              ? vlSelf->sha1_w__DOT__din_temp[4U]
                              : Vsha1_w__ConstPool__CONST_93e1b771_0[5U]);
            __Vtemp32[6U] = (((0x10U < (IData)(vlSelf->round)) 
                              & (0x50U >= (IData)(vlSelf->round)))
                              ? vlSelf->sha1_w__DOT__din_temp[5U]
                              : Vsha1_w__ConstPool__CONST_93e1b771_0[6U]);
            __Vtemp32[7U] = (((0x10U < (IData)(vlSelf->round)) 
                              & (0x50U >= (IData)(vlSelf->round)))
                              ? vlSelf->sha1_w__DOT__din_temp[6U]
                              : Vsha1_w__ConstPool__CONST_93e1b771_0[7U]);
            __Vtemp32[8U] = (((0x10U < (IData)(vlSelf->round)) 
                              & (0x50U >= (IData)(vlSelf->round)))
                              ? vlSelf->sha1_w__DOT__din_temp[7U]
                              : Vsha1_w__ConstPool__CONST_93e1b771_0[8U]);
            __Vtemp32[9U] = (((0x10U < (IData)(vlSelf->round)) 
                              & (0x50U >= (IData)(vlSelf->round)))
                              ? vlSelf->sha1_w__DOT__din_temp[8U]
                              : Vsha1_w__ConstPool__CONST_93e1b771_0[9U]);
            __Vtemp32[0xaU] = (((0x10U < (IData)(vlSelf->round)) 
                                & (0x50U >= (IData)(vlSelf->round)))
                                ? vlSelf->sha1_w__DOT__din_temp[9U]
                                : Vsha1_w__ConstPool__CONST_93e1b771_0[0xaU]);
            __Vtemp32[0xbU] = (((0x10U < (IData)(vlSelf->round)) 
                                & (0x50U >= (IData)(vlSelf->round)))
                                ? vlSelf->sha1_w__DOT__din_temp[0xaU]
                                : Vsha1_w__ConstPool__CONST_93e1b771_0[0xbU]);
            __Vtemp32[0xcU] = (((0x10U < (IData)(vlSelf->round)) 
                                & (0x50U >= (IData)(vlSelf->round)))
                                ? vlSelf->sha1_w__DOT__din_temp[0xbU]
                                : Vsha1_w__ConstPool__CONST_93e1b771_0[0xcU]);
            __Vtemp32[0xdU] = (((0x10U < (IData)(vlSelf->round)) 
                                & (0x50U >= (IData)(vlSelf->round)))
                                ? vlSelf->sha1_w__DOT__din_temp[0xcU]
                                : Vsha1_w__ConstPool__CONST_93e1b771_0[0xdU]);
            __Vtemp32[0xeU] = (((0x10U < (IData)(vlSelf->round)) 
                                & (0x50U >= (IData)(vlSelf->round)))
                                ? vlSelf->sha1_w__DOT__din_temp[0xdU]
                                : Vsha1_w__ConstPool__CONST_93e1b771_0[0xeU]);
            __Vtemp32[0xfU] = (((0x10U < (IData)(vlSelf->round)) 
                                & (0x50U >= (IData)(vlSelf->round)))
                                ? vlSelf->sha1_w__DOT__din_temp[0xeU]
                                : Vsha1_w__ConstPool__CONST_93e1b771_0[0xfU]);
        }
        tracep->chgWData(oldp+39,(__Vtemp32),512);
    }
}

void Vsha1_w___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vsha1_w___024root* const __restrict vlSelf = static_cast<Vsha1_w___024root*>(voidSelf);
    Vsha1_w__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsha1_w__Syms.h"


void Vsha1_w___024root__traceInitSub0(Vsha1_w___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vsha1_w___024root__traceInitTop(Vsha1_w___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_w__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vsha1_w___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vsha1_w___024root__traceInitSub0(Vsha1_w___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_w__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+19,"clk", false,-1);
        tracep->declBit(c+20,"rst_n", false,-1);
        tracep->declBit(c+21,"valid_w", false,-1);
        tracep->declBus(c+22,"t", false,-1, 7,0);
        tracep->declArray(c+23,"din", false,-1, 511,0);
        tracep->declBus(c+39,"w", false,-1, 31,0);
        tracep->declBit(c+40,"ready_w", false,-1);
        tracep->declBus(c+57,"sha1_w N", false,-1, 31,0);
        tracep->declBit(c+19,"sha1_w clk", false,-1);
        tracep->declBit(c+20,"sha1_w rst_n", false,-1);
        tracep->declBit(c+21,"sha1_w valid_w", false,-1);
        tracep->declBus(c+22,"sha1_w t", false,-1, 7,0);
        tracep->declArray(c+23,"sha1_w din", false,-1, 511,0);
        tracep->declBus(c+39,"sha1_w w", false,-1, 31,0);
        tracep->declBit(c+40,"sha1_w ready_w", false,-1);
        tracep->declArray(c+1,"sha1_w din_temp", false,-1, 511,0);
        tracep->declArray(c+41,"sha1_w din_temp_shift", false,-1, 511,0);
        tracep->declBus(c+17,"sha1_w w_gen_temp", false,-1, 31,0);
        tracep->declBus(c+18,"sha1_w w_gen", false,-1, 31,0);
    }
}

void Vsha1_w___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vsha1_w___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vsha1_w___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vsha1_w___024root__traceRegister(Vsha1_w___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_w__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vsha1_w___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vsha1_w___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vsha1_w___024root__traceCleanup, vlSelf);
    }
}

void Vsha1_w___024root__traceFullSub0(Vsha1_w___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vsha1_w___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vsha1_w___024root* const __restrict vlSelf = static_cast<Vsha1_w___024root*>(voidSelf);
    Vsha1_w__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vsha1_w___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

extern const VlWide<16>/*511:0*/ Vsha1_w__ConstPool__CONST_93e1b771_0;

void Vsha1_w___024root__traceFullSub0(Vsha1_w___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_w__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<16>/*511:0*/ __Vtemp24;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullWData(oldp+1,(vlSelf->sha1_w__DOT__din_temp),512);
        tracep->fullIData(oldp+17,(vlSelf->sha1_w__DOT__w_gen_temp),32);
        tracep->fullIData(oldp+18,(vlSelf->sha1_w__DOT__w_gen),32);
        tracep->fullBit(oldp+19,(vlSelf->clk));
        tracep->fullBit(oldp+20,(vlSelf->rst_n));
        tracep->fullBit(oldp+21,(vlSelf->valid_w));
        tracep->fullCData(oldp+22,(vlSelf->t),8);
        tracep->fullWData(oldp+23,(vlSelf->din),512);
        tracep->fullIData(oldp+39,(vlSelf->w),32);
        tracep->fullBit(oldp+40,(vlSelf->ready_w));
        if ((0xfU >= (IData)(vlSelf->t))) {
            __Vtemp24[0U] = vlSelf->sha1_w__DOT__din_temp[0xfU];
            __Vtemp24[1U] = vlSelf->sha1_w__DOT__din_temp[0U];
            __Vtemp24[2U] = vlSelf->sha1_w__DOT__din_temp[1U];
            __Vtemp24[3U] = vlSelf->sha1_w__DOT__din_temp[2U];
            __Vtemp24[4U] = vlSelf->sha1_w__DOT__din_temp[3U];
            __Vtemp24[5U] = vlSelf->sha1_w__DOT__din_temp[4U];
            __Vtemp24[6U] = vlSelf->sha1_w__DOT__din_temp[5U];
            __Vtemp24[7U] = vlSelf->sha1_w__DOT__din_temp[6U];
            __Vtemp24[8U] = vlSelf->sha1_w__DOT__din_temp[7U];
            __Vtemp24[9U] = vlSelf->sha1_w__DOT__din_temp[8U];
            __Vtemp24[0xaU] = vlSelf->sha1_w__DOT__din_temp[9U];
            __Vtemp24[0xbU] = vlSelf->sha1_w__DOT__din_temp[0xaU];
            __Vtemp24[0xcU] = vlSelf->sha1_w__DOT__din_temp[0xbU];
            __Vtemp24[0xdU] = vlSelf->sha1_w__DOT__din_temp[0xcU];
            __Vtemp24[0xeU] = vlSelf->sha1_w__DOT__din_temp[0xdU];
            __Vtemp24[0xfU] = vlSelf->sha1_w__DOT__din_temp[0xeU];
        } else {
            __Vtemp24[0U] = (((0x10U <= (IData)(vlSelf->t)) 
                              & (0x4fU >= (IData)(vlSelf->t)))
                              ? vlSelf->sha1_w__DOT__w_gen
                              : Vsha1_w__ConstPool__CONST_93e1b771_0[0U]);
            __Vtemp24[1U] = (((0x10U <= (IData)(vlSelf->t)) 
                              & (0x4fU >= (IData)(vlSelf->t)))
                              ? vlSelf->sha1_w__DOT__din_temp[0U]
                              : Vsha1_w__ConstPool__CONST_93e1b771_0[1U]);
            __Vtemp24[2U] = (((0x10U <= (IData)(vlSelf->t)) 
                              & (0x4fU >= (IData)(vlSelf->t)))
                              ? vlSelf->sha1_w__DOT__din_temp[1U]
                              : Vsha1_w__ConstPool__CONST_93e1b771_0[2U]);
            __Vtemp24[3U] = (((0x10U <= (IData)(vlSelf->t)) 
                              & (0x4fU >= (IData)(vlSelf->t)))
                              ? vlSelf->sha1_w__DOT__din_temp[2U]
                              : Vsha1_w__ConstPool__CONST_93e1b771_0[3U]);
            __Vtemp24[4U] = (((0x10U <= (IData)(vlSelf->t)) 
                              & (0x4fU >= (IData)(vlSelf->t)))
                              ? vlSelf->sha1_w__DOT__din_temp[3U]
                              : Vsha1_w__ConstPool__CONST_93e1b771_0[4U]);
            __Vtemp24[5U] = (((0x10U <= (IData)(vlSelf->t)) 
                              & (0x4fU >= (IData)(vlSelf->t)))
                              ? vlSelf->sha1_w__DOT__din_temp[4U]
                              : Vsha1_w__ConstPool__CONST_93e1b771_0[5U]);
            __Vtemp24[6U] = (((0x10U <= (IData)(vlSelf->t)) 
                              & (0x4fU >= (IData)(vlSelf->t)))
                              ? vlSelf->sha1_w__DOT__din_temp[5U]
                              : Vsha1_w__ConstPool__CONST_93e1b771_0[6U]);
            __Vtemp24[7U] = (((0x10U <= (IData)(vlSelf->t)) 
                              & (0x4fU >= (IData)(vlSelf->t)))
                              ? vlSelf->sha1_w__DOT__din_temp[6U]
                              : Vsha1_w__ConstPool__CONST_93e1b771_0[7U]);
            __Vtemp24[8U] = (((0x10U <= (IData)(vlSelf->t)) 
                              & (0x4fU >= (IData)(vlSelf->t)))
                              ? vlSelf->sha1_w__DOT__din_temp[7U]
                              : Vsha1_w__ConstPool__CONST_93e1b771_0[8U]);
            __Vtemp24[9U] = (((0x10U <= (IData)(vlSelf->t)) 
                              & (0x4fU >= (IData)(vlSelf->t)))
                              ? vlSelf->sha1_w__DOT__din_temp[8U]
                              : Vsha1_w__ConstPool__CONST_93e1b771_0[9U]);
            __Vtemp24[0xaU] = (((0x10U <= (IData)(vlSelf->t)) 
                                & (0x4fU >= (IData)(vlSelf->t)))
                                ? vlSelf->sha1_w__DOT__din_temp[9U]
                                : Vsha1_w__ConstPool__CONST_93e1b771_0[0xaU]);
            __Vtemp24[0xbU] = (((0x10U <= (IData)(vlSelf->t)) 
                                & (0x4fU >= (IData)(vlSelf->t)))
                                ? vlSelf->sha1_w__DOT__din_temp[0xaU]
                                : Vsha1_w__ConstPool__CONST_93e1b771_0[0xbU]);
            __Vtemp24[0xcU] = (((0x10U <= (IData)(vlSelf->t)) 
                                & (0x4fU >= (IData)(vlSelf->t)))
                                ? vlSelf->sha1_w__DOT__din_temp[0xbU]
                                : Vsha1_w__ConstPool__CONST_93e1b771_0[0xcU]);
            __Vtemp24[0xdU] = (((0x10U <= (IData)(vlSelf->t)) 
                                & (0x4fU >= (IData)(vlSelf->t)))
                                ? vlSelf->sha1_w__DOT__din_temp[0xcU]
                                : Vsha1_w__ConstPool__CONST_93e1b771_0[0xdU]);
            __Vtemp24[0xeU] = (((0x10U <= (IData)(vlSelf->t)) 
                                & (0x4fU >= (IData)(vlSelf->t)))
                                ? vlSelf->sha1_w__DOT__din_temp[0xdU]
                                : Vsha1_w__ConstPool__CONST_93e1b771_0[0xeU]);
            __Vtemp24[0xfU] = (((0x10U <= (IData)(vlSelf->t)) 
                                & (0x4fU >= (IData)(vlSelf->t)))
                                ? vlSelf->sha1_w__DOT__din_temp[0xeU]
                                : Vsha1_w__ConstPool__CONST_93e1b771_0[0xfU]);
        }
        tracep->fullWData(oldp+41,(__Vtemp24),512);
        tracep->fullIData(oldp+57,(0x20U),32);
    }
}

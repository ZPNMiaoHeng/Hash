// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsha1_round__Syms.h"


void Vsha1_round___024root__traceChgSub0(Vsha1_round___024root* vlSelf, VerilatedVcd* tracep);

void Vsha1_round___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vsha1_round___024root* const __restrict vlSelf = static_cast<Vsha1_round___024root*>(voidSelf);
    Vsha1_round__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vsha1_round___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vsha1_round___024root__traceChgSub0(Vsha1_round___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_round__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,(vlSelf->sha1_round__DOT__f),32);
            tracep->chgIData(oldp+1,(vlSelf->sha1_round__DOT__k),32);
            tracep->chgIData(oldp+2,(vlSelf->sha1_round__DOT__a_shift),32);
            tracep->chgIData(oldp+3,(vlSelf->sha1_round__DOT__b_shift),32);
            tracep->chgIData(oldp+4,(vlSelf->sha1_round__DOT__add_result),32);
        }
        tracep->chgWData(oldp+5,(vlSelf->din),160);
        tracep->chgIData(oldp+10,(vlSelf->w),32);
        tracep->chgCData(oldp+11,(vlSelf->round),8);
        tracep->chgWData(oldp+12,(vlSelf->dout),160);
        tracep->chgIData(oldp+17,(vlSelf->din[4U]),32);
        tracep->chgIData(oldp+18,(vlSelf->din[3U]),32);
        tracep->chgIData(oldp+19,(vlSelf->din[2U]),32);
        tracep->chgIData(oldp+20,(vlSelf->din[1U]),32);
        tracep->chgIData(oldp+21,(vlSelf->din[0U]),32);
    }
}

void Vsha1_round___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vsha1_round___024root* const __restrict vlSelf = static_cast<Vsha1_round___024root*>(voidSelf);
    Vsha1_round__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}

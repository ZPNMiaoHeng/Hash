// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsha1_round__Syms.h"


void Vsha1_round___024root__traceInitSub0(Vsha1_round___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vsha1_round___024root__traceInitTop(Vsha1_round___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_round__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vsha1_round___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vsha1_round___024root__traceInitSub0(Vsha1_round___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_round__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declArray(c+6,"din", false,-1, 159,0);
        tracep->declBus(c+11,"w", false,-1, 31,0);
        tracep->declBus(c+12,"round", false,-1, 7,0);
        tracep->declArray(c+13,"dout", false,-1, 159,0);
        tracep->declBus(c+23,"sha1_round N", false,-1, 31,0);
        tracep->declArray(c+6,"sha1_round din", false,-1, 159,0);
        tracep->declBus(c+11,"sha1_round w", false,-1, 31,0);
        tracep->declBus(c+12,"sha1_round round", false,-1, 7,0);
        tracep->declArray(c+13,"sha1_round dout", false,-1, 159,0);
        tracep->declBus(c+1,"sha1_round f", false,-1, 31,0);
        tracep->declBus(c+2,"sha1_round k", false,-1, 31,0);
        tracep->declBus(c+3,"sha1_round a_shift", false,-1, 31,0);
        tracep->declBus(c+4,"sha1_round b_shift", false,-1, 31,0);
        tracep->declBus(c+5,"sha1_round add_result", false,-1, 31,0);
        tracep->declBus(c+18,"sha1_round a", false,-1, 31,0);
        tracep->declBus(c+19,"sha1_round b", false,-1, 31,0);
        tracep->declBus(c+20,"sha1_round c", false,-1, 31,0);
        tracep->declBus(c+21,"sha1_round d", false,-1, 31,0);
        tracep->declBus(c+22,"sha1_round e", false,-1, 31,0);
    }
}

void Vsha1_round___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vsha1_round___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vsha1_round___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vsha1_round___024root__traceRegister(Vsha1_round___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_round__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vsha1_round___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vsha1_round___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vsha1_round___024root__traceCleanup, vlSelf);
    }
}

void Vsha1_round___024root__traceFullSub0(Vsha1_round___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vsha1_round___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vsha1_round___024root* const __restrict vlSelf = static_cast<Vsha1_round___024root*>(voidSelf);
    Vsha1_round__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vsha1_round___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vsha1_round___024root__traceFullSub0(Vsha1_round___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_round__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->sha1_round__DOT__f),32);
        tracep->fullIData(oldp+2,(vlSelf->sha1_round__DOT__k),32);
        tracep->fullIData(oldp+3,(vlSelf->sha1_round__DOT__a_shift),32);
        tracep->fullIData(oldp+4,(vlSelf->sha1_round__DOT__b_shift),32);
        tracep->fullIData(oldp+5,(vlSelf->sha1_round__DOT__add_result),32);
        tracep->fullWData(oldp+6,(vlSelf->din),160);
        tracep->fullIData(oldp+11,(vlSelf->w),32);
        tracep->fullCData(oldp+12,(vlSelf->round),8);
        tracep->fullWData(oldp+13,(vlSelf->dout),160);
        tracep->fullIData(oldp+18,(vlSelf->din[4U]),32);
        tracep->fullIData(oldp+19,(vlSelf->din[3U]),32);
        tracep->fullIData(oldp+20,(vlSelf->din[2U]),32);
        tracep->fullIData(oldp+21,(vlSelf->din[1U]),32);
        tracep->fullIData(oldp+22,(vlSelf->din[0U]),32);
        tracep->fullIData(oldp+23,(0x20U),32);
    }
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsha1_top__Syms.h"


void Vsha1_top___024root__traceInitSub0(Vsha1_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vsha1_top___024root__traceInitTop(Vsha1_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vsha1_top___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vsha1_top___024root__traceInitSub0(Vsha1_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+63,"clk", false,-1);
        tracep->declBit(c+64,"rst_n", false,-1);
        tracep->declBit(c+65,"valid", false,-1);
        tracep->declArray(c+66,"din", false,-1, 511,0);
        tracep->declArray(c+82,"dout", false,-1, 159,0);
        tracep->declBit(c+87,"ready", false,-1);
        tracep->declBit(c+63,"sha1_top clk", false,-1);
        tracep->declBit(c+64,"sha1_top rst_n", false,-1);
        tracep->declBit(c+65,"sha1_top valid", false,-1);
        tracep->declArray(c+66,"sha1_top din", false,-1, 511,0);
        tracep->declArray(c+82,"sha1_top dout", false,-1, 159,0);
        tracep->declBit(c+87,"sha1_top ready", false,-1);
        tracep->declBus(c+89,"sha1_top H0", false,-1, 31,0);
        tracep->declBus(c+90,"sha1_top H1", false,-1, 31,0);
        tracep->declBus(c+91,"sha1_top H2", false,-1, 31,0);
        tracep->declBus(c+92,"sha1_top H3", false,-1, 31,0);
        tracep->declBus(c+93,"sha1_top H4", false,-1, 31,0);
        tracep->declBus(c+1,"sha1_top t", false,-1, 7,0);
        tracep->declBus(c+2,"sha1_top w_temp", false,-1, 31,0);
        tracep->declBus(c+3,"sha1_top a_temp", false,-1, 31,0);
        tracep->declBus(c+4,"sha1_top b_temp", false,-1, 31,0);
        tracep->declBus(c+5,"sha1_top c_temp", false,-1, 31,0);
        tracep->declBus(c+6,"sha1_top d_temp", false,-1, 31,0);
        tracep->declBus(c+7,"sha1_top e_temp", false,-1, 31,0);
        tracep->declArray(c+8,"sha1_top r_din_temp", false,-1, 159,0);
        tracep->declArray(c+13,"sha1_top r_din", false,-1, 159,0);
        tracep->declBit(c+63,"sha1_top u_con clk", false,-1);
        tracep->declBit(c+64,"sha1_top u_con rst_n", false,-1);
        tracep->declBit(c+65,"sha1_top u_con valid", false,-1);
        tracep->declBus(c+1,"sha1_top u_con t", false,-1, 7,0);
        tracep->declBit(c+87,"sha1_top u_con ready_t", false,-1);
        tracep->declBus(c+94,"sha1_top u_con IDLE", false,-1, 1,0);
        tracep->declBus(c+95,"sha1_top u_con ROUND", false,-1, 1,0);
        tracep->declBus(c+1,"sha1_top u_con t_tem", false,-1, 7,0);
        tracep->declBus(c+18,"sha1_top u_con s_cur", false,-1, 1,0);
        tracep->declBus(c+88,"sha1_top u_con s_next", false,-1, 1,0);
        tracep->declBus(c+96,"sha1_top u_w N", false,-1, 31,0);
        tracep->declBit(c+63,"sha1_top u_w clk", false,-1);
        tracep->declBit(c+64,"sha1_top u_w rst_n", false,-1);
        tracep->declBit(c+65,"sha1_top u_w valid_w", false,-1);
        tracep->declBus(c+1,"sha1_top u_w t", false,-1, 7,0);
        tracep->declArray(c+66,"sha1_top u_w din", false,-1, 511,0);
        tracep->declBus(c+2,"sha1_top u_w w", false,-1, 31,0);
        tracep->declArray(c+19,"sha1_top u_w din_temp", false,-1, 511,0);
        tracep->declArray(c+35,"sha1_top u_w din_temp_shift", false,-1, 511,0);
        tracep->declBus(c+51,"sha1_top u_w w_gen_temp", false,-1, 31,0);
        tracep->declBus(c+52,"sha1_top u_w w_gen", false,-1, 31,0);
        tracep->declBus(c+96,"sha1_top u_round N", false,-1, 31,0);
        tracep->declArray(c+13,"sha1_top u_round r_din", false,-1, 159,0);
        tracep->declBus(c+2,"sha1_top u_round w", false,-1, 31,0);
        tracep->declBus(c+1,"sha1_top u_round round", false,-1, 7,0);
        tracep->declArray(c+8,"sha1_top u_round r_dout", false,-1, 159,0);
        tracep->declBus(c+53,"sha1_top u_round f", false,-1, 31,0);
        tracep->declBus(c+54,"sha1_top u_round k", false,-1, 31,0);
        tracep->declBus(c+55,"sha1_top u_round a_shift", false,-1, 31,0);
        tracep->declBus(c+56,"sha1_top u_round b_shift", false,-1, 31,0);
        tracep->declBus(c+57,"sha1_top u_round add_result", false,-1, 31,0);
        tracep->declBus(c+58,"sha1_top u_round a", false,-1, 31,0);
        tracep->declBus(c+59,"sha1_top u_round b", false,-1, 31,0);
        tracep->declBus(c+60,"sha1_top u_round c", false,-1, 31,0);
        tracep->declBus(c+61,"sha1_top u_round d", false,-1, 31,0);
        tracep->declBus(c+62,"sha1_top u_round e", false,-1, 31,0);
    }
}

void Vsha1_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vsha1_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vsha1_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vsha1_top___024root__traceRegister(Vsha1_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vsha1_top___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vsha1_top___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vsha1_top___024root__traceCleanup, vlSelf);
    }
}

void Vsha1_top___024root__traceFullSub0(Vsha1_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vsha1_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vsha1_top___024root* const __restrict vlSelf = static_cast<Vsha1_top___024root*>(voidSelf);
    Vsha1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vsha1_top___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

extern const VlWide<16>/*511:0*/ Vsha1_top__ConstPool__CONST_93e1b771_0;

void Vsha1_top___024root__traceFullSub0(Vsha1_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<16>/*511:0*/ __Vtemp36;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->sha1_top__DOT__u_con__DOT__t_tem),8);
        tracep->fullIData(oldp+2,(vlSelf->sha1_top__DOT__w_temp),32);
        tracep->fullIData(oldp+3,(vlSelf->sha1_top__DOT__a_temp),32);
        tracep->fullIData(oldp+4,(vlSelf->sha1_top__DOT__b_temp),32);
        tracep->fullIData(oldp+5,(vlSelf->sha1_top__DOT__c_temp),32);
        tracep->fullIData(oldp+6,(vlSelf->sha1_top__DOT__d_temp),32);
        tracep->fullIData(oldp+7,(vlSelf->sha1_top__DOT__e_temp),32);
        tracep->fullWData(oldp+8,(vlSelf->sha1_top__DOT__r_din_temp),160);
        tracep->fullWData(oldp+13,(vlSelf->sha1_top__DOT__r_din),160);
        tracep->fullCData(oldp+18,(vlSelf->sha1_top__DOT__u_con__DOT__s_cur),2);
        tracep->fullWData(oldp+19,(vlSelf->sha1_top__DOT__u_w__DOT__din_temp),512);
        if ((0x10U >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem))) {
            __Vtemp36[0U] = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xfU];
            __Vtemp36[1U] = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0U];
            __Vtemp36[2U] = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[1U];
            __Vtemp36[3U] = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[2U];
            __Vtemp36[4U] = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[3U];
            __Vtemp36[5U] = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[4U];
            __Vtemp36[6U] = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[5U];
            __Vtemp36[7U] = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[6U];
            __Vtemp36[8U] = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[7U];
            __Vtemp36[9U] = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[8U];
            __Vtemp36[0xaU] = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[9U];
            __Vtemp36[0xbU] = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xaU];
            __Vtemp36[0xcU] = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xbU];
            __Vtemp36[0xdU] = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xcU];
            __Vtemp36[0xeU] = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xdU];
            __Vtemp36[0xfU] = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xeU];
        } else {
            __Vtemp36[0U] = (((0x10U < (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                              & (0x50U >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                              ? vlSelf->sha1_top__DOT__u_w__DOT__w_gen
                              : Vsha1_top__ConstPool__CONST_93e1b771_0[0U]);
            __Vtemp36[1U] = (((0x10U < (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                              & (0x50U >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                              ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0U]
                              : Vsha1_top__ConstPool__CONST_93e1b771_0[1U]);
            __Vtemp36[2U] = (((0x10U < (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                              & (0x50U >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                              ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[1U]
                              : Vsha1_top__ConstPool__CONST_93e1b771_0[2U]);
            __Vtemp36[3U] = (((0x10U < (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                              & (0x50U >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                              ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[2U]
                              : Vsha1_top__ConstPool__CONST_93e1b771_0[3U]);
            __Vtemp36[4U] = (((0x10U < (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                              & (0x50U >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                              ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[3U]
                              : Vsha1_top__ConstPool__CONST_93e1b771_0[4U]);
            __Vtemp36[5U] = (((0x10U < (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                              & (0x50U >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                              ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[4U]
                              : Vsha1_top__ConstPool__CONST_93e1b771_0[5U]);
            __Vtemp36[6U] = (((0x10U < (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                              & (0x50U >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                              ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[5U]
                              : Vsha1_top__ConstPool__CONST_93e1b771_0[6U]);
            __Vtemp36[7U] = (((0x10U < (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                              & (0x50U >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                              ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[6U]
                              : Vsha1_top__ConstPool__CONST_93e1b771_0[7U]);
            __Vtemp36[8U] = (((0x10U < (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                              & (0x50U >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                              ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[7U]
                              : Vsha1_top__ConstPool__CONST_93e1b771_0[8U]);
            __Vtemp36[9U] = (((0x10U < (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                              & (0x50U >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                              ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[8U]
                              : Vsha1_top__ConstPool__CONST_93e1b771_0[9U]);
            __Vtemp36[0xaU] = (((0x10U < (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                                & (0x50U >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                                ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[9U]
                                : Vsha1_top__ConstPool__CONST_93e1b771_0[0xaU]);
            __Vtemp36[0xbU] = (((0x10U < (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                                & (0x50U >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                                ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xaU]
                                : Vsha1_top__ConstPool__CONST_93e1b771_0[0xbU]);
            __Vtemp36[0xcU] = (((0x10U < (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                                & (0x50U >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                                ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xbU]
                                : Vsha1_top__ConstPool__CONST_93e1b771_0[0xcU]);
            __Vtemp36[0xdU] = (((0x10U < (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                                & (0x50U >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                                ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xcU]
                                : Vsha1_top__ConstPool__CONST_93e1b771_0[0xdU]);
            __Vtemp36[0xeU] = (((0x10U < (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                                & (0x50U >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                                ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xdU]
                                : Vsha1_top__ConstPool__CONST_93e1b771_0[0xeU]);
            __Vtemp36[0xfU] = (((0x10U < (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                                & (0x50U >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                                ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xeU]
                                : Vsha1_top__ConstPool__CONST_93e1b771_0[0xfU]);
        }
        tracep->fullWData(oldp+35,(__Vtemp36),512);
        tracep->fullIData(oldp+51,(vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp),32);
        tracep->fullIData(oldp+52,(vlSelf->sha1_top__DOT__u_w__DOT__w_gen),32);
        tracep->fullIData(oldp+53,(vlSelf->sha1_top__DOT__u_round__DOT__f),32);
        tracep->fullIData(oldp+54,(vlSelf->sha1_top__DOT__u_round__DOT__k),32);
        tracep->fullIData(oldp+55,(vlSelf->sha1_top__DOT__u_round__DOT__a_shift),32);
        tracep->fullIData(oldp+56,(vlSelf->sha1_top__DOT__u_round__DOT__b_shift),32);
        tracep->fullIData(oldp+57,(vlSelf->sha1_top__DOT__u_round__DOT__add_result),32);
        tracep->fullIData(oldp+58,(vlSelf->sha1_top__DOT__r_din[4U]),32);
        tracep->fullIData(oldp+59,(vlSelf->sha1_top__DOT__r_din[3U]),32);
        tracep->fullIData(oldp+60,(vlSelf->sha1_top__DOT__r_din[2U]),32);
        tracep->fullIData(oldp+61,(vlSelf->sha1_top__DOT__r_din[1U]),32);
        tracep->fullIData(oldp+62,(vlSelf->sha1_top__DOT__r_din[0U]),32);
        tracep->fullBit(oldp+63,(vlSelf->clk));
        tracep->fullBit(oldp+64,(vlSelf->rst_n));
        tracep->fullBit(oldp+65,(vlSelf->valid));
        tracep->fullWData(oldp+66,(vlSelf->din),512);
        tracep->fullWData(oldp+82,(vlSelf->dout),160);
        tracep->fullBit(oldp+87,(vlSelf->ready));
        tracep->fullCData(oldp+88,(vlSelf->sha1_top__DOT__u_con__DOT__s_next),2);
        tracep->fullIData(oldp+89,(0x67452301U),32);
        tracep->fullIData(oldp+90,(0xefcdab89U),32);
        tracep->fullIData(oldp+91,(0x98badcfeU),32);
        tracep->fullIData(oldp+92,(0x10325476U),32);
        tracep->fullIData(oldp+93,(0xc3d2e1f0U),32);
        tracep->fullCData(oldp+94,(0U),2);
        tracep->fullCData(oldp+95,(1U),2);
        tracep->fullIData(oldp+96,(0x20U),32);
    }
}

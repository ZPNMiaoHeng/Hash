// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsha1_top__Syms.h"


void Vsha1_top___024root__traceChgSub0(Vsha1_top___024root* vlSelf, VerilatedVcd* tracep);

void Vsha1_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vsha1_top___024root* const __restrict vlSelf = static_cast<Vsha1_top___024root*>(voidSelf);
    Vsha1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vsha1_top___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

extern const VlWide<16>/*511:0*/ Vsha1_top__ConstPool__CONST_93e1b771_0;

void Vsha1_top___024root__traceChgSub0(Vsha1_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsha1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<16>/*511:0*/ __Vtemp44;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlSelf->sha1_top__DOT__u_con__DOT__t_tem),8);
            tracep->chgIData(oldp+1,(vlSelf->sha1_top__DOT__w_temp),32);
            tracep->chgWData(oldp+2,(vlSelf->sha1_top__DOT__r_din_temp),160);
            tracep->chgWData(oldp+7,(vlSelf->sha1_top__DOT__r_din),160);
            tracep->chgCData(oldp+12,(vlSelf->sha1_top__DOT__u_con__DOT__s_cur),2);
            tracep->chgWData(oldp+13,(vlSelf->sha1_top__DOT__u_w__DOT__din_temp),512);
            if ((0xfU >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem))) {
                __Vtemp44[0U] = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xfU];
                __Vtemp44[1U] = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0U];
                __Vtemp44[2U] = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[1U];
                __Vtemp44[3U] = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[2U];
                __Vtemp44[4U] = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[3U];
                __Vtemp44[5U] = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[4U];
                __Vtemp44[6U] = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[5U];
                __Vtemp44[7U] = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[6U];
                __Vtemp44[8U] = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[7U];
                __Vtemp44[9U] = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[8U];
                __Vtemp44[0xaU] = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[9U];
                __Vtemp44[0xbU] = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xaU];
                __Vtemp44[0xcU] = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xbU];
                __Vtemp44[0xdU] = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xcU];
                __Vtemp44[0xeU] = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xdU];
                __Vtemp44[0xfU] = vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xeU];
            } else {
                __Vtemp44[0U] = (((0x10U <= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                                  & (0x4fU >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                                  ? vlSelf->sha1_top__DOT__u_w__DOT__w_gen
                                  : Vsha1_top__ConstPool__CONST_93e1b771_0[0U]);
                __Vtemp44[1U] = (((0x10U <= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                                  & (0x4fU >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                                  ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0U]
                                  : Vsha1_top__ConstPool__CONST_93e1b771_0[1U]);
                __Vtemp44[2U] = (((0x10U <= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                                  & (0x4fU >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                                  ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[1U]
                                  : Vsha1_top__ConstPool__CONST_93e1b771_0[2U]);
                __Vtemp44[3U] = (((0x10U <= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                                  & (0x4fU >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                                  ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[2U]
                                  : Vsha1_top__ConstPool__CONST_93e1b771_0[3U]);
                __Vtemp44[4U] = (((0x10U <= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                                  & (0x4fU >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                                  ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[3U]
                                  : Vsha1_top__ConstPool__CONST_93e1b771_0[4U]);
                __Vtemp44[5U] = (((0x10U <= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                                  & (0x4fU >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                                  ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[4U]
                                  : Vsha1_top__ConstPool__CONST_93e1b771_0[5U]);
                __Vtemp44[6U] = (((0x10U <= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                                  & (0x4fU >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                                  ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[5U]
                                  : Vsha1_top__ConstPool__CONST_93e1b771_0[6U]);
                __Vtemp44[7U] = (((0x10U <= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                                  & (0x4fU >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                                  ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[6U]
                                  : Vsha1_top__ConstPool__CONST_93e1b771_0[7U]);
                __Vtemp44[8U] = (((0x10U <= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                                  & (0x4fU >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                                  ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[7U]
                                  : Vsha1_top__ConstPool__CONST_93e1b771_0[8U]);
                __Vtemp44[9U] = (((0x10U <= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                                  & (0x4fU >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                                  ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[8U]
                                  : Vsha1_top__ConstPool__CONST_93e1b771_0[9U]);
                __Vtemp44[0xaU] = (((0x10U <= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                                    & (0x4fU >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                                    ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[9U]
                                    : Vsha1_top__ConstPool__CONST_93e1b771_0[0xaU]);
                __Vtemp44[0xbU] = (((0x10U <= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                                    & (0x4fU >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                                    ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xaU]
                                    : Vsha1_top__ConstPool__CONST_93e1b771_0[0xbU]);
                __Vtemp44[0xcU] = (((0x10U <= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                                    & (0x4fU >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                                    ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xbU]
                                    : Vsha1_top__ConstPool__CONST_93e1b771_0[0xcU]);
                __Vtemp44[0xdU] = (((0x10U <= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                                    & (0x4fU >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                                    ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xcU]
                                    : Vsha1_top__ConstPool__CONST_93e1b771_0[0xdU]);
                __Vtemp44[0xeU] = (((0x10U <= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                                    & (0x4fU >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                                    ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xdU]
                                    : Vsha1_top__ConstPool__CONST_93e1b771_0[0xeU]);
                __Vtemp44[0xfU] = (((0x10U <= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)) 
                                    & (0x4fU >= (IData)(vlSelf->sha1_top__DOT__u_con__DOT__t_tem)))
                                    ? vlSelf->sha1_top__DOT__u_w__DOT__din_temp[0xeU]
                                    : Vsha1_top__ConstPool__CONST_93e1b771_0[0xfU]);
            }
            tracep->chgWData(oldp+29,(__Vtemp44),512);
            tracep->chgIData(oldp+45,(vlSelf->sha1_top__DOT__u_w__DOT__w_gen_temp),32);
            tracep->chgIData(oldp+46,(vlSelf->sha1_top__DOT__u_w__DOT__w_gen),32);
            tracep->chgIData(oldp+47,(vlSelf->sha1_top__DOT__u_round__DOT__f),32);
            tracep->chgIData(oldp+48,(vlSelf->sha1_top__DOT__u_round__DOT__k),32);
            tracep->chgIData(oldp+49,(vlSelf->sha1_top__DOT__u_round__DOT__a_shift),32);
            tracep->chgIData(oldp+50,(vlSelf->sha1_top__DOT__u_round__DOT__b_shift),32);
            tracep->chgIData(oldp+51,(vlSelf->sha1_top__DOT__u_round__DOT__add_result),32);
            tracep->chgIData(oldp+52,(vlSelf->sha1_top__DOT__r_din[4U]),32);
            tracep->chgIData(oldp+53,(vlSelf->sha1_top__DOT__r_din[3U]),32);
            tracep->chgIData(oldp+54,(vlSelf->sha1_top__DOT__r_din[2U]),32);
            tracep->chgIData(oldp+55,(vlSelf->sha1_top__DOT__r_din[1U]),32);
            tracep->chgIData(oldp+56,(vlSelf->sha1_top__DOT__r_din[0U]),32);
        }
        tracep->chgBit(oldp+57,(vlSelf->clk));
        tracep->chgBit(oldp+58,(vlSelf->rst_n));
        tracep->chgBit(oldp+59,(vlSelf->valid));
        tracep->chgWData(oldp+60,(vlSelf->din),512);
        tracep->chgWData(oldp+76,(vlSelf->dout),160);
        tracep->chgBit(oldp+81,(vlSelf->ready));
        tracep->chgCData(oldp+82,(vlSelf->sha1_top__DOT__u_con__DOT__s_next),2);
    }
}

void Vsha1_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vsha1_top___024root* const __restrict vlSelf = static_cast<Vsha1_top___024root*>(voidSelf);
    Vsha1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}

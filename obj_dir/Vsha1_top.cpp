// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsha1_top.h"
#include "Vsha1_top__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vsha1_top::Vsha1_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vsha1_top__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , valid{vlSymsp->TOP.valid}
    , din{vlSymsp->TOP.din}
    , dout{vlSymsp->TOP.dout}
    , ready{vlSymsp->TOP.ready}
    , rootp{&(vlSymsp->TOP)}
{
}

Vsha1_top::Vsha1_top(const char* _vcname__)
    : Vsha1_top(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vsha1_top::~Vsha1_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vsha1_top___024root___eval_initial(Vsha1_top___024root* vlSelf);
void Vsha1_top___024root___eval_settle(Vsha1_top___024root* vlSelf);
void Vsha1_top___024root___eval(Vsha1_top___024root* vlSelf);
QData Vsha1_top___024root___change_request(Vsha1_top___024root* vlSelf);
#ifdef VL_DEBUG
void Vsha1_top___024root___eval_debug_assertions(Vsha1_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vsha1_top___024root___final(Vsha1_top___024root* vlSelf);

static void _eval_initial_loop(Vsha1_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vsha1_top___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vsha1_top___024root___eval_settle(&(vlSymsp->TOP));
        Vsha1_top___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vsha1_top___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("v/src/sha1_top.v", 10, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vsha1_top___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vsha1_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsha1_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsha1_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vsha1_top___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vsha1_top___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("v/src/sha1_top.v", 10, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vsha1_top___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vsha1_top::final() {
    Vsha1_top___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vsha1_top::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vsha1_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vsha1_top___024root__traceInitTop(Vsha1_top___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsha1_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsha1_top___024root*>(voidSelf);
    Vsha1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vsha1_top___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vsha1_top___024root__traceRegister(Vsha1_top___024root* vlSelf, VerilatedVcd* tracep);

void Vsha1_top::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vsha1_top___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}

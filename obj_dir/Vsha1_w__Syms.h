// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSHA1_W__SYMS_H_
#define VERILATED_VSHA1_W__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vsha1_w.h"

// INCLUDE MODULE CLASSES
#include "Vsha1_w___024root.h"

// SYMS CLASS (contains all model state)
class Vsha1_w__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsha1_w* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsha1_w___024root              TOP;

    // COVERAGE
    uint32_t __Vcoverage[112];

    // CONSTRUCTORS
    Vsha1_w__Syms(VerilatedContext* contextp, const char* namep, Vsha1_w* modelp);
    ~Vsha1_w__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSCR1_TOP_TB_AHB__SYMS_H_
#define VERILATED_VSCR1_TOP_TB_AHB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vscr1_top_tb_ahb.h"

// INCLUDE MODULE CLASSES
#include "Vscr1_top_tb_ahb___024root.h"
#include "Vscr1_top_tb_ahb___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vscr1_top_tb_ahb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vscr1_top_tb_ahb* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vscr1_top_tb_ahb___024root     TOP;

    // CONSTRUCTORS
    Vscr1_top_tb_ahb__Syms(VerilatedContext* contextp, const char* namep, Vscr1_top_tb_ahb* modelp);
    ~Vscr1_top_tb_ahb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard

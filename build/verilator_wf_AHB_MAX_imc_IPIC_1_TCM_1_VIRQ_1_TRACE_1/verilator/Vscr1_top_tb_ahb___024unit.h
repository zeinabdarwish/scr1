// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vscr1_top_tb_ahb.h for the primary calling header

#ifndef VERILATED_VSCR1_TOP_TB_AHB___024UNIT_H_
#define VERILATED_VSCR1_TOP_TB_AHB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vscr1_top_tb_ahb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vscr1_top_tb_ahb___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vscr1_top_tb_ahb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vscr1_top_tb_ahb___024unit(Vscr1_top_tb_ahb__Syms* symsp, const char* v__name);
    ~Vscr1_top_tb_ahb___024unit();
    VL_UNCOPYABLE(Vscr1_top_tb_ahb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

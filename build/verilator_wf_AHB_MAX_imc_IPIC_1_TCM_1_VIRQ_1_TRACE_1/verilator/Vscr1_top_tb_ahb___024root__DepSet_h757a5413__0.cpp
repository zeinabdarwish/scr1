// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vscr1_top_tb_ahb.h for the primary calling header

#include "verilated.h"

#include "Vscr1_top_tb_ahb__Syms.h"
#include "Vscr1_top_tb_ahb___024root.h"

VL_ATTR_COLD void Vscr1_top_tb_ahb___024root___eval_initial__TOP(Vscr1_top_tb_ahb___024root* vlSelf);
VlCoroutine Vscr1_top_tb_ahb___024root___eval_initial__TOP__0(Vscr1_top_tb_ahb___024root* vlSelf);
VlCoroutine Vscr1_top_tb_ahb___024root___eval_initial__TOP__1(Vscr1_top_tb_ahb___024root* vlSelf);

void Vscr1_top_tb_ahb___024root___eval_initial(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___eval_initial\n"); );
    // Body
    Vscr1_top_tb_ahb___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vscr1_top_tb_ahb___024root___eval_initial__TOP__0(vlSelf);
    Vscr1_top_tb_ahb___024root___eval_initial__TOP__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__scr1_top_tb_ahb__DOT__i_top__DOT__i_cpu_rstn_reset_sync__DOT__local_rst_n_in__0 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_cpu_rstn_reset_sync__DOT__local_rst_n_in;
    vlSelf->__Vtrigprevexpr___TOP__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__rst_n_mux__0 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__rst_n_mux;
    vlSelf->__Vtrigprevexpr___TOP__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff__0 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff;
    vlSelf->__Vtrigprevexpr___TOP__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff__0 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff;
    vlSelf->__Vtrigprevexpr___TOP__scr1_top_tb_ahb__DOT__i_top__DOT__tapc_trst_n__0 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tapc_trst_n;
    vlSelf->__Vtrigprevexpr___TOP__scr1_top_tb_ahb__DOT__tck__0 
        = vlSelf->scr1_top_tb_ahb__DOT__tck;
    vlSelf->__Vtrigprevexpr___TOP__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_dm_rstn_buf_cell__DOT__reset_n_status_ff__0 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_dm_rstn_buf_cell__DOT__reset_n_status_ff;
    vlSelf->__Vtrigprevexpr___TOP__scr1_top_tb_ahb__DOT__rtc_clk__0 
        = vlSelf->scr1_top_tb_ahb__DOT__rtc_clk;
}

VL_INLINE_OPT VlCoroutine Vscr1_top_tb_ahb___024root___eval_initial__TOP__0(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__trst_n = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__tck = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__tdi = 0U;
    co_await vlSelf->__VdlySched.delay(0xdbba0ULL, 
                                       nullptr, "/home/zeinab/scr1/src/tb/scr1_top_tb_ahb.sv", 
                                       266);
    vlSelf->scr1_top_tb_ahb__DOT__trst_n = 1U;
    co_await vlSelf->__VdlySched.delay(0x7a120ULL, 
                                       nullptr, "/home/zeinab/scr1/src/tb/scr1_top_tb_ahb.sv", 
                                       267);
    vlSelf->scr1_top_tb_ahb__DOT__tms = 1U;
    co_await vlSelf->__VdlySched.delay(0xc3500ULL, 
                                       nullptr, "/home/zeinab/scr1/src/tb/scr1_top_tb_ahb.sv", 
                                       268);
    vlSelf->scr1_top_tb_ahb__DOT__tms = 0U;
    co_await vlSelf->__VdlySched.delay(0x7a120ULL, 
                                       nullptr, "/home/zeinab/scr1/src/tb/scr1_top_tb_ahb.sv", 
                                       269);
    vlSelf->scr1_top_tb_ahb__DOT__trst_n = 0U;
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "/home/zeinab/scr1/src/tb/scr1_top_tb_ahb.sv", 
                                       270);
    vlSelf->scr1_top_tb_ahb__DOT__tms = 1U;
}

extern const VlUnpacked<CData/*3:0*/, 32> Vscr1_top_tb_ahb__ConstPool__TABLE_h8eaf41c0_0;

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___act_sequent__TOP__0(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_shift_next 
        = ((0xaU == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_ff))
            ? 1U : ((0xbU == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_ff))
                     ? (((IData)(vlSelf->scr1_top_tb_ahb__DOT__tdi) 
                         << 4U) | (0xfU & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_shift_ff) 
                                           >> 1U)))
                     : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_shift_ff)));
    __Vtableidx9 = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__tms) 
                     << 4U) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_ff));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_next 
        = Vscr1_top_tb_ahb__ConstPool__TABLE_h8eaf41c0_0
        [__Vtableidx9];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tapc_trst_n 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__trst_n) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_cpu_rstn_reset_sync__DOT__local_rst_n_in));
}

void Vscr1_top_tb_ahb___024root___eval_act(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___eval_act\n"); );
    // Body
    if ((0x1000ULL & vlSelf->__VactTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__0(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_sequent__TOP__0\n"); );
    // Body
    VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core,"# =====================================================================================\n# : Core Reset\n# =====================================================================================\n# Test: %@\n#           Time   Ev  Curr_PC    Instr      Next_PC    Reg        Value     \n# =====================================================================================\n",
               -1,&(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__test_name));
}

extern const VlWide<8>/*255:0*/ Vscr1_top_tb_ahb__ConstPool__CONST_hce140408_0;
extern const VlUnpacked<CData/*2:0*/, 8> Vscr1_top_tb_ahb__ConstPool__TABLE_h4d7b73d6_0;

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__1(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__Vfuncout;
    __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__Vfuncout = 0;
    IData/*31:0*/ __Vilp;
    VlWide<8>/*255:0*/ __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__testname;
    VL_ZERO_W(256, __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__testname);
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__unnamedblk1__DOT__i;
    __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__unnamedblk2__DOT__i;
    __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__unnamedblk2__DOT__i = 0;
    VlWide<8>/*255:0*/ __Vfunc_scr1_top_tb_ahb__DOT__get_filename__1__Vfuncout;
    VL_ZERO_W(256, __Vfunc_scr1_top_tb_ahb__DOT__get_filename__1__Vfuncout);
    VlWide<8>/*255:0*/ __Vfunc_scr1_top_tb_ahb__DOT__get_filename__1__testname;
    VL_ZERO_W(256, __Vfunc_scr1_top_tb_ahb__DOT__get_filename__1__testname);
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__Vfuncout;
    __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__Vfuncout = 0;
    VlWide<8>/*255:0*/ __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__testname;
    VL_ZERO_W(256, __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__testname);
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__unnamedblk1__DOT__i;
    __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__unnamedblk2__DOT__i;
    __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__unnamedblk2__DOT__i = 0;
    VlWide<8>/*255:0*/ __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__Vfuncout;
    VL_ZERO_W(256, __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__Vfuncout);
    VlWide<8>/*255:0*/ __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__testname;
    VL_ZERO_W(256, __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__testname);
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__unnamedblk3__DOT__i;
    __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__unnamedblk3__DOT__i = 0;
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__unnamedblk4__DOT__i;
    __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__unnamedblk4__DOT__i = 0;
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__Vfuncout;
    __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__Vfuncout = 0;
    VlWide<8>/*255:0*/ __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__testname;
    VL_ZERO_W(256, __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__testname);
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__unnamedblk1__DOT__i;
    __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__unnamedblk2__DOT__i;
    __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__unnamedblk2__DOT__i = 0;
    VlWide<8>/*255:0*/ __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__Vfuncout;
    VL_ZERO_W(256, __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__Vfuncout);
    VlWide<8>/*255:0*/ __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__testname;
    VL_ZERO_W(256, __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__testname);
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__unnamedblk3__DOT__i;
    __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__unnamedblk3__DOT__i = 0;
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__unnamedblk4__DOT__i;
    __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__unnamedblk4__DOT__i = 0;
    VlWide<64>/*2047:0*/ __Vfunc_scr1_top_tb_ahb__DOT__remove_trailing_whitespaces__6__Vfuncout;
    VL_ZERO_W(2048, __Vfunc_scr1_top_tb_ahb__DOT__remove_trailing_whitespaces__6__Vfuncout);
    VlWide<64>/*2047:0*/ __Vfunc_scr1_top_tb_ahb__DOT__remove_trailing_whitespaces__6__str;
    VL_ZERO_W(2048, __Vfunc_scr1_top_tb_ahb__DOT__remove_trailing_whitespaces__6__str);
    CData/*2:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    CData/*1:0*/ __Vdly__scr1_top_tb_ahb__DOT__rst_cnt;
    __Vdly__scr1_top_tb_ahb__DOT__rst_cnt = 0;
    IData/*31:0*/ __Vdly__scr1_top_tb_ahb__DOT__watchdogs_cnt;
    __Vdly__scr1_top_tb_ahb__DOT__watchdogs_cnt = 0;
    CData/*0:0*/ __Vdly__scr1_top_tb_ahb__DOT__rst_init;
    __Vdly__scr1_top_tb_ahb__DOT__rst_init = 0;
    SData/*13:0*/ __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v0;
    __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v0 = 0;
    CData/*4:0*/ __Vdlyvlsb__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v0;
    __Vdlyvlsb__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v0 = 0;
    CData/*7:0*/ __Vdlyvval__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v0;
    __Vdlyvval__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v0 = 0;
    CData/*0:0*/ __Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v0;
    __Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v0 = 0;
    SData/*13:0*/ __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v1;
    __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v1 = 0;
    CData/*4:0*/ __Vdlyvlsb__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v1;
    __Vdlyvlsb__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v1 = 0;
    CData/*7:0*/ __Vdlyvval__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v1;
    __Vdlyvval__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v1 = 0;
    CData/*0:0*/ __Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v1;
    __Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v1 = 0;
    SData/*13:0*/ __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v2;
    __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v2 = 0;
    CData/*4:0*/ __Vdlyvlsb__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v2;
    __Vdlyvlsb__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v2 = 0;
    CData/*7:0*/ __Vdlyvval__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v2;
    __Vdlyvval__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v2 = 0;
    CData/*0:0*/ __Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v2;
    __Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v2 = 0;
    SData/*13:0*/ __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v3;
    __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v3 = 0;
    CData/*4:0*/ __Vdlyvlsb__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v3;
    __Vdlyvlsb__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v3 = 0;
    CData/*7:0*/ __Vdlyvval__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v3;
    __Vdlyvval__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v3 = 0;
    CData/*0:0*/ __Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v3;
    __Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v3 = 0;
    VlWide<3>/*95:0*/ __Vtemp_h5482964f__0;
    VlWide<3>/*95:0*/ __Vtemp_h96be84f4__0;
    VlWide<3>/*95:0*/ __Vtemp_h8d9b71a9__0;
    VlWide<3>/*95:0*/ __Vtemp_h8d9b71a9__1;
    VlWide<64>/*2047:0*/ __Vtemp_hb4963e3f__0;
    VlWide<8>/*255:0*/ __Vtemp_h1220cfe7__0;
    // Body
    __Vdly__scr1_top_tb_ahb__DOT__rst_cnt = vlSelf->scr1_top_tb_ahb__DOT__rst_cnt;
    __Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v0 = 0U;
    __Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v1 = 0U;
    __Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v2 = 0U;
    __Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v3 = 0U;
    __Vdly__scr1_top_tb_ahb__DOT__rst_init = vlSelf->scr1_top_tb_ahb__DOT__rst_init;
    __Vdly__scr1_top_tb_ahb__DOT__watchdogs_cnt = vlSelf->scr1_top_tb_ahb__DOT__watchdogs_cnt;
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_wr) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__unnamedblk1__DOT__i = 4U;
        if ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_byteen))) {
            __Vdlyvval__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v0 
                = (0xffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_writedata);
            __Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v0 = 1U;
            __Vdlyvlsb__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v0 = 0U;
            __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v0 
                = (0x3fffU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0 
                              >> 2U));
        }
        if ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_byteen))) {
            __Vdlyvval__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v1 
                = (0xffU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_writedata 
                            >> 8U));
            __Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v1 = 1U;
            __Vdlyvlsb__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v1 = 8U;
            __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v1 
                = (0x3fffU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0 
                              >> 2U));
        }
        if ((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_byteen))) {
            __Vdlyvval__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v2 
                = (0xffU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_writedata 
                            >> 0x10U));
            __Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v2 = 1U;
            __Vdlyvlsb__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v2 = 0x10U;
            __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v2 
                = (0x3fffU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0 
                              >> 2U));
        }
        if ((8U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_byteen))) {
            __Vdlyvval__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v3 
                = (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_writedata 
                   >> 0x18U);
            __Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v3 = 1U;
            __Vdlyvlsb__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v3 = 0x18U;
            __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v3 
                = (0x3fffU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0 
                              >> 2U));
        }
    }
    if (vlSelf->scr1_top_tb_ahb__DOT__rst_init) {
        __Vdly__scr1_top_tb_ahb__DOT__rst_cnt = 0U;
    } else if ((1U & (~ (IData)((3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__rst_cnt)))))) {
        __Vdly__scr1_top_tb_ahb__DOT__rst_cnt = (3U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->scr1_top_tb_ahb__DOT__rst_cnt)));
    }
    __Vdly__scr1_top_tb_ahb__DOT__watchdogs_cnt = ((IData)(1U) 
                                                   + vlSelf->scr1_top_tb_ahb__DOT__watchdogs_cnt);
    if (vlSelf->scr1_top_tb_ahb__DOT__test_running) {
        vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__test_pass = 1U;
        __Vdly__scr1_top_tb_ahb__DOT__rst_init = 0U;
        if (VL_UNLIKELY((((0xf8U == vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_ff) 
                          & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__rst_init))) 
                         & (3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__rst_cnt))))) {
            vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__full_filename[0U] 
                = vlSelf->scr1_top_tb_ahb__DOT__test_file[0U];
            vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__full_filename[1U] 
                = vlSelf->scr1_top_tb_ahb__DOT__test_file[1U];
            vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__full_filename[2U] 
                = vlSelf->scr1_top_tb_ahb__DOT__test_file[2U];
            vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__full_filename[3U] 
                = vlSelf->scr1_top_tb_ahb__DOT__test_file[3U];
            vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__full_filename[4U] 
                = vlSelf->scr1_top_tb_ahb__DOT__test_file[4U];
            vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__full_filename[5U] 
                = vlSelf->scr1_top_tb_ahb__DOT__test_file[5U];
            vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__full_filename[6U] 
                = vlSelf->scr1_top_tb_ahb__DOT__test_file[6U];
            vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__full_filename[7U] 
                = vlSelf->scr1_top_tb_ahb__DOT__test_file[7U];
            __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__testname[0U] 
                = vlSelf->scr1_top_tb_ahb__DOT__test_file[0U];
            __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__testname[1U] 
                = vlSelf->scr1_top_tb_ahb__DOT__test_file[1U];
            __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__testname[2U] 
                = vlSelf->scr1_top_tb_ahb__DOT__test_file[2U];
            __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__testname[3U] 
                = vlSelf->scr1_top_tb_ahb__DOT__test_file[3U];
            __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__testname[4U] 
                = vlSelf->scr1_top_tb_ahb__DOT__test_file[4U];
            __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__testname[5U] 
                = vlSelf->scr1_top_tb_ahb__DOT__test_file[5U];
            __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__testname[6U] 
                = vlSelf->scr1_top_tb_ahb__DOT__test_file[6U];
            __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__testname[7U] 
                = vlSelf->scr1_top_tb_ahb__DOT__test_file[7U];
            {
                vlSelf->scr1_top_tb_ahb__DOT__identify_test__Vstatic__pattern_compliance[0U] = 0x616e6365U;
                vlSelf->scr1_top_tb_ahb__DOT__identify_test__Vstatic__pattern_compliance[1U] = 0x6d706c69U;
                vlSelf->scr1_top_tb_ahb__DOT__identify_test__Vstatic__pattern_compliance[2U] = 0x636fU;
                vlSelf->scr1_top_tb_ahb__DOT__identify_test__Vstatic__pattern_arch = 0x726368U;
                vlSelf->scr1_top_tb_ahb__DOT__identify_test__Vstatic__res = 0U;
                __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__unnamedblk1__DOT__i = 0U;
                while (VL_GTES_III(32, 0xb0U, __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__unnamedblk1__DOT__i)) {
                    if ((0U == ((((((0U == (0x1fU & __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__unnamedblk1__DOT__i))
                                     ? 0U : (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__testname[
                                             ((IData)(1U) 
                                              + (7U 
                                                 & (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__unnamedblk1__DOT__i 
                                                    >> 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__unnamedblk1__DOT__i)))) 
                                   | (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__testname[
                                      (7U & (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__unnamedblk1__DOT__i 
                                             >> 5U))] 
                                      >> (0x1fU & __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__unnamedblk1__DOT__i))) 
                                  ^ vlSelf->scr1_top_tb_ahb__DOT__identify_test__Vstatic__pattern_compliance[0U]) 
                                 | ((((0U == (0x1fU 
                                              & __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__unnamedblk1__DOT__i))
                                       ? 0U : (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__testname[
                                               ((IData)(2U) 
                                                + (7U 
                                                   & (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__unnamedblk1__DOT__i 
                                                      >> 5U)))] 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__unnamedblk1__DOT__i)))) 
                                     | (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__testname[
                                        ((IData)(1U) 
                                         + (7U & (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__unnamedblk1__DOT__i 
                                                  >> 5U)))] 
                                        >> (0x1fU & __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__unnamedblk1__DOT__i))) 
                                    ^ vlSelf->scr1_top_tb_ahb__DOT__identify_test__Vstatic__pattern_compliance[1U])) 
                                | ((0xffffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__unnamedblk1__DOT__i))
                                                 ? 0U
                                                 : 
                                                (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__testname[
                                                 ((IData)(3U) 
                                                  + 
                                                  (7U 
                                                   & (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__unnamedblk1__DOT__i 
                                                      >> 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__unnamedblk1__DOT__i)))) 
                                               | (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__testname[
                                                  ((IData)(2U) 
                                                   + 
                                                   (7U 
                                                    & (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__unnamedblk1__DOT__i 
                                                       >> 5U)))] 
                                                  >> 
                                                  (0x1fU 
                                                   & __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__unnamedblk1__DOT__i)))) 
                                   ^ vlSelf->scr1_top_tb_ahb__DOT__identify_test__Vstatic__pattern_compliance[2U])))) {
                        __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__Vfuncout = 2U;
                        goto __Vlabel1;
                    }
                    __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__unnamedblk1__DOT__i 
                        = ((IData)(1U) + __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__unnamedblk1__DOT__i);
                }
                __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__unnamedblk2__DOT__i = 0U;
                while (VL_GTES_III(32, 0xe9U, __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__unnamedblk2__DOT__i)) {
                    if (((0x7fffffU & (((0U == (0x1fU 
                                                & __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__unnamedblk2__DOT__i))
                                         ? 0U : (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__testname[
                                                 (((IData)(0x16U) 
                                                   + 
                                                   (0xffU 
                                                    & __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__unnamedblk2__DOT__i)) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__unnamedblk2__DOT__i)))) 
                                       | (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__testname[
                                          (7U & (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__unnamedblk2__DOT__i 
                                                 >> 5U))] 
                                          >> (0x1fU 
                                              & __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__unnamedblk2__DOT__i)))) 
                         == vlSelf->scr1_top_tb_ahb__DOT__identify_test__Vstatic__pattern_arch)) {
                        __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__Vfuncout = 1U;
                        goto __Vlabel1;
                    }
                    __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__unnamedblk2__DOT__i 
                        = ((IData)(1U) + __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__unnamedblk2__DOT__i);
                }
                __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__Vfuncout 
                    = vlSelf->scr1_top_tb_ahb__DOT__identify_test__Vstatic__res;
                __Vlabel1: ;
            }
            if (VL_UNLIKELY((0U != __Vfunc_scr1_top_tb_ahb__DOT__identify_test__0__Vfuncout))) {
                vlSelf->scr1_top_tb_ahb__DOT__test_running = 0U;
                vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__test_pass = 1U;
                vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__test_error = 0U;
                __Vfunc_scr1_top_tb_ahb__DOT__get_filename__1__testname[0U] 
                    = vlSelf->scr1_top_tb_ahb__DOT__test_file[0U];
                __Vfunc_scr1_top_tb_ahb__DOT__get_filename__1__testname[1U] 
                    = vlSelf->scr1_top_tb_ahb__DOT__test_file[1U];
                __Vfunc_scr1_top_tb_ahb__DOT__get_filename__1__testname[2U] 
                    = vlSelf->scr1_top_tb_ahb__DOT__test_file[2U];
                __Vfunc_scr1_top_tb_ahb__DOT__get_filename__1__testname[3U] 
                    = vlSelf->scr1_top_tb_ahb__DOT__test_file[3U];
                __Vfunc_scr1_top_tb_ahb__DOT__get_filename__1__testname[4U] 
                    = vlSelf->scr1_top_tb_ahb__DOT__test_file[4U];
                __Vfunc_scr1_top_tb_ahb__DOT__get_filename__1__testname[5U] 
                    = vlSelf->scr1_top_tb_ahb__DOT__test_file[5U];
                __Vfunc_scr1_top_tb_ahb__DOT__get_filename__1__testname[6U] 
                    = vlSelf->scr1_top_tb_ahb__DOT__test_file[6U];
                __Vfunc_scr1_top_tb_ahb__DOT__get_filename__1__testname[7U] 
                    = vlSelf->scr1_top_tb_ahb__DOT__test_file[7U];
                __Vfunc_scr1_top_tb_ahb__DOT__get_filename__1__testname[0U] 
                    = (0x656c66U | (0xff000000U & __Vfunc_scr1_top_tb_ahb__DOT__get_filename__1__testname[0U]));
                vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__i = 0U;
                {
                    while (VL_GTES_III(32, 0xf8U, vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__i)) {
                        if ((0U == (0xffU & (((0U == 
                                               (0x1fU 
                                                & vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__i))
                                               ? 0U
                                               : (__Vfunc_scr1_top_tb_ahb__DOT__get_filename__1__testname[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xffU 
                                                     & vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__i)) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__i)))) 
                                             | (__Vfunc_scr1_top_tb_ahb__DOT__get_filename__1__testname[
                                                (7U 
                                                 & (vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__i 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__i)))))) {
                            goto __Vlabel2;
                        }
                        vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__i 
                            = ((IData)(8U) + vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__i);
                    }
                    __Vlabel2: ;
                }
                vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__i 
                    = (vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__i 
                       - (IData)(8U));
                vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__j = 0xffU;
                while (VL_LTES_III(32, 0U, vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__i)) {
                    VL_ASSIGNSEL_WI(256,8,(0xffU & 
                                           (vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__j 
                                            - (IData)(7U))), vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__res, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__i))
                                                ? 0U
                                                : (
                                                   __Vfunc_scr1_top_tb_ahb__DOT__get_filename__1__testname[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xffU 
                                                      & vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__i)) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__i)))) 
                                              | (__Vfunc_scr1_top_tb_ahb__DOT__get_filename__1__testname[
                                                 (7U 
                                                  & (vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__i 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__i)))));
                    vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__j 
                        = (vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__j 
                           - (IData)(8U));
                    vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__i 
                        = (vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__i 
                           - (IData)(8U));
                }
                while (VL_LTES_III(32, 0U, vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__j)) {
                    VL_ASSIGNSEL_WI(256,8,(0xffU & 
                                           (vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__j 
                                            - (IData)(7U))), vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__res, 0U);
                    vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__j 
                        = (vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__j 
                           - (IData)(8U));
                }
                __Vfunc_scr1_top_tb_ahb__DOT__get_filename__1__Vfuncout[0U] 
                    = vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__res[0U];
                __Vfunc_scr1_top_tb_ahb__DOT__get_filename__1__Vfuncout[1U] 
                    = vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__res[1U];
                __Vfunc_scr1_top_tb_ahb__DOT__get_filename__1__Vfuncout[2U] 
                    = vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__res[2U];
                __Vfunc_scr1_top_tb_ahb__DOT__get_filename__1__Vfuncout[3U] 
                    = vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__res[3U];
                __Vfunc_scr1_top_tb_ahb__DOT__get_filename__1__Vfuncout[4U] 
                    = vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__res[4U];
                __Vfunc_scr1_top_tb_ahb__DOT__get_filename__1__Vfuncout[5U] 
                    = vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__res[5U];
                __Vfunc_scr1_top_tb_ahb__DOT__get_filename__1__Vfuncout[6U] 
                    = vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__res[6U];
                __Vfunc_scr1_top_tb_ahb__DOT__get_filename__1__Vfuncout[7U] 
                    = vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__res[7U];
                VL_SFORMAT_X(2048,vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmpstr
                             ,"riscv64-unknown-elf-readelf -s %s | grep 'begin_signature\\|end_signature\\| _start\\|trap_vector' | awk '{print $2}' > elfinfo",
                             256,__Vfunc_scr1_top_tb_ahb__DOT__get_filename__1__Vfuncout.data());
                __Vtemp_h5482964f__0[0U] = 0x742e7368U;
                __Vtemp_h5482964f__0[1U] = 0x63726970U;
                __Vtemp_h5482964f__0[2U] = 0x73U;
                vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__fd 
                    = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(3, __Vtemp_h5482964f__0)
                                  , std::string{"w"});
                ;
                if (VL_UNLIKELY((0U == vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__fd))) {
                    VL_WRITEF("Can't open script.sh\n");
                    vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__test_error = 1U;
                }
                VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__fd,"%s",
                           2048,vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmpstr.data());
                VL_FCLOSE_I(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__fd); __Vtemp_h96be84f4__0[0U] = 0x742e7368U;
                __Vtemp_h96be84f4__0[1U] = 0x63726970U;
                __Vtemp_h96be84f4__0[2U] = 0x73682073U;
                (void)VL_SYSTEM_IW(3, __Vtemp_h96be84f4__0);
                vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__fd 
                    = VL_FOPEN_NN(std::string{"elfinfo"}
                                  , std::string{"r"});
                ;
                if (VL_UNLIKELY((0U == vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__fd))) {
                    VL_WRITEF("Can't open elfinfo\n");
                    vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__test_error = 1U;
                }
                if (VL_UNLIKELY((4U != VL_FSCANF_IX(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__fd,"%x\n%x\n%x\n%x",
                                                    32,
                                                    &(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__trap_addr),
                                                    32,
                                                    &(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__start),
                                                    32,
                                                    &(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__stop),
                                                    32,
                                                    &(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__start_addr)) ))) {
                    VL_WRITEF("Wrong elfinfo data\n");
                    vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__test_error = 1U;
                }
                if (VL_UNLIKELY((((0x240U != vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__trap_addr) 
                                  & (0x1c0U != vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__trap_addr)) 
                                 | (0x200U != vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__start_addr)))) {
                    VL_WRITEF("\nError trap_vector %x or/and _start %x are incorrectly aligned and are not at their address\n",
                              32,vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__trap_addr,
                              32,vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__start_addr);
                    vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__test_error = 1U;
                }
                if ((vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__start 
                     > vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__stop)) {
                    vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmpv 
                        = vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__start;
                    vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__start 
                        = vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__stop;
                    vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__stop 
                        = vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmpv;
                }
                VL_FCLOSE_I(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__fd); __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__testname[0U] 
                    = vlSelf->scr1_top_tb_ahb__DOT__test_file[0U];
                __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__testname[1U] 
                    = vlSelf->scr1_top_tb_ahb__DOT__test_file[1U];
                __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__testname[2U] 
                    = vlSelf->scr1_top_tb_ahb__DOT__test_file[2U];
                __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__testname[3U] 
                    = vlSelf->scr1_top_tb_ahb__DOT__test_file[3U];
                __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__testname[4U] 
                    = vlSelf->scr1_top_tb_ahb__DOT__test_file[4U];
                __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__testname[5U] 
                    = vlSelf->scr1_top_tb_ahb__DOT__test_file[5U];
                __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__testname[6U] 
                    = vlSelf->scr1_top_tb_ahb__DOT__test_file[6U];
                __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__testname[7U] 
                    = vlSelf->scr1_top_tb_ahb__DOT__test_file[7U];
                {
                    vlSelf->scr1_top_tb_ahb__DOT__identify_test__Vstatic__pattern_compliance[0U] = 0x616e6365U;
                    vlSelf->scr1_top_tb_ahb__DOT__identify_test__Vstatic__pattern_compliance[1U] = 0x6d706c69U;
                    vlSelf->scr1_top_tb_ahb__DOT__identify_test__Vstatic__pattern_compliance[2U] = 0x636fU;
                    vlSelf->scr1_top_tb_ahb__DOT__identify_test__Vstatic__pattern_arch = 0x726368U;
                    vlSelf->scr1_top_tb_ahb__DOT__identify_test__Vstatic__res = 0U;
                    __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__unnamedblk1__DOT__i = 0U;
                    while (VL_GTES_III(32, 0xb0U, __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__unnamedblk1__DOT__i)) {
                        if ((0U == ((((((0U == (0x1fU 
                                                & __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__unnamedblk1__DOT__i))
                                         ? 0U : (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__testname[
                                                 ((IData)(1U) 
                                                  + 
                                                  (7U 
                                                   & (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__unnamedblk1__DOT__i 
                                                      >> 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__unnamedblk1__DOT__i)))) 
                                       | (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__testname[
                                          (7U & (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__unnamedblk1__DOT__i 
                                                 >> 5U))] 
                                          >> (0x1fU 
                                              & __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__unnamedblk1__DOT__i))) 
                                      ^ vlSelf->scr1_top_tb_ahb__DOT__identify_test__Vstatic__pattern_compliance[0U]) 
                                     | ((((0U == (0x1fU 
                                                  & __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__unnamedblk1__DOT__i))
                                           ? 0U : (
                                                   __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__testname[
                                                   ((IData)(2U) 
                                                    + 
                                                    (7U 
                                                     & (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__unnamedblk1__DOT__i 
                                                        >> 5U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__unnamedblk1__DOT__i)))) 
                                         | (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__testname[
                                            ((IData)(1U) 
                                             + (7U 
                                                & (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__unnamedblk1__DOT__i 
                                                   >> 5U)))] 
                                            >> (0x1fU 
                                                & __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__unnamedblk1__DOT__i))) 
                                        ^ vlSelf->scr1_top_tb_ahb__DOT__identify_test__Vstatic__pattern_compliance[1U])) 
                                    | ((0xffffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__unnamedblk1__DOT__i))
                                                     ? 0U
                                                     : 
                                                    (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__testname[
                                                     ((IData)(3U) 
                                                      + 
                                                      (7U 
                                                       & (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__unnamedblk1__DOT__i 
                                                          >> 5U)))] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__unnamedblk1__DOT__i)))) 
                                                   | (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__testname[
                                                      ((IData)(2U) 
                                                       + 
                                                       (7U 
                                                        & (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__unnamedblk1__DOT__i 
                                                           >> 5U)))] 
                                                      >> 
                                                      (0x1fU 
                                                       & __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__unnamedblk1__DOT__i)))) 
                                       ^ vlSelf->scr1_top_tb_ahb__DOT__identify_test__Vstatic__pattern_compliance[2U])))) {
                            __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__Vfuncout = 2U;
                            goto __Vlabel3;
                        }
                        __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__unnamedblk1__DOT__i 
                            = ((IData)(1U) + __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__unnamedblk1__DOT__i);
                    }
                    __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__unnamedblk2__DOT__i = 0U;
                    while (VL_GTES_III(32, 0xe9U, __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__unnamedblk2__DOT__i)) {
                        if (((0x7fffffU & (((0U == 
                                             (0x1fU 
                                              & __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__unnamedblk2__DOT__i))
                                             ? 0U : 
                                            (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__testname[
                                             (((IData)(0x16U) 
                                               + (0xffU 
                                                  & __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__unnamedblk2__DOT__i)) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__unnamedblk2__DOT__i)))) 
                                           | (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__testname[
                                              (7U & 
                                               (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__unnamedblk2__DOT__i 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__unnamedblk2__DOT__i)))) 
                             == vlSelf->scr1_top_tb_ahb__DOT__identify_test__Vstatic__pattern_arch)) {
                            __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__Vfuncout = 1U;
                            goto __Vlabel3;
                        }
                        __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__unnamedblk2__DOT__i 
                            = ((IData)(1U) + __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__unnamedblk2__DOT__i);
                    }
                    __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__Vfuncout 
                        = vlSelf->scr1_top_tb_ahb__DOT__identify_test__Vstatic__res;
                    __Vlabel3: ;
                }
                if ((2U == __Vfunc_scr1_top_tb_ahb__DOT__identify_test__2__Vfuncout)) {
                    __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__testname[0U] 
                        = vlSelf->scr1_top_tb_ahb__DOT__test_file[0U];
                    __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__testname[1U] 
                        = vlSelf->scr1_top_tb_ahb__DOT__test_file[1U];
                    __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__testname[2U] 
                        = vlSelf->scr1_top_tb_ahb__DOT__test_file[2U];
                    __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__testname[3U] 
                        = vlSelf->scr1_top_tb_ahb__DOT__test_file[3U];
                    __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__testname[4U] 
                        = vlSelf->scr1_top_tb_ahb__DOT__test_file[4U];
                    __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__testname[5U] 
                        = vlSelf->scr1_top_tb_ahb__DOT__test_file[5U];
                    __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__testname[6U] 
                        = vlSelf->scr1_top_tb_ahb__DOT__test_file[6U];
                    __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__testname[7U] 
                        = vlSelf->scr1_top_tb_ahb__DOT__test_file[7U];
                    vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__pattern_compliance[0U] = 0x616e6365U;
                    vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__pattern_compliance[1U] = 0x6d706c69U;
                    vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__pattern_compliance[2U] = 0x636fU;
                    vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__pattern_arch = 0x726368U;
                    __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__unnamedblk3__DOT__i = 0U;
                    {
                        while (VL_GTES_III(32, 0xb0U, __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__unnamedblk3__DOT__i)) {
                            if ((0U == ((((((0U == 
                                             (0x1fU 
                                              & __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__unnamedblk3__DOT__i))
                                             ? 0U : 
                                            (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__testname[
                                             ((IData)(1U) 
                                              + (7U 
                                                 & (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__unnamedblk3__DOT__i 
                                                    >> 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__unnamedblk3__DOT__i)))) 
                                           | (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__testname[
                                              (7U & 
                                               (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__unnamedblk3__DOT__i 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__unnamedblk3__DOT__i))) 
                                          ^ vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__pattern_compliance[0U]) 
                                         | ((((0U == 
                                               (0x1fU 
                                                & __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__unnamedblk3__DOT__i))
                                               ? 0U
                                               : (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__testname[
                                                  ((IData)(2U) 
                                                   + 
                                                   (7U 
                                                    & (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__unnamedblk3__DOT__i 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__unnamedblk3__DOT__i)))) 
                                             | (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__testname[
                                                ((IData)(1U) 
                                                 + 
                                                 (7U 
                                                  & (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__unnamedblk3__DOT__i 
                                                     >> 5U)))] 
                                                >> 
                                                (0x1fU 
                                                 & __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__unnamedblk3__DOT__i))) 
                                            ^ vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__pattern_compliance[1U])) 
                                        | ((0xffffU 
                                            & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__unnamedblk3__DOT__i))
                                                 ? 0U
                                                 : 
                                                (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__testname[
                                                 ((IData)(3U) 
                                                  + 
                                                  (7U 
                                                   & (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__unnamedblk3__DOT__i 
                                                      >> 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__unnamedblk3__DOT__i)))) 
                                               | (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__testname[
                                                  ((IData)(2U) 
                                                   + 
                                                   (7U 
                                                    & (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__unnamedblk3__DOT__i 
                                                       >> 5U)))] 
                                                  >> 
                                                  (0x1fU 
                                                   & __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__unnamedblk3__DOT__i)))) 
                                           ^ vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__pattern_compliance[2U])))) {
                                __Vtemp_h8d9b71a9__0[0U] = 0U;
                                __Vtemp_h8d9b71a9__0[1U] = 0U;
                                __Vtemp_h8d9b71a9__0[2U] = 0U;
                                VL_ASSIGNSEL_WW(256,88,
                                                (0xffU 
                                                 & (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__unnamedblk3__DOT__i 
                                                    - (IData)(8U))), __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__testname, __Vtemp_h8d9b71a9__0);
                                goto __Vlabel4;
                            }
                            __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__unnamedblk3__DOT__i 
                                = ((IData)(1U) + __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__unnamedblk3__DOT__i);
                        }
                        __Vlabel4: ;
                    }
                    __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__unnamedblk4__DOT__i = 0U;
                    {
                        while (VL_GTES_III(32, 0xe9U, __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__unnamedblk4__DOT__i)) {
                            if (((0x7fffffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__unnamedblk4__DOT__i))
                                                 ? 0U
                                                 : 
                                                (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__testname[
                                                 (((IData)(0x16U) 
                                                   + 
                                                   (0xffU 
                                                    & __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__unnamedblk4__DOT__i)) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__unnamedblk4__DOT__i)))) 
                                               | (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__testname[
                                                  (7U 
                                                   & (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__unnamedblk4__DOT__i 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__unnamedblk4__DOT__i)))) 
                                 == vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__pattern_arch)) {
                                VL_ASSIGNSEL_WI(256,31,
                                                (0xffU 
                                                 & (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__unnamedblk4__DOT__i 
                                                    - (IData)(8U))), __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__testname, 0U);
                                goto __Vlabel5;
                            }
                            __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__unnamedblk4__DOT__i 
                                = ((IData)(1U) + __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__unnamedblk4__DOT__i);
                        }
                        __Vlabel5: ;
                    }
                    vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i = 0x20U;
                    {
                        while (VL_GTES_III(32, 0xf8U, vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i)) {
                            if ((0U == (0xffU & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i))
                                                   ? 0U
                                                   : 
                                                  (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__testname[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xffU 
                                                      & vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i)) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i)))) 
                                                 | (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__testname[
                                                    (7U 
                                                     & (vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i)))))) {
                                goto __Vlabel6;
                            }
                            vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i 
                                = ((IData)(8U) + vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i);
                        }
                        __Vlabel6: ;
                    }
                    vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i 
                        = (vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i 
                           - (IData)(8U));
                    vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__j = 0xffU;
                    while (VL_LTS_III(32, 0x18U, vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i)) {
                        VL_ASSIGNSEL_WI(256,8,(0xffU 
                                               & (vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__j 
                                                  - (IData)(7U))), vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__res, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i))
                                                    ? 0U
                                                    : 
                                                   (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__testname[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xffU 
                                                       & vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i)) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i)))) 
                                                  | (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__testname[
                                                     (7U 
                                                      & (vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i)))));
                        vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__j 
                            = (vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__j 
                               - (IData)(8U));
                        vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i 
                            = (vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i 
                               - (IData)(8U));
                    }
                    while (VL_LTES_III(32, 0U, vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__j)) {
                        VL_ASSIGNSEL_WI(256,8,(0xffU 
                                               & (vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__j 
                                                  - (IData)(7U))), vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__res, 0U);
                        vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__j 
                            = (vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__j 
                               - (IData)(8U));
                    }
                    __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__Vfuncout[0U] 
                        = vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__res[0U];
                    __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__Vfuncout[1U] 
                        = vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__res[1U];
                    __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__Vfuncout[2U] 
                        = vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__res[2U];
                    __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__Vfuncout[3U] 
                        = vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__res[3U];
                    __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__Vfuncout[4U] 
                        = vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__res[4U];
                    __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__Vfuncout[5U] 
                        = vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__res[5U];
                    __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__Vfuncout[6U] 
                        = vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__res[6U];
                    __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__Vfuncout[7U] 
                        = vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__res[7U];
                    VL_SFORMAT_X(2048,vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmpstr
                                 ,"riscv_compliance/ref_data/%s",
                                 256,__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__3__Vfuncout.data());
                } else {
                    __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__testname[0U] 
                        = vlSelf->scr1_top_tb_ahb__DOT__test_file[0U];
                    __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__testname[1U] 
                        = vlSelf->scr1_top_tb_ahb__DOT__test_file[1U];
                    __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__testname[2U] 
                        = vlSelf->scr1_top_tb_ahb__DOT__test_file[2U];
                    __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__testname[3U] 
                        = vlSelf->scr1_top_tb_ahb__DOT__test_file[3U];
                    __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__testname[4U] 
                        = vlSelf->scr1_top_tb_ahb__DOT__test_file[4U];
                    __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__testname[5U] 
                        = vlSelf->scr1_top_tb_ahb__DOT__test_file[5U];
                    __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__testname[6U] 
                        = vlSelf->scr1_top_tb_ahb__DOT__test_file[6U];
                    __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__testname[7U] 
                        = vlSelf->scr1_top_tb_ahb__DOT__test_file[7U];
                    {
                        vlSelf->scr1_top_tb_ahb__DOT__identify_test__Vstatic__pattern_compliance[0U] = 0x616e6365U;
                        vlSelf->scr1_top_tb_ahb__DOT__identify_test__Vstatic__pattern_compliance[1U] = 0x6d706c69U;
                        vlSelf->scr1_top_tb_ahb__DOT__identify_test__Vstatic__pattern_compliance[2U] = 0x636fU;
                        vlSelf->scr1_top_tb_ahb__DOT__identify_test__Vstatic__pattern_arch = 0x726368U;
                        vlSelf->scr1_top_tb_ahb__DOT__identify_test__Vstatic__res = 0U;
                        __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__unnamedblk1__DOT__i = 0U;
                        while (VL_GTES_III(32, 0xb0U, __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__unnamedblk1__DOT__i)) {
                            if ((0U == ((((((0U == 
                                             (0x1fU 
                                              & __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__unnamedblk1__DOT__i))
                                             ? 0U : 
                                            (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__testname[
                                             ((IData)(1U) 
                                              + (7U 
                                                 & (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__unnamedblk1__DOT__i 
                                                    >> 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__unnamedblk1__DOT__i)))) 
                                           | (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__testname[
                                              (7U & 
                                               (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__unnamedblk1__DOT__i 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__unnamedblk1__DOT__i))) 
                                          ^ vlSelf->scr1_top_tb_ahb__DOT__identify_test__Vstatic__pattern_compliance[0U]) 
                                         | ((((0U == 
                                               (0x1fU 
                                                & __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__unnamedblk1__DOT__i))
                                               ? 0U
                                               : (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__testname[
                                                  ((IData)(2U) 
                                                   + 
                                                   (7U 
                                                    & (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__unnamedblk1__DOT__i 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__unnamedblk1__DOT__i)))) 
                                             | (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__testname[
                                                ((IData)(1U) 
                                                 + 
                                                 (7U 
                                                  & (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__unnamedblk1__DOT__i 
                                                     >> 5U)))] 
                                                >> 
                                                (0x1fU 
                                                 & __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__unnamedblk1__DOT__i))) 
                                            ^ vlSelf->scr1_top_tb_ahb__DOT__identify_test__Vstatic__pattern_compliance[1U])) 
                                        | ((0xffffU 
                                            & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__unnamedblk1__DOT__i))
                                                 ? 0U
                                                 : 
                                                (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__testname[
                                                 ((IData)(3U) 
                                                  + 
                                                  (7U 
                                                   & (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__unnamedblk1__DOT__i 
                                                      >> 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__unnamedblk1__DOT__i)))) 
                                               | (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__testname[
                                                  ((IData)(2U) 
                                                   + 
                                                   (7U 
                                                    & (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__unnamedblk1__DOT__i 
                                                       >> 5U)))] 
                                                  >> 
                                                  (0x1fU 
                                                   & __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__unnamedblk1__DOT__i)))) 
                                           ^ vlSelf->scr1_top_tb_ahb__DOT__identify_test__Vstatic__pattern_compliance[2U])))) {
                                __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__Vfuncout = 2U;
                                goto __Vlabel7;
                            }
                            __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__unnamedblk1__DOT__i 
                                = ((IData)(1U) + __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__unnamedblk1__DOT__i);
                        }
                        __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__unnamedblk2__DOT__i = 0U;
                        while (VL_GTES_III(32, 0xe9U, __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__unnamedblk2__DOT__i)) {
                            if (((0x7fffffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__unnamedblk2__DOT__i))
                                                 ? 0U
                                                 : 
                                                (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__testname[
                                                 (((IData)(0x16U) 
                                                   + 
                                                   (0xffU 
                                                    & __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__unnamedblk2__DOT__i)) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__unnamedblk2__DOT__i)))) 
                                               | (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__testname[
                                                  (7U 
                                                   & (__Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__unnamedblk2__DOT__i 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__unnamedblk2__DOT__i)))) 
                                 == vlSelf->scr1_top_tb_ahb__DOT__identify_test__Vstatic__pattern_arch)) {
                                __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__Vfuncout = 1U;
                                goto __Vlabel7;
                            }
                            __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__unnamedblk2__DOT__i 
                                = ((IData)(1U) + __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__unnamedblk2__DOT__i);
                        }
                        __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__Vfuncout 
                            = vlSelf->scr1_top_tb_ahb__DOT__identify_test__Vstatic__res;
                        __Vlabel7: ;
                    }
                    if ((1U == __Vfunc_scr1_top_tb_ahb__DOT__identify_test__4__Vfuncout)) {
                        __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__testname[0U] 
                            = vlSelf->scr1_top_tb_ahb__DOT__test_file[0U];
                        __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__testname[1U] 
                            = vlSelf->scr1_top_tb_ahb__DOT__test_file[1U];
                        __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__testname[2U] 
                            = vlSelf->scr1_top_tb_ahb__DOT__test_file[2U];
                        __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__testname[3U] 
                            = vlSelf->scr1_top_tb_ahb__DOT__test_file[3U];
                        __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__testname[4U] 
                            = vlSelf->scr1_top_tb_ahb__DOT__test_file[4U];
                        __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__testname[5U] 
                            = vlSelf->scr1_top_tb_ahb__DOT__test_file[5U];
                        __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__testname[6U] 
                            = vlSelf->scr1_top_tb_ahb__DOT__test_file[6U];
                        __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__testname[7U] 
                            = vlSelf->scr1_top_tb_ahb__DOT__test_file[7U];
                        vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__pattern_compliance[0U] = 0x616e6365U;
                        vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__pattern_compliance[1U] = 0x6d706c69U;
                        vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__pattern_compliance[2U] = 0x636fU;
                        vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__pattern_arch = 0x726368U;
                        __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__unnamedblk3__DOT__i = 0U;
                        {
                            while (VL_GTES_III(32, 0xb0U, __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__unnamedblk3__DOT__i)) {
                                if ((0U == ((((((0U 
                                                 == 
                                                 (0x1fU 
                                                  & __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__unnamedblk3__DOT__i))
                                                 ? 0U
                                                 : 
                                                (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__testname[
                                                 ((IData)(1U) 
                                                  + 
                                                  (7U 
                                                   & (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__unnamedblk3__DOT__i 
                                                      >> 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__unnamedblk3__DOT__i)))) 
                                               | (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__testname[
                                                  (7U 
                                                   & (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__unnamedblk3__DOT__i 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__unnamedblk3__DOT__i))) 
                                              ^ vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__pattern_compliance[0U]) 
                                             | ((((0U 
                                                   == 
                                                   (0x1fU 
                                                    & __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__unnamedblk3__DOT__i))
                                                   ? 0U
                                                   : 
                                                  (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__testname[
                                                   ((IData)(2U) 
                                                    + 
                                                    (7U 
                                                     & (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__unnamedblk3__DOT__i 
                                                        >> 5U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__unnamedblk3__DOT__i)))) 
                                                 | (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__testname[
                                                    ((IData)(1U) 
                                                     + 
                                                     (7U 
                                                      & (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__unnamedblk3__DOT__i 
                                                         >> 5U)))] 
                                                    >> 
                                                    (0x1fU 
                                                     & __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__unnamedblk3__DOT__i))) 
                                                ^ vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__pattern_compliance[1U])) 
                                            | ((0xffffU 
                                                & (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__unnamedblk3__DOT__i))
                                                     ? 0U
                                                     : 
                                                    (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__testname[
                                                     ((IData)(3U) 
                                                      + 
                                                      (7U 
                                                       & (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__unnamedblk3__DOT__i 
                                                          >> 5U)))] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__unnamedblk3__DOT__i)))) 
                                                   | (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__testname[
                                                      ((IData)(2U) 
                                                       + 
                                                       (7U 
                                                        & (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__unnamedblk3__DOT__i 
                                                           >> 5U)))] 
                                                      >> 
                                                      (0x1fU 
                                                       & __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__unnamedblk3__DOT__i)))) 
                                               ^ vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__pattern_compliance[2U])))) {
                                    __Vtemp_h8d9b71a9__1[0U] = 0U;
                                    __Vtemp_h8d9b71a9__1[1U] = 0U;
                                    __Vtemp_h8d9b71a9__1[2U] = 0U;
                                    VL_ASSIGNSEL_WW(256,88,
                                                    (0xffU 
                                                     & (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__unnamedblk3__DOT__i 
                                                        - (IData)(8U))), __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__testname, __Vtemp_h8d9b71a9__1);
                                    goto __Vlabel8;
                                }
                                __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__unnamedblk3__DOT__i 
                                    = ((IData)(1U) 
                                       + __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__unnamedblk3__DOT__i);
                            }
                            __Vlabel8: ;
                        }
                        __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__unnamedblk4__DOT__i = 0U;
                        {
                            while (VL_GTES_III(32, 0xe9U, __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__unnamedblk4__DOT__i)) {
                                if (((0x7fffffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__unnamedblk4__DOT__i))
                                                     ? 0U
                                                     : 
                                                    (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__testname[
                                                     (((IData)(0x16U) 
                                                       + 
                                                       (0xffU 
                                                        & __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__unnamedblk4__DOT__i)) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__unnamedblk4__DOT__i)))) 
                                                   | (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__testname[
                                                      (7U 
                                                       & (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__unnamedblk4__DOT__i 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__unnamedblk4__DOT__i)))) 
                                     == vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__pattern_arch)) {
                                    VL_ASSIGNSEL_WI(256,31,
                                                    (0xffU 
                                                     & (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__unnamedblk4__DOT__i 
                                                        - (IData)(8U))), __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__testname, 0U);
                                    goto __Vlabel9;
                                }
                                __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__unnamedblk4__DOT__i 
                                    = ((IData)(1U) 
                                       + __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__unnamedblk4__DOT__i);
                            }
                            __Vlabel9: ;
                        }
                        vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i = 0x20U;
                        {
                            while (VL_GTES_III(32, 0xf8U, vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i)) {
                                if ((0U == (0xffU & 
                                            (((0U == 
                                               (0x1fU 
                                                & vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i))
                                               ? 0U
                                               : (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__testname[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xffU 
                                                     & vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i)) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i)))) 
                                             | (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__testname[
                                                (7U 
                                                 & (vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i)))))) {
                                    goto __Vlabel10;
                                }
                                vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i 
                                    = ((IData)(8U) 
                                       + vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i);
                            }
                            __Vlabel10: ;
                        }
                        vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i 
                            = (vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i 
                               - (IData)(8U));
                        vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__j = 0xffU;
                        while (VL_LTS_III(32, 0x18U, vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i)) {
                            VL_ASSIGNSEL_WI(256,8,(0xffU 
                                                   & (vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__j 
                                                      - (IData)(7U))), vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__res, 
                                            (0xffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i))
                                                  ? 0U
                                                  : 
                                                 (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__testname[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xffU 
                                                     & vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i)) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i)))) 
                                                | (__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__testname[
                                                   (7U 
                                                    & (vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i)))));
                            vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__j 
                                = (vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__j 
                                   - (IData)(8U));
                            vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i 
                                = (vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i 
                                   - (IData)(8U));
                        }
                        while (VL_LTES_III(32, 0U, vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__j)) {
                            VL_ASSIGNSEL_WI(256,8,(0xffU 
                                                   & (vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__j 
                                                      - (IData)(7U))), vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__res, 0U);
                            vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__j 
                                = (vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__j 
                                   - (IData)(8U));
                        }
                        __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__Vfuncout[0U] 
                            = vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__res[0U];
                        __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__Vfuncout[1U] 
                            = vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__res[1U];
                        __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__Vfuncout[2U] 
                            = vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__res[2U];
                        __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__Vfuncout[3U] 
                            = vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__res[3U];
                        __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__Vfuncout[4U] 
                            = vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__res[4U];
                        __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__Vfuncout[5U] 
                            = vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__res[5U];
                        __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__Vfuncout[6U] 
                            = vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__res[6U];
                        __Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__Vfuncout[7U] 
                            = vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__res[7U];
                        VL_SFORMAT_X(2048,vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmpstr
                                     ,"riscv_arch/ref_data/%s",
                                     256,__Vfunc_scr1_top_tb_ahb__DOT__get_ref_filename__5__Vfuncout.data());
                    }
                }
                __Vilp = 0U;
                while ((__Vilp <= 0x3fU)) {
                    __Vfunc_scr1_top_tb_ahb__DOT__remove_trailing_whitespaces__6__str[__Vilp] 
                        = vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmpstr[__Vilp];
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlSelf->scr1_top_tb_ahb__DOT__remove_trailing_whitespaces__Vstatic__i = 0U;
                {
                    while (VL_GTES_III(32, 0x7f8U, vlSelf->scr1_top_tb_ahb__DOT__remove_trailing_whitespaces__Vstatic__i)) {
                        if ((0x20U != (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & vlSelf->scr1_top_tb_ahb__DOT__remove_trailing_whitespaces__Vstatic__i))
                                                  ? 0U
                                                  : 
                                                 (__Vfunc_scr1_top_tb_ahb__DOT__remove_trailing_whitespaces__6__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0x7ffU 
                                                     & vlSelf->scr1_top_tb_ahb__DOT__remove_trailing_whitespaces__Vstatic__i)) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & vlSelf->scr1_top_tb_ahb__DOT__remove_trailing_whitespaces__Vstatic__i)))) 
                                                | (__Vfunc_scr1_top_tb_ahb__DOT__remove_trailing_whitespaces__6__str[
                                                   (0x3fU 
                                                    & (vlSelf->scr1_top_tb_ahb__DOT__remove_trailing_whitespaces__Vstatic__i 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->scr1_top_tb_ahb__DOT__remove_trailing_whitespaces__Vstatic__i)))))) {
                            goto __Vlabel11;
                        }
                        vlSelf->scr1_top_tb_ahb__DOT__remove_trailing_whitespaces__Vstatic__i 
                            = ((IData)(8U) + vlSelf->scr1_top_tb_ahb__DOT__remove_trailing_whitespaces__Vstatic__i);
                    }
                    __Vlabel11: ;
                }
                VL_SHIFTR_WWI(2048,2048,32, __Vtemp_hb4963e3f__0, __Vfunc_scr1_top_tb_ahb__DOT__remove_trailing_whitespaces__6__str, vlSelf->scr1_top_tb_ahb__DOT__remove_trailing_whitespaces__Vstatic__i);
                __Vilp = 0U;
                while ((__Vilp <= 0x3fU)) {
                    __Vfunc_scr1_top_tb_ahb__DOT__remove_trailing_whitespaces__6__str[__Vilp] 
                        = __Vtemp_hb4963e3f__0[__Vilp];
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                __Vilp = 0U;
                while ((__Vilp <= 0x3fU)) {
                    __Vfunc_scr1_top_tb_ahb__DOT__remove_trailing_whitespaces__6__Vfuncout[__Vilp] 
                        = __Vfunc_scr1_top_tb_ahb__DOT__remove_trailing_whitespaces__6__str[__Vilp];
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                __Vilp = 0U;
                while ((__Vilp <= 0x3fU)) {
                    vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmpstr[__Vilp] 
                        = __Vfunc_scr1_top_tb_ahb__DOT__remove_trailing_whitespaces__6__Vfuncout[__Vilp];
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__fd 
                    = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(64, vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmpstr)
                                  , std::string{"r"});
                ;
                if (VL_UNLIKELY((0U == vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__fd))) {
                    VL_WRITEF("Can't open reference_data file: %s\n",
                              2048,vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmpstr.data());
                    vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__test_error = 1U;
                }
                while (((! (vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__fd ? feof(VL_CVT_I_FP(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__fd)) : true)) 
                        & (vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__start 
                           != vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__stop))) {
                    if (VL_LIKELY((1U == VL_FSCANF_IX(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__fd,"%x",
                                                      32,
                                                      &(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__ref_data)) ))) {
                        vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__test_data 
                            = ((vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory
                                [(0xfffffU & ((IData)(3U) 
                                              + vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__start))] 
                                << 0x18U) | ((vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory
                                              [(0xfffffU 
                                                & ((IData)(2U) 
                                                   + vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__start))] 
                                              << 0x10U) 
                                             | ((vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory
                                                 [(0xfffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__start))] 
                                                 << 8U) 
                                                | vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory
                                                [(0xfffffU 
                                                  & vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__start)])));
                        vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__test_pass 
                            = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__test_pass) 
                               & (vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__ref_data 
                                  == vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__test_data));
                        vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__start 
                            = ((IData)(4U) + vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__start);
                    } else {
                        VL_WRITEF("Wrong $fscanf\n");
                        vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__test_pass = 0U;
                    }
                }
                VL_FCLOSE_I(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__fd); vlSelf->scr1_top_tb_ahb__DOT__tests_total 
                    = ((IData)(1U) + vlSelf->scr1_top_tb_ahb__DOT__tests_total);
                vlSelf->scr1_top_tb_ahb__DOT__tests_passed 
                    = (vlSelf->scr1_top_tb_ahb__DOT__tests_passed 
                       + (1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__test_pass) 
                                & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__test_error)))));
                __Vdly__scr1_top_tb_ahb__DOT__watchdogs_cnt = 0U;
                if (((IData)(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__test_pass) 
                     & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__test_error)))) {
                    VL_WRITEF("\033[0;32mTest passed\033[0m\n");
                } else {
                    VL_WRITEF("\033[0;31mTest failed\033[0m\n");
                }
            } else {
                vlSelf->scr1_top_tb_ahb__DOT__test_running = 0U;
                vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__test_pass 
                    = (0U == vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x15U]);
                vlSelf->scr1_top_tb_ahb__DOT__tests_total 
                    = ((IData)(1U) + vlSelf->scr1_top_tb_ahb__DOT__tests_total);
                vlSelf->scr1_top_tb_ahb__DOT__tests_passed 
                    = (vlSelf->scr1_top_tb_ahb__DOT__tests_passed 
                       + (1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__test_pass) 
                                & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__test_error)))));
                __Vdly__scr1_top_tb_ahb__DOT__watchdogs_cnt = 0U;
                if (((IData)(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__test_pass) 
                     & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__test_error)))) {
                    VL_WRITEF("\033[0;32mTest passed\033[0m\n");
                } else {
                    VL_WRITEF("\033[0;31mTest failed\033[0m\n");
                }
            }
            VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__f_results,"%s\t\tOK\t%s\n",
                       256,vlSelf->scr1_top_tb_ahb__DOT__test_file.data(),
                       48,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__test_pass) 
                            & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__test_error)))
                            ? 0x50415353ULL : 0x5f5f4641494cULL));
        }
    } else if (VL_LIKELY((0U != vlSelf->scr1_top_tb_ahb__DOT__f_info))) {
        if (VL_LIKELY((0U != VL_FGETS_IXI(256, &(vlSelf->scr1_top_tb_ahb__DOT__test_file), vlSelf->scr1_top_tb_ahb__DOT__f_info)))) {
            VL_SHIFTR_WWI(256,256,32, __Vtemp_h1220cfe7__0, vlSelf->scr1_top_tb_ahb__DOT__test_file, 8U);
            vlSelf->scr1_top_tb_ahb__DOT__test_file[0U] 
                = __Vtemp_h1220cfe7__0[0U];
            vlSelf->scr1_top_tb_ahb__DOT__test_file[1U] 
                = __Vtemp_h1220cfe7__0[1U];
            vlSelf->scr1_top_tb_ahb__DOT__test_file[2U] 
                = __Vtemp_h1220cfe7__0[2U];
            vlSelf->scr1_top_tb_ahb__DOT__test_file[3U] 
                = __Vtemp_h1220cfe7__0[3U];
            vlSelf->scr1_top_tb_ahb__DOT__test_file[4U] 
                = __Vtemp_h1220cfe7__0[4U];
            vlSelf->scr1_top_tb_ahb__DOT__test_file[5U] 
                = __Vtemp_h1220cfe7__0[5U];
            vlSelf->scr1_top_tb_ahb__DOT__test_file[6U] 
                = __Vtemp_h1220cfe7__0[6U];
            vlSelf->scr1_top_tb_ahb__DOT__test_file[7U] 
                = __Vtemp_h1220cfe7__0[7U];
            vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__f_test 
                = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(8, vlSelf->scr1_top_tb_ahb__DOT__test_file)
                              , std::string{"r"});
            ;
            if ((0U != vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__f_test)) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__test_name 
                    = VL_CVT_PACK_STR_NW(8, vlSelf->scr1_top_tb_ahb__DOT__test_file);
                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__test_file[0U] 
                    = vlSelf->scr1_top_tb_ahb__DOT__test_file[0U];
                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__test_file[1U] 
                    = vlSelf->scr1_top_tb_ahb__DOT__test_file[1U];
                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__test_file[2U] 
                    = vlSelf->scr1_top_tb_ahb__DOT__test_file[2U];
                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__test_file[3U] 
                    = vlSelf->scr1_top_tb_ahb__DOT__test_file[3U];
                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__test_file[4U] 
                    = vlSelf->scr1_top_tb_ahb__DOT__test_file[4U];
                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__test_file[5U] 
                    = vlSelf->scr1_top_tb_ahb__DOT__test_file[5U];
                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__test_file[6U] 
                    = vlSelf->scr1_top_tb_ahb__DOT__test_file[6U];
                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__test_file[7U] 
                    = vlSelf->scr1_top_tb_ahb__DOT__test_file[7U];
                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__test_file_init = 1U;
                VL_WRITEF("\033[0;34m---Test: %s\033[0m\n",
                          256,vlSelf->scr1_top_tb_ahb__DOT__test_file.data());
                vlSelf->scr1_top_tb_ahb__DOT__test_running = 1U;
                __Vdly__scr1_top_tb_ahb__DOT__rst_init = 1U;
            } else {
                VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__f_results,"%s\t\t__FAIL\t--------\n",
                           256,vlSelf->scr1_top_tb_ahb__DOT__test_file.data());
            }
        } else {
            VL_WRITEF("\n#--------------------------------------\n# Summary: %0#/%0# tests passed\n#--------------------------------------\n\n",
                      32,vlSelf->scr1_top_tb_ahb__DOT__tests_passed,
                      32,vlSelf->scr1_top_tb_ahb__DOT__tests_total);
            VL_FCLOSE_I(vlSelf->scr1_top_tb_ahb__DOT__f_info); VL_FCLOSE_I(vlSelf->scr1_top_tb_ahb__DOT__f_results); VL_FINISH_MT("/home/zeinab/scr1/src/tb/scr1_top_tb_runtests.sv", 199, "");
        }
    } else {
        VL_WRITEF("\033[0;31mError: could not open file %@\033[0m\n",
                  -1,&(vlSelf->scr1_top_tb_ahb__DOT__s_info));
        VL_FINISH_MT("/home/zeinab/scr1/src/tb/scr1_top_tb_runtests.sv", 204, "");
    }
    if ((0x1e8480U == vlSelf->scr1_top_tb_ahb__DOT__watchdogs_cnt)) {
        if (VL_LIKELY((0U == ((((((((Vscr1_top_tb_ahb__ConstPool__CONST_hce140408_0[0U] 
                                     ^ vlSelf->scr1_top_tb_ahb__DOT__test_file[0U]) 
                                    | (Vscr1_top_tb_ahb__ConstPool__CONST_hce140408_0[1U] 
                                       ^ vlSelf->scr1_top_tb_ahb__DOT__test_file[1U])) 
                                   | (Vscr1_top_tb_ahb__ConstPool__CONST_hce140408_0[2U] 
                                      ^ vlSelf->scr1_top_tb_ahb__DOT__test_file[2U])) 
                                  | (Vscr1_top_tb_ahb__ConstPool__CONST_hce140408_0[3U] 
                                     ^ vlSelf->scr1_top_tb_ahb__DOT__test_file[3U])) 
                                 | (Vscr1_top_tb_ahb__ConstPool__CONST_hce140408_0[4U] 
                                    ^ vlSelf->scr1_top_tb_ahb__DOT__test_file[4U])) 
                                | (Vscr1_top_tb_ahb__ConstPool__CONST_hce140408_0[5U] 
                                   ^ vlSelf->scr1_top_tb_ahb__DOT__test_file[5U])) 
                               | (Vscr1_top_tb_ahb__ConstPool__CONST_hce140408_0[6U] 
                                  ^ vlSelf->scr1_top_tb_ahb__DOT__test_file[6U])) 
                              | (Vscr1_top_tb_ahb__ConstPool__CONST_hce140408_0[7U] 
                                 ^ vlSelf->scr1_top_tb_ahb__DOT__test_file[7U]))))) {
            vlSelf->scr1_top_tb_ahb__DOT__tests_total 
                = ((IData)(1U) + vlSelf->scr1_top_tb_ahb__DOT__tests_total);
            vlSelf->scr1_top_tb_ahb__DOT__tests_passed 
                = ((IData)(1U) + vlSelf->scr1_top_tb_ahb__DOT__tests_passed);
            VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__f_results,"%s\t\tOK\tPASS\n",
                       256,vlSelf->scr1_top_tb_ahb__DOT__test_file.data());
            vlSelf->scr1_top_tb_ahb__DOT__test_running = 0U;
            __Vdly__scr1_top_tb_ahb__DOT__watchdogs_cnt = 0U;
        } else {
            vlSelf->scr1_top_tb_ahb__DOT__tests_total 
                = ((IData)(1U) + vlSelf->scr1_top_tb_ahb__DOT__tests_total);
            VL_WRITEF("\033[0;31mError: TIMEOUT  %s\033[0m\n",
                      256,vlSelf->scr1_top_tb_ahb__DOT__test_file.data());
            VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__f_results,"%s\t\tOK\t__FAIL\n",
                       256,vlSelf->scr1_top_tb_ahb__DOT__test_file.data());
            vlSelf->scr1_top_tb_ahb__DOT__test_running = 0U;
            __Vdly__scr1_top_tb_ahb__DOT__watchdogs_cnt = 0U;
        }
    }
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__clk_en_abs) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_instr_ff 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_instr_next;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data1_ff 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data1_next;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data0_ff 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data0_next;
    }
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_imem_req) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_imem_rdata 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block
            [(0x3fffU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_addr 
                         >> 2U))];
    }
    if (((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_rd)) 
         & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_full)) 
            & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_imem_req)))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_r 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_addr;
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__hdu2ifu_pbuf_instr 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_pbuf_instr;
    if (((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_rd)) 
         & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_full)) 
            & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_req)))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_r[0U] 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_new[0U];
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_r[1U] 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_new[1U];
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_r[2U] 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_new[2U];
    }
    if (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__clk_en_abs) 
         & (0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_postexec_ff 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_postexec_next;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_size_ff 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_size_next;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_wr_ff 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_wr_next;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regno_ff 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regno;
        if (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr) 
             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf3))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf3_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wdata;
        }
        if (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr) 
             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf1))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf1_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wdata;
        }
        if (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr) 
             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf5))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf5_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wdata;
        }
        if (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr) 
             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf0))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf0_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wdata;
        }
        if (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr) 
             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf2))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf2_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wdata;
        }
        if (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr) 
             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf4))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf4_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wdata;
        }
    }
    if (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__clk_en_abs) 
         & ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
            | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h65cca704__0)))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_err_exc_ff 
            = ((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
               & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h65cca704__0));
    }
    if (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__clk_en_abs) 
         & ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
            | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_any)))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_err_acc_busy_ff 
            = ((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
               & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_any));
    }
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__clk_en_dm) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_autoexec_ff 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_autoexec_next;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_pbuf_ebreak_ff 
            = ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
               & (0x100073U == vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_pbuf_instr));
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_ff) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_req_ff 
                = (1U & (~ ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
                            | ((9U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
                               | ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
                                  | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_resp))))));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abstractcs_cmderr_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abstractcs_cmderr_next;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_next;
        } else {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_req_ff = 0U;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abstractcs_cmderr_ff = 0U;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff = 0U;
        }
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_command_ff 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_command_next;
    }
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_dvdnd_lo_upd) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_iter_cnt 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_iter_cnt_next;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_hi_ff 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_hi_next;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_c_ff 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_c_next;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_lo_ff 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_lo_next;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_dvdnd_lo_ff 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_dvdnd_lo_next;
    }
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_rd) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_rdata_shift_reg 
            = (3U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0);
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_rdata_local 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block
            [(0x3fffU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0 
                         >> 2U))];
    }
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_en) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__idu2exu_use_rs2_ff 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs2;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__idu2exu_use_rs1_ff 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs1;
    }
    if ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tdata2_upd))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tdata2_ff[0U] 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data;
    }
    if ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tdata2_upd))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tdata2_ff[1U] 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data;
    }
    if ((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tdata2_upd))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tdata2_ff[2U] 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data;
    }
    if ((8U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tdata2_upd))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tdata2_ff[3U] 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data;
    }
    vlSelf->scr1_top_tb_ahb__DOT__watchdogs_cnt = __Vdly__scr1_top_tb_ahb__DOT__watchdogs_cnt;
    vlSelf->scr1_top_tb_ahb__DOT__rst_init = __Vdly__scr1_top_tb_ahb__DOT__rst_init;
    vlSelf->scr1_top_tb_ahb__DOT__rst_cnt = __Vdly__scr1_top_tb_ahb__DOT__rst_cnt;
    if (__Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v0) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block[__Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v0))) 
                & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block
                [__Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v0) 
                                   << (IData)(__Vdlyvlsb__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v0))));
    }
    if (__Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v1) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block[__Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v1))) 
                & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block
                [__Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v1) 
                                   << (IData)(__Vdlyvlsb__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v1))));
    }
    if (__Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v2) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block[__Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v2))) 
                & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block
                [__Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v2) 
                                   << (IData)(__Vdlyvlsb__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v2))));
    }
    if (__Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v3) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block[__Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v3))) 
                & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block
                [__Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v3) 
                                   << (IData)(__Vdlyvlsb__scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block__v3))));
    }
    __Vtableidx12 = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_wr_ff) 
                      << 2U) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_size_ff));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_mem_funct3 
        = Vscr1_top_tb_ahb__ConstPool__TABLE_h4d7b73d6_0
        [__Vtableidx12];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rs1 = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rd = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_instr_next 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_instr_ff;
    if ((8U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) {
        if ((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) {
            if ((1U & (~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)))) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rs1 = 5U;
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rd = 5U;
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_instr_next 
                        = (0x7b201073U | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rs1) 
                                           << 0xfU) 
                                          | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rd) 
                                             << 7U)));
                }
            }
        } else if ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) {
            if ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) {
                if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_wr_ff) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rs1 = 5U;
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rd = 0U;
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_instr_next 
                        = (0x1073U | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regno_ff) 
                                       << 0x14U) | 
                                      (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rs1) 
                                        << 0xfU) | 
                                       ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rd) 
                                        << 7U))));
                } else {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rs1 = 0U;
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rd = 5U;
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_instr_next 
                        = (0x2073U | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regno_ff) 
                                       << 0x14U) | 
                                      (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rs1) 
                                        << 0xfU) | 
                                       ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rd) 
                                        << 7U))));
                }
            } else {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rs1 = 5U;
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rd 
                    = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_wr_ff)
                        ? 5U : 0U);
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_instr_next 
                    = (0x7b201073U | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rs1) 
                                       << 0xfU) | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rd) 
                                                   << 7U)));
            }
        } else if ((1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rs1 = 6U;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rd = 6U;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_instr_next 
                = (0x7b201073U | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rs1) 
                                   << 0xfU) | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rd) 
                                               << 7U)));
        }
    } else if ((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) {
        if ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) {
            if ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rs1 = 5U;
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rd = 5U;
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_instr_next 
                    = (0x7b201073U | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rs1) 
                                       << 0xfU) | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rd) 
                                                   << 7U)));
            } else {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rs1 = 6U;
                if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_wr_ff) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rd = 0U;
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_instr_next 
                        = (0x500023U | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rs1) 
                                         << 0xfU) | 
                                        ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_mem_funct3) 
                                         << 0xcU)));
                } else {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rd = 5U;
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_instr_next 
                        = (3U | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rs1) 
                                  << 0xfU) | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_mem_funct3) 
                                               << 0xcU) 
                                              | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rd) 
                                                 << 7U))));
                }
            }
        } else {
            if ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rs1 = 6U;
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rd = 6U;
            } else {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rs1 = 5U;
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rd 
                    = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_wr_ff)
                        ? 5U : 0U);
            }
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_instr_next 
                = (0x7b201073U | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rs1) 
                                   << 0xfU) | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rd) 
                                               << 7U)));
        }
    } else if ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) {
        if ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) {
            if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_wr_ff) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rs1 = 0U;
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rd 
                    = (0x1fU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regno_ff));
            } else {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rs1 
                    = (0x1fU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regno_ff));
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rd = 0U;
            }
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_instr_next 
                = (0x7b201073U | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rs1) 
                                   << 0xfU) | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rd) 
                                               << 7U)));
        }
    }
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__2(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg;
    vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tapc_trst_n) 
           & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tdo_en_ff 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tapc_trst_n) 
           & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__trst_n_int) 
              & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_dr_shift_ff) 
                 | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_ir_shift_ff))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tdo_out_ff 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tapc_trst_n) 
           & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__trst_n_int) 
              & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_dr_shift_ff)
                  ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__dr_out)
                  : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_ir_shift_ff) 
                     & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_shift_ff)))));
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__3(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_sequent__TOP__3\n"); );
    // Init
    IData/*31:0*/ __Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_idcode_reg__DOT__shift_reg;
    __Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_idcode_reg__DOT__shift_reg = 0;
    IData/*31:0*/ __Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_dr_bld_id_reg__DOT__shift_reg;
    __Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_dr_bld_id_reg__DOT__shift_reg = 0;
    // Body
    vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divpos 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divpos;
    __Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_dr_bld_id_reg__DOT__shift_reg 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_dr_bld_id_reg__DOT__shift_reg;
    __Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_idcode_reg__DOT__shift_reg 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_idcode_reg__DOT__shift_reg;
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tapc_trst_n) {
        vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divpos 
            = (1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divpos)));
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__trst_n_int) {
            if (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__dr_bld_id_sel) 
                 & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_dr_capture_ff))) {
                __Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_dr_bld_id_reg__DOT__shift_reg = 0x22011200U;
            } else if (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__dr_bld_id_sel) 
                        & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_dr_shift_ff))) {
                __Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_dr_bld_id_reg__DOT__shift_reg 
                    = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__tdi) 
                        << 0x1fU) | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_dr_bld_id_reg__DOT__shift_reg 
                                     >> 1U));
            }
            if (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__dr_idcode_sel) 
                 & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_dr_capture_ff))) {
                __Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_idcode_reg__DOT__shift_reg = 0xdeb11001U;
            } else if (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__dr_idcode_sel) 
                        & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_dr_shift_ff))) {
                __Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_idcode_reg__DOT__shift_reg 
                    = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__tdi) 
                        << 0x1fU) | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_idcode_reg__DOT__shift_reg 
                                     >> 1U));
            }
            if (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__dr_bypass_sel) 
                 & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_dr_capture_ff))) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_bypass_reg__DOT__shift_reg = 0U;
            } else if (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__dr_bypass_sel) 
                        & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_dr_shift_ff))) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_bypass_reg__DOT__shift_reg 
                    = vlSelf->scr1_top_tb_ahb__DOT__tdi;
            }
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_shift_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_shift_next;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_ir_shift_ff 
                = (0xbU == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_next));
        } else {
            __Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_dr_bld_id_reg__DOT__shift_reg = 0U;
            __Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_idcode_reg__DOT__shift_reg = 0U;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_bypass_reg__DOT__shift_reg = 0U;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_shift_ff = 0U;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_ir_shift_ff = 0U;
        }
    } else {
        vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divpos = 0U;
        __Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_dr_bld_id_reg__DOT__shift_reg = 0U;
        __Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_idcode_reg__DOT__shift_reg = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_bypass_reg__DOT__shift_reg = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_shift_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_ir_shift_ff = 0U;
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_dr_bld_id_reg__DOT__shift_reg 
        = __Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_dr_bld_id_reg__DOT__shift_reg;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_idcode_reg__DOT__shift_reg 
        = __Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_idcode_reg__DOT__shift_reg;
}

extern const VlUnpacked<CData/*0:0*/, 32> Vscr1_top_tb_ahb__ConstPool__TABLE_h99f2e119_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vscr1_top_tb_ahb__ConstPool__TABLE_h68287ea2_0;

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__4(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_sequent__TOP__4\n"); );
    // Init
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__25__Vfuncout;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__25__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__25__addr;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__25__addr = 0;
    CData/*3:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__25__r_be;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__25__r_be = 0;
    CData/*3:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__25__w_hazard;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__25__w_hazard = 0;
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__25__w_data;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__25__w_data = 0;
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__26__Vfuncout;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__26__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__26__addr;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__26__addr = 0;
    CData/*3:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__26__r_be;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__26__r_be = 0;
    CData/*3:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__26__w_hazard;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__26__w_hazard = 0;
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__26__w_data;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__26__w_data = 0;
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__27__Vfuncout;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__27__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__27__addr;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__27__addr = 0;
    CData/*3:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__27__r_be;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__27__r_be = 0;
    CData/*3:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__27__w_hazard;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__27__w_hazard = 0;
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__27__w_data;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__27__w_data = 0;
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__28__Vfuncout;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__28__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__28__addr;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__28__addr = 0;
    CData/*3:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__28__r_be;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__28__r_be = 0;
    CData/*3:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__28__w_hazard;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__28__w_hazard = 0;
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__28__w_data;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__28__w_data = 0;
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__30__Vfuncout;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__30__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__30__addr;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__30__addr = 0;
    CData/*3:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__30__r_be;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__30__r_be = 0;
    CData/*3:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__30__w_hazard;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__30__w_hazard = 0;
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__30__w_data;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__30__w_data = 0;
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__31__Vfuncout;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__31__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__31__addr;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__31__addr = 0;
    CData/*3:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__31__r_be;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__31__r_be = 0;
    CData/*3:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__31__w_hazard;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__31__w_hazard = 0;
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__31__w_data;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__31__w_data = 0;
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__32__Vfuncout;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__32__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__32__addr;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__32__addr = 0;
    CData/*3:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__32__r_be;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__32__r_be = 0;
    CData/*3:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__32__w_hazard;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__32__w_hazard = 0;
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__32__w_data;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__32__w_data = 0;
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__33__Vfuncout;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__33__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__33__addr;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__33__addr = 0;
    CData/*3:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__33__r_be;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__33__r_be = 0;
    CData/*3:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__33__w_hazard;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__33__w_hazard = 0;
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__33__w_data;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__33__w_data = 0;
    CData/*4:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    CData/*0:0*/ __Vdly__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_ahb_state;
    __Vdly__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_ahb_state = 0;
    // Body
    __Vdly__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_ahb_state 
        = vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_ahb_state;
    vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_state 
        = vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_state;
    vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v0 = 0U;
    vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v1 = 0U;
    vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v2 = 0U;
    vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v3 = 0U;
    vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v4 = 0U;
    vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v5 = 0U;
    vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v6 = 0U;
    vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v7 = 0U;
    vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v0 = 0U;
    vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v1 = 0U;
    vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v2 = 0U;
    vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v3 = 0U;
    vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v4 = 0U;
    vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v5 = 0U;
    vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v6 = 0U;
    vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v7 = 0U;
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_cpu_rstn_reset_sync__DOT__local_rst_n_in) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_pwrup_rstn_reset_sync__DOT__rst_n_dff 
            = (1U | (2U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_pwrup_rstn_reset_sync__DOT__rst_n_dff) 
                           << 1U)));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_cpu_rstn_reset_sync__DOT__rst_n_dff 
            = ((2U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_cpu_rstn_reset_sync__DOT__rst_n_dff) 
                      << 1U)) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_cpu_rstn_reset_sync__DOT__local_rst_n_in));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_rstn_reset_sync__DOT__rst_n_dff 
            = ((2U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_rstn_reset_sync__DOT__rst_n_dff) 
                      << 1U)) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_cpu_rstn_reset_sync__DOT__local_rst_n_in));
        if (vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_ahb_state) {
            if (vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_ahb_state) {
                if (vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_req_ack) {
                    if ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__imem_htrans))) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_ahb_addr = 0U;
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_hrdata_l = 0U;
                    } else if ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__imem_htrans))) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_ahb_addr 
                            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo;
                        __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__27__w_data 
                            = (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__data_fifo);
                        __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__27__w_hazard 
                            = vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_wr_hazard;
                        __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__27__r_be 
                            = vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_be;
                        __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__27__addr 
                            = (0xfffffffcU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo);
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__addr_mirage 
                            = (0xfffffU & __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__27__addr);
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp 
                            = ((0xffffff00U & vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp) 
                               | ((1U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__27__r_be))
                                   ? (0xffU & ((1U 
                                                & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__27__w_hazard))
                                                ? __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__27__w_data
                                                : vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage
                                               [vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__addr_mirage]))
                                   : 0U));
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp 
                            = ((0xffff00ffU & vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp) 
                               | (((2U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__27__r_be))
                                    ? (0xffU & ((2U 
                                                 & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__27__w_hazard))
                                                 ? 
                                                (__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__27__w_data 
                                                 >> 8U)
                                                 : 
                                                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage
                                                [(0xfffffU 
                                                  & ((IData)(1U) 
                                                     + vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__addr_mirage))]))
                                    : 0U) << 8U));
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp 
                            = ((0xff00ffffU & vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp) 
                               | (((4U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__27__r_be))
                                    ? (0xffU & ((4U 
                                                 & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__27__w_hazard))
                                                 ? 
                                                (__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__27__w_data 
                                                 >> 0x10U)
                                                 : 
                                                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage
                                                [(0xfffffU 
                                                  & ((IData)(2U) 
                                                     + vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__addr_mirage))]))
                                    : 0U) << 0x10U));
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp 
                            = ((0xffffffU & vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp) 
                               | (((8U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__27__r_be))
                                    ? (0xffU & ((8U 
                                                 & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__27__w_hazard))
                                                 ? 
                                                (__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__27__w_data 
                                                 >> 0x18U)
                                                 : 
                                                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage
                                                [(0xfffffU 
                                                  & ((IData)(3U) 
                                                     + vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__addr_mirage))]))
                                    : 0U) << 0x18U));
                        __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__27__Vfuncout 
                            = vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp;
                        __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__28__w_data 
                            = (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__data_fifo);
                        __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__28__w_hazard 
                            = vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_wr_hazard;
                        __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__28__r_be 
                            = vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_be;
                        __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__28__addr 
                            = (0xfffffffcU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo);
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp 
                            = ((0xffffff00U & vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp) 
                               | ((1U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__28__r_be))
                                   ? (0xffU & ((1U 
                                                & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__28__w_hazard))
                                                ? __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__28__w_data
                                                : vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory
                                               [(0xfffffU 
                                                 & __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__28__addr)]))
                                   : 0U));
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp 
                            = ((0xffff00ffU & vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp) 
                               | (((2U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__28__r_be))
                                    ? (0xffU & ((2U 
                                                 & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__28__w_hazard))
                                                 ? 
                                                (__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__28__w_data 
                                                 >> 8U)
                                                 : 
                                                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory
                                                [(0xfffffU 
                                                  & ((IData)(1U) 
                                                     + __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__28__addr))]))
                                    : 0U) << 8U));
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp 
                            = ((0xff00ffffU & vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp) 
                               | (((4U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__28__r_be))
                                    ? (0xffU & ((4U 
                                                 & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__28__w_hazard))
                                                 ? 
                                                (__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__28__w_data 
                                                 >> 0x10U)
                                                 : 
                                                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory
                                                [(0xfffffU 
                                                  & ((IData)(2U) 
                                                     + __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__28__addr))]))
                                    : 0U) << 0x10U));
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp 
                            = ((0xffffffU & vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp) 
                               | (((8U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__28__r_be))
                                    ? (0xffU & ((8U 
                                                 & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__28__w_hazard))
                                                 ? 
                                                (__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__28__w_data 
                                                 >> 0x18U)
                                                 : 
                                                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory
                                                [(0xfffffU 
                                                  & ((IData)(3U) 
                                                     + __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__28__addr))]))
                                    : 0U) << 0x18U));
                        __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__28__Vfuncout 
                            = vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp;
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_hrdata_l 
                            = ((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage_rangeen) 
                                 & (0xffffffffU <= vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo)) 
                                & (0xffffffffU > vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo))
                                ? __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__27__Vfuncout
                                : __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__28__Vfuncout);
                    } else {
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_ahb_addr = 0U;
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_hrdata_l = 0U;
                    }
                }
            } else {
                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_ahb_addr = 0U;
                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_hrdata_l = 0U;
            }
        } else if ((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__imem_htrans))) {
            if ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__imem_htrans))) {
                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_ahb_addr 
                    = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo;
                __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__25__w_data 
                    = (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__data_fifo);
                __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__25__w_hazard 
                    = vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_wr_hazard;
                __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__25__r_be 
                    = vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_be;
                __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__25__addr 
                    = (0xfffffffcU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo);
                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__addr_mirage 
                    = (0xfffffU & __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__25__addr);
                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp 
                    = ((0xffffff00U & vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp) 
                       | ((1U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__25__r_be))
                           ? (0xffU & ((1U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__25__w_hazard))
                                        ? __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__25__w_data
                                        : vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage
                                       [vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__addr_mirage]))
                           : 0U));
                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp 
                    = ((0xffff00ffU & vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp) 
                       | (((2U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__25__r_be))
                            ? (0xffU & ((2U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__25__w_hazard))
                                         ? (__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__25__w_data 
                                            >> 8U) : 
                                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage
                                        [(0xfffffU 
                                          & ((IData)(1U) 
                                             + vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__addr_mirage))]))
                            : 0U) << 8U));
                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp 
                    = ((0xff00ffffU & vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp) 
                       | (((4U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__25__r_be))
                            ? (0xffU & ((4U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__25__w_hazard))
                                         ? (__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__25__w_data 
                                            >> 0x10U)
                                         : vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage
                                        [(0xfffffU 
                                          & ((IData)(2U) 
                                             + vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__addr_mirage))]))
                            : 0U) << 0x10U));
                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp 
                    = ((0xffffffU & vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp) 
                       | (((8U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__25__r_be))
                            ? (0xffU & ((8U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__25__w_hazard))
                                         ? (__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__25__w_data 
                                            >> 0x18U)
                                         : vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage
                                        [(0xfffffU 
                                          & ((IData)(3U) 
                                             + vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__addr_mirage))]))
                            : 0U) << 0x18U));
                __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__25__Vfuncout 
                    = vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp;
                __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__26__w_data 
                    = (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__data_fifo);
                __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__26__w_hazard 
                    = vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_wr_hazard;
                __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__26__r_be 
                    = vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_be;
                __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__26__addr 
                    = (0xfffffffcU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo);
                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp 
                    = ((0xffffff00U & vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp) 
                       | ((1U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__26__r_be))
                           ? (0xffU & ((1U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__26__w_hazard))
                                        ? __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__26__w_data
                                        : vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory
                                       [(0xfffffU & __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__26__addr)]))
                           : 0U));
                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp 
                    = ((0xffff00ffU & vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp) 
                       | (((2U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__26__r_be))
                            ? (0xffU & ((2U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__26__w_hazard))
                                         ? (__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__26__w_data 
                                            >> 8U) : 
                                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory
                                        [(0xfffffU 
                                          & ((IData)(1U) 
                                             + __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__26__addr))]))
                            : 0U) << 8U));
                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp 
                    = ((0xff00ffffU & vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp) 
                       | (((4U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__26__r_be))
                            ? (0xffU & ((4U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__26__w_hazard))
                                         ? (__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__26__w_data 
                                            >> 0x10U)
                                         : vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory
                                        [(0xfffffU 
                                          & ((IData)(2U) 
                                             + __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__26__addr))]))
                            : 0U) << 0x10U));
                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp 
                    = ((0xffffffU & vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp) 
                       | (((8U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__26__r_be))
                            ? (0xffU & ((8U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__26__w_hazard))
                                         ? (__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__26__w_data 
                                            >> 0x18U)
                                         : vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory
                                        [(0xfffffU 
                                          & ((IData)(3U) 
                                             + __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__26__addr))]))
                            : 0U) << 0x18U));
                __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__26__Vfuncout 
                    = vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp;
                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_hrdata_l 
                    = ((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage_rangeen) 
                         & (0xffffffffU <= vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo)) 
                        & (0xffffffffU > vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo))
                        ? __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__25__Vfuncout
                        : __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__26__Vfuncout);
            } else {
                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_ahb_addr = 0U;
                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_hrdata_l = 0U;
            }
        }
        if (vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_state) {
            if (vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_state) {
                if (vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack) {
                    if ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__dmem_htrans))) {
                        vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_state = 0U;
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_size = 0U;
                    } else if ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__dmem_htrans))) {
                        if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[2U] 
                                      >> 3U)))) {
                            vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_state 
                                = (1U & (~ ((0xf0000200U 
                                             == vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[1U]) 
                                            | (0xf0000100U 
                                               == vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[1U]))));
                        }
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_size 
                            = (7U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[2U]);
                    } else {
                        vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_state = 0U;
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_size = 0U;
                    }
                    if ((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__dmem_htrans))) {
                        if ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__dmem_htrans))) {
                            if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[2U] 
                                          >> 3U)))) {
                                if ((1U & (~ ((0xf0000200U 
                                               == vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[1U]) 
                                              | (0xf0000100U 
                                                 == 
                                                 vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[1U]))))) {
                                    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__32__w_data 
                                        = (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__data_fifo);
                                    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__32__w_hazard 
                                        = vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_wr_hazard;
                                    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__32__r_be 
                                        = vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_be;
                                    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__32__addr 
                                        = (0xfffffffcU 
                                           & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[1U]);
                                    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__addr_mirage 
                                        = (0xfffffU 
                                           & __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__32__addr);
                                    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp 
                                        = ((0xffffff00U 
                                            & vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp) 
                                           | ((1U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__32__r_be))
                                               ? (0xffU 
                                                  & ((1U 
                                                      & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__32__w_hazard))
                                                      ? __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__32__w_data
                                                      : 
                                                     vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage
                                                     [vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__addr_mirage]))
                                               : 0U));
                                    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp 
                                        = ((0xffff00ffU 
                                            & vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp) 
                                           | (((2U 
                                                & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__32__r_be))
                                                ? (0xffU 
                                                   & ((2U 
                                                       & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__32__w_hazard))
                                                       ? 
                                                      (__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__32__w_data 
                                                       >> 8U)
                                                       : 
                                                      vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage
                                                      [
                                                      (0xfffffU 
                                                       & ((IData)(1U) 
                                                          + vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__addr_mirage))]))
                                                : 0U) 
                                              << 8U));
                                    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp 
                                        = ((0xff00ffffU 
                                            & vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp) 
                                           | (((4U 
                                                & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__32__r_be))
                                                ? (0xffU 
                                                   & ((4U 
                                                       & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__32__w_hazard))
                                                       ? 
                                                      (__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__32__w_data 
                                                       >> 0x10U)
                                                       : 
                                                      vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage
                                                      [
                                                      (0xfffffU 
                                                       & ((IData)(2U) 
                                                          + vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__addr_mirage))]))
                                                : 0U) 
                                              << 0x10U));
                                    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp 
                                        = ((0xffffffU 
                                            & vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp) 
                                           | (((8U 
                                                & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__32__r_be))
                                                ? (0xffU 
                                                   & ((8U 
                                                       & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__32__w_hazard))
                                                       ? 
                                                      (__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__32__w_data 
                                                       >> 0x18U)
                                                       : 
                                                      vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage
                                                      [
                                                      (0xfffffU 
                                                       & ((IData)(3U) 
                                                          + vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__addr_mirage))]))
                                                : 0U) 
                                              << 0x18U));
                                    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__32__Vfuncout 
                                        = vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp;
                                    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__33__w_data 
                                        = (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__data_fifo);
                                    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__33__w_hazard 
                                        = vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_wr_hazard;
                                    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__33__r_be 
                                        = vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_be;
                                    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__33__addr 
                                        = (0xfffffffcU 
                                           & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[1U]);
                                    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp 
                                        = ((0xffffff00U 
                                            & vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp) 
                                           | ((1U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__33__r_be))
                                               ? (0xffU 
                                                  & ((1U 
                                                      & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__33__w_hazard))
                                                      ? __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__33__w_data
                                                      : 
                                                     vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory
                                                     [
                                                     (0xfffffU 
                                                      & __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__33__addr)]))
                                               : 0U));
                                    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp 
                                        = ((0xffff00ffU 
                                            & vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp) 
                                           | (((2U 
                                                & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__33__r_be))
                                                ? (0xffU 
                                                   & ((2U 
                                                       & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__33__w_hazard))
                                                       ? 
                                                      (__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__33__w_data 
                                                       >> 8U)
                                                       : 
                                                      vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory
                                                      [
                                                      (0xfffffU 
                                                       & ((IData)(1U) 
                                                          + __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__33__addr))]))
                                                : 0U) 
                                              << 8U));
                                    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp 
                                        = ((0xff00ffffU 
                                            & vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp) 
                                           | (((4U 
                                                & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__33__r_be))
                                                ? (0xffU 
                                                   & ((4U 
                                                       & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__33__w_hazard))
                                                       ? 
                                                      (__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__33__w_data 
                                                       >> 0x10U)
                                                       : 
                                                      vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory
                                                      [
                                                      (0xfffffU 
                                                       & ((IData)(2U) 
                                                          + __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__33__addr))]))
                                                : 0U) 
                                              << 0x10U));
                                    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp 
                                        = ((0xffffffU 
                                            & vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp) 
                                           | (((8U 
                                                & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__33__r_be))
                                                ? (0xffU 
                                                   & ((8U 
                                                       & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__33__w_hazard))
                                                       ? 
                                                      (__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__33__w_data 
                                                       >> 0x18U)
                                                       : 
                                                      vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory
                                                      [
                                                      (0xfffffU 
                                                       & ((IData)(3U) 
                                                          + __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__33__addr))]))
                                                : 0U) 
                                              << 0x18U));
                                    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__33__Vfuncout 
                                        = vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp;
                                    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_hrdata_l 
                                        = ((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage_rangeen) 
                                             & (0xffffffffU 
                                                <= 
                                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[1U])) 
                                            & (0xffffffffU 
                                               > vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[1U]))
                                            ? __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__32__Vfuncout
                                            : __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__33__Vfuncout);
                                }
                            }
                        } else {
                            vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_hrdata_l = 0U;
                        }
                    }
                }
            } else {
                vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_state = 0U;
                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_size = 0U;
                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_hrdata_l = 0U;
            }
        } else if ((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__dmem_htrans))) {
            if ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__dmem_htrans))) {
                vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_state = 1U;
                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_size 
                    = (7U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[2U]);
                if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[2U] 
                              >> 3U)))) {
                    if ((0xf0000200U == vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[1U])) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_hrdata_l = 0U;
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_hrdata_l 
                            = ((0xfffffffeU & vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_hrdata_l) 
                               | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__soft_irq_reg));
                    } else if ((0xf0000100U == vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[1U])) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_hrdata_l = 0U;
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_hrdata_l 
                            = ((0xffff0000U & vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_hrdata_l) 
                               | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__irq_lines_reg));
                    } else {
                        __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__30__w_data 
                            = (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__data_fifo);
                        __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__30__w_hazard 
                            = vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_wr_hazard;
                        __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__30__r_be 
                            = vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_be;
                        __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__30__addr 
                            = (0xfffffffcU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[1U]);
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__addr_mirage 
                            = (0xfffffU & __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__30__addr);
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp 
                            = ((0xffffff00U & vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp) 
                               | ((1U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__30__r_be))
                                   ? (0xffU & ((1U 
                                                & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__30__w_hazard))
                                                ? __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__30__w_data
                                                : vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage
                                               [vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__addr_mirage]))
                                   : 0U));
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp 
                            = ((0xffff00ffU & vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp) 
                               | (((2U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__30__r_be))
                                    ? (0xffU & ((2U 
                                                 & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__30__w_hazard))
                                                 ? 
                                                (__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__30__w_data 
                                                 >> 8U)
                                                 : 
                                                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage
                                                [(0xfffffU 
                                                  & ((IData)(1U) 
                                                     + vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__addr_mirage))]))
                                    : 0U) << 8U));
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp 
                            = ((0xff00ffffU & vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp) 
                               | (((4U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__30__r_be))
                                    ? (0xffU & ((4U 
                                                 & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__30__w_hazard))
                                                 ? 
                                                (__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__30__w_data 
                                                 >> 0x10U)
                                                 : 
                                                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage
                                                [(0xfffffU 
                                                  & ((IData)(2U) 
                                                     + vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__addr_mirage))]))
                                    : 0U) << 0x10U));
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp 
                            = ((0xffffffU & vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp) 
                               | (((8U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__30__r_be))
                                    ? (0xffU & ((8U 
                                                 & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__30__w_hazard))
                                                 ? 
                                                (__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__30__w_data 
                                                 >> 0x18U)
                                                 : 
                                                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage
                                                [(0xfffffU 
                                                  & ((IData)(3U) 
                                                     + vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__addr_mirage))]))
                                    : 0U) << 0x18U));
                        __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__30__Vfuncout 
                            = vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp;
                        __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__31__w_data 
                            = (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__data_fifo);
                        __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__31__w_hazard 
                            = vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_wr_hazard;
                        __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__31__r_be 
                            = vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_be;
                        __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__31__addr 
                            = (0xfffffffcU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[1U]);
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp 
                            = ((0xffffff00U & vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp) 
                               | ((1U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__31__r_be))
                                   ? (0xffU & ((1U 
                                                & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__31__w_hazard))
                                                ? __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__31__w_data
                                                : vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory
                                               [(0xfffffU 
                                                 & __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__31__addr)]))
                                   : 0U));
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp 
                            = ((0xffff00ffU & vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp) 
                               | (((2U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__31__r_be))
                                    ? (0xffU & ((2U 
                                                 & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__31__w_hazard))
                                                 ? 
                                                (__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__31__w_data 
                                                 >> 8U)
                                                 : 
                                                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory
                                                [(0xfffffU 
                                                  & ((IData)(1U) 
                                                     + __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__31__addr))]))
                                    : 0U) << 8U));
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp 
                            = ((0xff00ffffU & vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp) 
                               | (((4U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__31__r_be))
                                    ? (0xffU & ((4U 
                                                 & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__31__w_hazard))
                                                 ? 
                                                (__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__31__w_data 
                                                 >> 0x10U)
                                                 : 
                                                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory
                                                [(0xfffffU 
                                                  & ((IData)(2U) 
                                                     + __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__31__addr))]))
                                    : 0U) << 0x10U));
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp 
                            = ((0xffffffU & vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp) 
                               | (((8U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__31__r_be))
                                    ? (0xffU & ((8U 
                                                 & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__31__w_hazard))
                                                 ? 
                                                (__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__31__w_data 
                                                 >> 0x18U)
                                                 : 
                                                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory
                                                [(0xfffffU 
                                                  & ((IData)(3U) 
                                                     + __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__31__addr))]))
                                    : 0U) << 0x18U));
                        __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__31__Vfuncout 
                            = vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp;
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_hrdata_l 
                            = ((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage_rangeen) 
                                 & (0xffffffffU <= 
                                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[1U])) 
                                & (0xffffffffU > vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[1U]))
                                ? __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__30__Vfuncout
                                : __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__31__Vfuncout);
                    }
                }
            } else {
                vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_state = 0U;
                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_size = 0U;
                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_hrdata_l = 0U;
            }
        } else {
            vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_state = 0U;
        }
        if ((0U == vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_req_ack_stall)) {
            vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_req_ack_rnd 
                = (1U & VL_RANDOM_I());
        } else {
            vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_req_ack_stall 
                = ((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_ahb_state) 
                          | (~ vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_req_ack_stall)))
                    ? ((vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_req_ack_stall 
                        << 0x1fU) | (vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_req_ack_stall 
                                     >> 1U)) : vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_req_ack_stall);
        }
        if ((0U == vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack_stall)) {
            vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack_rnd 
                = (1U & VL_RANDOM_I());
        } else {
            vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack_stall 
                = ((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_state) 
                          | (~ vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack_stall)))
                    ? ((vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack_stall 
                        << 0x1fU) | (vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack_stall 
                                     >> 1U)) : vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack_stall);
        }
    } else {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_pwrup_rstn_reset_sync__DOT__rst_n_dff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_cpu_rstn_reset_sync__DOT__rst_n_dff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_rstn_reset_sync__DOT__rst_n_dff = 0U;
        vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_state = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_ahb_addr = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_req_ack_stall 
            = vlSelf->scr1_top_tb_ahb__DOT__imem_req_ack_stall;
        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_req_ack_rnd = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_hrdata_l = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_size = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack_stall 
            = vlSelf->scr1_top_tb_ahb__DOT__dmem_req_ack_stall;
        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack_rnd = 0U;
    }
    __Vtableidx17 = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__imem_htrans) 
                      << 3U) | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_req_ack) 
                                 << 2U) | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_ahb_state) 
                                            << 1U) 
                                           | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_cpu_rstn_reset_sync__DOT__local_rst_n_in))));
    if (Vscr1_top_tb_ahb__ConstPool__TABLE_h99f2e119_0
        [__Vtableidx17]) {
        __Vdly__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_ahb_state 
            = Vscr1_top_tb_ahb__ConstPool__TABLE_h68287ea2_0
            [__Vtableidx17];
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_ahb_state 
        = __Vdly__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_ahb_state;
    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_req_ack 
        = (1U & ((0U == vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_req_ack_stall)
                  ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_req_ack_rnd)
                  : vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_req_ack_stall));
    vlSelf->scr1_top_tb_ahb__DOT__imem_hrdata = 0U;
    if (vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_ahb_state) {
        if (vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_ahb_state) {
            if (vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_req_ack) {
                vlSelf->scr1_top_tb_ahb__DOT__imem_hrdata 
                    = vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_hrdata_l;
            }
        }
    }
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__5(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_sequent__TOP__5\n"); );
    // Init
    CData/*3:0*/ __Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg_sync;
    __Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg_sync = 0;
    CData/*2:0*/ __Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_tdi_sync;
    __Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_tdi_sync = 0;
    // Body
    __Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg_sync 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg_sync;
    __Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_tdi_sync 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_tdi_sync;
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__rst_n_mux) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__unnamedblk1__DOT__i = 4U;
        __Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg_sync 
            = ((0xeU & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg_sync) 
                        << 1U)) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg));
        __Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_tdi_sync 
            = ((6U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_tdi_sync) 
                      << 1U)) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__tdi));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divpos_sync 
            = ((0xeU & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divpos_sync) 
                        << 1U)) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divpos));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_status_sync__DOT__data_dff 
            = ((2U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_status_sync__DOT__data_dff) 
                      << 1U)) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_status_ff));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_status_sync__DOT__data_dff 
            = ((2U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_status_sync__DOT__data_dff) 
                      << 1U)) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_status_ff));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_status_sync__DOT__data_dff 
            = ((2U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_status_sync__DOT__data_dff) 
                      << 1U)) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_status_ff));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_status_ff_dly 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_status_ff;
        if ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_status_ff_posedge))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_sticky_sts_ff 
                = (1U | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_sticky_sts_ff));
        } else if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_sticky_sts_wr_req) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_sticky_sts_ff 
                = ((0xeU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_sticky_sts_ff)) 
                   | (1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_csr_wdata)));
        }
        if ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_status_ff_posedge))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_sticky_sts_ff 
                = (2U | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_sticky_sts_ff));
        } else if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_sticky_sts_wr_req) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_sticky_sts_ff 
                = ((0xdU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_sticky_sts_ff)) 
                   | (2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_csr_wdata)));
        }
        if ((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_status_ff_posedge))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_sticky_sts_ff 
                = (4U | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_sticky_sts_ff));
        } else if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_sticky_sts_wr_req) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_sticky_sts_ff 
                = ((0xbU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_sticky_sts_ff)) 
                   | (4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_csr_wdata)));
        }
        if ((8U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_status_ff_posedge))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_sticky_sts_ff 
                = (8U | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_sticky_sts_ff));
        } else if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_sticky_sts_wr_req) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_sticky_sts_ff 
                = ((7U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_sticky_sts_ff)) 
                   | (8U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_csr_wdata)));
        }
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_rise_load) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_tdi 
                = (1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_tdi_sync) 
                         >> 2U));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_scu_ch_sel 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_scu_ch_sel_tapout;
        } else if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_rise_reset) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_tdi = 0U;
        }
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_control_wr_req) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_control_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_csr_wdata;
        }
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_dr_upd_req) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shadow_ff 
                = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_csr_wdata) 
                    << 4U) | (0xfU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_ff)));
        }
        if ((1U & VL_REDXOR_4((6U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg_sync))))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_update 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_dr_update_ff;
        } else if ((1U & VL_REDXOR_4((0xcU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg_sync))))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_update = 0U;
        }
        if (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_dr_cap_req) 
             | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_dr_shft_req))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_next;
        }
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_tdi_sync 
            = __Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_tdi_sync;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg_sync 
            = __Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg_sync;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_status_ff 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_status_ff 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_status_ff 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff;
    } else {
        __Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg_sync = 0U;
        __Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_tdi_sync = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divpos_sync = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_status_sync__DOT__data_dff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_status_sync__DOT__data_dff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_status_sync__DOT__data_dff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_status_ff_dly = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_sticky_sts_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_tdi = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_control_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_scu_ch_sel = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shadow_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_update = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_tdi_sync 
            = __Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_tdi_sync;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg_sync 
            = __Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg_sync;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_status_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_status_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_status_ff = 0U;
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_dr_upd_req 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_update) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_scu_ch_sel));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__rst_n_mux) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__sys_rst_n_in));
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__6(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_sequent__TOP__6\n"); );
    // Body
    vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_capture_sync 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_capture_sync;
    vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_shift_sync 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_shift_sync;
}

extern const VlUnpacked<CData/*1:0*/, 128> Vscr1_top_tb_ahb__ConstPool__TABLE_h76d264de_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vscr1_top_tb_ahb__ConstPool__TABLE_h3815d84a_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vscr1_top_tb_ahb__ConstPool__TABLE_h07c63d5c_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vscr1_top_tb_ahb__ConstPool__TABLE_hd9392976_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vscr1_top_tb_ahb__ConstPool__TABLE_h49fbee7f_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vscr1_top_tb_ahb__ConstPool__TABLE_hbf0b3240_0;

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__7(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_sequent__TOP__7\n"); );
    // Init
    Vscr1_top_tb_ahb_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__type_scr1_search_one_16_s__struct__0 __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__Vfuncout;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__Vfuncout.__PVT__vd = 0;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__Vfuncout.__PVT__idx = 0;
    SData/*15:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__din;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__din = 0;
    Vscr1_top_tb_ahb_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__type_scr1_search_one_2_s__struct__0 __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp.__PVT__vd = 0;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp.__PVT__idx = 0;
    Vscr1_top_tb_ahb_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__type_scr1_search_one_2_s__struct__0 __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp.__PVT__vd = 0;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp.__PVT__idx = 0;
    Vscr1_top_tb_ahb_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__type_scr1_search_one_2_s__struct__0 __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmp;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmp.__PVT__vd = 0;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmp.__PVT__idx = 0;
    Vscr1_top_tb_ahb_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__type_scr1_search_one_2_s__struct__0 __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__Vfuncout;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__Vfuncout.__PVT__vd = 0;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__Vfuncout.__PVT__idx = 0;
    CData/*1:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__din;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__din = 0;
    Vscr1_top_tb_ahb_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__type_scr1_search_one_2_s__struct__0 __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__9__Vfuncout;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__9__Vfuncout.__PVT__vd = 0;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__9__Vfuncout.__PVT__idx = 0;
    CData/*1:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__9__din;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__9__din = 0;
    Vscr1_top_tb_ahb_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__type_scr1_search_one_2_s__struct__0 __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__10__Vfuncout;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__10__Vfuncout.__PVT__vd = 0;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__10__Vfuncout.__PVT__idx = 0;
    CData/*1:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__10__din;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__10__din = 0;
    Vscr1_top_tb_ahb_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__type_scr1_search_one_16_s__struct__0 __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__Vfuncout;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__Vfuncout.__PVT__vd = 0;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__Vfuncout.__PVT__idx = 0;
    SData/*15:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__din;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__din = 0;
    Vscr1_top_tb_ahb_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__type_scr1_search_one_2_s__struct__0 __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp.__PVT__vd = 0;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp.__PVT__idx = 0;
    Vscr1_top_tb_ahb_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__type_scr1_search_one_2_s__struct__0 __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp.__PVT__vd = 0;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp.__PVT__idx = 0;
    Vscr1_top_tb_ahb_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__type_scr1_search_one_2_s__struct__0 __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmp;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmp.__PVT__vd = 0;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmp.__PVT__idx = 0;
    Vscr1_top_tb_ahb_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__type_scr1_search_one_2_s__struct__0 __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__Vfuncout;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__Vfuncout.__PVT__vd = 0;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__Vfuncout.__PVT__idx = 0;
    CData/*1:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__din;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__din = 0;
    Vscr1_top_tb_ahb_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__type_scr1_search_one_2_s__struct__0 __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__13__Vfuncout;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__13__Vfuncout.__PVT__vd = 0;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__13__Vfuncout.__PVT__idx = 0;
    CData/*1:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__13__din;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__13__din = 0;
    Vscr1_top_tb_ahb_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__type_scr1_search_one_2_s__struct__0 __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__14__Vfuncout;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__14__Vfuncout.__PVT__vd = 0;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__14__Vfuncout.__PVT__idx = 0;
    CData/*1:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__14__din;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__14__din = 0;
    CData/*6:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    CData/*7:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    CData/*1:0*/ __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data__v0;
    __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data__v0 = 0;
    SData/*15:0*/ __Vdlyvval__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data__v0;
    __Vdlyvval__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data__v0 = 0;
    CData/*0:0*/ __Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data__v0;
    __Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data__v1;
    __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data__v1 = 0;
    SData/*15:0*/ __Vdlyvval__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data__v1;
    __Vdlyvval__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data__v1 = 0;
    CData/*0:0*/ __Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data__v1;
    __Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data__v1 = 0;
    CData/*1:0*/ __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data__v2;
    __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data__v2 = 0;
    SData/*15:0*/ __Vdlyvval__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data__v2;
    __Vdlyvval__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data__v2 = 0;
    CData/*0:0*/ __Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data__v3;
    __Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data__v3 = 0;
    CData/*1:0*/ __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err__v0;
    __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err__v0 = 0;
    CData/*0:0*/ __Vdlyvval__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err__v0;
    __Vdlyvval__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err__v0 = 0;
    CData/*0:0*/ __Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err__v0;
    __Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err__v1;
    __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err__v1 = 0;
    CData/*0:0*/ __Vdlyvval__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err__v1;
    __Vdlyvval__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err__v1 = 0;
    CData/*0:0*/ __Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err__v1;
    __Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err__v1 = 0;
    CData/*1:0*/ __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err__v2;
    __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err__v2 = 0;
    CData/*0:0*/ __Vdlyvval__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err__v2;
    __Vdlyvval__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err__v2 = 0;
    CData/*0:0*/ __Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err__v3;
    __Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err__v3 = 0;
    SData/*9:0*/ __Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timeclk_cnt;
    __Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timeclk_cnt = 0;
    // Body
    vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__time_cnt 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__time_cnt;
    vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__fsm 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__fsm;
    __Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err__v0 = 0U;
    __Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err__v1 = 0U;
    __Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err__v3 = 0U;
    __Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data__v0 = 0U;
    __Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data__v1 = 0U;
    __Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data__v3 = 0U;
    __Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timeclk_cnt 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timeclk_cnt;
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff) {
        if (VL_UNLIKELY(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_update_r)) {
            VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core,"%16#   %s   %8x   %8x   %8x  ",
                       64,vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__current_time,
                       8,(IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__event_type),
                       32,vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_pc,
                       32,vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_instr,
                       32,vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_npc);
            if ((0x57U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__event_type))) {
                if (VL_UNLIKELY((0U != (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[3U] 
                                        & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[4U])))) {
                    VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core," mip        %08x\n%16#   %s   %8x   %8x   %8x   mie        %08x",
                               32,vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[3U],
                               64,vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__current_time,
                               8,(IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__event_type),
                               32,vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_pc,
                               32,vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_instr,
                               32,vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_npc,
                               32,vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[4U]);
                }
            } else if ((0x4eU == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__event_type))) {
                if (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_up) 
                     & (0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr)))) {
                    if (((((((((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr)) 
                               | (1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr))) 
                              | (2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr))) 
                             | (3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr))) 
                            | (4U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr))) 
                           | (5U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr))) 
                          | (6U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr))) 
                         | (7U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr)))) {
                        if (VL_UNLIKELY((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr)))) {
                            VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core," x00_zero  ");
                        } else if (VL_UNLIKELY((1U 
                                                == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr)))) {
                            VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core," x01_ra    ");
                        } else if (VL_UNLIKELY((2U 
                                                == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr)))) {
                            VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core," x02_sp    ");
                        } else if (VL_UNLIKELY((3U 
                                                == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr)))) {
                            VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core," x03_gp    ");
                        } else if (VL_UNLIKELY((4U 
                                                == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr)))) {
                            VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core," x04_tp    ");
                        } else if (VL_UNLIKELY((5U 
                                                == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr)))) {
                            VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core," x05_t0    ");
                        } else if ((6U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr))) {
                            VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core," x06_t1    ");
                        } else {
                            VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core," x07_t2    ");
                        }
                    } else if (((((((((8U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr)) 
                                      | (9U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr))) 
                                     | (0xaU == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr))) 
                                    | (0xbU == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr))) 
                                   | (0xcU == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr))) 
                                  | (0xdU == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr))) 
                                 | (0xeU == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr))) 
                                | (0xfU == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr)))) {
                        if (VL_UNLIKELY((8U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr)))) {
                            VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core," x08_s0    ");
                        } else if (VL_UNLIKELY((9U 
                                                == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr)))) {
                            VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core," x09_s1    ");
                        } else if (VL_UNLIKELY((0xaU 
                                                == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr)))) {
                            VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core," x10_a0    ");
                        } else if (VL_UNLIKELY((0xbU 
                                                == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr)))) {
                            VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core," x11_a1    ");
                        } else if (VL_UNLIKELY((0xcU 
                                                == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr)))) {
                            VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core," x12_a2    ");
                        } else if (VL_UNLIKELY((0xdU 
                                                == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr)))) {
                            VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core," x13_a3    ");
                        } else if ((0xeU == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr))) {
                            VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core," x14_a4    ");
                        } else {
                            VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core," x15_a5    ");
                        }
                    } else if (((((((((0x10U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr)) 
                                      | (0x11U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr))) 
                                     | (0x12U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr))) 
                                    | (0x13U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr))) 
                                   | (0x14U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr))) 
                                  | (0x15U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr))) 
                                 | (0x16U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr))) 
                                | (0x17U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr)))) {
                        if (VL_UNLIKELY((0x10U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr)))) {
                            VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core," x16_a6    ");
                        } else if (VL_UNLIKELY((0x11U 
                                                == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr)))) {
                            VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core," x17_a7    ");
                        } else if (VL_UNLIKELY((0x12U 
                                                == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr)))) {
                            VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core," x18_s2    ");
                        } else if (VL_UNLIKELY((0x13U 
                                                == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr)))) {
                            VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core," x19_s3    ");
                        } else if (VL_UNLIKELY((0x14U 
                                                == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr)))) {
                            VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core," x20_s4    ");
                        } else if (VL_UNLIKELY((0x15U 
                                                == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr)))) {
                            VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core," x21_s5    ");
                        } else if ((0x16U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr))) {
                            VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core," x22_s6    ");
                        } else {
                            VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core," x23_s7    ");
                        }
                    } else if (VL_LIKELY(((((((((0x18U 
                                                 == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr)) 
                                                | (0x19U 
                                                   == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr))) 
                                               | (0x1aU 
                                                  == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr))) 
                                              | (0x1bU 
                                                 == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr))) 
                                             | (0x1cU 
                                                == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr))) 
                                            | (0x1dU 
                                               == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr))) 
                                           | (0x1eU 
                                              == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr))) 
                                          | (0x1fU 
                                             == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr))))) {
                        if (VL_UNLIKELY((0x18U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr)))) {
                            VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core," x24_s8    ");
                        } else if (VL_UNLIKELY((0x19U 
                                                == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr)))) {
                            VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core," x25_s9    ");
                        } else if (VL_UNLIKELY((0x1aU 
                                                == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr)))) {
                            VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core," x26_s10   ");
                        } else if (VL_UNLIKELY((0x1bU 
                                                == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr)))) {
                            VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core," x27_s11   ");
                        } else if (VL_UNLIKELY((0x1cU 
                                                == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr)))) {
                            VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core," x28_t3    ");
                        } else if (VL_UNLIKELY((0x1dU 
                                                == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr)))) {
                            VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core," x29_t4    ");
                        } else if ((0x1eU == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr))) {
                            VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core," x30_t5    ");
                        } else {
                            VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core," x31_t6    ");
                        }
                    } else {
                        VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core," xxx       ");
                    }
                    VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core," %08x",
                               32,vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_wdata);
                } else {
                    VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core," ---        --------");
                }
            } else if (VL_UNLIKELY((0x52U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__event_type)))) {
                VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core," mstatus    %08x",
                           32,vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[6U]);
            } else if (((0x45U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__event_type)) 
                        | (0x49U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__event_type)))) {
                VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core," mstatus    %08x\n%16#   %s   %8x   %8x   %8x   mepc       %08x\n%16#   %s   %8x   %8x   %8x   mcause     %08x\n%16#   %s   %8x   %8x   %8x   mtval      %08x",
                           32,vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[6U],
                           64,vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__current_time,
                           8,(IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__event_type),
                           32,vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_pc,
                           32,vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_instr,
                           32,vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_npc,
                           32,vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[2U],
                           64,vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__current_time,
                           8,(IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__event_type),
                           32,vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_pc,
                           32,vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_instr,
                           32,vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_npc,
                           32,vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[1U],
                           64,vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__current_time,
                           8,(IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__event_type),
                           32,vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_pc,
                           32,vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_instr,
                           32,vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_npc,
                           32,vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[0U]);
            } else {
                VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core,"\n");
            }
            VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core,"\n");
        }
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_full 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff) 
           & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_full)
               ? (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_rd))
               : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_imem_req) 
                  & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_rd)))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_full 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff) 
           & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_full)
               ? (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_rd))
               : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_req) 
                  & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_rd)))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__ifu_fsm_curr 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__ifu_fsm_next));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_i_ff 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_i_next));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_mpie_ff 
        = (1U & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff)) 
                 | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_mpie_next)));
    __Vtableidx13 = (((0x480000U == (0xffff0000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_addr)) 
                      << 6U) | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_req_ack) 
                                 << 5U) | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_req) 
                                            << 4U) 
                                           | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_resp) 
                                               << 2U) 
                                              | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__fsm) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff))))));
    if ((1U & Vscr1_top_tb_ahb__ConstPool__TABLE_h76d264de_0
         [__Vtableidx13])) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__fsm 
            = Vscr1_top_tb_ahb__ConstPool__TABLE_h3815d84a_0
            [__Vtableidx13];
    }
    if ((2U & Vscr1_top_tb_ahb__ConstPool__TABLE_h76d264de_0
         [__Vtableidx13])) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__port_sel_r 
            = Vscr1_top_tb_ahb__ConstPool__TABLE_h07c63d5c_0
            [__Vtableidx13];
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_mie_ff 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_mie_next));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_exc_req_ff 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff) 
           & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__dbg_halt2run)) 
              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_exc_req)));
    __Vtableidx14 = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__port_sel) 
                      << 6U) | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_req_ack) 
                                 << 5U) | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_dmem_req) 
                                            << 4U) 
                                           | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_resp) 
                                               << 2U) 
                                              | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__fsm) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff))))));
    if ((1U & Vscr1_top_tb_ahb__ConstPool__TABLE_hd9392976_0
         [__Vtableidx14])) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__fsm 
            = Vscr1_top_tb_ahb__ConstPool__TABLE_h49fbee7f_0
            [__Vtableidx14];
    }
    if ((2U & Vscr1_top_tb_ahb__ConstPool__TABLE_hd9392976_0
         [__Vtableidx14])) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__port_sel_r 
            = Vscr1_top_tb_ahb__ConstPool__TABLE_hbf0b3240_0
            [__Vtableidx14];
    }
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__csr_access_ff 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__csr_access_next;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_run_start_ff 
            = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_halted_ff) 
               & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_take_irq)) 
                  & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_ip_ie)));
        vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__time_cnt 
            = ((IData)(1U) + vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__time_cnt);
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__fsm) {
            if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__fsm) {
                if (vlSelf->scr1_top_tb_ahb__DOT__imem_hready) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__fsm 
                        = ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__imem_hresp)) 
                           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT____VdfgExtracted_h136b417e__3));
                }
            } else {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__fsm = 0U;
            }
        } else if (vlSelf->scr1_top_tb_ahb__DOT__imem_hready) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__fsm 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT____VdfgExtracted_h136b417e__3;
        }
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__timer_irq) {
            if (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmplo_up) 
                 | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmphi_up))) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__timer_irq 
                    = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__time_cmp_flag;
            }
        } else {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__timer_irq 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__time_cmp_flag;
        }
        if ((1U & (~ (IData)((0xfU == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__init_pc_v)))))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__init_pc_v 
                = (1U | (0xeU & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__init_pc_v) 
                                 << 1U)));
        }
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__fsm) {
            if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__fsm) {
                if (vlSelf->scr1_top_tb_ahb__DOT__dmem_hready) {
                    vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__fsm 
                        = ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__dmem_hresp)) 
                           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT____VdfgExtracted_h136b417e__0));
                }
            }
        } else if (vlSelf->scr1_top_tb_ahb__DOT__dmem_hready) {
            vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__fsm 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT____VdfgExtracted_h136b417e__0;
        }
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wr_en) {
            if ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wr_size))) {
                __Vdlyvval__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err__v0 
                    = (2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_resp));
                __Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err__v0 = 1U;
                __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err__v0 
                    = (3U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr));
                __Vdlyvval__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data__v0 
                    = (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_rdata 
                       >> 0x10U);
                __Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data__v0 = 1U;
                __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data__v0 
                    = (3U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr));
            } else if ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wr_size))) {
                __Vdlyvval__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err__v1 
                    = (2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_resp));
                __Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err__v1 = 1U;
                __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err__v1 
                    = (3U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr));
                __Vdlyvval__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err__v2 
                    = (2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_resp));
                __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err__v2 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr)));
                __Vdlyvval__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data__v1 
                    = (0xffffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_rdata);
                __Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data__v1 = 1U;
                __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data__v1 
                    = (3U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr));
                __Vdlyvval__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data__v2 
                    = (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_rdata 
                       >> 0x10U);
                __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data__v2 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr)));
            }
        }
        if (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_handshake_done) 
             ^ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_received))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_pnd_txns_cnt 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_pnd_txns_cnt_next;
        }
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_discard_cnt_upd) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_discard_cnt 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_discard_cnt_next;
        }
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_ec_ff 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_ec_next;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtval_ff 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtval_next;
        if ((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_lo_inc) 
                   | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_upd)))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_lo_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_lo_next;
        }
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__imem_req_en) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_imem_resp 
                = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_imem_req)
                    ? 1U : 0U);
        }
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mscratch_upd) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mscratch_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_data;
        }
        if (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req) 
             | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_vd))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__new_pc_unaligned_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__new_pc_unaligned_next;
        }
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__instr_hi_rvi_lo_ff = 0U;
        } else if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_vd) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__instr_hi_rvi_lo_ff 
                = ((7U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__instr_type)) 
                   | ((5U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__instr_type)) 
                      | (3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__instr_type))));
        }
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__icsr_wr_req) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_imr_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_imr_next;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_iinvr_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_iinvr_next;
        }
        if (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_handshake_done) 
             | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_addr_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_addr_next;
        }
        if (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_hi_inc) 
             | (0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_upd)))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_hi_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_hi_next;
        }
        if (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_hi_inc) 
             | (0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_upd)))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_hi_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_hi_next;
        }
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mepc_ff 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mepc_next;
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtvec_upd) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtvec_mode_ff 
                = (1U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_data);
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtvec_base 
                = (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_data 
                   >> 6U);
        }
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_cisv_upd) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_isvr_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_isvr_next;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_cisv_ff 
                = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_start_vd)
                    ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irr_priority
                   .__PVT__idx : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_eoi_req)
                                   ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__isvr_priority_eoi
                                      .__PVT__vd ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__isvr_priority_eoi
                                      .__PVT__idx : 0x10U)
                                   : 0U));
        }
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__idxr_wr_req) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_idxr_ff 
                = (0xfU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_wdata);
        }
        if (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__cicsr_wr_req) 
             | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__icsr_wr_req))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ier_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ier_next;
        }
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_upd) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_next;
        }
        if (((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rd_size)) 
             | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_flush_req))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr_next;
        }
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_upd) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_msie_ff 
                = (1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_data 
                         >> 3U));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_meie_ff 
                = (1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_data 
                         >> 0xbU));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_mtie_ff 
                = (1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_data 
                         >> 7U));
        }
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_req_en) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_resp 
                = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_req)
                    ? 1U : 0U);
        }
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_req) {
            if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__dmem_req_valid) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_resp = 1U;
                if ((1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h2097eaa3__0)))) {
                    if ((0x10U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0)) {
                        if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0 
                                      >> 3U)))) {
                            if ((4U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0)) {
                                if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0 
                                              >> 1U)))) {
                                    if ((1U & (~ vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0))) {
                                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_rdata 
                                            = (IData)(
                                                      (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmp_reg 
                                                       >> 0x20U));
                                    }
                                }
                            } else if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0 
                                                 >> 1U)))) {
                                if ((1U & (~ vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0))) {
                                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_rdata 
                                        = (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmp_reg);
                                }
                            }
                        }
                    } else if ((8U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0)) {
                        if ((4U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0)) {
                            if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0 
                                          >> 1U)))) {
                                if ((1U & (~ vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0))) {
                                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_rdata 
                                        = (IData)((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtime_reg 
                                                   >> 0x20U));
                                }
                            }
                        } else if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0 
                                             >> 1U)))) {
                            if ((1U & (~ vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0))) {
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_rdata 
                                    = (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtime_reg);
                            }
                        }
                    } else if ((4U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0)) {
                        if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0 
                                      >> 1U)))) {
                            if ((1U & (~ vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0))) {
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_rdata 
                                    = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timer_div;
                            }
                        }
                    } else if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0 
                                         >> 1U)))) {
                        if ((1U & (~ vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0))) {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_rdata 
                                = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timer_clksrc_rtc) 
                                    << 1U) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timer_en));
                        }
                    }
                }
            } else {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_resp = 2U;
            }
        } else {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_resp = 0U;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_rdata = 0U;
        }
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__divider_up) {
            __Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timeclk_cnt 
                = (0x3ffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__mprf2exu_rs2_data);
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timer_div 
                = (0x3ffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__mprf2exu_rs2_data);
        } else if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__time_posedge) {
            __Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timeclk_cnt 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timer_div;
        } else if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timeclk_cnt_en) {
            __Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timeclk_cnt 
                = (0x3ffU & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timeclk_cnt) 
                             - (IData)(1U)));
        }
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_ff 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_next;
        if ((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten_cy_ff) 
                   | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_upd)))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_lo_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_lo_next;
        }
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten_upd) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten_ir_ff 
                = (1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_data 
                         >> 2U));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten_cy_ff 
                = (1U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_data);
        }
        if (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_barrier) 
             | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_rdy))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd_ff 
                = ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_barrier)) 
                   & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req)) 
                      & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_vd)));
        }
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lines_dly 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lines;
        if (((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_fsm_curr)) 
             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__dmem_req_vd))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff 
                = (0xfU & ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                            << 1U) | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                      >> 0x1fU)));
        }
        if ((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__instret) 
              | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_take_irq) 
                 | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__dbg_run_start_npbuf))) 
             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT____VdfgTmp_h76e0b655__0))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_next;
        }
        if (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2mprf_w_req) 
             & (0U != (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                >> 5U))))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT____Vlvbound_h6615f063__0 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2mprf_rd_data;
            if ((0x3dfU >= (0x3ffU & (((IData)(0x1fU) 
                                       - (0x1fU & (
                                                   vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                                   >> 5U))) 
                                      << 5U)))) {
                VL_ASSIGNSEL_WI(992,32,(0x3ffU & (((IData)(0x1fU) 
                                                   - 
                                                   (0x1fU 
                                                    & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                                       >> 5U))) 
                                                  << 5U)), vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int, vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT____Vlvbound_h6615f063__0);
            }
        }
        if (((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wr_size)) 
             | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_flush_req))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr_next;
        }
        if (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_halt_req) 
             | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_run_req))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_halted_ff 
                = (1U & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_run_req)) 
                         | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_halt_req)));
        }
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lines 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lines_sync;
        if (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmplo_up) 
             | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmphi_up))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmp_reg 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmp_new;
        }
        if ((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__time_posedge) 
              | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimelo_up)) 
             | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimehi_up))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtime_reg 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtime_new;
        }
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__control_up) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timer_en 
                = (1U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__mprf2exu_rs2_data);
        }
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lines_sync 
            = vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__irq_lines_reg;
    } else {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__csr_access_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_run_start_ff = 0U;
        vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__time_cnt = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__fsm = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__timer_irq = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__init_pc_v = 0U;
        vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__fsm = 0U;
        __Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err__v3 = 1U;
        __Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data__v3 = 1U;
        __Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timeclk_cnt = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_pnd_txns_cnt = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_discard_cnt = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_ec_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtval_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_lo_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_imem_resp = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mscratch_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__new_pc_unaligned_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__instr_hi_rvi_lo_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten_ir_ff = 1U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_imr_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_addr_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_hi_ff = 0ULL;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_hi_ff = 0ULL;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mepc_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_iinvr_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtvec_mode_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtvec_base = 0x20U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_isvr_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_idxr_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ier_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_msie_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_meie_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_mtie_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_cisv_ff = 0x10U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_resp = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_resp = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_lo_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lines_dly = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_rdata = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_ff = 0xb000U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0U] = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[1U] = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[2U] = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[3U] = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[4U] = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[5U] = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[6U] = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[7U] = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[8U] = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[9U] = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xaU] = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xbU] = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xcU] = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xdU] = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xeU] = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xfU] = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x10U] = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x11U] = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x12U] = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x13U] = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x14U] = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x15U] = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x16U] = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x17U] = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x18U] = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x19U] = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x1aU] = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x1bU] = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x1cU] = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x1dU] = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x1eU] = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten_cy_ff = 1U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_halted_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lines = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmp_reg = 0ULL;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtime_reg = 0ULL;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timer_div = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timer_en = 1U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lines_sync = 0U;
    }
    if (__Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err__v0) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err[__Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err__v0] 
            = __Vdlyvval__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err__v0;
    }
    if (__Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err__v1) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err[__Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err__v1] 
            = __Vdlyvval__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err__v1;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err[__Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err__v2] 
            = __Vdlyvval__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err__v2;
    }
    if (__Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err__v3) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err[0U] = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err[1U] = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err[2U] = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err[3U] = 0U;
    }
    if (__Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data__v0) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data[__Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data__v0] 
            = __Vdlyvval__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data__v0;
    }
    if (__Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data__v1) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data[__Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data__v1] 
            = __Vdlyvval__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data__v1;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data[__Vdlyvdim0__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data__v2] 
            = __Vdlyvval__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data__v2;
    }
    if (__Vdlyvset__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data__v3) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data[0U] = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data[1U] = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data[2U] = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data[3U] = 0U;
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timeclk_cnt 
        = __Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timeclk_cnt;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__init_pc 
        = (IData)((4U == (0xcU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__init_pc_v))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT____VdfgExtracted_h9d6c5aa2__0 
        = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_hi_ff) 
            << 8U) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_lo_ff));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus 
        = ((0xfffffff7U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus) 
           | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_mie_ff) 
              << 3U));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus 
        = ((0xffffff7fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus) 
           | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_mpie_ff) 
              << 7U));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus 
        = (0x1800U | vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_icsr 
        = ((0x100U & (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_ff) 
                       >> (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_idxr_ff)) 
                      << 8U)) | ((0x80U & (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ier_ff) 
                                            >> (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_idxr_ff)) 
                                           << 7U)) 
                                 | ((0x40U & (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_imr_ff) 
                                               >> (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_idxr_ff)) 
                                              << 6U)) 
                                    | ((0x20U & (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_iinvr_ff) 
                                                  >> (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_idxr_ff)) 
                                                 << 5U)) 
                                       | ((0x10U & 
                                           (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_isvr_ff) 
                                             >> (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_idxr_ff)) 
                                            << 4U)) 
                                          | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_idxr_ff))))));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__din 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ier_ff) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_ff));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__din 
        = (3U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__din));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__tmp.__PVT__vd 
        = (0U != (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__din));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__tmp.__PVT__idx 
        = (1U & (~ (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__din)));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__Vfuncout 
        = vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__tmp;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__Vfuncout;
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage1_vd 
        = ((0xfeU & (IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage1_vd)) 
           | __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp
           .__PVT__vd);
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage1_idx[0U] 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp
        .__PVT__idx;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__din 
        = (3U & ((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__din) 
                 >> 2U));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__tmp.__PVT__vd 
        = (0U != (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__din));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__tmp.__PVT__idx 
        = (1U & (~ (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__din)));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__Vfuncout 
        = vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__tmp;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__Vfuncout;
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage1_vd 
        = ((0xfdU & (IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage1_vd)) 
           | ((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp
                      .__PVT__vd) << 1U));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage1_idx[1U] 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp
        .__PVT__idx;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__din 
        = (3U & ((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__din) 
                 >> 4U));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__tmp.__PVT__vd 
        = (0U != (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__din));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__tmp.__PVT__idx 
        = (1U & (~ (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__din)));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__Vfuncout 
        = vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__tmp;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__Vfuncout;
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage1_vd 
        = ((0xfbU & (IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage1_vd)) 
           | ((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp
                      .__PVT__vd) << 2U));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage1_idx[2U] 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp
        .__PVT__idx;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__din 
        = (3U & ((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__din) 
                 >> 6U));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__tmp.__PVT__vd 
        = (0U != (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__din));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__tmp.__PVT__idx 
        = (1U & (~ (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__din)));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__Vfuncout 
        = vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__tmp;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__Vfuncout;
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage1_vd 
        = ((0xf7U & (IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage1_vd)) 
           | ((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp
                      .__PVT__vd) << 3U));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage1_idx[3U] 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp
        .__PVT__idx;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__din 
        = (3U & ((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__din) 
                 >> 8U));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__tmp.__PVT__vd 
        = (0U != (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__din));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__tmp.__PVT__idx 
        = (1U & (~ (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__din)));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__Vfuncout 
        = vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__tmp;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__Vfuncout;
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage1_vd 
        = ((0xefU & (IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage1_vd)) 
           | ((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp
                      .__PVT__vd) << 4U));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage1_idx[4U] 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp
        .__PVT__idx;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__din 
        = (3U & ((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__din) 
                 >> 0xaU));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__tmp.__PVT__vd 
        = (0U != (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__din));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__tmp.__PVT__idx 
        = (1U & (~ (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__din)));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__Vfuncout 
        = vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__tmp;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__Vfuncout;
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage1_vd 
        = ((0xdfU & (IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage1_vd)) 
           | ((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp
                      .__PVT__vd) << 5U));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage1_idx[5U] 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp
        .__PVT__idx;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__din 
        = (3U & ((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__din) 
                 >> 0xcU));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__tmp.__PVT__vd 
        = (0U != (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__din));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__tmp.__PVT__idx 
        = (1U & (~ (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__din)));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__Vfuncout 
        = vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__tmp;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__Vfuncout;
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage1_vd 
        = ((0xbfU & (IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage1_vd)) 
           | ((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp
                      .__PVT__vd) << 6U));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage1_idx[6U] 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp
        .__PVT__idx;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__din 
        = (3U & ((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__din) 
                 >> 0xeU));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__tmp.__PVT__vd 
        = (0U != (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__din));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__tmp.__PVT__idx 
        = (1U & (~ (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__din)));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__Vfuncout 
        = vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__tmp;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__Vfuncout;
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage1_vd 
        = ((0x7fU & (IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage1_vd)) 
           | ((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp
                      .__PVT__vd) << 7U));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage1_idx[7U] 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp
        .__PVT__idx;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__9__din 
        = (3U & (IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage1_vd));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__9__tmp.__PVT__vd 
        = (0U != (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__9__din));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__9__tmp.__PVT__idx 
        = (1U & (~ (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__9__din)));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__9__Vfuncout 
        = vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__9__tmp;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__9__Vfuncout;
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage2_vd 
        = ((0xeU & (IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage2_vd)) 
           | __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp
           .__PVT__vd);
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__9__din 
        = (3U & ((IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage1_vd) 
                 >> 2U));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__9__tmp.__PVT__vd 
        = (0U != (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__9__din));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__9__tmp.__PVT__idx 
        = (1U & (~ (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__9__din)));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__9__Vfuncout 
        = vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__9__tmp;
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage2_idx[0U] 
        = (__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp
           .__PVT__idx ? (((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp
                                   .__PVT__idx) << 1U) 
                          | vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage1_idx
                          [1U]) : (((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp
                                            .__PVT__idx) 
                                    << 1U) | vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage1_idx
                                   [0U]));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__9__Vfuncout;
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage2_vd 
        = ((0xdU & (IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage2_vd)) 
           | ((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp
                      .__PVT__vd) << 1U));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__9__din 
        = (3U & ((IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage1_vd) 
                 >> 4U));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__9__tmp.__PVT__vd 
        = (0U != (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__9__din));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__9__tmp.__PVT__idx 
        = (1U & (~ (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__9__din)));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__9__Vfuncout 
        = vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__9__tmp;
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage2_idx[1U] 
        = (__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp
           .__PVT__idx ? (((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp
                                   .__PVT__idx) << 1U) 
                          | vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage1_idx
                          [3U]) : (((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp
                                            .__PVT__idx) 
                                    << 1U) | vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage1_idx
                                   [2U]));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__9__Vfuncout;
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage2_vd 
        = ((0xbU & (IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage2_vd)) 
           | ((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp
                      .__PVT__vd) << 2U));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__9__din 
        = (3U & ((IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage1_vd) 
                 >> 6U));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__9__tmp.__PVT__vd 
        = (0U != (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__9__din));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__9__tmp.__PVT__idx 
        = (1U & (~ (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__9__din)));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__9__Vfuncout 
        = vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__9__tmp;
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage2_idx[2U] 
        = (__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp
           .__PVT__idx ? (((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp
                                   .__PVT__idx) << 1U) 
                          | vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage1_idx
                          [5U]) : (((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp
                                            .__PVT__idx) 
                                    << 1U) | vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage1_idx
                                   [4U]));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__9__Vfuncout;
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage2_idx[3U] 
        = (__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp
           .__PVT__idx ? (((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp
                                   .__PVT__idx) << 1U) 
                          | vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage1_idx
                          [7U]) : (((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp
                                            .__PVT__idx) 
                                    << 1U) | vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage1_idx
                                   [6U]));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage2_vd 
        = ((7U & (IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage2_vd)) 
           | ((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp
                      .__PVT__vd) << 3U));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__10__din 
        = (3U & (IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage2_vd));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__10__tmp.__PVT__vd 
        = (0U != (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__10__din));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__10__tmp.__PVT__idx 
        = (1U & (~ (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__10__din)));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__10__Vfuncout 
        = vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__10__tmp;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmp 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__10__Vfuncout;
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage3_vd 
        = ((2U & (IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage3_vd)) 
           | __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmp
           .__PVT__vd);
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__10__din 
        = (3U & ((IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage2_vd) 
                 >> 2U));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__10__tmp.__PVT__vd 
        = (0U != (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__10__din));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__10__tmp.__PVT__idx 
        = (1U & (~ (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__10__din)));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__10__Vfuncout 
        = vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__10__tmp;
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage3_idx[0U] 
        = (__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmp
           .__PVT__idx ? (((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmp
                                   .__PVT__idx) << 2U) 
                          | vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage2_idx
                          [1U]) : (((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmp
                                            .__PVT__idx) 
                                    << 2U) | vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage2_idx
                                   [0U]));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmp 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__10__Vfuncout;
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage3_idx[1U] 
        = (__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmp
           .__PVT__idx ? (((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmp
                                   .__PVT__idx) << 2U) 
                          | vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage2_idx
                          [3U]) : (((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmp
                                            .__PVT__idx) 
                                    << 2U) | vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage2_idx
                                   [2U]));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage3_vd 
        = ((1U & (IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage3_vd)) 
           | ((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmp
                      .__PVT__vd) << 1U));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__result.__PVT__vd 
        = (0U != (IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage3_vd));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__result.__PVT__idx 
        = ((1U & (IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage3_vd))
            ? vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage3_idx
           [0U] : (8U | vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage3_idx
                   [1U]));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__Vfuncout 
        = vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__result;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irr_priority 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__Vfuncout;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err_head 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err
        [(3U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr))];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data_head 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data
        [(3U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr))];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie 
        = ((0xfffffff7U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie) 
           | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_msie_ff) 
              << 3U));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie 
        = ((0xffffff7fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie) 
           | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_mtie_ff) 
              << 7U));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie 
        = ((0xfffff7ffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie) 
           | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_meie_ff) 
              << 0xbU));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_tirq_pnd_en 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_mtie_ff) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__timer_irq));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_isvr_eoi 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_isvr_ff;
    if ((1U & (~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_cisv_ff) 
                  >> 4U)))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_isvr_eoi 
            = ((~ ((IData)(1U) << (0xfU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_cisv_ff)))) 
               & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_isvr_eoi));
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT____VdfgExtracted_h169dacea__0 
        = (1U & ((~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_cisv_ff) 
                     >> 4U)) & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_ff) 
                                >> (0xfU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_cisv_ff)))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT____VdfgExtracted_h1692cb19__0 
        = (1U & ((~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_cisv_ff) 
                     >> 4U)) & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ier_ff) 
                                >> (0xfU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_cisv_ff)))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT____VdfgExtracted_h5cf9f284__0 
        = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_hi_ff) 
            << 8U) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_lo_ff));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_fsm_curr 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_fsm_next));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_01_RA 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x1eU];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_02_SP 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x1dU];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_03_GP 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x1cU];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_04_TP 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x1bU];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_05_T0 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x1aU];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_06_T1 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x19U];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_07_T2 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x18U];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_08_S0 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x17U];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_09_S1 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x16U];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_10_A0 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x15U];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_11_A1 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x14U];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_12_A2 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x13U];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_13_A3 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x12U];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_14_A4 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x11U];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_15_A5 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x10U];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_16_A6 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xfU];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_17_A7 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xeU];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_18_S2 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xdU];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_19_S3 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xcU];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_20_S4 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xbU];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_21_S5 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xaU];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_22_S6 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[9U];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_23_S7 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[8U];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_24_S8 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[7U];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_25_S9 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[6U];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_26_S10 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[5U];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_27_S11 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[4U];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_28_T3 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[3U];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_29_T4 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[2U];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_30_T5 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[1U];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_31_T6 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0U];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mip_meip 
        = (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irr_priority
           .__PVT__vd & (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_cisv_ff) 
                          >> 4U) | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irr_priority
                                    .__PVT__idx < (0xfU 
                                                   & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_cisv_ff)))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT____VdfgTmp_h4af6ecf2__0 
        = ((3U == (3U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data_head))) 
           & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err
           [(3U & ((IData)(1U) + (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr)))]);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rd_hword 
        = (1U & ((~ (IData)((3U == (3U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data_head))))) 
                 | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err_head)));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__din 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_isvr_eoi;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__din 
        = (3U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__din));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__tmp.__PVT__vd 
        = (0U != (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__din));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__tmp.__PVT__idx 
        = (1U & (~ (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__din)));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__Vfuncout 
        = vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__tmp;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__Vfuncout;
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage1_vd 
        = ((0xfeU & (IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage1_vd)) 
           | __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp
           .__PVT__vd);
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage1_idx[0U] 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp
        .__PVT__idx;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__din 
        = (3U & ((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__din) 
                 >> 2U));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__tmp.__PVT__vd 
        = (0U != (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__din));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__tmp.__PVT__idx 
        = (1U & (~ (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__din)));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__Vfuncout 
        = vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__tmp;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__Vfuncout;
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage1_vd 
        = ((0xfdU & (IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage1_vd)) 
           | ((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp
                      .__PVT__vd) << 1U));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage1_idx[1U] 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp
        .__PVT__idx;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__din 
        = (3U & ((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__din) 
                 >> 4U));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__tmp.__PVT__vd 
        = (0U != (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__din));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__tmp.__PVT__idx 
        = (1U & (~ (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__din)));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__Vfuncout 
        = vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__tmp;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__Vfuncout;
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage1_vd 
        = ((0xfbU & (IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage1_vd)) 
           | ((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp
                      .__PVT__vd) << 2U));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage1_idx[2U] 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp
        .__PVT__idx;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__din 
        = (3U & ((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__din) 
                 >> 6U));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__tmp.__PVT__vd 
        = (0U != (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__din));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__tmp.__PVT__idx 
        = (1U & (~ (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__din)));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__Vfuncout 
        = vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__tmp;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__Vfuncout;
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage1_vd 
        = ((0xf7U & (IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage1_vd)) 
           | ((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp
                      .__PVT__vd) << 3U));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage1_idx[3U] 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp
        .__PVT__idx;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__din 
        = (3U & ((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__din) 
                 >> 8U));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__tmp.__PVT__vd 
        = (0U != (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__din));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__tmp.__PVT__idx 
        = (1U & (~ (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__din)));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__Vfuncout 
        = vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__tmp;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__Vfuncout;
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage1_vd 
        = ((0xefU & (IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage1_vd)) 
           | ((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp
                      .__PVT__vd) << 4U));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage1_idx[4U] 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp
        .__PVT__idx;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__din 
        = (3U & ((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__din) 
                 >> 0xaU));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__tmp.__PVT__vd 
        = (0U != (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__din));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__tmp.__PVT__idx 
        = (1U & (~ (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__din)));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__Vfuncout 
        = vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__tmp;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__Vfuncout;
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage1_vd 
        = ((0xdfU & (IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage1_vd)) 
           | ((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp
                      .__PVT__vd) << 5U));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage1_idx[5U] 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp
        .__PVT__idx;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__din 
        = (3U & ((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__din) 
                 >> 0xcU));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__tmp.__PVT__vd 
        = (0U != (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__din));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__tmp.__PVT__idx 
        = (1U & (~ (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__din)));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__Vfuncout 
        = vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__tmp;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__Vfuncout;
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage1_vd 
        = ((0xbfU & (IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage1_vd)) 
           | ((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp
                      .__PVT__vd) << 6U));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage1_idx[6U] 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp
        .__PVT__idx;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__din 
        = (3U & ((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__din) 
                 >> 0xeU));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__tmp.__PVT__vd 
        = (0U != (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__din));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__tmp.__PVT__idx 
        = (1U & (~ (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__din)));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__Vfuncout 
        = vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__tmp;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__Vfuncout;
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage1_vd 
        = ((0x7fU & (IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage1_vd)) 
           | ((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp
                      .__PVT__vd) << 7U));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage1_idx[7U] 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__tmp
        .__PVT__idx;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__13__din 
        = (3U & (IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage1_vd));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__13__tmp.__PVT__vd 
        = (0U != (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__13__din));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__13__tmp.__PVT__idx 
        = (1U & (~ (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__13__din)));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__13__Vfuncout 
        = vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__13__tmp;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__13__Vfuncout;
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage2_vd 
        = ((0xeU & (IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage2_vd)) 
           | __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp
           .__PVT__vd);
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__13__din 
        = (3U & ((IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage1_vd) 
                 >> 2U));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__13__tmp.__PVT__vd 
        = (0U != (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__13__din));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__13__tmp.__PVT__idx 
        = (1U & (~ (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__13__din)));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__13__Vfuncout 
        = vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__13__tmp;
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage2_idx[0U] 
        = (__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp
           .__PVT__idx ? (((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp
                                   .__PVT__idx) << 1U) 
                          | vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage1_idx
                          [1U]) : (((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp
                                            .__PVT__idx) 
                                    << 1U) | vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage1_idx
                                   [0U]));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__13__Vfuncout;
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage2_vd 
        = ((0xdU & (IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage2_vd)) 
           | ((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp
                      .__PVT__vd) << 1U));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__13__din 
        = (3U & ((IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage1_vd) 
                 >> 4U));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__13__tmp.__PVT__vd 
        = (0U != (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__13__din));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__13__tmp.__PVT__idx 
        = (1U & (~ (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__13__din)));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__13__Vfuncout 
        = vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__13__tmp;
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage2_idx[1U] 
        = (__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp
           .__PVT__idx ? (((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp
                                   .__PVT__idx) << 1U) 
                          | vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage1_idx
                          [3U]) : (((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp
                                            .__PVT__idx) 
                                    << 1U) | vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage1_idx
                                   [2U]));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__13__Vfuncout;
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage2_vd 
        = ((0xbU & (IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage2_vd)) 
           | ((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp
                      .__PVT__vd) << 2U));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__13__din 
        = (3U & ((IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage1_vd) 
                 >> 6U));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__13__tmp.__PVT__vd 
        = (0U != (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__13__din));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__13__tmp.__PVT__idx 
        = (1U & (~ (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__13__din)));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__13__Vfuncout 
        = vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__13__tmp;
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage2_idx[2U] 
        = (__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp
           .__PVT__idx ? (((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp
                                   .__PVT__idx) << 1U) 
                          | vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage1_idx
                          [5U]) : (((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp
                                            .__PVT__idx) 
                                    << 1U) | vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage1_idx
                                   [4U]));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__13__Vfuncout;
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage2_idx[3U] 
        = (__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp
           .__PVT__idx ? (((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp
                                   .__PVT__idx) << 1U) 
                          | vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage1_idx
                          [7U]) : (((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp
                                            .__PVT__idx) 
                                    << 1U) | vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage1_idx
                                   [6U]));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage2_vd 
        = ((7U & (IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage2_vd)) 
           | ((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__tmp
                      .__PVT__vd) << 3U));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__14__din 
        = (3U & (IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage2_vd));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__14__tmp.__PVT__vd 
        = (0U != (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__14__din));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__14__tmp.__PVT__idx 
        = (1U & (~ (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__14__din)));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__14__Vfuncout 
        = vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__14__tmp;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmp 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__14__Vfuncout;
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage3_vd 
        = ((2U & (IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage3_vd)) 
           | __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmp
           .__PVT__vd);
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__14__din 
        = (3U & ((IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage2_vd) 
                 >> 2U));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__14__tmp.__PVT__vd 
        = (0U != (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__14__din));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__14__tmp.__PVT__idx 
        = (1U & (~ (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__14__din)));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__14__Vfuncout 
        = vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__14__tmp;
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage3_idx[0U] 
        = (__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmp
           .__PVT__idx ? (((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmp
                                   .__PVT__idx) << 2U) 
                          | vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage2_idx
                          [1U]) : (((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmp
                                            .__PVT__idx) 
                                    << 2U) | vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage2_idx
                                   [0U]));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmp 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__14__Vfuncout;
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage3_idx[1U] 
        = (__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmp
           .__PVT__idx ? (((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmp
                                   .__PVT__idx) << 2U) 
                          | vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage2_idx
                          [3U]) : (((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmp
                                            .__PVT__idx) 
                                    << 2U) | vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage2_idx
                                   [2U]));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage3_vd 
        = ((1U & (IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage3_vd)) 
           | ((IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmp
                      .__PVT__vd) << 1U));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__result.__PVT__vd 
        = (0U != (IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage3_vd));
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__result.__PVT__idx 
        = ((1U & (IData)(vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage3_vd))
            ? vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage3_idx
           [0U] : (8U | vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage3_idx
                   [1U]));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__Vfuncout 
        = vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__result;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__isvr_priority_eoi 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__Vfuncout;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_ocpd_h 
        = (7U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr) 
                 - (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_is_empty 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr) 
           == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_eirq_pnd_en 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_meie_ff) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mip_meip));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_hi_inc 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten_cy_ff) 
           & (0xffU == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_lo_ff)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten 
        = ((0xfffffffeU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten) 
           | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten_cy_ff));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten 
        = ((0xfffffffbU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten) 
           | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten_ir_ff) 
              << 2U));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_err_rvi_hi = 0U;
    if ((1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_is_empty)))) {
        if ((1U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_ocpd_h))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_err_rvi_hi 
                = ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err_head)) 
                   & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT____VdfgTmp_h4af6ecf2__0));
        }
    }
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__8(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_sequent__TOP__8\n"); );
    // Body
    vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__rtc_sync 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__rtc_sync;
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__9(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_sequent__TOP__9\n"); );
    // Body
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_dm_rstn_buf_cell__DOT__reset_n_status_ff) {
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__clk_en_dm) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__havereset_skip_pwrup_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__havereset_skip_pwrup_next;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_halted_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_halted_next;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_havereset_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_havereset_next;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ackhavereset_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ackhavereset_next;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_resumeack_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_resumeack_next;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_haltreq_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_haltreq_next;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_resumereq_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_resumereq_next;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ndmreset_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ndmreset_next;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_req_ff 
                = (((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff)) 
                    | ((4U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff)) 
                       | (5U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff)))) 
                   & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__cmd_resp_ok)) 
                      & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_ff)));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_next;
        }
        if (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_req) 
             & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr)))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__dm_rdata_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_rdata;
        }
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_rise_load) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_sel 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_sel_tapout;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_id 
                = ((0x10U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_ff))
                    ? 1U : ((0x11U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_ff))
                             ? 2U : 0U));
        }
        if (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_capture) 
             | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_shift))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_next;
        }
    } else {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__havereset_skip_pwrup_ff = 1U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_halted_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_havereset_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ackhavereset_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_resumeack_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_haltreq_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_resumereq_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ndmreset_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__dm_rdata_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_req_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_sel = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_ff = 0ULL;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_id = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff = 0U;
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_rdata = 0ULL;
    if ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_id))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_rdata 
            = (0x70ULL | (0x1ff0000000fULL & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_rdata));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_rdata 
            = (1ULL | vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_rdata);
    } else {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_rdata 
            = ((QData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__dm_rdata_ff)) 
               << 2U);
    }
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__10(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_sequent__TOP__10\n"); );
    // Body
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_event 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_event_next;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_instr_wait_latching 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__ifu_handshake_done;
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_clk_en) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_hit_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_hit_next;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_dmode_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_dmode_next;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_action_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_action_next;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_skip_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_skip_next;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_count_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_count_next;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_m_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_m_next;
        }
        if (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__dbg_halt2run) 
             | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT____VdfgTmp_he3db9a6d__0))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__halt_req_timeout_cnt 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__halt_req_timeout_cnt_next;
        }
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__clk_en_dm_ff) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_addr_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_addr_next;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_fsm_curr 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_fsm_next;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_next;
            if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_upd_on_halt) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_cause 
                    = (7U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_haltstatus));
            }
            if ((((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state)) 
                  | (3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state))) 
                 & (2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state_next)))) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl = 0U;
            } else if (((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state)) 
                        & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_trans_next))) {
                if ((3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_ff))) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl = 0x3dU;
                } else {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl 
                        = ((0xfU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl)) 
                           | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_step) 
                               & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_stepie))) 
                              << 5U));
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl 
                        = ((0x30U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl)) 
                           | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_step) 
                               << 1U) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_ebreakm)));
                }
            }
            if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_wr) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_step 
                    = (1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
                             >> 2U));
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_stepie 
                    = (1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
                             >> 0xbU));
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_ebreakm 
                    = (1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
                             >> 0xfU));
            }
        }
        if (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_tselect) 
             & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_req) 
                & (5U > (7U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data))))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tselect_ff 
                = (7U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data);
        }
        if ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_clk_en))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_ff 
                = ((0xeU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_ff)) 
                   | (1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_next)));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_ff 
                = ((0xeU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_ff)) 
                   | (1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_next)));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_ff 
                = ((0xeU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_ff)) 
                   | (1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_next)));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_ff 
                = ((0xeU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_ff)) 
                   | (1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_next)));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_ff 
                = ((0xeU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_ff)) 
                   | (1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_next)));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_ff 
                = ((0xeU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_ff)) 
                   | (1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_next)));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_ff 
                = ((0xeU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_ff)) 
                   | (1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_next)));
        }
        if ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_clk_en))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_ff 
                = ((0xdU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_ff)) 
                   | (2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_next)));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_ff 
                = ((0xdU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_ff)) 
                   | (2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_next)));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_ff 
                = ((0xdU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_ff)) 
                   | (2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_next)));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_ff 
                = ((0xdU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_ff)) 
                   | (2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_next)));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_ff 
                = ((0xdU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_ff)) 
                   | (2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_next)));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_ff 
                = ((0xdU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_ff)) 
                   | (2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_next)));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_ff 
                = ((0xdU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_ff)) 
                   | (2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_next)));
        }
        if ((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_clk_en))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_ff 
                = ((0xbU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_ff)) 
                   | (4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_next)));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_ff 
                = ((0xbU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_ff)) 
                   | (4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_next)));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_ff 
                = ((0xbU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_ff)) 
                   | (4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_next)));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_ff 
                = ((0xbU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_ff)) 
                   | (4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_next)));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_ff 
                = ((0xbU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_ff)) 
                   | (4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_next)));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_ff 
                = ((0xbU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_ff)) 
                   | (4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_next)));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_ff 
                = ((0xbU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_ff)) 
                   | (4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_next)));
        }
        if ((8U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_clk_en))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_ff 
                = ((7U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_ff)) 
                   | (8U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_next)));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_ff 
                = ((7U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_ff)) 
                   | (8U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_next)));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_ff 
                = ((7U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_ff)) 
                   | (8U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_next)));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_ff 
                = ((7U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_ff)) 
                   | (8U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_next)));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_ff 
                = ((7U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_ff)) 
                   | (8U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_next)));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_ff 
                = ((7U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_ff)) 
                   | (8U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_next)));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_ff 
                = ((7U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_ff)) 
                   | (8U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_next)));
        }
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_halt_ack) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_haltstatus 
                = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_except) 
                    << 3U) | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_tmreq)
                               ? 2U : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_ebreak)
                                        ? 1U : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_halt_req)
                                                 ? 3U
                                                 : 
                                                ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_sstep)
                                                  ? 4U
                                                  : 0U)))));
        }
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state_next;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_trans 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_trans_next;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_update 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_update_next;
    } else {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_event = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_instr_wait_latching = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_hit_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_dmode_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__halt_req_timeout_cnt = 0x3fU;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_addr_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_fsm_curr = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tselect_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_action_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_ff 
            = (0xeU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_ff));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_ff 
            = (0xdU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_ff));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_ff 
            = (0xbU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_ff));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_ff 
            = (7U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_ff));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_ff 
            = (0xeU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_ff));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_ff 
            = (0xdU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_ff));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_ff 
            = (0xbU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_ff));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_ff 
            = (7U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_ff));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_cause = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_ff 
            = (0xeU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_ff));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_ff 
            = (0xdU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_ff));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_ff 
            = (0xbU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_ff));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_ff 
            = (7U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_ff));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_ff 
            = (0xeU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_ff));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_ff 
            = (0xdU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_ff));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_ff 
            = (0xbU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_ff));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_ff 
            = (7U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_ff));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_ff 
            = (0xeU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_ff));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_ff 
            = (0xdU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_ff));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_ff 
            = (0xbU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_ff));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_ff 
            = (7U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_ff));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_skip_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_count_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_m_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_ff 
            = (0xeU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_ff));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_ff 
            = (0xdU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_ff));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_ff 
            = (0xbU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_ff));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_ff 
            = (7U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_ff));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_ff 
            = (0xeU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_ff));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_ff 
            = (0xdU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_ff));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_ff 
            = (0xbU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_ff));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_ff 
            = (7U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_ff));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_haltstatus = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_step = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_stepie = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_ebreakm = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_trans = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_update = 0U;
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__hdu2ifu_pbuf_vd 
        = ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_instr_wait_latching)) 
           & ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_fsm_curr)) 
              | (2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_fsm_curr))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h1024b93b__0 
        = ((~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
               >> 2U)) & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_m_ff));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h7a8625da__0 
        = (IData)(((~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                       >> 2U)) & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_ff) 
                                  >> 3U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h7ae9174f__0 
        = (1U & ((~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                     >> 2U)) & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_ff) 
                                >> 2U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h7aa9440c__0 
        = (1U & ((~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                     >> 2U)) & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_ff) 
                                >> 1U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h7b5535f1__0 
        = (1U & ((~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                     >> 2U)) & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_ff)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_hart_status = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_hart_status 
        = ((0xcU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_hart_status)) 
           | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_hart_status 
        = ((7U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_hart_status)) 
           | (0xfffffff8U & (((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state)) 
                              << 3U) & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_haltstatus))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_hart_status 
        = ((0xbU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_hart_status)) 
           | (((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state)) 
               & (1U == (7U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_haltstatus)))) 
              << 2U));
}

extern const VlUnpacked<CData/*0:0*/, 32> Vscr1_top_tb_ahb__ConstPool__TABLE_h055cd248_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vscr1_top_tb_ahb__ConstPool__TABLE_he049e470_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vscr1_top_tb_ahb__ConstPool__TABLE_h78a49336_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vscr1_top_tb_ahb__ConstPool__TABLE_hc107cc9e_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vscr1_top_tb_ahb__ConstPool__TABLE_hebf22a2d_0;

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__11(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_sequent__TOP__11\n"); );
    // Init
    CData/*4:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg 
        = vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg;
    vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_capture_sync 
        = ((6U & (IData)(vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_capture_sync)) 
           | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tapc_trst_n) 
              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_dr_capture_ff)));
    vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_shift_sync 
        = ((6U & (IData)(vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_shift_sync)) 
           | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tapc_trst_n) 
              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_dr_shift_ff)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_ff 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tapc_trst_n)
            ? ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__trst_n_int)
                ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_next)
                : 1U) : 1U);
    __Vtableidx10 = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_ff;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__dr_bypass_sel 
        = Vscr1_top_tb_ahb__ConstPool__TABLE_h055cd248_0
        [__Vtableidx10];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__dr_idcode_sel 
        = Vscr1_top_tb_ahb__ConstPool__TABLE_he049e470_0
        [__Vtableidx10];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__dr_bld_id_sel 
        = Vscr1_top_tb_ahb__ConstPool__TABLE_h78a49336_0
        [__Vtableidx10];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_scu_ch_sel_tapout 
        = Vscr1_top_tb_ahb__ConstPool__TABLE_hc107cc9e_0
        [__Vtableidx10];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_sel_tapout 
        = Vscr1_top_tb_ahb__ConstPool__TABLE_hebf22a2d_0
        [__Vtableidx10];
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__12(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_sequent__TOP__12\n"); );
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divpos 
        = vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divpos;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_dr_update_ff 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tapc_trst_n) 
           & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__trst_n_int) 
              & (8U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_next))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_dr_capture_ff 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tapc_trst_n) 
           & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__trst_n_int) 
              & (3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_next))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_dr_shift_ff 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tapc_trst_n) 
           & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__trst_n_int) 
              & (4U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_next))));
}

extern const VlUnpacked<CData/*0:0*/, 512> Vscr1_top_tb_ahb__ConstPool__TABLE_h9ece0ef0_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vscr1_top_tb_ahb__ConstPool__TABLE_hfac6de75_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vscr1_top_tb_ahb__ConstPool__TABLE_h2a575a12_0;

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__13(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_sequent__TOP__13\n"); );
    // Init
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_capture_sync 
        = ((1U & (IData)(vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_capture_sync)) 
           | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__rst_n_mux)
                ? (3U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_capture_sync))
                : 0U) << 1U));
    vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_shift_sync 
        = ((1U & (IData)(vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_shift_sync)) 
           | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__rst_n_mux)
                ? (3U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_shift_sync))
                : 0U) << 1U));
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__rst_n_mux) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff;
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_rise_load) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_capture 
                = (1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_capture_sync) 
                         >> 2U));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_shift 
                = (1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_shift_sync) 
                         >> 2U));
        } else if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_rise_reset) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_capture = 0U;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_shift = 0U;
        }
    } else {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_capture = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_shift = 0U;
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_rise_reset 
        = (1U & VL_REDXOR_4((0xcU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divpos_sync))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_rise_load 
        = (1U & VL_REDXOR_4((6U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divpos_sync))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_dr_cap_req 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_capture) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_scu_ch_sel));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_dr_shft_req 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_shift) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_scu_ch_sel));
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__rst_n_mux) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff 
            = (1U & (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_mode_ff) 
                      >> 1U) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__core_rst_n_in_sync)));
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_mode_wr_req) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_mode_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_csr_wdata;
        }
    } else {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_mode_ff = 0U;
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_next 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_dr_cap_req)
            ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shadow_ff)
            : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_dr_shft_req)
                ? (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_tdi) 
                    << 7U) | (0x7fU & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_ff) 
                                       >> 1U))) : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_ff)));
    __Vtableidx1 = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_ff) 
                     << 1U) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_dr_upd_req));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_control_wr_req 
        = Vscr1_top_tb_ahb__ConstPool__TABLE_h9ece0ef0_0
        [__Vtableidx1];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_mode_wr_req 
        = Vscr1_top_tb_ahb__ConstPool__TABLE_hfac6de75_0
        [__Vtableidx1];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_sticky_sts_wr_req 
        = Vscr1_top_tb_ahb__ConstPool__TABLE_h2a575a12_0
        [__Vtableidx1];
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__14(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_sequent__TOP__14\n"); );
    // Body
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff) {
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_update) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_update_r = 1U;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_up 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2mprf_w_req;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__current_time 
                = VL_EXTENDS_QI(64,32, vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__time_cnt);
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__event_type 
                = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_exc)
                    ? 0x45U : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_irq)
                                ? 0x49U : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__pipe2clkctl_wake_req_o)
                                            ? 0x57U
                                            : 0x4eU)));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_instr 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_pc 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_npc;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_npc 
                = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req)
                    ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc
                    : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__inc_pc);
        } else {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_update_r = 0U;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_up 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2mprf_w_req;
        }
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2mprf_w_req) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_wdata 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2mprf_rd_data;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr 
                = (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                            >> 5U));
        } else {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_wdata = 0U;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr = 0U;
        }
    } else {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_update_r = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_up = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__current_time = 0ULL;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_wdata = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__event_type = 0x4eU;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_instr = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_pc = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_npc = 0U;
    }
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_en) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
            = ((0xfffffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U]) 
               | (0xfff00000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
            = (0x7ffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]);
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
            = ((0xffffffe0U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U]) 
               | (0x1fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U]));
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs1) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                = ((0xfff07fffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U]) 
                   | (0xf8000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
        }
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs2) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                = ((0xffff83ffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U]) 
                   | (0x7c00U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
        }
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rd) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                = ((0xfffffc1fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U]) 
                   | (0x3e0U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
        }
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_imm) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                = ((0x1fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U]) 
                   | (0xffffffe0U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U]));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                = ((0xffffffe0U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U]) 
                   | (0x1fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
        }
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__shft_cmd 
        = (((0xcU == (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                               >> 4U))) | ((0xdU == 
                                            (0x1fU 
                                             & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                                >> 4U))) 
                                           | (0xeU 
                                              == (0x1fU 
                                                  & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                                     >> 4U)))))
            ? (((0xcU != (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                   >> 4U))) << 1U) 
               | (0xeU == (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                    >> 4U)))) : 0U);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_hdu_req = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgTmp_hf046458b__0 
        = ((0x10U == (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                               >> 4U))) | (0x11U == 
                                           (0x1fU & 
                                            (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                             >> 4U))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_brkm_req = 0U;
    if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                  >> 0x10U)))) {
        if ((0x8000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
            if ((0x4000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                if ((0x2000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                    if ((0x1000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                        if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                      >> 0xbU)))) {
                            if ((0x400U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                if ((0x200U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                    if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                  >> 8U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                    >> 7U)))) {
                                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_hdu_req = 1U;
                                        }
                                    }
                                }
                                if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                              >> 9U)))) {
                                    if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                  >> 8U)))) {
                                        if ((0x80U 
                                             & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                     >> 6U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                         >> 5U)))) {
                                                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_brkm_req = 1U;
                                                }
                                            }
                                        } else if (
                                                   (0x40U 
                                                    & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                     >> 5U)))) {
                                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_brkm_req = 1U;
                                            }
                                        } else {
                                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_brkm_req = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__dmem_wdth_hword 
        = ((2U == (0xfU & ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                            << 1U) | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                      >> 0x1fU)))) 
           | ((5U == (0xfU & ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                               << 1U) | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                         >> 0x1fU)))) 
              | (7U == (0xfU & ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                 << 1U) | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                           >> 0x1fU))))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgTmp_h8ffc7cb8__0 
        = ((0x16U == (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                               >> 4U))) | (0x14U == 
                                           (0x1fU & 
                                            (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                             >> 4U))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_cmd_rem 
        = ((0x15U == (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                               >> 4U))) | (0x16U == 
                                           (0x1fU & 
                                            (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                             >> 4U))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h2097eaa3__0 
        = ((6U == (0xfU & ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                            << 1U) | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                      >> 0x1fU)))) 
           | ((7U == (0xfU & ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                               << 1U) | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                         >> 0x1fU)))) 
              | (8U == (0xfU & ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                 << 1U) | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                           >> 0x1fU))))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT____VdfgTmp_hbf509d11__0 
        = ((1U == (0xfU & ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                            << 1U) | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                      >> 0x1fU)))) 
           | (4U == (0xfU & ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                              << 1U) | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                        >> 0x1fU)))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_addr_op2 
        = ((8U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U])
            ? ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                << 0x1bU) | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                             >> 5U)) : ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                         << 0x1bU) 
                                        | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                           >> 5U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mul_cmd 
        = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgTmp_hf046458b__0) 
            << 1U) | ((0x10U == (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                          >> 4U))) 
                      | (0x12U == (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                            >> 4U)))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_cmd_mul 
        = ((0xfU == (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                              >> 4U))) | ((0x12U == 
                                           (0x1fU & 
                                            (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                             >> 4U))) 
                                          | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgTmp_hf046458b__0)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_cmd_is_iter 
        = ((0x13U == (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                               >> 4U))) | ((0x14U == 
                                            (0x1fU 
                                             & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                                >> 4U))) 
                                           | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_cmd_rem)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_dmem_width 
        = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT____VdfgTmp_hbf509d11__0) 
            | (6U == (0xfU & ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                               << 1U) | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                         >> 0x1fU)))))
            ? 0U : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__dmem_wdth_hword)
                     ? 1U : 2U));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h2158131e__0 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT____VdfgTmp_hbf509d11__0) 
           | ((2U == (0xfU & ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                               << 1U) | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                         >> 0x1fU)))) 
              | ((5U == (0xfU & ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                  << 1U) | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                            >> 0x1fU)))) 
                 | (3U == (0xfU & ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                    << 1U) | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                              >> 0x1fU)))))));
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__15(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_sequent__TOP__15\n"); );
    // Init
    IData/*31:0*/ __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__34__addr;
    __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__34__addr = 0;
    CData/*3:0*/ __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__34__w_be;
    __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__34__w_be = 0;
    IData/*31:0*/ __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__34__data;
    __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__34__data = 0;
    CData/*0:0*/ __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__34__mirage_en;
    __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__34__mirage_en = 0;
    IData/*31:0*/ __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__35__addr;
    __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__35__addr = 0;
    CData/*3:0*/ __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__35__w_be;
    __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__35__w_be = 0;
    IData/*31:0*/ __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__35__data;
    __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__35__data = 0;
    CData/*0:0*/ __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__35__mirage_en;
    __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__35__mirage_en = 0;
    IData/*19:0*/ __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v0;
    __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v0 = 0;
    CData/*7:0*/ __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v0;
    __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v0 = 0;
    IData/*19:0*/ __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v0;
    __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v0;
    __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v0 = 0;
    IData/*19:0*/ __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v1;
    __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v1 = 0;
    CData/*7:0*/ __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v1;
    __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v1 = 0;
    IData/*19:0*/ __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v1;
    __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v1 = 0;
    CData/*7:0*/ __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v1;
    __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v1 = 0;
    IData/*19:0*/ __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v2;
    __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v2 = 0;
    CData/*7:0*/ __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v2;
    __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v2 = 0;
    IData/*19:0*/ __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v2;
    __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v2 = 0;
    CData/*7:0*/ __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v2;
    __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v2 = 0;
    IData/*19:0*/ __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v3;
    __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v3 = 0;
    CData/*7:0*/ __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v3;
    __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v3 = 0;
    IData/*19:0*/ __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v3;
    __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v3 = 0;
    CData/*7:0*/ __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v3;
    __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v3 = 0;
    IData/*19:0*/ __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v4;
    __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v4 = 0;
    CData/*7:0*/ __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v4;
    __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v4 = 0;
    IData/*19:0*/ __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v4;
    __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v4 = 0;
    CData/*7:0*/ __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v4;
    __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v4 = 0;
    IData/*19:0*/ __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v5;
    __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v5 = 0;
    CData/*7:0*/ __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v5;
    __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v5 = 0;
    IData/*19:0*/ __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v5;
    __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v5 = 0;
    CData/*7:0*/ __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v5;
    __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v5 = 0;
    IData/*19:0*/ __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v6;
    __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v6 = 0;
    CData/*7:0*/ __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v6;
    __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v6 = 0;
    IData/*19:0*/ __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v6;
    __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v6 = 0;
    CData/*7:0*/ __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v6;
    __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v6 = 0;
    IData/*19:0*/ __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v7;
    __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v7 = 0;
    CData/*7:0*/ __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v7;
    __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v7 = 0;
    IData/*19:0*/ __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v7;
    __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v7 = 0;
    CData/*7:0*/ __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v7;
    __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v7 = 0;
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__imem_hready = 1U;
    vlSelf->scr1_top_tb_ahb__DOT__imem_hresp = 0U;
    if (vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_ahb_state) {
        if (vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_ahb_state) {
            if (vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_req_ack) {
                vlSelf->scr1_top_tb_ahb__DOT__imem_hready = 1U;
                vlSelf->scr1_top_tb_ahb__DOT__imem_hresp = 0U;
            }
        }
    }
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_cpu_rstn_reset_sync__DOT__local_rst_n_in) {
        if ((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_state) 
              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack)) 
             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_wr))) {
            if (VL_UNLIKELY((0xf0000000U == vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_addr))) {
                VL_WRITEF("%c",8,(0xffU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__data_fifo)));
            } else if ((0xf0000200U == vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_addr)) {
                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__soft_irq_reg 
                    = (1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__data_fifo));
            } else if ((0xf0000100U == vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_addr)) {
                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__irq_lines_reg 
                    = (0xffffU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__data_fifo));
            } else if ((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage_rangeen) 
                         & (0xffffffffU <= vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_addr)) 
                        & (0xffffffffU > vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_addr))) {
                __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__34__mirage_en = 1U;
                __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__34__data 
                    = (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__data_fifo);
                __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__34__w_be 
                    = vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_be;
                __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__34__addr 
                    = (0xfffffffcU & vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_addr);
                if ((1U & (IData)(__Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__34__w_be))) {
                    if (__Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__34__mirage_en) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__Vstatic__addr_mirage 
                            = (0xfffffU & __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__34__addr);
                        __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v0 
                            = (0xffU & __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__34__data);
                        vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v0 = 1U;
                        __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v0 
                            = vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__Vstatic__addr_mirage;
                    } else {
                        __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v0 
                            = (0xffU & __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__34__data);
                        vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v0 = 1U;
                        __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v0 
                            = (0xfffffU & __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__34__addr);
                    }
                }
                if ((2U & (IData)(__Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__34__w_be))) {
                    if (__Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__34__mirage_en) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__Vstatic__addr_mirage 
                            = (0xfffffU & __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__34__addr);
                        __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v1 
                            = (0xffU & (__Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__34__data 
                                        >> 8U));
                        vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v1 = 1U;
                        __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v1 
                            = (0xfffffU & ((IData)(1U) 
                                           + vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__Vstatic__addr_mirage));
                    } else {
                        __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v1 
                            = (0xffU & (__Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__34__data 
                                        >> 8U));
                        vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v1 = 1U;
                        __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v1 
                            = (0xfffffU & ((IData)(1U) 
                                           + __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__34__addr));
                    }
                }
                if ((4U & (IData)(__Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__34__w_be))) {
                    if (__Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__34__mirage_en) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__Vstatic__addr_mirage 
                            = (0xfffffU & __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__34__addr);
                        __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v2 
                            = (0xffU & (__Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__34__data 
                                        >> 0x10U));
                        vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v2 = 1U;
                        __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v2 
                            = (0xfffffU & ((IData)(2U) 
                                           + vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__Vstatic__addr_mirage));
                    } else {
                        __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v2 
                            = (0xffU & (__Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__34__data 
                                        >> 0x10U));
                        vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v2 = 1U;
                        __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v2 
                            = (0xfffffU & ((IData)(2U) 
                                           + __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__34__addr));
                    }
                }
                if ((8U & (IData)(__Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__34__w_be))) {
                    if (__Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__34__mirage_en) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__Vstatic__addr_mirage 
                            = (0xfffffU & __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__34__addr);
                        __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v3 
                            = (__Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__34__data 
                               >> 0x18U);
                        vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v3 = 1U;
                        __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v3 
                            = (0xfffffU & ((IData)(3U) 
                                           + vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__Vstatic__addr_mirage));
                    } else {
                        __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v3 
                            = (__Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__34__data 
                               >> 0x18U);
                        vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v3 = 1U;
                        __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v3 
                            = (0xfffffU & ((IData)(3U) 
                                           + __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__34__addr));
                    }
                }
            } else {
                __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__35__mirage_en = 0U;
                __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__35__data 
                    = (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__data_fifo);
                __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__35__w_be 
                    = vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_be;
                __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__35__addr 
                    = (0xfffffffcU & vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_addr);
                if ((1U & (IData)(__Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__35__w_be))) {
                    if (__Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__35__mirage_en) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__Vstatic__addr_mirage 
                            = (0xfffffU & __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__35__addr);
                        __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v4 
                            = (0xffU & __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__35__data);
                        vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v4 = 1U;
                        __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v4 
                            = vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__Vstatic__addr_mirage;
                    } else {
                        __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v4 
                            = (0xffU & __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__35__data);
                        vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v4 = 1U;
                        __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v4 
                            = (0xfffffU & __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__35__addr);
                    }
                }
                if ((2U & (IData)(__Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__35__w_be))) {
                    if (__Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__35__mirage_en) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__Vstatic__addr_mirage 
                            = (0xfffffU & __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__35__addr);
                        __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v5 
                            = (0xffU & (__Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__35__data 
                                        >> 8U));
                        vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v5 = 1U;
                        __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v5 
                            = (0xfffffU & ((IData)(1U) 
                                           + vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__Vstatic__addr_mirage));
                    } else {
                        __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v5 
                            = (0xffU & (__Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__35__data 
                                        >> 8U));
                        vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v5 = 1U;
                        __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v5 
                            = (0xfffffU & ((IData)(1U) 
                                           + __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__35__addr));
                    }
                }
                if ((4U & (IData)(__Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__35__w_be))) {
                    if (__Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__35__mirage_en) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__Vstatic__addr_mirage 
                            = (0xfffffU & __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__35__addr);
                        __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v6 
                            = (0xffU & (__Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__35__data 
                                        >> 0x10U));
                        vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v6 = 1U;
                        __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v6 
                            = (0xfffffU & ((IData)(2U) 
                                           + vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__Vstatic__addr_mirage));
                    } else {
                        __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v6 
                            = (0xffU & (__Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__35__data 
                                        >> 0x10U));
                        vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v6 = 1U;
                        __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v6 
                            = (0xfffffU & ((IData)(2U) 
                                           + __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__35__addr));
                    }
                }
                if ((8U & (IData)(__Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__35__w_be))) {
                    if (__Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__35__mirage_en) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__Vstatic__addr_mirage 
                            = (0xfffffU & __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__35__addr);
                        __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v7 
                            = (__Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__35__data 
                               >> 0x18U);
                        vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v7 = 1U;
                        __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v7 
                            = (0xfffffU & ((IData)(3U) 
                                           + vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__Vstatic__addr_mirage));
                    } else {
                        __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v7 
                            = (__Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__35__data 
                               >> 0x18U);
                        vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v7 = 1U;
                        __Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v7 
                            = (0xfffffU & ((IData)(3U) 
                                           + __Vtask_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__35__addr));
                    }
                }
            }
        }
    } else {
        if (VL_UNLIKELY(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__test_file_init)) {
            VL_READMEM_N(true, 8, 1048576, 0, VL_CVT_PACK_STR_NW(8, vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__test_file)
                         ,  &(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory)
                         , 0, ~0ULL);
        }
        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__soft_irq_reg = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__irq_lines_reg = 0U;
    }
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_cpu_rstn_reset_sync__DOT__local_rst_n_in) {
        if (vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_state) {
            if (vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_state) {
                if (vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack) {
                    if ((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__dmem_htrans))) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_be 
                            = ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__dmem_htrans))
                                ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_be)
                                : 0U);
                    }
                    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_addr 
                        = ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__dmem_htrans))
                            ? 0U : ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__dmem_htrans))
                                     ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[1U]
                                     : 0U));
                    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_wr 
                        = ((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__dmem_htrans)) 
                           & ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__dmem_htrans)) 
                              & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[2U] 
                                 >> 3U)));
                }
            } else {
                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_addr = 0U;
                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_wr = 0U;
            }
        } else if ((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__dmem_htrans))) {
            if ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__dmem_htrans))) {
                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_be 
                    = vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_be;
                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_addr 
                    = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[1U];
                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_wr 
                    = (1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[2U] 
                             >> 3U));
            } else {
                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_addr = 0U;
                vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_wr = 0U;
            }
        }
    } else {
        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_be = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_addr = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_wr = 0U;
    }
    if (vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v0) {
        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage[__Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v0] 
            = __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v0;
    }
    if (vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v1) {
        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage[__Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v1] 
            = __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v1;
    }
    if (vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v2) {
        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage[__Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v2] 
            = __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v2;
    }
    if (vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v3) {
        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage[__Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v3] 
            = __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v3;
    }
    if (vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v4) {
        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage[__Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v4] 
            = __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v4;
    }
    if (vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v5) {
        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage[__Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v5] 
            = __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v5;
    }
    if (vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v6) {
        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage[__Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v6] 
            = __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v6;
    }
    if (vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v7) {
        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage[__Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v7] 
            = __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v7;
    }
    if (vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v0) {
        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory[__Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v0] 
            = __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v0;
    }
    if (vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v1) {
        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory[__Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v1] 
            = __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v1;
    }
    if (vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v2) {
        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory[__Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v2] 
            = __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v2;
    }
    if (vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v3) {
        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory[__Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v3] 
            = __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v3;
    }
    if (vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v4) {
        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory[__Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v4] 
            = __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v4;
    }
    if (vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v5) {
        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory[__Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v5] 
            = __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v5;
    }
    if (vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v6) {
        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory[__Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v6] 
            = __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v6;
    }
    if (vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v7) {
        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory[__Vdlyvdim0__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v7] 
            = __Vdlyvval__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v7;
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_state 
        = vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_state;
    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack 
        = (1U & ((0U == vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack_stall)
                  ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack_rnd)
                  : vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack_stall));
    vlSelf->scr1_top_tb_ahb__DOT__dmem_hrdata = 0U;
    if (vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_state) {
        if (vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_state) {
            if (vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack) {
                if ((1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_wr)))) {
                    vlSelf->scr1_top_tb_ahb__DOT__dmem_hrdata 
                        = vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_hrdata_l;
                }
            }
        }
    }
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_comb__TOP__0(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_rdata 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__port_sel_r)
            ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_imem_rdata
            : vlSelf->scr1_top_tb_ahb__DOT__imem_hrdata);
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_comb__TOP__1(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__mprf_rs2_req 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd_ff) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__idu2exu_use_rs2_ff));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__mprf_rs1_req 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd_ff) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__idu2exu_use_rs1_ff));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__inc_pc 
        = (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_ff 
           + ((0x400U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U])
               ? 2U : 4U));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__lsu_req 
        = ((0U != (0xfU & ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                            << 1U) | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                      >> 0x1fU)))) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd_ff));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_iter_cnt_next 
        = ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_ff))
            ? ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_cmd_is_iter)
                ? 0x40000000U : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_iter_cnt)
            : (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_iter_cnt 
               >> 1U));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgExtracted_h8768cdc8__0 
        = ((2U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_ff)) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_cmd_is_iter));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__mprf2exu_rs1_data 
        = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__mprf_rs1_req) 
            & (0U != (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                               >> 0xfU)))) ? ((0x3dfU 
                                               >= (0x3ffU 
                                                   & (((IData)(0x1fU) 
                                                       - 
                                                       ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__mprf_rs1_req)
                                                         ? 
                                                        (0x1fU 
                                                         & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                                            >> 0xfU))
                                                         : 0U)) 
                                                      << 5U)))
                                               ? ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & (((IData)(0x1fU) 
                                                         - 
                                                         ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__mprf_rs1_req)
                                                           ? 
                                                          (0x1fU 
                                                           & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                                              >> 0xfU))
                                                           : 0U)) 
                                                        << 5U)))
                                                    ? 0U
                                                    : 
                                                   (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[
                                                    (((IData)(0x1fU) 
                                                      + 
                                                      (0x3ffU 
                                                       & (((IData)(0x1fU) 
                                                           - 
                                                           ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__mprf_rs1_req)
                                                             ? 
                                                            (0x1fU 
                                                             & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                                                >> 0xfU))
                                                             : 0U)) 
                                                          << 5U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & (((IData)(0x1fU) 
                                                          - 
                                                          ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__mprf_rs1_req)
                                                            ? 
                                                           (0x1fU 
                                                            & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                                               >> 0xfU))
                                                            : 0U)) 
                                                         << 5U))))) 
                                                  | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[
                                                     (0x1fU 
                                                      & ((IData)(0x1fU) 
                                                         - 
                                                         ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__mprf_rs1_req)
                                                           ? 
                                                          (0x1fU 
                                                           & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                                              >> 0xfU))
                                                           : 0U)))] 
                                                     >> 
                                                     (0x1fU 
                                                      & (((IData)(0x1fU) 
                                                          - 
                                                          ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__mprf_rs1_req)
                                                            ? 
                                                           (0x1fU 
                                                            & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                                               >> 0xfU))
                                                            : 0U)) 
                                                         << 5U))))
                                               : 0U)
            : 0U);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_w_data 
        = ((0x40000000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U])
            ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__mprf2exu_rs1_data
            : (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                        >> 0xfU)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_addr_op1 
        = ((8U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U])
            ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__mprf2exu_rs1_data
            : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_ff);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_req = 0U;
    if ((1U == (3U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                      >> 0x1cU)))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_req = 1U;
    } else if ((2U == (3U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                             >> 0x1cU)))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_req 
            = (0U != vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_w_data);
    } else if ((3U == (3U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                             >> 0x1cU)))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_req 
            = (0U != vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_w_data);
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0 
        = (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_addr_op1 
           + vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_addr_op2);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_byteen = 0xfU;
    if ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_dmem_width))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_byteen 
            = (0xfU & ((IData)(1U) << (3U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0)));
    } else if ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_dmem_width))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_byteen 
            = (0xfU & ((IData)(3U) << (2U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0)));
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__dmem_req_valid 
        = ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_dmem_width)) 
           & ((~ (IData)((0U != (3U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0)))) 
              & (5U >= (7U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0 
                              >> 2U)))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__port_sel = 0U;
    if ((0x480000U == (0xffff0000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__port_sel = 1U;
    } else if ((0x490000U == (0xffffffe0U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__port_sel = 2U;
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__dmem_addr_mslgn 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__lsu_req) 
           & (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__dmem_wdth_hword) 
               & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0) 
              | (((3U == (0xfU & ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                   << 1U) | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                             >> 0x1fU)))) 
                  | (8U == (0xfU & ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                     << 1U) | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                               >> 0x1fU))))) 
                 & (0U != (3U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0)))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__dmem_addr_mslgn_l 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__dmem_addr_mslgn) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h2158131e__0));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__dmem_addr_mslgn_s 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__dmem_addr_mslgn) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h2097eaa3__0));
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__16(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_sequent__TOP__16\n"); );
    // Body
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff) {
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timer_clksrc_rtc) {
            vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__rtc_sync 
                = ((1U & (IData)(vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__rtc_sync)) 
                   | (0xeU & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__rtc_sync) 
                              << 1U)));
        }
    } else {
        vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__rtc_sync 
            = (1U & (IData)(vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__rtc_sync));
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__time_cnt 
        = vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__time_cnt;
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__17(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_sequent__TOP__17\n"); );
    // Body
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff) {
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timer_clksrc_rtc) {
            vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__rtc_sync 
                = ((0xeU & (IData)(vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__rtc_sync)) 
                   | (1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__rtc_sync))));
        }
    } else {
        vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__rtc_sync 
            = (0xeU & (IData)(vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__rtc_sync));
    }
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_comb__TOP__2(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__sys_rst_n_in 
        = (((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_control_ff)) 
            & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ndmreset_ff))) 
           & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_rstn_reset_sync__DOT__rst_n_dff) 
              >> 1U));
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_comb__TOP__3(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_comb__TOP__3\n"); );
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tapc_dmi_access_req 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_update) 
           & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_sel) 
              & (2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_id))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_next 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_capture)
            ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_rdata
            : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_shift)
                ? ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_id))
                    ? (QData)((IData)((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_tdi) 
                                        << 0x1fU) | 
                                       (0x7fffffffU 
                                        & (IData)((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_ff 
                                                   >> 1U))))))
                    : (((QData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_tdi)) 
                        << 0x28U) | (0xffffffffffULL 
                                     & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_ff 
                                        >> 1U)))) : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_ff));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wdata = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_req = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr = 0U;
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tapc_dmi_access_req) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr 
            = (2U == (3U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_ff)));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wdata 
            = (IData)((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_ff 
                       >> 2U));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_req 
            = (0U != (3U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_ff)));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr 
            = (0x7fU & (IData)((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_ff 
                                >> 0x22U)));
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf0 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_req) 
           & (0x20U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf1 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_req) 
           & (0x21U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf2 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_req) 
           & (0x22U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf3 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_req) 
           & (0x23U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf4 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_req) 
           & (0x24U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf5 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_req) 
           & (0x25U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_abstractauto 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_req) 
           & (0x18U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_data1 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_req) 
           & (5U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_wr_req 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr) 
           & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_req) 
              & (0x10U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_abstractcs 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_req) 
           & (0x16U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_command 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_req) 
           & (0x17U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__command_wr_req 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_command));
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__18(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_sequent__TOP__18\n"); );
    // Body
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_dm_rstn_buf_cell__DOT__reset_n_status_ff) {
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__clk_en_dm) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_next;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__clk_en_dm_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_ff;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_ff 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_next;
        }
    } else {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_ff = 1U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__clk_en_dm_ff = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_ff = 0U;
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT____VdfgTmp_h9a92a6aa__0 
        = ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_ff)) 
           | (3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_ff)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dm_dhalt_req 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_req_ff) 
           & (2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_ff)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_next = 1U;
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_ff) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_next 
            = ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff))
                ? 3U : ((4U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff))
                         ? 2U : ((5U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff))
                                  ? 1U : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_ff))));
    }
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_comb__TOP__4(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_comb__TOP__4\n"); );
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_imem_err = 0U;
    if ((1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_is_empty)))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_imem_err 
            = ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_ocpd_h))
                ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err_head)
                : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err_head) 
                   | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT____VdfgTmp_h4af6ecf2__0)));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_vd = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_vd 
            = ((1U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_ocpd_h)) 
               | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rd_hword));
    } else {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_vd = 0U;
    }
    if ((0x10U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_imem_err 
            = (2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_fsm_curr));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_vd 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__hdu2ifu_pbuf_vd;
    }
}

extern const VlUnpacked<CData/*0:0*/, 512> Vscr1_top_tb_ahb__ConstPool__TABLE_hae9f0f2c_0;

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_comb__TOP__5(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_comb__TOP__5\n"); );
    // Init
    SData/*8:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    // Body
    __Vtableidx11 = ((0x100U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_idcode_reg__DOT__shift_reg 
                                << 8U)) | ((0x80U & 
                                            (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_dr_bld_id_reg__DOT__shift_reg 
                                             << 7U)) 
                                           | (((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_scu_ch_sel) 
                                                 & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_ff)) 
                                                | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_sel) 
                                                   & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_ff))) 
                                               << 6U) 
                                              | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_bypass_reg__DOT__shift_reg) 
                                                  << 5U) 
                                                 | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_ff)))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__dr_out 
        = Vscr1_top_tb_ahb__ConstPool__TABLE_hae9f0f2c_0
        [__Vtableidx11];
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__19(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_sequent__TOP__19\n"); );
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__trst_n_int 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tapc_trst_n) 
           & (0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_ff)));
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__20(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_sequent__TOP__20\n"); );
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_capture_sync 
        = vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_capture_sync;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_shift_sync 
        = vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_shift_sync;
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_comb__TOP__6(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_comb__TOP__6\n"); );
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_pbuf_addr_qlfy 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_addr_ff) 
           & (- (IData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_resp_exc 
        = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_event) 
            & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff)) 
           & (IData)((8U == (0xcU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_hart_status)))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff)
            ? (3U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_hart_status))
            : 0U);
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_comb__TOP__7(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_comb__TOP__7\n"); );
    // Init
    IData/*31:0*/ scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_h4f356a3c__0;
    scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_h4f356a3c__0 = 0;
    IData/*31:0*/ scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_hcf519649__0;
    scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_hcf519649__0 = 0;
    IData/*31:0*/ scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_h39da9a79__0;
    scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_h39da9a79__0 = 0;
    IData/*31:0*/ scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_hf2857c5a__0;
    scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_hf2857c5a__0 = 0;
    IData/*31:0*/ scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_h2e77e139__0;
    scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_h2e77e139__0 = 0;
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
        = ((3U == (3U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data_head)))
            ? ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data
                [(3U & ((IData)(1U) + (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr)))] 
                << 0x10U) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data_head))
            : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data_head));
    if ((0x10U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__hdu2ifu_pbuf_instr;
    }
    scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_h4f356a3c__0 
        = (((- (IData)((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                        >> 0x1fU))) << 0xbU) | (0x7ffU 
                                                & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                   >> 0x14U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3 
        = (7U & ((3U == (3U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr))
                  ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                     >> 0xcU) : (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                 >> 0xdU)));
    scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_hcf519649__0 
        = ((0x40U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                     << 1U)) | ((0x38U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                          >> 7U)) | 
                                (4U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                       >> 4U))));
    scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_h39da9a79__0 
        = (((- (IData)((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                              >> 0xcU)))) << 5U) | 
           (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                     >> 2U)));
    scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_hf2857c5a__0 
        = (((- (IData)((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                              >> 0xcU)))) << 0xbU) 
           | ((0x400U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                         << 2U)) | ((0x300U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                               >> 1U)) 
                                    | ((0x80U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                 << 1U)) 
                                       | ((0x40U & 
                                           (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                            >> 1U)) 
                                          | ((0x20U 
                                              & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                 << 3U)) 
                                             | ((0x10U 
                                                 & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                    >> 7U)) 
                                                | (0xeU 
                                                   & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                      >> 2U)))))))));
    scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_h2e77e139__0 
        = (((- (IData)((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                              >> 0xcU)))) << 8U) | 
           ((0xc0U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                      << 1U)) | ((0x20U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                           << 3U)) 
                                 | ((0x18U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                              >> 7U)) 
                                    | (6U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                             >> 2U))))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] = 0x40000000U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] = 0x200U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs1 = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs2 = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rd = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_imm = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvi_illegal = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvc_illegal = 0U;
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_imem_err) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
            = (0x11U | (0xffffffe0U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U]));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
            = ((0x3ffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]) 
               | (0x7ffU & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_err_rvi_hi) 
                            << 0xaU)));
    } else if ((2U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)) {
        if ((1U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                = ((0xfff0001fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
                   | (0xffffffe0U & ((0xf8000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr) 
                                     | ((0x7c00U & 
                                         (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                          >> 0xaU)) 
                                        | (0x3e0U & 
                                           (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                            >> 2U))))));
            if ((0x40U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)) {
                if ((0x20U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)) {
                    if ((0x10U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)) {
                        if ((8U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)) {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvi_illegal = 1U;
                        } else if ((4U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)) {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvi_illegal = 1U;
                        } else {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rd = 1U;
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_imm = 1U;
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                                = ((0x1fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U]) 
                                   | (0xffffffe0U & 
                                      (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3) 
                                        << 0x11U) | 
                                       (0x1ffe0U & 
                                        (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                         >> 0xfU)))));
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                = ((0xffffffe0U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
                                   | (0x1fU & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3) 
                                               >> 0xfU)));
                            if ((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
                                if ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
                                    if ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
                                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs1 = 1U;
                                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                            = (0x3c000000U 
                                               | (0x81ffffffU 
                                                  & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
                                    } else {
                                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs1 = 1U;
                                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                            = (0x2c000000U 
                                               | (0x81ffffffU 
                                                  & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
                                    }
                                } else if ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
                                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs1 = 1U;
                                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                        = (0x1c000000U 
                                           | (0x81ffffffU 
                                              & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
                                } else {
                                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvi_illegal = 1U;
                                }
                            } else if ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
                                if ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
                                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs1 = 1U;
                                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                        = (0x7c000000U 
                                           | (0x81ffffffU 
                                              & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
                                } else {
                                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs1 = 1U;
                                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                        = (0x6c000000U 
                                           | (0x81ffffffU 
                                              & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
                                }
                            } else if ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs1 = 1U;
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                    = (0x5c000000U 
                                       | (0x81ffffffU 
                                          & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
                            } else {
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rd = 0U;
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_imm = 0U;
                                if ((0U == ((0x3e0U 
                                             & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                >> 0xaU)) 
                                            | (0x1fU 
                                               & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                  >> 7U))))) {
                                    if ((0U == (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                >> 0x14U))) {
                                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                                            = (0x1bU 
                                               | (0xffffffe0U 
                                                  & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U]));
                                    } else if ((1U 
                                                == 
                                                (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                 >> 0x14U))) {
                                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                                            = (0x13U 
                                               | (0xffffffe0U 
                                                  & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U]));
                                    } else if ((0x302U 
                                                == 
                                                (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                 >> 0x14U))) {
                                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                            = (0x400000U 
                                               | vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]);
                                    } else if ((0x105U 
                                                == 
                                                (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                 >> 0x14U))) {
                                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                            = (0x100000U 
                                               | vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]);
                                    } else {
                                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvi_illegal = 1U;
                                    }
                                } else {
                                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvi_illegal = 1U;
                                }
                            }
                        }
                    } else if ((8U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)) {
                        if ((4U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)) {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rd = 1U;
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_imm = 1U;
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                = (0x7f7U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]);
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                = (0x9000000U | (0xf0ffffffU 
                                                 & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                                = ((0x1fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U]) 
                                   | (0xffffffe0U & 
                                      (((- (IData)(
                                                   (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                    >> 0x1fU))) 
                                        << 0x19U) | 
                                       ((0x1fe0000U 
                                         & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                            << 5U)) 
                                        | ((0x10000U 
                                            & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                               >> 4U)) 
                                           | (0xffc0U 
                                              & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                 >> 0xfU)))))));
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                = ((0xffffffe0U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
                                   | (0x1fU & ((- (IData)(
                                                          (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                           >> 0x1fU))) 
                                               >> 7U)));
                        } else {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvi_illegal = 1U;
                        }
                    } else if ((4U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs1 = 1U;
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rd = 1U;
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_imm = 1U;
                        if ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                = (8U | vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]);
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                = (0x9000000U | (0xf0ffffffU 
                                                 & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                                = ((0x1fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U]) 
                                   | (scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_h4f356a3c__0 
                                      << 5U));
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                = ((0xffffffe0U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
                                   | (scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_h4f356a3c__0 
                                      >> 0x1bU));
                        } else {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvi_illegal = 1U;
                        }
                    } else {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs1 = 1U;
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs2 = 1U;
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_imm = 1U;
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                            = ((0x1fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U]) 
                               | (0xffffffe0U & (((- (IData)(
                                                             (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                              >> 0x1fU))) 
                                                  << 0x11U) 
                                                 | ((0x10000U 
                                                     & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                        << 9U)) 
                                                    | ((0xfc00U 
                                                        & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                           >> 0xfU)) 
                                                       | (0x3c0U 
                                                          & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                             >> 2U)))))));
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                            = ((0xffffffe0U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
                               | (0x1fU & ((- (IData)(
                                                      (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                       >> 0x1fU))) 
                                           >> 0xfU)));
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                            = (0x800000U | vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]);
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                            = (0x7f7U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]);
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                            = (0x200U | vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]);
                        if ((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                = ((0x60fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]) 
                                   | (0x7ffU & (((2U 
                                                  & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))
                                                   ? 0xbU
                                                   : 7U)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))
                                                   ? 0xaU
                                                   : 6U)) 
                                                << 4U)));
                        } else if ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvi_illegal = 1U;
                        } else {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                = ((0x60fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]) 
                                   | (0x7ffU & (((1U 
                                                  & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))
                                                  ? 9U
                                                  : 8U) 
                                                << 4U)));
                        }
                    }
                } else {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvi_illegal = 1U;
                }
            } else if ((0x20U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)) {
                if ((0x10U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)) {
                    if ((8U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvi_illegal = 1U;
                    } else if ((4U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rd = 1U;
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_imm = 1U;
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                            = (0x6000000U | (0xf1ffffffU 
                                             & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                            = ((0x1fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U]) 
                               | (0xfffe0000U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                 << 5U)));
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                            = ((0xffffffe0U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
                               | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                  >> 0x1bU));
                    } else {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs1 = 1U;
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs2 = 1U;
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rd = 1U;
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                            = (0x200U | vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]);
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                            = (0x2000000U | (0xf1ffffffU 
                                             & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
                        if ((0U == (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                    >> 0x19U))) {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                = ((0x60fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]) 
                                   | (0x7ffU & (((4U 
                                                  & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))
                                                    ? 1U
                                                    : 2U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))
                                                    ? 0xdU
                                                    : 3U))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))
                                                    ? 7U
                                                    : 6U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))
                                                    ? 0xcU
                                                    : 4U))) 
                                                << 4U)));
                        } else if ((0x20U == (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                              >> 0x19U))) {
                            if ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                    = (0x50U | (0x60fU 
                                                & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]));
                            } else if ((5U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                    = (0xe0U | (0x60fU 
                                                & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]));
                            } else {
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvi_illegal = 1U;
                            }
                        } else if ((1U == (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                           >> 0x19U))) {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                = ((0x60fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]) 
                                   | (0x7ffU & (((4U 
                                                  & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))
                                                    ? 0x16U
                                                    : 0x15U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))
                                                    ? 0x14U
                                                    : 0x13U))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))
                                                    ? 0x10U
                                                    : 0x11U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))
                                                    ? 0x12U
                                                    : 0xfU))) 
                                                << 4U)));
                        } else {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvi_illegal = 1U;
                        }
                    }
                } else if ((8U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvi_illegal = 1U;
                } else if ((4U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvi_illegal = 1U;
                } else {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs1 = 1U;
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs2 = 1U;
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_imm = 1U;
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                        = (8U | vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]);
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                        = ((0x1fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U]) 
                           | (0xffffffe0U & (((- (IData)(
                                                         (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                          >> 0x1fU))) 
                                              << 0x10U) 
                                             | ((0xfc00U 
                                                 & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                    >> 0xfU)) 
                                                | (0x3e0U 
                                                   & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                      >> 2U))))));
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                        = ((0xffffffe0U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
                           | (0x1fU & ((- (IData)((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                   >> 0x1fU))) 
                                       >> 0x10U)));
                    if ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                            = (0x7fffffffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]);
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                            = (3U | (0x7f8U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]));
                    } else if ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                            = (0x80000000U | (0x7fffffffU 
                                              & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                            = (3U | (0x7f8U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]));
                    } else if ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                            = (0x7fffffffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]);
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                            = (4U | (0x7f8U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]));
                    } else {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvi_illegal = 1U;
                    }
                }
            } else if ((0x10U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)) {
                if ((8U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvi_illegal = 1U;
                } else if ((4U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rd = 1U;
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_imm = 1U;
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                        = (0x7f7U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]);
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                        = (0x4000000U | (0xf1ffffffU 
                                         & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                        = ((0x1fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U]) 
                           | (0xfffe0000U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                             << 5U)));
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                        = ((0xffffffe0U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
                           | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                              >> 0x1bU));
                } else {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs1 = 1U;
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rd = 1U;
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_imm = 1U;
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                        = ((0x1fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U]) 
                           | (scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_h4f356a3c__0 
                              << 5U));
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                        = ((0xffffffe0U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
                           | (scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_h4f356a3c__0 
                              >> 0x1bU));
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                        = (0x5ffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]);
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                        = (0x2000000U | (0xf1ffffffU 
                                         & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
                    if ((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
                        if ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                = ((0x60fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]) 
                                   | (0x7ffU & (((1U 
                                                  & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))
                                                  ? 1U
                                                  : 2U) 
                                                << 4U)));
                        } else if ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
                            if ((0U == (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                        >> 0x19U))) {
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                                    = ((0x1fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U]) 
                                       | (0x3e0U & 
                                          (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                           >> 0xfU)));
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                    = (0xffffffe0U 
                                       & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]);
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                    = (0xd0U | (0x60fU 
                                                & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]));
                            } else if ((0x20U == (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                  >> 0x19U))) {
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                                    = ((0x1fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U]) 
                                       | (0x3e0U & 
                                          (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                           >> 0xfU)));
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                    = (0xffffffe0U 
                                       & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]);
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                    = (0xe0U | (0x60fU 
                                                & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]));
                            } else {
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvi_illegal = 1U;
                            }
                        } else {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                = (0x30U | (0x60fU 
                                            & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]));
                        }
                    } else if ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                            = ((0x60fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]) 
                               | (0x7ffU & (((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))
                                              ? 7U : 6U) 
                                            << 4U)));
                    } else if ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
                        if ((0U == (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                    >> 0x19U))) {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                                = ((0x1fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U]) 
                                   | (0x3e0U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                >> 0xfU)));
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                = (0xffffffe0U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]);
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                = (0xc0U | (0x60fU 
                                            & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]));
                        } else {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvi_illegal = 1U;
                        }
                    } else {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                            = (0x40U | (0x60fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]));
                    }
                }
            } else if ((8U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)) {
                if ((4U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)) {
                    if ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
                        if ((IData)((0U != (0xf00f8f80U 
                                            & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)))) {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvi_illegal = 1U;
                        }
                    } else if ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
                        if ((IData)((0U != (0xffff8f80U 
                                            & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)))) {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvi_illegal = 1U;
                        } else {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                = (0x200000U | vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]);
                        }
                    } else {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvi_illegal = 1U;
                    }
                } else {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvi_illegal = 1U;
                }
            } else if ((4U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvi_illegal = 1U;
            } else {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs1 = 1U;
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rd = 1U;
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_imm = 1U;
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                    = (8U | vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]);
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                    = (0xa000000U | (0xf1ffffffU & 
                                     vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                    = ((0x1fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U]) 
                       | (scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_h4f356a3c__0 
                          << 5U));
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                    = ((0xffffffe0U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
                       | (scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_h4f356a3c__0 
                          >> 0x1bU));
                if ((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
                    if ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvi_illegal = 1U;
                    } else {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                            = ((0x7fffffffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
                               | (((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))
                                    ? 5U : 4U) << 0x1fU));
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                            = ((0x7f8U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]) 
                               | (0x7ffU & (((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))
                                              ? 5U : 4U) 
                                            >> 1U)));
                    }
                } else if ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
                    if ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvi_illegal = 1U;
                    } else {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                            = (0x80000000U | (0x7fffffffU 
                                              & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                            = (1U | (0x7f8U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]));
                    }
                } else {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                        = ((0x7fffffffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
                           | (((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))
                                ? 2U : 1U) << 0x1fU));
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                        = ((0x7f8U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]) 
                           | (0x7ffU & (((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))
                                          ? 2U : 1U) 
                                        >> 1U)));
                }
            }
        } else {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                = (0x400U | vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]);
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs1 = 1U;
            if ((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
                if ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
                    if ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvc_illegal = 1U;
                    } else {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs1 = 1U;
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs2 = 1U;
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_imm = 1U;
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                            = (0x7fffffffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]);
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                            = (0xcU | (0x7f0U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]));
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                            = ((0xfff003ffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
                               | (0xfffffc00U & (0x10000U 
                                                 | (0x7c00U 
                                                    & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                       << 8U)))));
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                            = ((0x1fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U]) 
                               | (0xffffffe0U & ((0x1800U 
                                                  & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                     << 4U)) 
                                                 | (0x780U 
                                                    & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                       >> 2U)))));
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                            = (0xffffffe0U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]);
                    }
                } else if ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvc_illegal = 1U;
                } else if ((0x1000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)) {
                    if ((0U != (0x3ffU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                          >> 2U)))) {
                        if ((0U != (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                             >> 2U)))) {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs1 = 1U;
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs2 = 1U;
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rd = 1U;
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                = (0x240U | (0x40fU 
                                             & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]));
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                = (0x2000000U | (0xf1ffffffU 
                                                 & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                = ((0xfff0001fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
                                   | (0xffffffe0U & 
                                      ((0xffc00U & 
                                        (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                         << 8U)) | 
                                       (0x3e0U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                  >> 2U)))));
                        } else {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs1 = 1U;
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rd = 1U;
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_imm = 1U;
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                = (8U | vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]);
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                = (0x9000000U | (0xf0ffffffU 
                                                 & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                = ((0xfff07fffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
                                   | (0xf8000U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                  << 8U)));
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                                = (0x1fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U]);
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                = (0x20U | (0xfffffc00U 
                                            & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
                        }
                    } else {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                            = (0x13U | (0xffffffe0U 
                                        & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U]));
                    }
                } else if ((0U != (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                            >> 2U)))) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs2 = 1U;
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rd = 1U;
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                        = (0x240U | (0x40fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]));
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                        = (0x2000000U | (0xf1ffffffU 
                                         & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                        = ((0xfff0001fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
                           | (0xffffffe0U & ((0x7c00U 
                                              & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                 << 8U)) 
                                             | (0x3e0U 
                                                & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                   >> 2U)))));
                } else {
                    if ((1U & (~ (IData)((0U != (0x1fU 
                                                 & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                    >> 7U))))))) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvc_illegal = 1U;
                    }
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_imm = 1U;
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                        = (8U | vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]);
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                        = (0x1000000U | vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]);
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                        = ((0xfff07fffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
                           | (0xf8000U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                          << 8U)));
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                        = (0x1fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U]);
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                        = (0xffffffe0U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]);
                }
            } else if ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
                if ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvc_illegal = 1U;
                } else {
                    if ((1U & (~ (IData)((0U != (0x1fU 
                                                 & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                    >> 7U))))))) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvc_illegal = 1U;
                    }
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rd = 1U;
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_imm = 1U;
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                        = (0x80000000U | (0x7fffffffU 
                                          & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                        = (9U | (0x7f0U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]));
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                        = (0xa000000U | (0xf1ffffffU 
                                         & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                        = (0x10000U | (0xfff07fffU 
                                       & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                        = ((0x1fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U]) 
                           | ((IData)((((QData)((IData)(
                                                        (0x1fU 
                                                         & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                            >> 7U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0xc0U 
                                                                      & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                         << 4U)) 
                                                                     | ((0x20U 
                                                                         & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                            >> 7U)) 
                                                                        | (0x1cU 
                                                                           & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                              >> 2U)))))))) 
                              << 5U));
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                        = ((0xfffffc00U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
                           | (((IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                             >> 7U)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((0xc0U 
                                                            & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                               << 4U)) 
                                                           | ((0x20U 
                                                               & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                  >> 7U)) 
                                                              | (0x1cU 
                                                                 & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                    >> 2U)))))))) 
                               >> 0x1bU) | ((IData)(
                                                    ((((QData)((IData)(
                                                                       (0x1fU 
                                                                        & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                           >> 7U)))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        ((0xc0U 
                                                                          & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                             << 4U)) 
                                                                         | ((0x20U 
                                                                             & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                                >> 7U)) 
                                                                            | (0x1cU 
                                                                               & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                                >> 2U))))))) 
                                                     >> 0x20U)) 
                                            << 5U)));
                }
            } else if ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvc_illegal = 1U;
            } else {
                if ((0x1000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvc_illegal = 1U;
                }
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rd = 1U;
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_imm = 1U;
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                    = ((0xfff07fffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
                       | (0xf8000U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                      << 8U)));
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                    = ((0x1fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U]) 
                       | ((IData)((((QData)((IData)(
                                                    (0x1fU 
                                                     & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                        >> 7U)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (0x1fU 
                                                                 & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                    >> 2U)))))) 
                          << 5U));
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                    = ((0xfffffc00U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
                       | (((IData)((((QData)((IData)(
                                                     (0x1fU 
                                                      & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                         >> 7U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (0x1fU 
                                                                  & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                     >> 2U)))))) 
                           >> 0x1bU) | ((IData)(((((QData)((IData)(
                                                                   (0x1fU 
                                                                    & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                       >> 7U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (0x1fU 
                                                                     & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                        >> 2U))))) 
                                                 >> 0x20U)) 
                                        << 5U)));
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                    = (0xc0U | (0x40fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]));
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                    = (0x2000000U | (0xf1ffffffU & 
                                     vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
            }
        }
    } else if ((1U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
            = (0x400U | vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]);
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rd = 1U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_imm = 1U;
        if ((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
            if ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
                if ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs1 = 1U;
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs2 = 1U;
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_imm = 1U;
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                        = (0x290U | (0x407U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]));
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                        = (0x800000U | vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]);
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                        = ((0xfff003ffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
                           | (0xfffffc00U & (0x40000U 
                                             | (0x38000U 
                                                & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                   << 8U)))));
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                        = ((0x1fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U]) 
                           | (scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_h2e77e139__0 
                              << 5U));
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                        = ((0xffffffe0U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
                           | (scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_h2e77e139__0 
                              >> 0x1bU));
                } else {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs1 = 1U;
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs2 = 1U;
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_imm = 1U;
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                        = (0x280U | (0x407U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]));
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                        = (0x800000U | vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]);
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                        = ((0xfff003ffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
                           | (0xfffffc00U & (0x40000U 
                                             | (0x38000U 
                                                & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                   << 8U)))));
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                        = ((0x1fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U]) 
                           | (scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_h2e77e139__0 
                              << 5U));
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                        = ((0xffffffe0U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
                           | (scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_h2e77e139__0 
                              >> 0x1bU));
                }
            } else if ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_imm = 1U;
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                    = (0x7f7U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]);
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                    = (0x1000000U | vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]);
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                    = ((0x1fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U]) 
                       | (scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_hf2857c5a__0 
                          << 5U));
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                    = ((0xffffffe0U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
                       | (scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_hf2857c5a__0 
                          >> 0x1bU));
            } else {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                    = ((0xfff0001fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
                       | (0xffffffe0U & (0x42100U | 
                                         ((0x38000U 
                                           & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                              << 8U)) 
                                          | ((0x1c00U 
                                              & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                 << 8U)) 
                                             | (0xe0U 
                                                & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                   >> 2U)))))));
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs1 = 1U;
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rd = 1U;
                if ((0x800U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)) {
                    if ((0x400U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs2 = 1U;
                        if ((0x1000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)) {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvc_illegal = 1U;
                        } else if ((0x40U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)) {
                            if ((0x20U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)) {
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                    = (0x210U | (0x40fU 
                                                 & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]));
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                    = (0x2000000U | 
                                       (0xf1ffffffU 
                                        & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
                            } else {
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                    = (0x220U | (0x40fU 
                                                 & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]));
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                    = (0x2000000U | 
                                       (0xf1ffffffU 
                                        & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
                            }
                        } else if ((0x20U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)) {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                = (0x230U | (0x40fU 
                                             & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]));
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                = (0x2000000U | (0xf1ffffffU 
                                                 & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
                        } else {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                = (0x250U | (0x40fU 
                                             & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]));
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                = (0x2000000U | (0xf1ffffffU 
                                                 & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
                        }
                    } else {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_imm = 1U;
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                            = (0x10U | (0x40fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]));
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                            = (0x2000000U | (0xf1ffffffU 
                                             & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                            = ((0x1fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U]) 
                               | (scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_h39da9a79__0 
                                  << 5U));
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                            = ((0xffffffe0U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
                               | (scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_h39da9a79__0 
                                  >> 0x1bU));
                    }
                } else if ((0x400U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)) {
                    if ((0x1000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvc_illegal = 1U;
                    }
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_imm = 1U;
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                        = ((0x1fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U]) 
                           | (0x3e0U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                        << 3U)));
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                        = (0xffffffe0U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]);
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                        = (0xe0U | (0x40fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]));
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                        = (0x2000000U | (0xf1ffffffU 
                                         & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
                } else {
                    if ((0x1000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvc_illegal = 1U;
                    }
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_imm = 1U;
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                        = ((0x1fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U]) 
                           | (0x3e0U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                        << 3U)));
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                        = (0xffffffe0U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]);
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                        = (0xd0U | (0x40fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]));
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                        = (0x2000000U | (0xf1ffffffU 
                                         & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
                }
            }
        } else if ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
            if ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
                if ((1U & (~ (IData)((0U != (0x107cU 
                                             & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)))))) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvc_illegal = 1U;
                }
                if ((2U == (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                     >> 7U)))) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs1 = 1U;
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                        = (0x40U | (0x40fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]));
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                        = (0x2000000U | (0xf1ffffffU 
                                         & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                        = (0x10000U | (0xfff07fffU 
                                       & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                        = ((0x1fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U]) 
                           | ((IData)((0x200000000ULL 
                                       | (QData)((IData)(
                                                         (((- (IData)(
                                                                      (1U 
                                                                       & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                          >> 0xcU)))) 
                                                           << 9U) 
                                                          | ((0x180U 
                                                              & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                 << 4U)) 
                                                             | ((0x40U 
                                                                 & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                    << 1U)) 
                                                                | ((0x20U 
                                                                    & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                       << 3U)) 
                                                                   | (0x10U 
                                                                      & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                         >> 2U)))))))))) 
                              << 5U));
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                        = ((0xfffffc00U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
                           | (((IData)((0x200000000ULL 
                                        | (QData)((IData)(
                                                          (((- (IData)(
                                                                       (1U 
                                                                        & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                           >> 0xcU)))) 
                                                            << 9U) 
                                                           | ((0x180U 
                                                               & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                  << 4U)) 
                                                              | ((0x40U 
                                                                  & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                     << 1U)) 
                                                                 | ((0x20U 
                                                                     & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                        << 3U)) 
                                                                    | (0x10U 
                                                                       & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                          >> 2U)))))))))) 
                               >> 0x1bU) | ((IData)(
                                                    ((0x200000000ULL 
                                                      | (QData)((IData)(
                                                                        (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                                >> 0xcU)))) 
                                                                          << 9U) 
                                                                         | ((0x180U 
                                                                             & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                                << 4U)) 
                                                                            | ((0x40U 
                                                                                & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                                << 1U)) 
                                                                               | ((0x20U 
                                                                                & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                                << 3U)) 
                                                                                | (0x10U 
                                                                                & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                                >> 2U))))))))) 
                                                     >> 0x20U)) 
                                            << 5U)));
                } else {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                        = (0x6000000U | (0xf1ffffffU 
                                         & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                        = ((0x1fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U]) 
                           | ((IData)((((QData)((IData)(
                                                        (0x1fU 
                                                         & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                            >> 7U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                                >> 0xcU)))) 
                                                                      << 0x11U) 
                                                                     | (0x1f000U 
                                                                        & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                           << 0xaU))))))) 
                              << 5U));
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                        = ((0xfffffc00U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
                           | (((IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                             >> 7U)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (((- (IData)(
                                                                       (1U 
                                                                        & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                           >> 0xcU)))) 
                                                            << 0x11U) 
                                                           | (0x1f000U 
                                                              & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                 << 0xaU))))))) 
                               >> 0x1bU) | ((IData)(
                                                    ((((QData)((IData)(
                                                                       (0x1fU 
                                                                        & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                           >> 7U)))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                                >> 0xcU)))) 
                                                                          << 0x11U) 
                                                                         | (0x1f000U 
                                                                            & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                               << 0xaU)))))) 
                                                     >> 0x20U)) 
                                            << 5U)));
                }
            } else {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                    = (0x6000000U | (0xf1ffffffU & 
                                     vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                    = ((0x1fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U]) 
                       | ((IData)((((QData)((IData)(
                                                    (0x1fU 
                                                     & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                        >> 7U)))) 
                                    << 0x20U) | (QData)((IData)(scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_h39da9a79__0)))) 
                          << 5U));
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                    = ((0xfffffc00U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
                       | (((IData)((((QData)((IData)(
                                                     (0x1fU 
                                                      & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                         >> 7U)))) 
                                     << 0x20U) | (QData)((IData)(scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_h39da9a79__0)))) 
                           >> 0x1bU) | ((IData)(((((QData)((IData)(
                                                                   (0x1fU 
                                                                    & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                       >> 7U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_h39da9a79__0))) 
                                                 >> 0x20U)) 
                                        << 5U)));
            }
        } else if ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                = (0x7f7U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]);
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                = (0x9000000U | (0xf0ffffffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                = ((0x1fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U]) 
                   | ((IData)((0x100000000ULL | (QData)((IData)(scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_hf2857c5a__0)))) 
                      << 5U));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                = ((0xfffffc00U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
                   | (((IData)((0x100000000ULL | (QData)((IData)(scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_hf2857c5a__0)))) 
                       >> 0x1bU) | ((IData)(((0x100000000ULL 
                                              | (QData)((IData)(scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_hf2857c5a__0))) 
                                             >> 0x20U)) 
                                    << 5U)));
        } else {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs1 = 1U;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                = (0x40U | (0x40fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                = (0x2000000U | (0xf1ffffffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                = ((0xfff07fffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
                   | (0xf8000U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                  << 8U)));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                = ((0x1fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U]) 
                   | ((IData)((((QData)((IData)((0x1fU 
                                                 & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                    >> 7U)))) 
                                << 0x20U) | (QData)((IData)(scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_h39da9a79__0)))) 
                      << 5U));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                = ((0xfffffc00U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
                   | (((IData)((((QData)((IData)((0x1fU 
                                                  & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                     >> 7U)))) 
                                 << 0x20U) | (QData)((IData)(scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_h39da9a79__0)))) 
                       >> 0x1bU) | ((IData)(((((QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                   >> 7U)))) 
                                               << 0x20U) 
                                              | (QData)((IData)(scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_h39da9a79__0))) 
                                             >> 0x20U)) 
                                    << 5U)));
        }
    } else {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
            = (0x400U | vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]);
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs1 = 1U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_imm = 1U;
        if ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
            if ((1U & (~ (IData)((0U != (0xffU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                  >> 5U))))))) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvc_illegal = 1U;
            }
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rd = 1U;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                = (0x40U | (0x40fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                = (0x2000000U | (0xf1ffffffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                = (0x10000U | (0xfff07fffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                = ((0x1fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U]) 
                   | ((IData)((0x800000000ULL | (((QData)((IData)(
                                                                  (7U 
                                                                   & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                      >> 2U)))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((0x3c0U 
                                                                     & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                        >> 1U)) 
                                                                    | ((0x30U 
                                                                        & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                           >> 7U)) 
                                                                       | ((8U 
                                                                           & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                              >> 2U)) 
                                                                          | (4U 
                                                                             & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                                >> 4U)))))))))) 
                      << 5U));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                = ((0xfffffc00U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
                   | (((IData)((0x800000000ULL | (((QData)((IData)(
                                                                   (7U 
                                                                    & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                       >> 2U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0x3c0U 
                                                                      & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                         >> 1U)) 
                                                                     | ((0x30U 
                                                                         & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                            >> 7U)) 
                                                                        | ((8U 
                                                                            & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                               >> 2U)) 
                                                                           | (4U 
                                                                              & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                                >> 4U)))))))))) 
                       >> 0x1bU) | ((IData)(((0x800000000ULL 
                                              | (((QData)((IData)(
                                                                  (7U 
                                                                   & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                      >> 2U)))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((0x3c0U 
                                                                     & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                        >> 1U)) 
                                                                    | ((0x30U 
                                                                        & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                           >> 7U)) 
                                                                       | ((8U 
                                                                           & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                              >> 2U)) 
                                                                          | (4U 
                                                                             & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                                >> 4U))))))))) 
                                             >> 0x20U)) 
                                    << 5U)));
        } else if ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rd = 1U;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                = (0x80000000U | (0x7fffffffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                = (9U | (0x7f0U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                = (0xa000000U | (0xf1ffffffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                = ((0xfff07fffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
                   | (0xffff8000U & (0x40000U | (0x38000U 
                                                 & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                    << 8U)))));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                = ((0x1fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U]) 
                   | ((IData)((0x800000000ULL | (((QData)((IData)(
                                                                  (7U 
                                                                   & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                      >> 2U)))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_hcf519649__0))))) 
                      << 5U));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                = ((0xfffffc00U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
                   | (((IData)((0x800000000ULL | (((QData)((IData)(
                                                                   (7U 
                                                                    & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                       >> 2U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_hcf519649__0))))) 
                       >> 0x1bU) | ((IData)(((0x800000000ULL 
                                              | (((QData)((IData)(
                                                                  (7U 
                                                                   & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                                      >> 2U)))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_hcf519649__0)))) 
                                             >> 0x20U)) 
                                    << 5U)));
        } else if ((6U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs2 = 1U;
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                = (0x7fffffffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]);
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                = (0xcU | (0x7f0U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                = ((0xfff003ffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
                   | (0xfffffc00U & (0x42000U | ((0x38000U 
                                                  & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                     << 8U)) 
                                                 | (0x1c00U 
                                                    & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                                       << 8U))))));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                = ((0x1fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U]) 
                   | (scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_hcf519649__0 
                      << 5U));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                = ((0xffffffe0U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
                   | (scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT____VdfgExtracted_hcf519649__0 
                      >> 0x1bU));
        } else {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvc_illegal = 1U;
        }
    }
    if (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvi_illegal) 
         | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvc_illegal))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
            = (0x60fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]);
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs1 = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs2 = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rd = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_imm = 1U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
            = (0x7fffffffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]);
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
            = (0x7f8U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U]);
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
            = (0xc00fffffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]);
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
            = (IData)((0x12ULL | ((QData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)) 
                                  << 5U)));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
            = ((0xffffffe0U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U]) 
               | (IData)(((0x12ULL | ((QData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)) 
                                      << 5U)) >> 0x20U)));
    }
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_comb__TOP__8(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_comb__TOP__8\n"); );
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_resp 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__port_sel_r)
            ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_imem_resp)
            : (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__fsm) 
                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__imem_hready))
                ? ((IData)(vlSelf->scr1_top_tb_ahb__DOT__imem_hresp)
                    ? 2U : 1U) : 0U));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[5U] 
        = ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtvec_base 
            << 6U) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtvec_mode_ff));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[2U] 
        = (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mepc_ff 
           << 1U);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[0U] 
        = (IData)((((QData)((IData)((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_i_ff) 
                                      << 0x1fU) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_ec_ff)))) 
                    << 0x20U) | (QData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtval_ff))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[1U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_i_ff) 
                                       << 0x1fU) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_ec_ff)))) 
                     << 0x20U) | (QData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtval_ff))) 
                   >> 0x20U));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[6U] = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[3U] = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[4U] = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[6U] 
        = ((0xfffffff7U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[6U]) 
           | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_mie_ff) 
              << 3U));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[6U] 
        = ((0xffffff7fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[6U]) 
           | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_mpie_ff) 
              << 7U));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[6U] 
        = (0x1800U | vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[6U]);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[4U] 
        = ((0xfffffff7U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[4U]) 
           | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_msie_ff) 
              << 3U));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[4U] 
        = ((0xffffff7fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[4U]) 
           | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_mtie_ff) 
              << 7U));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[4U] 
        = ((0xfffff7ffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[4U]) 
           | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_meie_ff) 
              << 0xbU));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[3U] 
        = ((0xfffffff7U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[3U]) 
           | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__soft_irq_reg) 
              << 3U));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[3U] 
        = ((0xffffff7fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[3U]) 
           | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__timer_irq) 
              << 7U));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[3U] 
        = ((0xfffff7ffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[3U]) 
           | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mip_meip) 
              << 0xbU));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mip = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mip 
        = ((0xfffffff7U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mip) 
           | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__soft_irq_reg) 
              << 3U));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mip 
        = ((0xffffff7fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mip) 
           | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__timer_irq) 
              << 7U));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mip 
        = ((0xfffff7ffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mip) 
           | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mip_meip) 
              << 0xbU));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_sirq_pnd_en 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__soft_irq_reg) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_msie_ff));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_er_discard_pnd 
        = ((~ (IData)((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_discard_cnt)))) 
           & (2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_resp)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_received 
        = ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_resp)) 
           | (2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_resp)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_ip_ie 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_eirq_pnd_en) 
           | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_sirq_pnd_en) 
              | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_tirq_pnd_en)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_vd 
        = ((~ (IData)((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_discard_cnt)))) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_received));
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__21(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_sequent__TOP__21\n"); );
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_cpu_rstn_reset_sync__DOT__local_rst_n_in 
        = (3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__rst_cnt));
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__fsm) {
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__fsm) {
            if (vlSelf->scr1_top_tb_ahb__DOT__dmem_hready) {
                if ((1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__dmem_hresp)))) {
                    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT____VdfgExtracted_h136b417e__0) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__data_fifo 
                            = (((QData)((IData)((7U 
                                                 & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[2U]))) 
                                << 0x22U) | (0x3ffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[0U])))));
                    }
                }
            }
        }
    } else if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT____VdfgExtracted_h136b417e__0) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__data_fifo 
            = (((QData)((IData)((7U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[2U]))) 
                << 0x22U) | (0x3ffffffffULL & (((QData)((IData)(
                                                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[0U])))));
    }
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__22(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_sequent__TOP__22\n"); );
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__rtc_sync 
        = vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__rtc_sync;
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__23(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_sequent__TOP__23\n"); );
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__fsm 
        = vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__fsm;
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff) {
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__control_up) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timer_clksrc_rtc 
                = (1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__mprf2exu_rs2_data 
                         >> 1U));
        }
    } else {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timer_clksrc_rtc = 0U;
    }
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_comb__TOP__9(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_comb__TOP__9\n"); );
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_data0 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_req) 
           & (4U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_rpt_command 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_autoexec_ff) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_data0));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_command)
            ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wdata
            : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_command_ff);
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_ff) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_command_next 
            = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__command_wr_req) 
                & (0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)))
                ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wdata
                : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_command_ff);
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_autoexec_next 
            = (1U & ((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr) 
                       & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_abstractauto)) 
                      & (0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)))
                      ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wdata
                      : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_autoexec_ff)));
    } else {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_command_next = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_autoexec_next = 0U;
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_rdata = 0U;
    if ((0x40U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_rdata 
            = ((0x20U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr))
                ? 0U : ((0x10U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr))
                         ? 0U : ((8U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr))
                                  ? 0U : ((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr))
                                           ? 0U : (
                                                   (2U 
                                                    & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr))
                                                     ? 0U
                                                     : 
                                                    ((0xfffffffeU 
                                                      & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_rdata) 
                                                     | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_halted_ff))))))));
    } else if ((0x20U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_rdata 
            = ((0x10U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr))
                ? 0U : ((8U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr))
                         ? 0U : ((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr))
                                  ? ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr))
                                      ? 0U : ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr))
                                               ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf5_ff
                                               : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf4_ff))
                                  : ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr))
                                      ? ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr))
                                          ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf3_ff
                                          : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf2_ff)
                                      : ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr))
                                          ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf1_ff
                                          : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf0_ff)))));
    } else if ((0x10U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr))) {
        if ((8U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_rdata 
                = ((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr))
                    ? 0U : ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr))
                             ? 0U : ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr))
                                      ? 0U : ((0xfffffffeU 
                                               & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_rdata) 
                                              | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_autoexec_ff)))));
        } else if ((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_rdata 
                = ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr))
                    ? ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr))
                        ? 0U : (0x6000002U | ((((0U 
                                                 != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
                                                & (1U 
                                                   != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) 
                                               << 0xcU) 
                                              | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abstractcs_cmderr_ff) 
                                                 << 8U))))
                    : 0U);
        } else if ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_rdata 
                = ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr))
                    ? 0U : 0x1017b2U);
        } else if ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_rdata 
                = (0x400000U | ((0x1ffffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_rdata) 
                                | ((0xc0000U & ((- (IData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_havereset_ff))) 
                                                << 0x12U)) 
                                   | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_resumeack_ff) 
                                      << 0x11U))));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_rdata 
                = ((0xfffe07ffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_rdata) 
                   | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_resumeack_ff) 
                       << 0x10U) | (0x800U & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_halted_ff)) 
                                              << 0xbU))));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_rdata 
                = (0x80U | ((0xfffff87fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_rdata) 
                            | ((0x400U & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_halted_ff)) 
                                          << 0xaU)) 
                               | (0x300U & ((- (IData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_halted_ff))) 
                                            << 8U)))));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_rdata 
                = (2U | (0xffffff80U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_rdata));
        } else {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_rdata 
                = ((0xfffffffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_rdata) 
                   | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_haltreq_ff) 
                       << 0x1fU) | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_resumereq_ff) 
                                     << 0x1eU) | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ackhavereset_ff) 
                                                  << 0x1cU))));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_rdata 
                = ((0xf0000000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_rdata) 
                   | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ndmreset_ff) 
                       << 1U) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_ff)));
        }
    } else {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_rdata 
            = ((8U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr))
                ? 0U : ((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr))
                         ? ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr))
                             ? 0U : ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr))
                                      ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data1_ff
                                      : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data0_ff))
                         : 0U));
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_any 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_command) 
           | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_rpt_command) 
              | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_abstractauto) 
                 | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_data0) 
                    | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_data1) 
                       | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf0) 
                          | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf1) 
                             | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf2) 
                                | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf3) 
                                   | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf4) 
                                      | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf5)))))))))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_hartmem_vd 
        = ((2U == (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd 
                   >> 0x18U)) & (~ (IData)((0U != (0x8c2000U 
                                                   & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd)))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regno 
        = (0xfffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_csr_ro 
        = ((((((0x301U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regno)) 
               | (0xf11U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regno))) 
              | (0xf12U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regno))) 
             | (0xf13U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regno))) 
            | (0xf14U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regno))) 
           | (0x7b1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regno)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_hartreg_vd 
        = ((0U == (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd 
                   >> 0x18U)) & (~ (IData)((0U != (0x880000U 
                                                   & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd)))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_mem_access_vd 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_hartmem_vd) 
           & (3U > (7U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd 
                          >> 0x14U))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_execprogbuf_req 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_hartreg_vd) 
           & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd 
              >> 0x12U));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_reg_access_req 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_hartreg_vd) 
           & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd 
              >> 0x11U));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_mprf_access_vd 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_reg_access_req) 
           & (0x201000U == (0x70ffe0U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h96aa3c32__0 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_reg_access_req) 
           & (0x200000U == (0x70f000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd)));
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vscr1_top_tb_ahb.h for the primary calling header

#include "verilated.h"

#include "Vscr1_top_tb_ahb__Syms.h"
#include "Vscr1_top_tb_ahb___024root.h"

VL_ATTR_COLD void Vscr1_top_tb_ahb___024root___stl_sequent__TOP__0(Vscr1_top_tb_ahb___024root* vlSelf);

VL_ATTR_COLD void Vscr1_top_tb_ahb___024root___eval_stl(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0x26U] = 1U;
        vlSelf->__Vm_traceActivity[0x25U] = 1U;
        vlSelf->__Vm_traceActivity[0x24U] = 1U;
        vlSelf->__Vm_traceActivity[0x23U] = 1U;
        vlSelf->__Vm_traceActivity[0x22U] = 1U;
        vlSelf->__Vm_traceActivity[0x21U] = 1U;
        vlSelf->__Vm_traceActivity[0x20U] = 1U;
        vlSelf->__Vm_traceActivity[0x1fU] = 1U;
        vlSelf->__Vm_traceActivity[0x1eU] = 1U;
        vlSelf->__Vm_traceActivity[0x1dU] = 1U;
        vlSelf->__Vm_traceActivity[0x1cU] = 1U;
        vlSelf->__Vm_traceActivity[0x1bU] = 1U;
        vlSelf->__Vm_traceActivity[0x1aU] = 1U;
        vlSelf->__Vm_traceActivity[0x19U] = 1U;
        vlSelf->__Vm_traceActivity[0x18U] = 1U;
        vlSelf->__Vm_traceActivity[0x17U] = 1U;
        vlSelf->__Vm_traceActivity[0x16U] = 1U;
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vscr1_top_tb_ahb___024root___dump_triggers__act(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk or negedge scr1_top_tb_ahb.i_top.i_cpu_rstn_reset_sync.local_rst_n_in)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge clk or negedge scr1_top_tb_ahb.i_top.i_core_top.i_scu.i_core_rstn_qlfy_adapter_cell_sync.i_reset_output_buf.rst_n_mux)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge clk or negedge scr1_top_tb_ahb.i_top.i_core_top.i_scu.i_core_rstn_qlfy_adapter_cell_sync.i_reset_output_buf.reset_n_ff)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge clk or negedge scr1_top_tb_ahb.i_top.i_core_top.i_scu.i_hdu_rstn_qlfy_adapter_cell_sync.i_reset_output_buf.reset_n_ff)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(posedge scr1_top_tb_ahb.i_top.i_core_top.i_scu.i_core_rstn_qlfy_adapter_cell_sync.i_reset_output_buf.reset_n_ff)\n");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(negedge scr1_top_tb_ahb.i_top.tapc_trst_n or negedge scr1_top_tb_ahb.tck)\n");
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @(negedge scr1_top_tb_ahb.i_top.tapc_trst_n or posedge scr1_top_tb_ahb.tck)\n");
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @(posedge clk or negedge scr1_top_tb_ahb.i_top.i_core_top.i_scu.i_dm_rstn_buf_cell.reset_n_status_ff)\n");
    }
    if ((0x200ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @(negedge scr1_top_tb_ahb.i_top.i_core_top.i_scu.i_core_rstn_qlfy_adapter_cell_sync.i_reset_output_buf.reset_n_ff or posedge scr1_top_tb_ahb.rtc_clk)\n");
    }
    if ((0x400ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @(posedge clk or negedge scr1_top_tb_ahb.i_top.i_core_top.i_scu.i_core_rstn_qlfy_adapter_cell_sync.i_reset_output_buf.rst_n_mux or negedge scr1_top_tb_ahb.i_top.tapc_trst_n or negedge scr1_top_tb_ahb.tck)\n");
    }
    if ((0x800ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @(posedge clk or negedge scr1_top_tb_ahb.i_top.i_core_top.i_scu.i_core_rstn_qlfy_adapter_cell_sync.i_reset_output_buf.reset_n_ff or posedge scr1_top_tb_ahb.rtc_clk)\n");
    }
    if ((0x1000ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vscr1_top_tb_ahb___024root___dump_triggers__nba(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk or negedge scr1_top_tb_ahb.i_top.i_cpu_rstn_reset_sync.local_rst_n_in)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge clk or negedge scr1_top_tb_ahb.i_top.i_core_top.i_scu.i_core_rstn_qlfy_adapter_cell_sync.i_reset_output_buf.rst_n_mux)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge clk or negedge scr1_top_tb_ahb.i_top.i_core_top.i_scu.i_core_rstn_qlfy_adapter_cell_sync.i_reset_output_buf.reset_n_ff)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge clk or negedge scr1_top_tb_ahb.i_top.i_core_top.i_scu.i_hdu_rstn_qlfy_adapter_cell_sync.i_reset_output_buf.reset_n_ff)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(posedge scr1_top_tb_ahb.i_top.i_core_top.i_scu.i_core_rstn_qlfy_adapter_cell_sync.i_reset_output_buf.reset_n_ff)\n");
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(negedge scr1_top_tb_ahb.i_top.tapc_trst_n or negedge scr1_top_tb_ahb.tck)\n");
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @(negedge scr1_top_tb_ahb.i_top.tapc_trst_n or posedge scr1_top_tb_ahb.tck)\n");
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @(posedge clk or negedge scr1_top_tb_ahb.i_top.i_core_top.i_scu.i_dm_rstn_buf_cell.reset_n_status_ff)\n");
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @(negedge scr1_top_tb_ahb.i_top.i_core_top.i_scu.i_core_rstn_qlfy_adapter_cell_sync.i_reset_output_buf.reset_n_ff or posedge scr1_top_tb_ahb.rtc_clk)\n");
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @(posedge clk or negedge scr1_top_tb_ahb.i_top.i_core_top.i_scu.i_core_rstn_qlfy_adapter_cell_sync.i_reset_output_buf.rst_n_mux or negedge scr1_top_tb_ahb.i_top.tapc_trst_n or negedge scr1_top_tb_ahb.tck)\n");
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @(posedge clk or negedge scr1_top_tb_ahb.i_top.i_core_top.i_scu.i_core_rstn_qlfy_adapter_cell_sync.i_reset_output_buf.reset_n_ff or posedge scr1_top_tb_ahb.rtc_clk)\n");
    }
    if ((0x1000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vscr1_top_tb_ahb___024root___ctor_var_reset(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__rtc_clk = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__fuse_mhartid = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__imem_req_ack_stall = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__dmem_req_ack_stall = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__trst_n = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__tck = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__tms = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__tdi = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__imem_htrans = VL_RAND_RESET_I(2);
    vlSelf->scr1_top_tb_ahb__DOT__imem_hready = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__imem_hrdata = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__imem_hresp = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__dmem_htrans = VL_RAND_RESET_I(2);
    vlSelf->scr1_top_tb_ahb__DOT__dmem_hready = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__dmem_hrdata = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__dmem_hresp = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__watchdogs_cnt = 0;
    vlSelf->scr1_top_tb_ahb__DOT__f_results = 0;
    vlSelf->scr1_top_tb_ahb__DOT__f_info = 0;
    VL_RAND_RESET_W(256, vlSelf->scr1_top_tb_ahb__DOT__test_file);
    vlSelf->scr1_top_tb_ahb__DOT__test_running = 0;
    vlSelf->scr1_top_tb_ahb__DOT__tests_passed = 0;
    vlSelf->scr1_top_tb_ahb__DOT__tests_total = 0;
    vlSelf->scr1_top_tb_ahb__DOT__rst_cnt = 0;
    vlSelf->scr1_top_tb_ahb__DOT__rst_init = 0;
    vlSelf->scr1_top_tb_ahb__DOT__identify_test__Vstatic__res = 0;
    VL_RAND_RESET_W(80, vlSelf->scr1_top_tb_ahb__DOT__identify_test__Vstatic__pattern_compliance);
    vlSelf->scr1_top_tb_ahb__DOT__identify_test__Vstatic__pattern_arch = VL_RAND_RESET_I(23);
    VL_RAND_RESET_W(256, vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__res);
    vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__i = 0;
    vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__j = 0;
    VL_RAND_RESET_W(256, vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__res);
    vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i = 0;
    vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__j = 0;
    VL_RAND_RESET_W(80, vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__pattern_compliance);
    vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__pattern_arch = VL_RAND_RESET_I(23);
    vlSelf->scr1_top_tb_ahb__DOT__remove_trailing_whitespaces__Vstatic__i = 0;
    vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__test_pass = 0;
    vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__test_error = 0;
    vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__f_test = 0;
    VL_RAND_RESET_W(256, vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__full_filename);
    vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmpv = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__start = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__stop = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__ref_data = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__test_data = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__start_addr = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__trap_addr = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__fd = 0;
    vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__code = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(2048, vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmpstr);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tapc_trst_n = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_addr = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_dmem_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_dmem_width = VL_RAND_RESET_I(2);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_imem_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_rdata = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_imem_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_imem_rdata = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_imem_resp = VL_RAND_RESET_I(2);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_resp = VL_RAND_RESET_I(2);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_rdata = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_resp = VL_RAND_RESET_I(2);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__timer_irq = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_pwrup_rstn_reset_sync__DOT__rst_n_dff = VL_RAND_RESET_I(2);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_rstn_reset_sync__DOT__rst_n_dff = VL_RAND_RESET_I(2);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_cpu_rstn_reset_sync__DOT__rst_n_dff = VL_RAND_RESET_I(2);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_cpu_rstn_reset_sync__DOT__local_rst_n_in = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__core_rst_n_status_sync = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__rst_n_sync = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__cpu_rst_n_sync = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_sel = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_id = VL_RAND_RESET_I(2);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_capture = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_shift = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_update = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_tdi = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_sel_tapout = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr = VL_RAND_RESET_I(7);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wdata = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_rdata = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_scu_ch_sel = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_scu_ch_sel_tapout = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_cmd_resp = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_hart_status = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_pbuf_addr_qlfy = VL_RAND_RESET_I(3);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_pbuf_instr = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_dr_cap_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_dr_shft_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_dr_upd_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_ff = VL_RAND_RESET_I(8);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_next = VL_RAND_RESET_I(8);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shadow_ff = VL_RAND_RESET_I(8);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_csr_wdata = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_csr_rdata = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_control_ff = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_control_wr_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_mode_ff = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_mode_wr_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_status_ff = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_status_ff_dly = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_status_ff_posedge = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_sticky_sts_ff = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_sticky_sts_wr_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__sys_rst_n_in = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__core_rst_n_in_sync = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__dm_rst_n_in = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_status_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_status_sync__DOT__data_dff = VL_RAND_RESET_I(2);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_status_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__rst_n_mux = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_status_sync__DOT__data_dff = VL_RAND_RESET_I(2);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_status_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_status_sync__DOT__data_dff = VL_RAND_RESET_I(2);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_dm_rstn_buf_cell__DOT__reset_n_status_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__stop_fetch = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__instret = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__brkpt_hw = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_vd = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_imem_err = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_err_rvi_hi = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2ifu_rdy = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(75, vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs1 = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs2 = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rd = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_imm = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__mprf2exu_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__mprf2exu_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2mprf_w_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2mprf_rd_data = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_w_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_w_data = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_rw_exc = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_take_irq = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_take_exc = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_mret_instr = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_ip_ie = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_mstatus_mie_up = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_r_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_w_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_addr = VL_RAND_RESET_I(3);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_wdata = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ipic2csr_rdata = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2tdu_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2tdu_req_qlfy = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2exu_i_x_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_bp_retire = VL_RAND_RESET_I(5);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_bp_retire_qlfy = VL_RAND_RESET_I(5);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2hdu_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2hdu_dmode_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_no_commit = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__dbg_halted = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__dbg_halt2run = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__hdu2ifu_pbuf_vd = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__hdu2ifu_pbuf_instr = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_init_pc_qlfy = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_exc_req_qlfy = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__brkpt_qlfy = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_busy = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__pipe2clkctl_wake_req_o = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__new_pc_unaligned_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__new_pc_unaligned_next = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__instr_type = VL_RAND_RESET_I(3);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__instr_hi_rvi_lo_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rd_size = VL_RAND_RESET_I(2);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rd_hword = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wr_size = VL_RAND_RESET_I(2);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr = VL_RAND_RESET_I(3);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr_next = VL_RAND_RESET_I(3);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr = VL_RAND_RESET_I(3);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr_next = VL_RAND_RESET_I(3);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wr_en = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_flush_req = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data_head = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err_head = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_is_empty = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_ocpd_h = VL_RAND_RESET_I(3);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__ifu_fsm_curr = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__ifu_fsm_next = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_er_discard_pnd = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_received = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_vd = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_handshake_done = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_addr_ff = VL_RAND_RESET_I(30);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_addr_next = VL_RAND_RESET_I(30);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_pnd_txns_cnt = VL_RAND_RESET_I(3);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_pnd_txns_cnt_next = VL_RAND_RESET_I(3);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_discard_cnt_upd = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_discard_cnt = VL_RAND_RESET_I(3);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_discard_cnt_next = VL_RAND_RESET_I(3);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT____VdfgTmp_h4af6ecf2__0 = 0;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvi_illegal = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvc_illegal = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(75, vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_barrier = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__dbg_run_start_npbuf = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_en = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__idu2exu_use_rs1_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__idu2exu_use_rs2_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_rdy = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_vd = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op1 = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op2 = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_res = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_addr_op1 = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_addr_op2 = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_cmp = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_exc_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_exc_req_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_code = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_run_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_halt_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_run_start_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_halted_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__init_pc_v = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__init_pc = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__inc_pc = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__jb_taken = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_ff = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_next = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__lsu_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__lsu_rdy = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__lsu_exc_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_rdy = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__mprf_rs1_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__mprf_rs2_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__csr_access_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__csr_access_next = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT____VdfgTmp_h76e0b655__0 = 0;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_res = VL_RAND_RESET_Q(33);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_flags = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_pos_ovflw = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_neg_ovflw = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_ops_diff_sgn = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__shft_op1 = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__shft_op2 = VL_RAND_RESET_I(5);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__shft_cmd = VL_RAND_RESET_I(2);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__shft_res = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_cmd_is_iter = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_iter_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_corr_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_ff = VL_RAND_RESET_I(2);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_next = VL_RAND_RESET_I(2);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_cmd_mul = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mul_cmd = VL_RAND_RESET_I(2);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_cmd_rem = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_op1_is_neg = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_res_rem_c = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_res_rem = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_res_quo = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_quo_bit = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_dvdnd_lo_upd = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_dvdnd_lo_ff = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_dvdnd_lo_next = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_sum_sub = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_sum_op1 = VL_RAND_RESET_Q(33);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_sum_op2 = VL_RAND_RESET_Q(33);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_sum_res = VL_RAND_RESET_Q(33);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_iter_cnt = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_iter_cnt_next = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_c_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_c_next = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_hi_ff = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_hi_next = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_lo_ff = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_lo_next = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__unnamedblk1__DOT__sgn = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__unnamedblk1__DOT__inv = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgExtracted_h8768cdc8__0 = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgTmp_hf046458b__0 = 0;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgTmp_h8ffc7cb8__0 = 0;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgTmp_h202d6225__0 = 0;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_fsm_curr = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_fsm_next = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__dmem_wdth_hword = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__dmem_req_vd = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_exc_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__dmem_addr_mslgn = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__dmem_addr_mslgn_l = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__dmem_addr_mslgn_s = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_exc_hwbrk = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT____VdfgTmp_hbf509d11__0 = 0;
    VL_RAND_RESET_W(992, vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT____Vlvbound_h6615f063__0 = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_upd = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_mie_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_mie_next = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_mpie_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_mpie_next = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_upd = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_mtie_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_meie_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_msie_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtvec_upd = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtvec_base = VL_RAND_RESET_I(26);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtvec_mode_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mscratch_upd = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mscratch_ff = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mepc_upd = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mepc_ff = VL_RAND_RESET_I(31);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mepc_next = VL_RAND_RESET_I(31);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_upd = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_i_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_i_next = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_ec_ff = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_ec_next = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtval_upd = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtval_ff = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtval_next = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mip = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mip_meip = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_upd = VL_RAND_RESET_I(2);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_lo_inc = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_lo_ff = VL_RAND_RESET_I(8);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_lo_next = VL_RAND_RESET_I(8);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_hi_inc = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_hi_ff = VL_RAND_RESET_Q(56);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_hi_next = VL_RAND_RESET_Q(56);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_upd = VL_RAND_RESET_I(2);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_lo_ff = VL_RAND_RESET_I(8);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_lo_next = VL_RAND_RESET_I(8);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_hi_inc = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_hi_ff = VL_RAND_RESET_Q(56);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_hi_next = VL_RAND_RESET_Q(56);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten_upd = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten_cy_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten_ir_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_data = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_data = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_exc = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_irq = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_mret = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_eirq_pnd_en = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_sirq_pnd_en = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_tirq_pnd_en = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__exu_req_no_exc = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_hdu_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_brkm_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT____VdfgExtracted_h5cf9f284__0 = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT____VdfgExtracted_h9d6c5aa2__0 = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lines = VL_RAND_RESET_I(16);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lines_sync = VL_RAND_RESET_I(16);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lines_dly = VL_RAND_RESET_I(16);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_edge_detected = VL_RAND_RESET_I(16);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lvl = VL_RAND_RESET_I(16);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_cisv_upd = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_cisv_ff = VL_RAND_RESET_I(5);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__cicsr_wr_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__eoi_wr_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_eoi_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__soi_wr_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__idxr_wr_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_idxr_ff = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_upd = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_ff = VL_RAND_RESET_I(16);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_next = VL_RAND_RESET_I(16);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_clr_req = VL_RAND_RESET_I(16);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_clr = VL_RAND_RESET_I(16);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_isvr_ff = VL_RAND_RESET_I(16);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_isvr_next = VL_RAND_RESET_I(16);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ier_ff = VL_RAND_RESET_I(16);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ier_next = VL_RAND_RESET_I(16);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_imr_ff = VL_RAND_RESET_I(16);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_imr_next = VL_RAND_RESET_I(16);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_iinvr_ff = VL_RAND_RESET_I(16);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_iinvr_next = VL_RAND_RESET_I(16);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__icsr_wr_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_icsr = VL_RAND_RESET_I(9);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_start_vd = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irr_priority.__PVT__vd = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irr_priority.__PVT__idx = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__isvr_priority_eoi.__PVT__vd = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__isvr_priority_eoi.__PVT__idx = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_isvr_eoi = VL_RAND_RESET_I(16);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT____VdfgExtracted_h169dacea__0 = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT____VdfgExtracted_h1692cb19__0 = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_tselect = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_mcontrol = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_tdata2 = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_icount = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tselect_ff = VL_RAND_RESET_I(3);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_clk_en = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_upd = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_ff = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_next = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_ff = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_next = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_ff = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_next = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_ff = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_next = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_ff = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_next = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_ff = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_next = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_ff = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_next = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_hit = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_ldst_hit = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_wr_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_clk_en = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_upd = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_dmode_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_dmode_next = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_m_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_m_next = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_action_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_action_next = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_hit_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_hit_next = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_count_ff = VL_RAND_RESET_I(14);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_count_next = VL_RAND_RESET_I(14);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_skip_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_skip_next = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_hit = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tdata2_upd = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(128, vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tdata2_ff);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h7a8625da__0 = 0;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h215ccd09__0 = 0;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h2158131e__0 = 0;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h2097eaa3__0 = 0;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0 = 0;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h7ae9174f__0 = 0;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h7aa9440c__0 = 0;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h7b5535f1__0 = 0;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h1024b93b__0 = 0;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_haa489fa9__0 = 0;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h136f2fbe__0 = 0;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h8108b176__0 = 0;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h803908b6__0 = 0;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h4ea400bb__0 = 0;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h6472391d__0 = 0;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dm_dhalt_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state = VL_RAND_RESET_I(2);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state_next = VL_RAND_RESET_I(2);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_trans = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_trans_next = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_update = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_update_next = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_event = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_event_next = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_halt_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_cmd_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl = VL_RAND_RESET_I(6);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__halt_req_timeout_cnt = VL_RAND_RESET_I(6);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__halt_req_timeout_cnt_next = VL_RAND_RESET_I(6);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_haltstatus = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_halt_pnd = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_halt_ack = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_sstep = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_except = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_ebreak = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_tmreq = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__ifu_handshake_done = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_fsm_curr = VL_RAND_RESET_I(2);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_fsm_next = VL_RAND_RESET_I(2);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_addr_ff = VL_RAND_RESET_I(3);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_addr_next = VL_RAND_RESET_I(3);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_instr_wait_latching = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_upd_on_halt = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_rd_data = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_sel = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_wr = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_ebreakm = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_stepie = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_step = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_cause = VL_RAND_RESET_I(3);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_sel = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_ff = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_next = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dscratch0_sel = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dscratch0_wr = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT____VdfgTmp_h9a92a6aa__0 = 0;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT____VdfgTmp_he3db9a6d__0 = 0;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_00_ZERO = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_01_RA = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_02_SP = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_03_GP = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_04_TP = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_05_T0 = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_06_T1 = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_07_T2 = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_08_S0 = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_09_S1 = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_10_A0 = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_11_A1 = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_12_A2 = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_13_A3 = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_14_A4 = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_15_A5 = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_16_A6 = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_17_A7 = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_18_S2 = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_19_S3 = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_20_S4 = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_21_S5 = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_22_S6 = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_23_S7 = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_24_S8 = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_25_S9 = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_26_S10 = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_27_S11 = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_28_T3 = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_29_T4 = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_30_T5 = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias.__PVT__INT_31_T6 = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__current_time = VL_RAND_RESET_Q(64);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_update = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_update_r = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__event_type = 0;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_pc = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_npc = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_instr = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(224, vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core = 0;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_up = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr = VL_RAND_RESET_I(5);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_wdata = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__time_cnt = 0;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__trst_n_int = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_ff = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_next = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_ir_shift_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_dr_capture_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_dr_shift_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_dr_update_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_shift_ff = VL_RAND_RESET_I(5);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_shift_next = VL_RAND_RESET_I(5);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_ff = VL_RAND_RESET_I(5);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_next = VL_RAND_RESET_I(5);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__dr_bypass_sel = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__dr_idcode_sel = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__dr_bld_id_sel = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__dr_out = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tdo_en_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tdo_out_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_bypass_reg__DOT__shift_reg = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_idcode_reg__DOT__shift_reg = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_dr_bld_id_reg__DOT__shift_reg = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divpos = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_rise_load = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_rise_reset = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divpos_sync = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg_sync = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_capture_sync = VL_RAND_RESET_I(3);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_shift_sync = VL_RAND_RESET_I(3);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_tdi_sync = VL_RAND_RESET_I(3);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_ff = VL_RAND_RESET_Q(41);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_rdata = VL_RAND_RESET_Q(41);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_next = VL_RAND_RESET_Q(41);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__dm_rdata_ff = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tapc_dmi_access_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_abstractcs = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_abstractauto = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_command = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_rpt_command = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_data0 = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_data1 = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf0 = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf1 = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf2 = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf3 = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf4 = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf5 = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_any = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_wr_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dreg_wr_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__command_wr_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__clk_en_dm = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__clk_en_dm_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_haltreq_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_haltreq_next = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_resumereq_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_resumereq_next = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ackhavereset_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ackhavereset_next = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ndmreset_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ndmreset_next = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_next = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__havereset_skip_pwrup_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__havereset_skip_pwrup_next = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_havereset_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_havereset_next = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_resumeack_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_resumeack_next = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_halted_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_halted_next = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_csr_ro = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_wr_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_wr_next = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_postexec_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_postexec_next = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regno = VL_RAND_RESET_I(12);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regno_ff = VL_RAND_RESET_I(12);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_size_ff = VL_RAND_RESET_I(2);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_size_next = VL_RAND_RESET_I(2);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_hartreg_vd = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_hartmem_vd = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_reg_access_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_execprogbuf_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_csr_ro_access_vd = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_csr_rw_access_vd = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_mprf_access_vd = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_mem_access_vd = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_next = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__clk_en_abs = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abstractcs_ro_en = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_command_ff = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_command_next = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_autoexec_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_autoexec_next = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf0_ff = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf1_ff = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf2_ff = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf3_ff = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf4_ff = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf5_ff = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data0_ff = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data0_next = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data1_ff = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data1_next = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_err_exc_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_err_acc_busy_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abstractcs_cmderr_ff = VL_RAND_RESET_I(3);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abstractcs_cmderr_next = VL_RAND_RESET_I(3);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_req_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rd = VL_RAND_RESET_I(5);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rs1 = VL_RAND_RESET_I(5);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_mem_funct3 = VL_RAND_RESET_I(3);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_instr_next = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_instr_ff = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_next = VL_RAND_RESET_I(3);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff = VL_RAND_RESET_I(3);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__cmd_resp_ok = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_resp = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_resp_exc = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_pbuf_ebreak_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_req_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_ff = VL_RAND_RESET_I(2);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_next = VL_RAND_RESET_I(2);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgExtracted_h13f957e8__0 = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0 = 0;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h96aa3c32__0 = 0;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h65cca704__0 = 0;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__imem_req_en = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_req_en = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_rd = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_wr = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_writedata = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_rdata_local = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_byteen = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_rdata_shift_reg = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__ram_block[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtime_reg = VL_RAND_RESET_Q(64);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtime_new = VL_RAND_RESET_Q(64);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmp_reg = VL_RAND_RESET_Q(64);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmp_new = VL_RAND_RESET_Q(64);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timer_en = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timer_clksrc_rtc = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timer_div = VL_RAND_RESET_I(10);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__control_up = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__divider_up = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimelo_up = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimehi_up = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmplo_up = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmphi_up = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__dmem_req_valid = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__rtc_sync = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timeclk_cnt = VL_RAND_RESET_I(10);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timeclk_cnt_en = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__time_posedge = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__time_cmp_flag = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__fsm = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__port_sel_r = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_rdata = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_resp = VL_RAND_RESET_I(2);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_req_ack = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__fsm = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__port_sel = VL_RAND_RESET_I(2);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__port_sel_r = VL_RAND_RESET_I(2);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_rdata = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_resp = VL_RAND_RESET_I(2);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_req_ack = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__fsm = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_rd = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_r = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_full = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT____VdfgExtracted_h136b417e__3 = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__fsm = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_rd = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(68, vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_new);
    VL_RAND_RESET_W(68, vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_r);
    VL_RAND_RESET_W(68, vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_full = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__data_fifo = VL_RAND_RESET_Q(37);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__resp_fifo = VL_RAND_RESET_Q(38);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT____VdfgExtracted_h136b417e__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1048576; ++__Vi0) {
        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__irq_lines_reg = VL_RAND_RESET_I(16);
    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__soft_irq_reg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1048576; ++__Vi0) {
        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage_en = 0;
    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage_rangeen = 0;
    VL_RAND_RESET_W(256, vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__test_file);
    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__test_file_init = 0;
    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__addr_mirage = VL_RAND_RESET_I(20);
    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__Vstatic__addr_mirage = VL_RAND_RESET_I(20);
    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_be_form__Vstatic__tmp = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_ahb_state = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_ahb_addr = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_req_ack_stall = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_req_ack_rnd = 0;
    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_req_ack = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_req_ack_nc = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_be = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_hrdata_l = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_wr_hazard = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack_stall = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack_rnd = 0;
    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack_nc = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_be = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_state = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_addr = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_wr = VL_RAND_RESET_I(1);
    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_size = VL_RAND_RESET_I(3);
    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_be = VL_RAND_RESET_I(4);
    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_hrdata_l = VL_RAND_RESET_I(32);
    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_wr_hazard = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage1_vd = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage2_vd = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage3_vd = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage1_idx[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage2_idx[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__stage3_idx[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__result.__PVT__vd = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__7__unnamedblk1__DOT__result.__PVT__idx = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__tmp.__PVT__vd = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__8__tmp.__PVT__idx = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__9__tmp.__PVT__vd = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__9__tmp.__PVT__idx = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__10__tmp.__PVT__vd = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__10__tmp.__PVT__idx = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage1_vd = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage2_vd = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage3_vd = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage1_idx[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage2_idx[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__stage3_idx[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__result.__PVT__vd = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_16__11__unnamedblk1__DOT__result.__PVT__idx = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__tmp.__PVT__vd = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__12__tmp.__PVT__idx = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__13__tmp.__PVT__vd = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__13__tmp.__PVT__idx = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__14__tmp.__PVT__vd = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__scr1_search_one_2__14__tmp.__PVT__idx = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_state = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v0 = 0;
    vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v0 = 0;
    vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v1 = 0;
    vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v1 = 0;
    vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v2 = 0;
    vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v2 = 0;
    vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v3 = 0;
    vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v3 = 0;
    vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v4 = 0;
    vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v4 = 0;
    vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v5 = 0;
    vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v5 = 0;
    vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v6 = 0;
    vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v6 = 0;
    vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage__v7 = 0;
    vlSelf->__Vdlyvset__scr1_top_tb_ahb__DOT__i_memory_tb__DOT__memory__v7 = 0;
    vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_capture_sync = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_shift_sync = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__time_cnt = 0;
    vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__rtc_sync = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__fsm = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divpos = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__scr1_top_tb_ahb__DOT__i_top__DOT__i_cpu_rstn_reset_sync__DOT__local_rst_n_in__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__rst_n_mux__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__scr1_top_tb_ahb__DOT__i_top__DOT__tapc_trst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__scr1_top_tb_ahb__DOT__tck__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_dm_rstn_buf_cell__DOT__reset_n_status_ff__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__scr1_top_tb_ahb__DOT__rtc_clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 39; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

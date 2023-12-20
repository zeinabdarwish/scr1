// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vscr1_top_tb_ahb.h for the primary calling header

#include "verilated.h"

#include "Vscr1_top_tb_ahb__Syms.h"
#include "Vscr1_top_tb_ahb__Syms.h"
#include "Vscr1_top_tb_ahb___024root.h"

VL_INLINE_OPT VlCoroutine Vscr1_top_tb_ahb___024root___eval_initial__TOP__1(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___eval_initial__TOP__1\n"); );
    // Init
    std::string scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__hart;
    // Body
    VL_TIMEFORMAT_IINI(0xfffffff7U, 0U, std::string{" ns"}, 0xaU, vlSymsp->_vm_contextp__);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "/home/scarletshroud/scr1/src/core/pipeline/scr1_tracelog.sv", 
                                       269);
    scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__hart 
        = VL_SFORMATF_NX("%0x",32,vlSelf->scr1_top_tb_ahb__DOT__fuse_mhartid) ;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core 
        = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       std::string{"tracelog_core_"}, scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__hart), 
                                                        std::string{".log"}))
                      , std::string{"w"});
    ;
    VL_FWRITEF(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core,"# RTL_ID 22011200\n#\n# Events:\n#    N - no event\n#    E - exception\n#    I - interrupt\n#    W - wakeup\n");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vscr1_top_tb_ahb___024root___dump_triggers__act(Vscr1_top_tb_ahb___024root* vlSelf);
#endif  // VL_DEBUG

void Vscr1_top_tb_ahb___024root___eval_triggers__act(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_cpu_rstn_reset_sync__DOT__local_rst_n_in)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__scr1_top_tb_ahb__DOT__i_top__DOT__i_cpu_rstn_reset_sync__DOT__local_rst_n_in__0))));
    vlSelf->__VactTriggered.set(2U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__rst_n_mux)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__rst_n_mux__0))));
    vlSelf->__VactTriggered.set(3U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff__0))));
    vlSelf->__VactTriggered.set(4U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff__0))));
    vlSelf->__VactTriggered.set(5U, ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff__0))));
    vlSelf->__VactTriggered.set(6U, (((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tapc_trst_n)) 
                                      & (IData)(vlSelf->__Vtrigprevexpr___TOP__scr1_top_tb_ahb__DOT__i_top__DOT__tapc_trst_n__0)) 
                                     | ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__tck)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__scr1_top_tb_ahb__DOT__tck__0))));
    vlSelf->__VactTriggered.set(7U, (((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tapc_trst_n)) 
                                      & (IData)(vlSelf->__Vtrigprevexpr___TOP__scr1_top_tb_ahb__DOT__i_top__DOT__tapc_trst_n__0)) 
                                     | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__tck) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__scr1_top_tb_ahb__DOT__tck__0)))));
    vlSelf->__VactTriggered.set(8U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_dm_rstn_buf_cell__DOT__reset_n_status_ff)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_dm_rstn_buf_cell__DOT__reset_n_status_ff__0))));
    vlSelf->__VactTriggered.set(9U, (((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff)) 
                                      & (IData)(vlSelf->__Vtrigprevexpr___TOP__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff__0)) 
                                     | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__rtc_clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__scr1_top_tb_ahb__DOT__rtc_clk__0)))));
    vlSelf->__VactTriggered.set(0xaU, (((((IData)(vlSelf->clk) 
                                          & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                         | ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__rst_n_mux)) 
                                            & (IData)(vlSelf->__Vtrigprevexpr___TOP__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__rst_n_mux__0))) 
                                        | ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tapc_trst_n)) 
                                           & (IData)(vlSelf->__Vtrigprevexpr___TOP__scr1_top_tb_ahb__DOT__i_top__DOT__tapc_trst_n__0))) 
                                       | ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__tck)) 
                                          & (IData)(vlSelf->__Vtrigprevexpr___TOP__scr1_top_tb_ahb__DOT__tck__0))));
    vlSelf->__VactTriggered.set(0xbU, ((((IData)(vlSelf->clk) 
                                         & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                        | ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff)) 
                                           & (IData)(vlSelf->__Vtrigprevexpr___TOP__scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff__0))) 
                                       | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__rtc_clk) 
                                          & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__scr1_top_tb_ahb__DOT__rtc_clk__0)))));
    vlSelf->__VactTriggered.set(0xcU, vlSelf->__VdlySched.awaitingCurrentTime());
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
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vscr1_top_tb_ahb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

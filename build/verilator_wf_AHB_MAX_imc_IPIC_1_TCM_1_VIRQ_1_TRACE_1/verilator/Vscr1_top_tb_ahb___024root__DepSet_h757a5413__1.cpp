// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vscr1_top_tb_ahb.h for the primary calling header

#include "verilated.h"

#include "Vscr1_top_tb_ahb__Syms.h"
#include "Vscr1_top_tb_ahb___024root.h"

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__24(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_sequent__TOP__24\n"); );
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_dm_rstn_buf_cell__DOT__reset_n_status_ff 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__rst_n_mux) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__dm_rst_n_in));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__rst_n_mux) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__dm_rst_n_in 
        = (1U & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_mode_ff)) 
                 | (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_control_ff))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_status_ff 
        = ((8U & ((~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_status_sync__DOT__data_dff) 
                      >> 1U)) << 3U)) | ((4U & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_dm_rstn_buf_cell__DOT__reset_n_status_ff)) 
                                                << 2U)) 
                                         | ((2U & (
                                                   (~ 
                                                    ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_status_sync__DOT__data_dff) 
                                                     >> 1U)) 
                                                   << 1U)) 
                                            | (1U & 
                                               (~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_status_sync__DOT__data_dff) 
                                                   >> 1U))))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__rst_n_mux) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__core_rst_n_in_sync));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_status_ff_posedge 
        = ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_status_ff_dly)) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_status_ff));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_csr_rdata = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_csr_wdata = 0U;
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_dr_upd_req) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_csr_rdata 
            = ((8U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_ff))
                ? ((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_ff))
                    ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_sticky_sts_ff)
                    : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_status_ff))
                : ((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_ff))
                    ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_mode_ff)
                    : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_control_ff)));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_csr_wdata 
            = (0xfU & ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_ff))
                        ? ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_ff))
                            ? ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_csr_rdata) 
                               & (~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_ff) 
                                     >> 4U))) : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_csr_rdata) 
                                                 | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_ff) 
                                                    >> 4U)))
                        : ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_ff))
                            ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_csr_rdata)
                            : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_ff) 
                               >> 4U))));
    }
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_comb__TOP__10(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_comb__TOP__10\n"); );
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_next 
        = (1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_wr_req)
                  ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wdata
                  : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_ff)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ndmreset_next 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ndmreset_ff;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ackhavereset_next 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ackhavereset_ff;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_haltreq_next 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_haltreq_ff;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_resumereq_next 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_resumereq_ff;
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_ff) {
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_wr_req) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ndmreset_next 
                = (1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wdata 
                         >> 1U));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ackhavereset_next 
                = (1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wdata 
                         >> 0x1cU));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_haltreq_next 
                = (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wdata 
                   >> 0x1fU);
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_resumereq_next 
                = (1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wdata 
                         >> 0x1eU));
        }
    } else {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ndmreset_next = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ackhavereset_next = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_haltreq_next = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_resumereq_next = 0U;
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__clk_en_dm 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_wr_req) 
           | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__clk_en_dm_ff) 
              | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_ff)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__clk_en_abs 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__clk_en_dm) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_ff));
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__25(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_sequent__TOP__25\n"); );
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_ff 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tapc_trst_n)
            ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_next)
            : 0U);
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_comb__TOP__11(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_comb__TOP__11\n"); );
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_pbuf_instr = 0x100073U;
    if (((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
         & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_pbuf_ebreak_ff)))) {
        if ((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_pbuf_addr_qlfy))) {
            if ((1U & (~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_pbuf_addr_qlfy) 
                          >> 1U)))) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_pbuf_instr 
                    = ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_pbuf_addr_qlfy))
                        ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf5_ff
                        : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf4_ff);
            }
        } else {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_pbuf_instr 
                = ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_pbuf_addr_qlfy))
                    ? ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_pbuf_addr_qlfy))
                        ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf3_ff
                        : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf2_ff)
                    : ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_pbuf_addr_qlfy))
                        ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf1_ff
                        : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf0_ff));
        }
    } else if ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_pbuf_addr_qlfy))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_pbuf_instr 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_instr_ff;
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgExtracted_h13f957e8__0 
        = ((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
           & (0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0)));
}

extern const VlUnpacked<CData/*0:0*/, 64> Vscr1_top_tb_ahb__ConstPool__TABLE_h916024b3_0;

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_comb__TOP__12(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_comb__TOP__12\n"); );
    // Init
    CData/*5:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_halted_next 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_ff) 
           & ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0)) 
              | ((1U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0)) 
                 & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_halted_ff))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__havereset_skip_pwrup_next 
        = (1U & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_ff)) 
                 | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__havereset_skip_pwrup_ff)
                     ? ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0)) 
                        & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ndmreset_ff)))
                     : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__havereset_skip_pwrup_ff))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_resumeack_next 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_ff) 
           & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_resumereq_ff) 
              & ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0)) 
                 | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_resumeack_ff))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_havereset_next 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_ff) 
           & (((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__havereset_skip_pwrup_ff)) 
               & (0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0))) 
              | ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ackhavereset_ff)) 
                 & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_havereset_ff))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_resp 
        = ((3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff)) 
           & (2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0)));
    __Vtableidx5 = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_req_ff) 
                     << 5U) | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_trans) 
                                << 4U) | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_update) 
                                           << 3U) | 
                                          (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state) 
                                            << 1U) 
                                           | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff)))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_cmd_req 
        = Vscr1_top_tb_ahb__ConstPool__TABLE_h916024b3_0
        [__Vtableidx5];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h65cca704__0 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_resp) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_resp_exc));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_halt_req 
        = ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_ff)) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_cmd_req));
}

extern const VlUnpacked<CData/*1:0*/, 64> Vscr1_top_tb_ahb__ConstPool__TABLE_h2c104bdc_0;

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_comb__TOP__13(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_comb__TOP__13\n"); );
    // Init
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__instr_type = 0U;
    if (((~ (IData)((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_discard_cnt)))) 
         & (1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_resp)))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__instr_type 
            = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__new_pc_unaligned_ff)
                ? ((3U == (3U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_rdata 
                                 >> 0x10U))) ? 7U : 6U)
                : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__instr_hi_rvi_lo_ff)
                    ? ((3U == (3U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_rdata 
                                     >> 0x10U))) ? 5U
                        : 4U) : ((0U == (((IData)((3U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_rdata 
                                                       >> 0x10U)))) 
                                          << 1U) | 
                                         (3U == (3U 
                                                 & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_rdata))))
                                  ? 2U : ((2U == (((IData)(
                                                           (3U 
                                                            == 
                                                            (3U 
                                                             & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_rdata 
                                                                >> 0x10U)))) 
                                                   << 1U) 
                                                  | (3U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_rdata))))
                                           ? 3U : 1U))));
    }
    __Vtableidx2 = (((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_resp)) 
                     << 5U) | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__instr_type) 
                                << 2U) | (((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_resp)) 
                                           << 1U) | 
                                          (1U & (~ (IData)(
                                                           (0U 
                                                            != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_discard_cnt))))))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wr_size 
        = Vscr1_top_tb_ahb__ConstPool__TABLE_h2c104bdc_0
        [__Vtableidx2];
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__26(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_sequent__TOP__26\n"); );
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__dmem_hready = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__dmem_hresp = 1U;
    if (vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_state) {
        if (vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_state) {
            if (vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack) {
                vlSelf->scr1_top_tb_ahb__DOT__dmem_hready = 1U;
                vlSelf->scr1_top_tb_ahb__DOT__dmem_hresp = 0U;
            }
        }
    } else if (vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack) {
        vlSelf->scr1_top_tb_ahb__DOT__dmem_hready = 1U;
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__rst_n_mux 
        = (1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_pwrup_rstn_reset_sync__DOT__rst_n_dff) 
                 >> 1U));
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_comb__TOP__14(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_comb__TOP__14\n"); );
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__mprf2exu_rs2_data 
        = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__mprf_rs2_req) 
            & (0U != (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                               >> 0xaU)))) ? ((0x3dfU 
                                               >= (0x3ffU 
                                                   & (((IData)(0x1fU) 
                                                       - 
                                                       ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__mprf_rs2_req)
                                                         ? 
                                                        (0x1fU 
                                                         & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                                            >> 0xaU))
                                                         : 0U)) 
                                                      << 5U)))
                                               ? ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & (((IData)(0x1fU) 
                                                         - 
                                                         ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__mprf_rs2_req)
                                                           ? 
                                                          (0x1fU 
                                                           & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                                              >> 0xaU))
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
                                                           ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__mprf_rs2_req)
                                                             ? 
                                                            (0x1fU 
                                                             & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                                                >> 0xaU))
                                                             : 0U)) 
                                                          << 5U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & (((IData)(0x1fU) 
                                                          - 
                                                          ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__mprf_rs2_req)
                                                            ? 
                                                           (0x1fU 
                                                            & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                                               >> 0xaU))
                                                            : 0U)) 
                                                         << 5U))))) 
                                                  | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[
                                                     (0x1fU 
                                                      & ((IData)(0x1fU) 
                                                         - 
                                                         ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__mprf_rs2_req)
                                                           ? 
                                                          (0x1fU 
                                                           & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                                              >> 0xaU))
                                                           : 0U)))] 
                                                     >> 
                                                     (0x1fU 
                                                      & (((IData)(0x1fU) 
                                                          - 
                                                          ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__mprf_rs2_req)
                                                            ? 
                                                           (0x1fU 
                                                            & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                                               >> 0xaU))
                                                            : 0U)) 
                                                         << 5U))))
                                               : 0U)
            : 0U);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_writedata 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__mprf2exu_rs2_data;
    if ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_dmem_width))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_writedata 
            = ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__mprf2exu_rs2_data 
                << 0x18U) | ((0xff0000U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__mprf2exu_rs2_data 
                                           << 0x10U)) 
                             | ((0xff00U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__mprf2exu_rs2_data 
                                            << 8U)) 
                                | (0xffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__mprf2exu_rs2_data))));
    } else if ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_dmem_width))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_writedata 
            = ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__mprf2exu_rs2_data 
                << 0x10U) | (0xffffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__mprf2exu_rs2_data));
    }
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_comb__TOP__15(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_comb__TOP__15\n"); );
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timeclk_cnt_en 
        = (((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timer_clksrc_rtc)) 
            | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__rtc_sync) 
                >> 3U) ^ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__rtc_sync) 
                          >> 2U))) & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timer_en));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__time_posedge 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timeclk_cnt_en) 
           & (0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timeclk_cnt)));
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_comb__TOP__16(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_comb__TOP__16\n"); );
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_csr_ro_access_vd 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h96aa3c32__0) 
           & (IData)((((0U == (0x50000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd)) 
                       & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_csr_ro)) 
                      & (1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0)))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_csr_rw_access_vd 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h96aa3c32__0) 
           & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_csr_ro_access_vd)) 
              | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd 
                 >> 0x10U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_postexec_next = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_wr_next = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_size_next 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_size_ff;
    if (((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__command_wr_req) 
           | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_rpt_command)) 
          & (2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0))) 
         & (0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)))) {
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_csr_rw_access_vd) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_postexec_next 
                = (1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd 
                         >> 0x12U));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_wr_next 
                = (1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd 
                         >> 0x10U));
        } else if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_mprf_access_vd) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_postexec_next 
                = (1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd 
                         >> 0x12U));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_wr_next 
                = (1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd 
                         >> 0x10U));
        } else if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_mem_access_vd) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_wr_next 
                = (1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd 
                         >> 0x10U));
        }
        if ((1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_csr_rw_access_vd)))) {
            if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_mprf_access_vd) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_size_next 
                    = (3U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd 
                             >> 0x14U));
            } else if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_mem_access_vd) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_size_next 
                    = (3U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd 
                             >> 0x14U));
            }
        }
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abstractcs_cmderr_next 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abstractcs_cmderr_ff;
    if ((8U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) {
        if ((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) {
            if ((1U & (~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)))) {
                    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_resp) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abstractcs_cmderr_next 
                            = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_err_exc_ff)
                                ? 3U : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_err_acc_busy_ff)
                                         ? 1U : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abstractcs_cmderr_ff)));
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff) 
                             >> 1U)))) {
            if ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) {
                if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_err_acc_busy_ff) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abstractcs_cmderr_next = 1U;
                }
            } else if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_resp) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abstractcs_cmderr_next 
                    = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_err_exc_ff)
                        ? 3U : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_err_acc_busy_ff)
                                 ? 1U : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abstractcs_cmderr_ff)));
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff) 
                         >> 2U)))) {
        if ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) {
            if ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) {
                if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_err_acc_busy_ff) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abstractcs_cmderr_next = 1U;
                }
            } else if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_resp) {
                if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_resp_exc) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abstractcs_cmderr_next = 3U;
                } else if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_err_acc_busy_ff) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abstractcs_cmderr_next = 1U;
                }
            }
        } else if ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) {
            if (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_abstractcs) 
                 & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr))) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abstractcs_cmderr_next 
                    = (1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abstractcs_cmderr_ff) 
                             & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wdata 
                                   >> 8U))));
            }
        } else if (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__command_wr_req) 
                    | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_rpt_command))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abstractcs_cmderr_next 
                = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_hartreg_vd)
                    ? ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_reg_access_req)
                        ? ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_csr_rw_access_vd)
                            ? ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0))
                                ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abstractcs_cmderr_ff)
                                : 4U) : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_mprf_access_vd)
                                          ? ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0))
                                              ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abstractcs_cmderr_ff)
                                              : 4U)
                                          : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_csr_ro_access_vd)
                                              ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abstractcs_cmderr_ff)
                                              : 2U)))
                        : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_execprogbuf_req)
                            ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abstractcs_cmderr_ff)
                            : 2U)) : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_hartmem_vd)
                                       ? ((3U > (7U 
                                                 & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd 
                                                    >> 0x14U)))
                                           ? ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0))
                                               ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abstractcs_cmderr_ff)
                                               : 4U)
                                           : 2U) : 2U));
        }
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_next 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff;
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgExtracted_h13f957e8__0) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abstractcs_cmderr_next = 3U;
    }
    if (((((((((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
               | (2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) 
              | (3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) 
             | (9U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) 
            | (0xaU == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) 
           | (0xbU == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) 
          | (0xcU == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) 
         | (4U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)))) {
        if ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) {
            if (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__command_wr_req) 
                 | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_rpt_command))) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_next 
                    = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_csr_ro_access_vd)
                        ? 9U : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_csr_rw_access_vd)
                                 ? ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0))
                                     ? 0xaU : 1U) : 
                                ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_mprf_access_vd)
                                  ? ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0))
                                      ? 3U : 1U) : 
                                 ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_execprogbuf_req)
                                   ? 2U : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_mem_access_vd)
                                            ? ((2U 
                                                == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0))
                                                ? 4U
                                                : 1U)
                                            : 1U)))));
            }
        } else if ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) {
            if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_resp) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_next 
                    = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_resp_exc) 
                        | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_err_acc_busy_ff))
                        ? 1U : 0U);
            }
        } else if ((3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) {
            if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_resp) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_next 
                    = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_err_acc_busy_ff)
                        ? 1U : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_postexec_ff)
                                 ? 2U : 0U));
            }
        } else if ((9U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_next 
                = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_err_acc_busy_ff)
                    ? 1U : 0U);
        } else if ((0xaU == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_next 
                = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_resp)
                    ? 0xbU : 0xaU);
        } else if ((0xbU == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_next 
                = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_resp)
                    ? 0xcU : 0xbU);
        } else if ((0xcU == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) {
            if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_resp) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_next 
                    = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_err_exc_ff)
                        ? 1U : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_err_acc_busy_ff)
                                 ? 1U : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_postexec_ff)
                                          ? 2U : 0U)));
            }
        } else {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_next 
                = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_resp)
                    ? 5U : 4U);
        }
    } else if ((5U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_next 
            = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_resp)
                ? 6U : 5U);
    } else if ((6U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_next 
            = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_resp)
                ? 7U : 6U);
    } else if ((7U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_next 
            = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_resp)
                ? 8U : 7U);
    } else if ((8U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) {
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_resp) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_next 
                = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_err_exc_ff)
                    ? 1U : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_err_acc_busy_ff)
                             ? 1U : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_postexec_ff)
                                      ? 2U : 0U)));
        }
    } else if ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) {
        if ((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr) 
              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_abstractcs)) 
             & (0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abstractcs_cmderr_next)))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_next = 0U;
        }
    }
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgExtracted_h13f957e8__0) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_next = 1U;
    }
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_comb__TOP__17(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_comb__TOP__17\n"); );
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__core_rst_n_in_sync 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__sys_rst_n_in) 
           & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ndmreset_ff)) 
              & ((~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_control_ff) 
                     >> 1U)) & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_cpu_rstn_reset_sync__DOT__rst_n_dff) 
                                >> 1U))));
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_comb__TOP__18(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_comb__TOP__18\n"); );
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__dbg_run_start_npbuf 
        = ((~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
               >> 4U)) & ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state)) 
                          & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_update) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff))));
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_comb__TOP__19(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_comb__TOP__19\n"); );
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__brkpt_qlfy 
        = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd_ff) 
            & (3U == (0xfU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U]))) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff));
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_comb__TOP__20(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_comb__TOP__20\n"); );
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_init_pc_qlfy 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__init_pc) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_haa489fa9__0 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd_ff) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff));
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_comb__TOP__21(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_comb__TOP__21\n"); );
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tapc_trst_n 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__trst_n) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_cpu_rstn_reset_sync__DOT__local_rst_n_in));
}

extern const VlUnpacked<CData/*3:0*/, 32> Vscr1_top_tb_ahb__ConstPool__TABLE_h8eaf41c0_0;

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_comb__TOP__22(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_comb__TOP__22\n"); );
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
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_comb__TOP__23(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_comb__TOP__23\n"); );
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_next 
        = ((0xfU == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_ff))
            ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_shift_ff)
            : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_ff));
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_comb__TOP__24(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_comb__TOP__24\n"); );
    // Init
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_ahb2mem_rdata__21__Vfuncout;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_ahb2mem_rdata__21__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_ahb2mem_rdata__21__hwidth;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_ahb2mem_rdata__21__hwidth = 0;
    CData/*1:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_ahb2mem_rdata__21__haddr;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_ahb2mem_rdata__21__haddr = 0;
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_ahb2mem_rdata__21__hrdata;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_ahb2mem_rdata__21__hrdata = 0;
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_ahb2mem_rdata__21__tmp;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_ahb2mem_rdata__21__tmp = 0;
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__resp_fifo 
        = (((QData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__dmem_hresp)) 
            << 0x25U) | (((QData)((IData)((0x1fU & (IData)(
                                                           (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__data_fifo 
                                                            >> 0x20U))))) 
                          << 0x20U) | (QData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__dmem_hrdata))));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_ahb2mem_rdata__21__hrdata 
        = (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__resp_fifo);
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_ahb2mem_rdata__21__haddr 
        = (3U & (IData)((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__resp_fifo 
                         >> 0x20U)));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_ahb2mem_rdata__21__hwidth 
        = (7U & (IData)((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__resp_fifo 
                         >> 0x22U)));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_ahb2mem_rdata__21__tmp = 0U;
    if ((0U == (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_ahb2mem_rdata__21__hwidth))) {
        __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_ahb2mem_rdata__21__tmp 
            = ((0xffffff00U & __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_ahb2mem_rdata__21__tmp) 
               | (0xffU & ((2U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_ahb2mem_rdata__21__haddr))
                            ? ((1U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_ahb2mem_rdata__21__haddr))
                                ? (__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_ahb2mem_rdata__21__hrdata 
                                   >> 0x18U) : (__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_ahb2mem_rdata__21__hrdata 
                                                >> 0x10U))
                            : ((1U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_ahb2mem_rdata__21__haddr))
                                ? (__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_ahb2mem_rdata__21__hrdata 
                                   >> 8U) : __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_ahb2mem_rdata__21__hrdata))));
    } else if ((1U == (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_ahb2mem_rdata__21__hwidth))) {
        if ((2U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_ahb2mem_rdata__21__haddr))) {
            if ((2U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_ahb2mem_rdata__21__haddr))) {
                __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_ahb2mem_rdata__21__tmp 
                    = ((0xffff0000U & __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_ahb2mem_rdata__21__tmp) 
                       | (__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_ahb2mem_rdata__21__hrdata 
                          >> 0x10U));
            }
        } else {
            __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_ahb2mem_rdata__21__tmp 
                = ((0xffff0000U & __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_ahb2mem_rdata__21__tmp) 
                   | (0xffffU & __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_ahb2mem_rdata__21__hrdata));
        }
    } else if ((2U == (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_ahb2mem_rdata__21__hwidth))) {
        __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_ahb2mem_rdata__21__tmp 
            = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_ahb2mem_rdata__21__hrdata;
    }
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_ahb2mem_rdata__21__Vfuncout 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_ahb2mem_rdata__21__tmp;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_rdata 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_ahb2mem_rdata__21__Vfuncout;
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_comb__TOP__25(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_comb__TOP__25\n"); );
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_resp 
        = ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__port_sel_r))
            ? (((IData)(vlSelf->scr1_top_tb_ahb__DOT__dmem_hready) 
                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__fsm))
                ? ((IData)(vlSelf->scr1_top_tb_ahb__DOT__dmem_hresp)
                    ? 2U : 1U) : 0U) : ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__port_sel_r))
                                         ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_resp)
                                         : ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__port_sel_r))
                                             ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_resp)
                                             : 2U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__lsu_rdy 
        = ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_resp)) 
           | (2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_resp)));
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_comb__TOP__26(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_comb__TOP__26\n"); );
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_ebreak 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__brkpt_qlfy));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_hit 
        = ((0xfffffff8U & (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h7a8625da__0) 
                            << 3U) & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_ff) 
                                      & (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_haa489fa9__0) 
                                          & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_ff 
                                             == vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tdata2_ff[3U])) 
                                         << 3U)))) 
           | ((0xfffffffcU & (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h7ae9174f__0) 
                               << 2U) & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_ff) 
                                         & (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_haa489fa9__0) 
                                             & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_ff 
                                                == 
                                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tdata2_ff[2U])) 
                                            << 2U)))) 
              | ((0xfffffffeU & (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h7aa9440c__0) 
                                  << 1U) & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_ff) 
                                            & (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_haa489fa9__0) 
                                                & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_ff 
                                                   == 
                                                   vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tdata2_ff[1U])) 
                                               << 1U)))) 
                 | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h7b5535f1__0) 
                    & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_ff) 
                       & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_haa489fa9__0) 
                          & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_ff 
                             == vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tdata2_ff[0U])))))));
}

extern const VlUnpacked<CData/*0:0*/, 64> Vscr1_top_tb_ahb__ConstPool__TABLE_hb361bc05_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vscr1_top_tb_ahb__ConstPool__TABLE_hb82fa59c_0;

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_comb__TOP__27(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_comb__TOP__27\n"); );
    // Init
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*5:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_event_next 
        = (1U & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff)) 
                 | ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state))
                     ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_update)
                     : ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state))
                         ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_update)
                         : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_init_pc_qlfy) 
                            & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_req_ff)))))));
    __Vtableidx8 = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_init_pc_qlfy) 
                     << 5U) | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_req_ff) 
                                << 4U) | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_update) 
                                           << 3U) | 
                                          (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff) 
                                            << 2U) 
                                           | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state)))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_cmd_resp 
        = Vscr1_top_tb_ahb__ConstPool__TABLE_hb361bc05_0
        [__Vtableidx8];
    __Vtableidx4 = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dm_dhalt_req) 
                     << 6U) | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_init_pc_qlfy) 
                                << 5U) | (((3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_ff)) 
                                           << 4U) | 
                                          (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_update) 
                                            << 3U) 
                                           | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state) 
                                               << 1U) 
                                              | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff))))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state_next 
        = Vscr1_top_tb_ahb__ConstPool__TABLE_hb82fa59c_0
        [__Vtableidx4];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__cmd_resp_ok 
        = ((~ ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state))
                ? ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff)) 
                   | (~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_req_ff) 
                         & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_init_pc_qlfy))))
                : ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff)) 
                   | (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_update))))) 
           & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_cmd_resp) 
              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_upd_on_halt 
        = (((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state)) 
            | (1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state))) 
           & (2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state_next)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__dbg_halted 
        = ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state_next)) 
           | ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff)) 
              & (1U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__dbg_halt2run 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__dbg_halted) 
           & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT____VdfgTmp_h9a92a6aa__0) 
              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_cmd_req)));
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_comb__TOP__28(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_comb__TOP__28\n"); );
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_hit 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h1024b93b__0) 
           & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_haa489fa9__0) 
              & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_skip_ff)) 
                 & (1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_count_ff)))));
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_comb__TOP__29(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_comb__TOP__29\n"); );
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_rdata 
        = ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__port_sel_r))
            ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_rdata
            : ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__port_sel_r))
                ? ((0x1fU >= ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_rdata_shift_reg) 
                              << 3U)) ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_rdata_local 
                                         >> ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_rdata_shift_reg) 
                                             << 3U))
                    : 0U) : ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__port_sel_r))
                              ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_rdata
                              : 0U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_req_ack 
        = (1U & (((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__fsm)) 
                  | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__fsm) 
                     & (1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_resp)))) 
                 & ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__port_sel))
                     ? (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_full))
                     : ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__port_sel)) 
                        | (2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__port_sel))))));
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_comb__TOP__30(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_comb__TOP__30\n"); );
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_next 
        = (((~ ((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff)) 
                & ((4U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff)) 
                   & (0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0))))) 
            & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_ff))
            ? ((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff))
                ? ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff))
                    ? ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff))
                        ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff)
                        : ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0))
                            ? 0U : 6U)) : ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff))
                                            ? ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__cmd_resp_ok)
                                                ? 6U
                                                : 5U)
                                            : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__cmd_resp_ok)
                                                ? 3U
                                                : 4U)))
                : ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff))
                    ? ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff))
                        ? ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0))
                            ? 0U : 3U) : ((3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0))
                                           ? 3U : 2U))
                    : ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff))
                        ? ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__cmd_resp_ok)
                            ? 2U : 1U) : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_req_ff)
                                           ? 1U : (
                                                   ((2U 
                                                     != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0)) 
                                                    & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_haltreq_ff))
                                                    ? 4U
                                                    : 
                                                   (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_resumereq_ff) 
                                                     & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_resumeack_ff)) 
                                                        & (2U 
                                                           == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0))))
                                                     ? 5U
                                                     : 0U))))))
            : 0U);
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_comb__TOP__31(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_comb__TOP__31\n"); );
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_run_req 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_halted_ff) 
           & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_ip_ie) 
              | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__dbg_halt2run)));
}

extern const VlUnpacked<CData/*0:0*/, 16> Vscr1_top_tb_ahb__ConstPool__TABLE_h4cc54c23_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vscr1_top_tb_ahb__ConstPool__TABLE_h60310882_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vscr1_top_tb_ahb__ConstPool__TABLE_hafb48d7d_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vscr1_top_tb_ahb__ConstPool__TABLE_hab801932_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vscr1_top_tb_ahb__ConstPool__TABLE_h08f87a6b_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vscr1_top_tb_ahb__ConstPool__TABLE_hb556814a_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vscr1_top_tb_ahb__ConstPool__TABLE_h0369711a_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vscr1_top_tb_ahb__ConstPool__TABLE_hf9e5d74a_0;

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_comb__TOP__32(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_comb__TOP__32\n"); );
    // Init
    IData/*31:0*/ scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgExtracted_h67bc2eca__0;
    scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgExtracted_h67bc2eca__0 = 0;
    CData/*0:0*/ scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgExtracted_ha827bc50__0;
    scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgExtracted_ha827bc50__0 = 0;
    CData/*0:0*/ scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h53892f89__0;
    scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h53892f89__0 = 0;
    CData/*0:0*/ scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h5273f22b__0;
    scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h5273f22b__0 = 0;
    CData/*0:0*/ scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h5c8eaa5c__0;
    scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h5c8eaa5c__0 = 0;
    CData/*0:0*/ scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h5bedfe44__0;
    scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h5bedfe44__0 = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*2:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2exu_i_x_req 
        = ((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_hit)) 
           | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_hit));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h215ccd09__0 
        = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__lsu_req) 
            & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_fsm_curr)) 
               & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2exu_i_x_req)))) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req 
        = ((~ ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd_ff)) 
               | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2exu_i_x_req))) 
           & ((1U == (3U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                            >> 0x1cU))) ? (0U != (0x1fU 
                                                  & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                                     >> 5U)))
               : ((2U == (3U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                >> 0x1cU))) | (3U == 
                                               (3U 
                                                & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                                   >> 0x1cU))))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_w_req 
        = (1U & ((~ ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd_ff)) 
                     | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2exu_i_x_req))) 
                 & ((1U == (3U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                  >> 0x1cU))) ? (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__csr_access_ff))
                     : (((2U == (3U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                       >> 0x1cU))) 
                         | (3U == (3U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                         >> 0x1cU)))) 
                        & ((0U != (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                            >> 0xfU))) 
                           & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__csr_access_ff)))))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_vd 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd_ff) 
           & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2exu_i_x_req)) 
              & (0U != (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                 >> 4U)))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_ldst_hit 
        = ((0xfffffff8U & (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h7a8625da__0) 
                            << 3U) & (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h215ccd09__0) 
                                       << 3U) & ((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_ff) 
                                                   & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h2158131e__0) 
                                                      << 3U)) 
                                                  | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_ff) 
                                                     & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h2097eaa3__0) 
                                                        << 3U))) 
                                                 & ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0 
                                                     == 
                                                     vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tdata2_ff[3U]) 
                                                    << 3U))))) 
           | ((0xfffffffcU & (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h7ae9174f__0) 
                               << 2U) & (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h215ccd09__0) 
                                          << 2U) & 
                                         ((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_ff) 
                                            & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h2158131e__0) 
                                               << 2U)) 
                                           | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_ff) 
                                              & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h2097eaa3__0) 
                                                 << 2U))) 
                                          & ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0 
                                              == vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tdata2_ff[2U]) 
                                             << 2U))))) 
              | ((0xfffffffeU & (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h7aa9440c__0) 
                                  << 1U) & (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h215ccd09__0) 
                                             << 1U) 
                                            & ((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_ff) 
                                                 & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h2158131e__0) 
                                                    << 1U)) 
                                                | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_ff) 
                                                   & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h2097eaa3__0) 
                                                      << 1U))) 
                                               & ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0 
                                                   == 
                                                   vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tdata2_ff[1U]) 
                                                  << 1U))))) 
                 | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h7b5535f1__0) 
                    & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h215ccd09__0) 
                       & ((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_ff) 
                            & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h2158131e__0)) 
                           | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_ff) 
                              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h2097eaa3__0))) 
                          & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0 
                             == vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tdata2_ff[0U])))))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_r_req = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc = 0U;
    if ((0x10000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
        if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                      >> 0xfU)))) {
            if ((0x4000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                if ((0x2000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                    if ((0x1000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                        if ((0x800U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                            if ((0x400U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                if ((0x200U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                    if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                  >> 8U)))) {
                                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_r_req 
                                            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x8000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
            if ((0x4000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                if ((0x2000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                    if ((0x1000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                    } else if ((0x800U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                    } else if ((0x400U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                    } else if ((0x200U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                        if ((0x100U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                        } else if ((0x80U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                            if ((0x40U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                                    = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                            } else if ((0x20U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                                    = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                            }
                        } else if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                             >> 6U)))) {
                            if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                          >> 5U)))) {
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                                    = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                            }
                        }
                    } else {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                    }
                } else {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                }
            } else if ((0x2000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                    = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
            } else if ((0x1000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                if ((0x800U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                } else if ((0x400U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                }
            } else if ((0x800U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                    = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
            } else if ((0x400U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                    = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
            }
        } else if ((0x4000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
            if ((0x2000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                if ((0x1000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                    if ((0x800U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                        if ((0x400U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                            if ((0x200U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                if ((0x100U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                                        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                                }
                            } else {
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                                    = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                            }
                        } else {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                        }
                    } else if ((0x400U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                    } else if ((1U == (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                >> 5U)))) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                    }
                } else if ((0x800U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                } else if ((0x400U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                } else if ((1U == (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                            >> 5U)))) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                }
            } else {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                    = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
            }
        } else {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
        }
    } else if ((0x8000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
        if ((0x4000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
            if ((0x2000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                if ((0x1000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                    if ((0x800U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                        if ((0x400U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                            if ((0x200U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                                    = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                            } else if ((0x100U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                                    = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                            } else if ((0x80U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                                    = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                            } else if ((0x40U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                                    = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                            } else if ((0x20U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                                    = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                            }
                        } else {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                        }
                    } else if ((0x400U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                        if ((0x200U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                            if ((0x100U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                                    = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                            } else if ((0x80U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                                    = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                            }
                        } else if ((0x100U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                        } else if ((0x80U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                            if ((0x40U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                                    = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                            } else if ((0x20U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                                    = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                            }
                        } else if ((0x40U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                            if ((0x20U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                                    = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                            }
                        }
                    } else {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                    }
                } else {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                }
            } else {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                    = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
            }
        } else {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
        }
    } else if ((0x4000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
        if ((0x2000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
            if ((0x1000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                    = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
            } else if ((0x800U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                if ((0x400U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                } else if ((0x200U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                } else if ((0x100U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                } else if ((0x80U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                    if ((0x40U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                    } else if ((0x20U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                    }
                }
            } else if ((0x400U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                if ((((0U == (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                       >> 5U))) | (1U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                       >> 5U)))) 
                     | (2U == (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                        >> 5U))))) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                }
            } else if ((0x200U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                    = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
            } else if ((0x100U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                    = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
            } else if ((0x80U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                if ((0x40U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
                }
            } else if ((0x40U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                    = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
            }
        } else {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
        }
    } else {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req;
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten_upd = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtvec_upd = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mscratch_upd = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_upd = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_upd = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mepc_upd = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtval_upd = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_upd = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_w_req = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_upd = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_upd = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 0U;
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_w_req) {
        if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                      >> 0x10U)))) {
            if ((0x8000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                if ((0x4000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                    if ((0x2000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                        if ((0x1000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                            if ((0x800U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                if ((0x400U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                    if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                  >> 9U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                    >> 8U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                     >> 7U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                         >> 6U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                             >> 5U)))) {
                                                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten_upd = 1U;
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
            }
            if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                          >> 0xfU)))) {
                if ((0x4000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                    if ((0x2000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                        if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                      >> 0xcU)))) {
                            if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                          >> 0xbU)))) {
                                if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                              >> 0xaU)))) {
                                    if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                  >> 9U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                    >> 8U)))) {
                                            if ((0x80U 
                                                 & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                         >> 6U)))) {
                                                    if (
                                                        (0x20U 
                                                         & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtvec_upd = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                             >> 5U)))) {
                                                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_upd = 1U;
                                                    }
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                     >> 7U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                         >> 6U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                             >> 5U)))) {
                                                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_upd = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if ((0x800U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                              >> 0xaU)))) {
                                    if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                  >> 9U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                    >> 8U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                     >> 7U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                         >> 6U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                             >> 5U)))) {
                                                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mscratch_upd = 1U;
                                                    }
                                                    if (
                                                        (0x20U 
                                                         & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mepc_upd = 1U;
                                                    }
                                                }
                                                if (
                                                    (0x40U 
                                                     & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                                    if (
                                                        (0x20U 
                                                         & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtval_upd = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                             >> 5U)))) {
                                                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_upd = 1U;
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
            }
        }
        if ((0x10000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
            if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                          >> 0xfU)))) {
                if ((0x4000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                    if ((0x2000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                        if ((0x1000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                            if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                          >> 0xbU)))) {
                                if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                              >> 0xaU)))) {
                                    if ((1U != (0x1fU 
                                                & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                   >> 5U)))) {
                                        if ((0U != 
                                             (0x1fU 
                                              & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                 >> 5U)))) {
                                            if ((2U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                     >> 5U)))) {
                                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_upd 
                                                    = 
                                                    (2U 
                                                     | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_upd));
                                            }
                                        }
                                        if ((0U == 
                                             (0x1fU 
                                              & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                 >> 5U)))) {
                                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_upd 
                                                = (2U 
                                                   | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_upd));
                                        }
                                    }
                                }
                            }
                            if ((0x800U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                if ((0x400U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                    if ((0x200U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                        if ((1U & (~ 
                                                   (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                    >> 8U)))) {
                                            if ((0x80U 
                                                 & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_w_req = 1U;
                                            } else if (
                                                       (0x40U 
                                                        & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                         >> 5U)))) {
                                                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_w_req = 1U;
                                                }
                                            } else if (
                                                       (0x20U 
                                                        & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_w_req = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                             >> 0xbU)))) {
                            if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                          >> 0xaU)))) {
                                if ((1U != (0x1fU & 
                                            (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                             >> 5U)))) {
                                    if ((0U != (0x1fU 
                                                & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                   >> 5U)))) {
                                        if ((2U == 
                                             (0x1fU 
                                              & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                 >> 5U)))) {
                                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_upd 
                                                = (1U 
                                                   | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_upd));
                                        }
                                    }
                                    if ((0U == (0x1fU 
                                                & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                   >> 5U)))) {
                                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_upd 
                                            = (1U | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_upd));
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((0x8000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 1U;
            } else if ((0x4000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                if ((0x2000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                    if ((0x1000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                        if ((0x800U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                            if ((0x400U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                if ((0x200U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                    if ((0x100U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 1U;
                                    }
                                } else {
                                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 1U;
                                }
                            } else {
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 1U;
                            }
                        } else if ((0x400U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 1U;
                        } else if ((1U == (0x1fU & 
                                           (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                            >> 5U)))) {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 1U;
                        }
                    } else if ((0x800U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 1U;
                    } else if ((0x400U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 1U;
                    } else if ((1U == (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                >> 5U)))) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 1U;
                    }
                } else {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 1U;
                }
            } else {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 1U;
            }
        } else if ((0x8000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
            if ((0x4000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                if ((0x2000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                    if ((0x1000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                        if ((0x800U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                            if ((0x400U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                if ((0x200U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 1U;
                                } else if ((0x100U 
                                            & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 1U;
                                } else if ((0x80U & 
                                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 1U;
                                } else if ((0x40U & 
                                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 1U;
                                } else if ((0x20U & 
                                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 1U;
                                }
                            } else {
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 1U;
                            }
                        } else if ((0x400U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                            if ((0x200U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                if ((0x100U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 1U;
                                } else if ((0x80U & 
                                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 1U;
                                }
                            } else if ((0x100U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 1U;
                            } else if ((0x80U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                if ((0x40U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 1U;
                                } else if ((0x20U & 
                                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 1U;
                                }
                            } else if ((0x40U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                if ((0x20U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 1U;
                                }
                            }
                        } else {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 1U;
                        }
                    } else {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 1U;
                    }
                } else {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 1U;
                }
            } else {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 1U;
            }
        } else if ((0x4000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
            if ((0x2000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                if ((0x1000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 1U;
                } else if ((0x800U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                    if ((0x400U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 1U;
                    } else if ((0x200U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 1U;
                    } else if ((0x100U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 1U;
                    } else if ((0x80U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                        if ((0x40U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 1U;
                        } else if ((0x20U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 1U;
                        }
                    }
                } else if ((0x400U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                    if ((((0U == (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                           >> 5U))) 
                          | (1U == (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                             >> 5U)))) 
                         | (2U == (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                            >> 5U))))) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 1U;
                    }
                } else if ((0x200U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 1U;
                } else if ((0x100U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 1U;
                } else if ((0x80U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                    if ((0x40U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 1U;
                    }
                } else if ((0x40U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 1U;
                }
            } else {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 1U;
            }
        } else {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc = 1U;
        }
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_bp_retire = 0U;
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd_ff) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_bp_retire 
            = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_hit) 
                << 4U) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_hit));
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__lsu_req) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_bp_retire 
                = ((0x10U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_bp_retire)) 
                   | (0xfU & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_bp_retire) 
                              | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_ldst_hit))));
        }
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_exc_hwbrk 
        = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__lsu_req) 
            & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2exu_i_x_req)) 
           | (0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_ldst_hit)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__brkpt_hw 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2exu_i_x_req) 
           | (0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_ldst_hit)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_addr 
        = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_r_req) 
            | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_w_req))
            ? (7U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                     >> 5U)) : 0U);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__exu_req_no_exc 
        = (((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc)) 
            & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req)) 
           | ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc)) 
              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_w_req)));
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_vd) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op2 
            = ((0x200U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U])
                ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__mprf2exu_rs2_data
                : ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                    << 0x1bU) | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                 >> 5U)));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op1 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__mprf2exu_rs1_data;
    } else {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op2 = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op1 = 0U;
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__shft_op1 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op1;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__shft_op2 
        = (0x1fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op2);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__shft_res 
        = ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__shft_cmd))
            ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__shft_op1 
               >> (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__shft_op2))
            : ((3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__shft_cmd))
                ? VL_SHIFTRS_III(32,32,5, vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__shft_op1, (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__shft_op2))
                : (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__shft_op1 
                   << (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__shft_op2))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgTmp_h202d6225__0 
        = VL_MULS_QQQ(64, VL_EXTENDS_QQ(64,33, ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_cmd_mul)
                                                 ? 
                                                (((QData)((IData)(
                                                                  ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op1 
                                                                    >> 0x1fU) 
                                                                   & (~ (IData)(
                                                                                (3U 
                                                                                == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mul_cmd))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op1)))
                                                 : 0ULL)), 
                      VL_EXTENDS_QQ(64,33, ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_cmd_mul)
                                             ? (((QData)((IData)(
                                                                 ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgTmp_hf046458b__0)) 
                                                                  & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op2 
                                                                     >> 0x1fU)))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op2)))
                                             : 0ULL)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_res 
        = (0x1ffffffffULL & ((4U != (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                              >> 4U)))
                              ? ((QData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op1)) 
                                 - (QData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op2)))
                              : ((QData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op1)) 
                                 + (QData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op2)))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_pos_ovflw 
        = (((~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op1 
                >> 0x1fU)) & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op2 
                              >> 0x1fU)) & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_res 
                                            >> 0x1fU));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_neg_ovflw 
        = (((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op1 
             >> 0x1fU) & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op2 
                             >> 0x1fU))) & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_res 
                                               >> 0x1fU)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_flags 
        = ((0xeU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_flags)) 
           | (1U & (IData)((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_res 
                            >> 0x20U))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_flags 
        = ((7U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_flags)) 
           | (8U & ((~ (IData)((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_res)))) 
                    << 3U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_flags 
        = ((9U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_flags)) 
           | ((4U & ((IData)((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_res 
                              >> 0x1fU)) << 2U)) | 
              (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_pos_ovflw) 
                | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_neg_ovflw)) 
               << 1U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_iter_req 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_cmd_is_iter) 
           & (((0U != vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op1) 
               & (0U != vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op2)) 
              & (0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_ff))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_dvdnd_lo_next 
        = ((1U & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_cmd_is_iter)) 
                  | (2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_ff))))
            ? 0U : ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_ff))
                     ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op1 
                        << 1U) : (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_dvdnd_lo_ff 
                                  << 1U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_ops_diff_sgn 
        = ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op1 
            ^ vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op2) 
           >> 0x1fU);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_op1_is_neg 
        = ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgTmp_h8ffc7cb8__0)) 
           & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op1 
              >> 0x1fU));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_bp_retire_qlfy 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_bp_retire) 
           & (- (IData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_exc_req 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__dmem_addr_mslgn_l) 
           | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__dmem_addr_mslgn_s) 
              | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_exc_hwbrk)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_clr_req = 0U;
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_w_req) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_wdata 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_w_data;
        if ((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_addr))) {
            if ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_addr))) {
                if ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_addr))) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_clr_req 
                        = (((~ ((IData)(1U) << (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_idxr_ff))) 
                            & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_clr_req)) 
                           | (0xffffU & ((1U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_wdata) 
                                         << (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_idxr_ff))));
                }
            } else if ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_addr))) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_clr_req 
                    = (((~ (IData)(((IData)(1U) << vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irr_priority
                                    .__PVT__idx))) 
                        & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_clr_req)) 
                       | (0xffffU & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irr_priority
                                             .__PVT__vd) 
                                     << vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irr_priority
                                     .__PVT__idx)));
            }
        } else if ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_addr))) {
            if ((1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_addr)))) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_clr_req 
                    = (0xffffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_wdata);
            }
        } else if ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_addr))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_clr_req 
                = (((~ ((IData)(1U) << (0xfU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_cisv_ff)))) 
                    & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_clr_req)) 
                   | (0xffffU & ((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_wdata 
                                        & (~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_cisv_ff) 
                                              >> 4U)))) 
                                 << (0xfU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_cisv_ff)))));
        }
    } else {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_wdata = 0U;
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ipic2csr_rdata = 0U;
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_r_req) {
        if ((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_addr))) {
            if ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_addr))) {
                if ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_addr))) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ipic2csr_rdata 
                        = ((0xfffffff8U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ipic2csr_rdata) 
                           | ((4U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_icsr) 
                                     >> 4U)) | ((2U 
                                                 & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_icsr) 
                                                    >> 6U)) 
                                                | (1U 
                                                   & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_icsr) 
                                                      >> 8U)))));
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ipic2csr_rdata 
                        = ((0xfffffff7U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ipic2csr_rdata) 
                           | (8U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_icsr) 
                                    >> 2U)));
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ipic2csr_rdata 
                        = (0x300U | vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ipic2csr_rdata);
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ipic2csr_rdata 
                        = ((0xffffffefU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ipic2csr_rdata) 
                           | (0x10U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_icsr)));
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ipic2csr_rdata 
                        = ((0xffff0fffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ipic2csr_rdata) 
                           | (0xf000U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_icsr) 
                                         << 0xcU)));
                } else {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ipic2csr_rdata 
                        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_idxr_ff;
                }
            } else {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ipic2csr_rdata = 0U;
            }
        } else {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ipic2csr_rdata 
                = ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_addr))
                    ? ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_addr))
                        ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_isvr_ff)
                        : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_ff))
                    : ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_addr))
                        ? ((0xfffffffcU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ipic2csr_rdata) 
                           | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT____VdfgExtracted_h1692cb19__0) 
                               << 1U) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT____VdfgExtracted_h169dacea__0)))
                        : ((0xffffffe0U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ipic2csr_rdata) 
                           | ((0x10U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_cisv_ff))
                               ? 0x10U : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_cisv_ff)))));
        }
    }
    __Vtableidx3 = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_addr) 
                     << 1U) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_w_req));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__cicsr_wr_req 
        = Vscr1_top_tb_ahb__ConstPool__TABLE_h4cc54c23_0
        [__Vtableidx3];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__eoi_wr_req 
        = Vscr1_top_tb_ahb__ConstPool__TABLE_h60310882_0
        [__Vtableidx3];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__soi_wr_req 
        = Vscr1_top_tb_ahb__ConstPool__TABLE_hafb48d7d_0
        [__Vtableidx3];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__idxr_wr_req 
        = Vscr1_top_tb_ahb__ConstPool__TABLE_hab801932_0
        [__Vtableidx3];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__icsr_wr_req 
        = Vscr1_top_tb_ahb__ConstPool__TABLE_h08f87a6b_0
        [__Vtableidx3];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2hdu_req 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_hdu_req) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__exu_req_no_exc));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2tdu_req 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_brkm_req) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__exu_req_no_exc));
    scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgExtracted_h67bc2eca__0 
        = ((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mul_cmd))
            ? ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_cmd_mul)
                ? (IData)((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgTmp_h202d6225__0 
                           >> 0x20U)) : 0U) : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_cmd_mul)
                                                ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgTmp_h202d6225__0)
                                                : 0U));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_cmp = 0U;
    if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                  >> 8U)))) {
        if ((0x80U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U])) {
            if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                          >> 6U)))) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_cmp 
                    = (1U & ((0x20U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U])
                              ? ((0x10U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U])
                                  ? (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_flags))
                                  : (~ (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_flags) 
                                         >> 2U) ^ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_flags) 
                                                   >> 1U))))
                              : ((0x10U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U])
                                  ? (~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_flags) 
                                        >> 3U)) : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_flags) 
                                                   >> 3U))));
            }
        } else if ((0x40U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U])) {
            if ((0x20U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U])) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_cmp 
                    = (1U & ((0x10U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U])
                              ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_flags)
                              : (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_flags) 
                                  >> 2U) ^ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_flags) 
                                            >> 1U))));
            }
        }
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_sum_sub = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_sum_op1 = 0ULL;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_sum_op2 = 0ULL;
    if ((2U == ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_cmd_is_iter)
                 ? 2U : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_cmd_mul)
                          ? 1U : 0U)))) {
        if ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_ff))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__unnamedblk1__DOT__sgn 
                = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_op1_is_neg) 
                   ^ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_c_ff));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_sum_op1 
                = (0x1ffffffffULL & (QData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_hi_ff)));
        } else {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__unnamedblk1__DOT__sgn 
                = ((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_ff)) 
                   & (~ vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_lo_ff));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_sum_op1 
                = (0x1ffffffffULL & ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_ff))
                                      ? VL_EXTENDS_QI(33,2, 
                                                      (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_op1_is_neg) 
                                                        << 1U) 
                                                       | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op1 
                                                          >> 0x1fU)))
                                      : (((QData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_hi_ff)) 
                                          << 1U) | (QData)((IData)(
                                                                   (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_dvdnd_lo_ff 
                                                                    >> 0x1fU))))));
        }
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__unnamedblk1__DOT__inv 
            = ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgTmp_h8ffc7cb8__0)) 
               & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_ops_diff_sgn));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_sum_op2 
            = (((QData)((IData)(((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgTmp_h8ffc7cb8__0)) 
                                 & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op2 
                                    >> 0x1fU)))) << 0x20U) 
               | (QData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op2)));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_sum_sub 
            = (1U ^ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__unnamedblk1__DOT__inv) 
                     ^ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__unnamedblk1__DOT__sgn)));
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_sum_res 
        = (0x1ffffffffULL & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_sum_sub)
                              ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_sum_op1 
                                 - vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_sum_op2)
                              : (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_sum_op1 
                                 + vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_sum_op2)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2hdu_dmode_req 
        = (1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_ff) 
                 & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_bp_retire_qlfy)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2hdu_dmode_req 
        = (1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2hdu_dmode_req) 
                 | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_ff) 
                     >> 1U) & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_bp_retire_qlfy) 
                               >> 1U))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2hdu_dmode_req 
        = (1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2hdu_dmode_req) 
                 | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_ff) 
                     >> 2U) & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_bp_retire_qlfy) 
                               >> 2U))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2hdu_dmode_req 
        = (1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2hdu_dmode_req) 
                 | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_ff) 
                     >> 3U) & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_bp_retire_qlfy) 
                               >> 3U))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2hdu_dmode_req 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2hdu_dmode_req) 
           | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_action_ff) 
              & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_bp_retire_qlfy) 
                 >> 4U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_dmem_req 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__lsu_req) 
           & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_exc_req)) 
              & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_fsm_curr))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_eoi_req 
        = ((~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_cisv_ff) 
               >> 4U)) & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__eoi_wr_req));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_start_vd 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mip_meip) 
           & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irr_priority
              .__PVT__vd & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__soi_wr_req)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ier_next 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ier_ff;
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__cicsr_wr_req) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ier_next 
            = (((~ ((IData)(1U) << (0xfU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_cisv_ff)))) 
                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ier_next)) 
               | (0xffffU & ((1U & ((0x10U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_cisv_ff))
                                     ? ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ier_ff) 
                                        >> (0xfU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_cisv_ff)))
                                     : (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_wdata 
                                        >> 1U))) << 
                             (0xfU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_cisv_ff)))));
    } else if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__icsr_wr_req) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ier_next 
            = (((~ ((IData)(1U) << (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_idxr_ff))) 
                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ier_next)) 
               | (0xffffU & ((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_wdata 
                                    >> 1U)) << (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_idxr_ff))));
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_imr_next 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_imr_ff;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_iinvr_next 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_iinvr_ff;
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__icsr_wr_req) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_imr_next 
            = (((~ ((IData)(1U) << (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_idxr_ff))) 
                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_imr_next)) 
               | (0xffffU & ((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_wdata 
                                    >> 2U)) << (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_idxr_ff))));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_iinvr_next 
            = (((~ ((IData)(1U) << (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_idxr_ff))) 
                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_iinvr_next)) 
               | (0xffffU & ((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_wdata 
                                    >> 3U)) << (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_idxr_ff))));
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2hdu_req) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2tdu_req_qlfy 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2tdu_req) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__jb_taken 
        = (1U & ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                  >> 0x18U) | ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                >> 0x17U) & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_cmp))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_res_rem = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_res_rem_c = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_res_quo = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_quo_bit = 0U;
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgExtracted_h8768cdc8__0) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_res_rem 
            = (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_sum_res);
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_res_rem_c 
            = (1U & (IData)((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_sum_res 
                             >> 0x20U)));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_quo_bit 
            = (1U & ((~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_op1_is_neg) 
                         ^ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_res_rem_c))) 
                     | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_op1_is_neg) 
                        & (0U == ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_dvdnd_lo_next 
                                   | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_sum_res)) 
                                  | (IData)((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_sum_res 
                                             >> 0x20U)))))));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_res_quo 
            = ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_ff))
                ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_quo_bit)
                : ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_lo_ff 
                    << 1U) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_quo_bit)));
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_tmreq 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__brkpt_hw) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2hdu_dmode_req));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_cisv_upd 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_start_vd) 
           | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_eoi_req));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_isvr_next 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_isvr_ff;
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_start_vd) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_isvr_next 
            = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_isvr_next) 
               | (0xffffU & ((IData)(1U) << vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irr_priority
                             .__PVT__idx)));
    } else if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_eoi_req) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_isvr_next 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_isvr_eoi;
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lvl 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_iinvr_next) 
           ^ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lines));
    __Vtableidx7 = ((6U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                           >> 4U)) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_sel 
        = Vscr1_top_tb_ahb__ConstPool__TABLE_hb556814a_0
        [__Vtableidx7];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_sel 
        = Vscr1_top_tb_ahb__ConstPool__TABLE_h0369711a_0
        [__Vtableidx7];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dscratch0_sel 
        = Vscr1_top_tb_ahb__ConstPool__TABLE_hf9e5d74a_0
        [__Vtableidx7];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_tselect = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_icount = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_tdata2 = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_mcontrol = 0U;
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2tdu_req_qlfy) {
        if ((0x80U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
            if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                          >> 6U)))) {
                if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                              >> 5U)))) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__unnamedblk3__DOT__i = 4U;
                    if ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tselect_ff))) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata 
                            = (4U | vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata);
                    }
                    if ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tselect_ff))) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata 
                            = (4U | vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata);
                    }
                    if ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tselect_ff))) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata 
                            = (4U | vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata);
                    }
                    if ((3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tselect_ff))) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata 
                            = (4U | vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata);
                    }
                    if ((4U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tselect_ff))) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata 
                            = (8U | vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata);
                    }
                }
            }
        } else if ((0x40U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
            if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                          >> 5U)))) {
                if ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tselect_ff))) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata 
                        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tdata2_ff[0U];
                }
                if ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tselect_ff))) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata 
                        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tdata2_ff[1U];
                }
                if ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tselect_ff))) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata 
                        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tdata2_ff[2U];
                }
                if ((3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tselect_ff))) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata 
                        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tdata2_ff[3U];
                }
            }
        } else if ((0x20U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
            if ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tselect_ff))) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata 
                    = (0x20000000U | ((0x1fffffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata) 
                                      | (0x8000000U 
                                         & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_ff) 
                                            << 0x1bU))));
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata 
                    = ((0xffe00fffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata) 
                       | ((0x100000U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_ff) 
                                        << 0x14U)) 
                          | (0x1000U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_ff) 
                                        << 0xcU))));
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata 
                    = ((0xfffff003U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata) 
                       | ((0x40U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_ff) 
                                    << 6U)) | (4U & 
                                               ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_ff) 
                                                << 2U))));
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata 
                    = ((0xfffffffcU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata) 
                       | ((2U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_ff) 
                                 << 1U)) | (1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_ff))));
            }
            if ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tselect_ff))) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata 
                    = (0x20000000U | ((0x1fffffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata) 
                                      | (0x8000000U 
                                         & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_ff) 
                                            << 0x1aU))));
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata 
                    = ((0xffe00fffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata) 
                       | ((0x100000U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_ff) 
                                        << 0x13U)) 
                          | (0x1000U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_ff) 
                                        << 0xbU))));
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata 
                    = ((0xfffff003U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata) 
                       | ((0x40U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_ff) 
                                    << 5U)) | (4U & 
                                               ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_ff) 
                                                << 1U))));
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata 
                    = ((0xfffffffcU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata) 
                       | ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_ff)) 
                          | (1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_ff) 
                                   >> 1U))));
            }
            if ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tselect_ff))) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata 
                    = (0x20000000U | ((0x1fffffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata) 
                                      | (0x8000000U 
                                         & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_ff) 
                                            << 0x19U))));
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata 
                    = ((0xffe00fffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata) 
                       | ((0x100000U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_ff) 
                                        << 0x12U)) 
                          | (0x1000U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_ff) 
                                        << 0xaU))));
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata 
                    = ((0xfffff003U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata) 
                       | ((0x40U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_ff) 
                                    << 4U)) | (4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_ff))));
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata 
                    = ((0xfffffffcU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata) 
                       | ((2U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_ff) 
                                 >> 1U)) | (1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_ff) 
                                                  >> 2U))));
            }
            if ((3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tselect_ff))) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata 
                    = (0x20000000U | ((0x1fffffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata) 
                                      | (0x8000000U 
                                         & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_ff) 
                                            << 0x18U))));
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata 
                    = ((0xffe00fffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata) 
                       | ((0x100000U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_ff) 
                                        << 0x11U)) 
                          | (0x1000U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_ff) 
                                        << 9U))));
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata 
                    = ((0xfffff003U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata) 
                       | ((0x40U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_ff) 
                                    << 3U)) | (4U & 
                                               ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_ff) 
                                                >> 1U))));
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata 
                    = ((0xfffffffcU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata) 
                       | ((2U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_ff) 
                                 >> 2U)) | (1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_ff) 
                                                  >> 3U))));
            }
            if ((4U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tselect_ff))) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata 
                    = (0x30000000U | ((0x7ffffffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata) 
                                      | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_dmode_ff) 
                                         << 0x1bU)));
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata 
                    = ((0xfe0003ffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata) 
                       | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_hit_ff) 
                           << 0x18U) | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_count_ff) 
                                        << 0xaU)));
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata 
                    = (0xffffff3fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata);
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata 
                    = ((0xfffffdffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata) 
                       | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_m_ff) 
                          << 9U));
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata 
                    = ((0xffffffc0U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata) 
                       | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_action_ff));
            }
        } else {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata 
                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tselect_ff;
        }
        if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                      >> 7U)))) {
            if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                          >> 6U)))) {
                if ((0x20U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__unnamedblk2__DOT__i = 4U;
                }
            }
            if ((0x40U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                              >> 5U)))) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__unnamedblk1__DOT__i = 4U;
                }
            }
        }
        if ((0U != (7U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                          >> 5U)))) {
            if ((1U == (7U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                              >> 5U)))) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__unnamedblk4__DOT__i = 4U;
                if ((4U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tselect_ff))) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_icount = 1U;
                }
                if ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tselect_ff))) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_mcontrol 
                        = (1U | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_mcontrol));
                }
                if ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tselect_ff))) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_mcontrol 
                        = (2U | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_mcontrol));
                }
                if ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tselect_ff))) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_mcontrol 
                        = (4U | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_mcontrol));
                }
                if ((3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tselect_ff))) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_mcontrol 
                        = (8U | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_mcontrol));
                }
            }
            if ((1U != (7U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                              >> 5U)))) {
                if ((2U == (7U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                  >> 5U)))) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__unnamedblk5__DOT__i = 4U;
                    if ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tselect_ff))) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_tdata2 
                            = (1U | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_tdata2));
                    }
                    if ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tselect_ff))) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_tdata2 
                            = (2U | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_tdata2));
                    }
                    if ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tselect_ff))) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_tdata2 
                            = (4U | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_tdata2));
                    }
                    if ((3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tselect_ff))) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_tdata2 
                            = (8U | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_tdata2));
                    }
                }
            }
        }
        if ((0U == (7U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                          >> 5U)))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_tselect = 1U;
        }
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_rw_exc 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc) 
           | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc) 
              | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2hdu_req) 
                  & ((3U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state)) 
                     | ((2U != (3U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                      >> 5U))) & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr))))) 
                 | ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2tdu_req_qlfy)) 
                    & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2tdu_req)))));
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_cmd_is_iter) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_hi_next 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_res_rem;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_lo_next 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_res_quo;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_c_next 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_res_rem_c;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_res = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_corr_req 
            = (((0U == (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_cmd_rem) 
                         << 1U) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgTmp_h8ffc7cb8__0))) 
                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_ops_diff_sgn)) 
               | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_cmd_rem) 
                  & ((0U != vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_res_rem) 
                     & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_op1_is_neg) 
                        ^ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_res_rem_c)))));
    } else {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_hi_next 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_hi_ff;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_lo_next 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_lo_ff;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_c_next 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_c_ff;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_res = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_corr_req = 0U;
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_no_commit 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_ebreak) 
           | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_tmreq));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_clr 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_clr_req) 
           & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lvl)) 
              | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_imr_next)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_edge_detected 
        = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lines) 
            ^ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lines_dly)) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lvl));
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_sel) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_wr 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
            = (0x40000000U | (0xfffffffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
            = ((0xffff7fffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out) 
               | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_ebreakm) 
                  << 0xfU));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
            = ((0xfffff7ffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out) 
               | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_stepie) 
                  << 0xbU));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
            = (3U | ((0xfffffff8U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out) 
                     | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_step) 
                        << 2U)));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
            = ((0xfffffe3fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out) 
               | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_cause) 
                  << 6U));
    } else {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_wr = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out = 0U;
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dreg_wr_req 
        = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dscratch0_sel) 
            & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff)) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_wr_req 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_icount) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_req));
    scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h53892f89__0 
        = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_tdata2) 
            >> 3U) & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_req));
    scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h5273f22b__0 
        = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_tdata2) 
            >> 2U) & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_req));
    scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h5c8eaa5c__0 
        = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_tdata2) 
            >> 1U) & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_req));
    scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h5bedfe44__0 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_tdata2) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_req));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data = 0U;
    if ((1U == (3U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                      >> 0x1cU)))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_w_data;
    } else if ((2U == (3U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                             >> 0x1cU)))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data 
            = (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata 
               | vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_w_data);
    } else if ((3U == (3U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                             >> 0x1cU)))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data 
            = (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata 
               & (~ vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_w_data));
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h8108b176__0 
        = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_mcontrol) 
            >> 3U) & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_req));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h803908b6__0 
        = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_mcontrol) 
            >> 2U) & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_req));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h4ea400bb__0 
        = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_mcontrol) 
            >> 1U) & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_req));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h6472391d__0 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_mcontrol) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_req));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_next = 0U;
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_vd) {
        if ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_ff))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_next 
                = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_iter_req)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_ff))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_next 
                = ((1U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_iter_cnt)
                    ? ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_corr_req)
                        ? 2U : 0U) : 1U);
        } else if ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_ff))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_next = 0U;
        }
    }
    scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgExtracted_ha827bc50__0 
        = (1U & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_corr_req)) 
                 & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_iter_cnt));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT____VdfgTmp_h76e0b655__0 
        = (1U & ((~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                     >> 3U)) & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_no_commit))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_next = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_next 
        = ((0xfffeU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_next)) 
           | (1U & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_clr)) 
                    & ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_imr_ff))
                        ? ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_ff) 
                           | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_edge_detected))
                        : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lvl)))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_next 
        = ((0xfffdU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_next)) 
           | (2U & (((~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_clr) 
                         >> 1U)) & ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_imr_ff))
                                     ? (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_ff) 
                                         | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_edge_detected)) 
                                        >> 1U) : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lvl) 
                                                  >> 1U))) 
                    << 1U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_next 
        = ((0xfffbU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_next)) 
           | (4U & (((~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_clr) 
                         >> 2U)) & ((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_imr_ff))
                                     ? (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_ff) 
                                         | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_edge_detected)) 
                                        >> 2U) : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lvl) 
                                                  >> 2U))) 
                    << 2U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_next 
        = ((0xfff7U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_next)) 
           | (8U & (((~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_clr) 
                         >> 3U)) & ((8U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_imr_ff))
                                     ? (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_ff) 
                                         | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_edge_detected)) 
                                        >> 3U) : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lvl) 
                                                  >> 3U))) 
                    << 3U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_next 
        = ((0xffefU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_next)) 
           | (0x10U & (((~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_clr) 
                            >> 4U)) & ((0x10U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_imr_ff))
                                        ? (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_ff) 
                                            | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_edge_detected)) 
                                           >> 4U) : 
                                       ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lvl) 
                                        >> 4U))) << 4U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_next 
        = ((0xffdfU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_next)) 
           | (0x20U & (((~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_clr) 
                            >> 5U)) & ((0x20U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_imr_ff))
                                        ? (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_ff) 
                                            | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_edge_detected)) 
                                           >> 5U) : 
                                       ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lvl) 
                                        >> 5U))) << 5U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_next 
        = ((0xffbfU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_next)) 
           | (0x40U & (((~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_clr) 
                            >> 6U)) & ((0x40U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_imr_ff))
                                        ? (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_ff) 
                                            | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_edge_detected)) 
                                           >> 6U) : 
                                       ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lvl) 
                                        >> 6U))) << 6U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_next 
        = ((0xff7fU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_next)) 
           | (0x80U & (((~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_clr) 
                            >> 7U)) & ((0x80U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_imr_ff))
                                        ? (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_ff) 
                                            | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_edge_detected)) 
                                           >> 7U) : 
                                       ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lvl) 
                                        >> 7U))) << 7U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_next 
        = ((0xfeffU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_next)) 
           | (0x100U & (((~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_clr) 
                             >> 8U)) & ((0x100U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_imr_ff))
                                         ? (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_ff) 
                                             | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_edge_detected)) 
                                            >> 8U) : 
                                        ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lvl) 
                                         >> 8U))) << 8U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_next 
        = ((0xfdffU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_next)) 
           | (0x200U & (((~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_clr) 
                             >> 9U)) & ((0x200U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_imr_ff))
                                         ? (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_ff) 
                                             | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_edge_detected)) 
                                            >> 9U) : 
                                        ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lvl) 
                                         >> 9U))) << 9U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_next 
        = ((0xfbffU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_next)) 
           | (0x400U & (((~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_clr) 
                             >> 0xaU)) & ((0x400U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_imr_ff))
                                           ? (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_ff) 
                                               | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_edge_detected)) 
                                              >> 0xaU)
                                           : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lvl) 
                                              >> 0xaU))) 
                        << 0xaU)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_next 
        = ((0xf7ffU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_next)) 
           | (0x800U & (((~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_clr) 
                             >> 0xbU)) & ((0x800U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_imr_ff))
                                           ? (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_ff) 
                                               | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_edge_detected)) 
                                              >> 0xbU)
                                           : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lvl) 
                                              >> 0xbU))) 
                        << 0xbU)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_next 
        = ((0xefffU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_next)) 
           | (0x1000U & (((~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_clr) 
                              >> 0xcU)) & ((0x1000U 
                                            & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_imr_ff))
                                            ? (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_ff) 
                                                | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_edge_detected)) 
                                               >> 0xcU)
                                            : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lvl) 
                                               >> 0xcU))) 
                         << 0xcU)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_next 
        = ((0xdfffU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_next)) 
           | (0x2000U & (((~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_clr) 
                              >> 0xdU)) & ((0x2000U 
                                            & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_imr_ff))
                                            ? (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_ff) 
                                                | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_edge_detected)) 
                                               >> 0xdU)
                                            : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lvl) 
                                               >> 0xdU))) 
                         << 0xdU)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_next 
        = ((0xbfffU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_next)) 
           | (0x4000U & (((~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_clr) 
                              >> 0xeU)) & ((0x4000U 
                                            & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_imr_ff))
                                            ? (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_ff) 
                                                | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_edge_detected)) 
                                               >> 0xeU)
                                            : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lvl) 
                                               >> 0xeU))) 
                         << 0xeU)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_next 
        = ((0x7fffU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_next)) 
           | (0x8000U & (((~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_clr) 
                              >> 0xfU)) & ((0x8000U 
                                            & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_imr_ff))
                                            ? (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_ff) 
                                                | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_edge_detected)) 
                                               >> 0xfU)
                                            : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lvl) 
                                               >> 0xfU))) 
                         << 0xfU)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_rd_data 
        = (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
           | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_sel)
                ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_ff
                : 0U) | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dscratch0_sel)
                          ? (((5U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
                              | (8U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)))
                              ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data1_ff
                              : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data0_ff)
                          : 0U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_clk_en 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_wr_req) 
           | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_m_ff));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_upd 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_dmode_ff)
            ? (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                >> 2U) & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_wr_req))
            : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_wr_req));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tdata2_upd 
        = ((((8U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_ff))
              ? ((IData)(scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h53892f89__0) 
                 & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                    >> 2U)) : (IData)(scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h53892f89__0)) 
            << 3U) | ((((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_ff))
                         ? ((IData)(scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h5273f22b__0) 
                            & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                               >> 2U)) : (IData)(scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h5273f22b__0)) 
                       << 2U) | ((((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_ff))
                                    ? ((IData)(scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h5c8eaa5c__0) 
                                       & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                                          >> 2U)) : (IData)(scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h5c8eaa5c__0)) 
                                  << 1U) | ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_ff))
                                             ? ((IData)(scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h5bedfe44__0) 
                                                & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                                                   >> 2U))
                                             : (IData)(scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h5bedfe44__0)))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_clk_en 
        = ((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h8108b176__0) 
             | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_ff) 
                >> 3U)) << 3U) | ((4U & (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h803908b6__0) 
                                          << 2U) | 
                                         (0xfffffffcU 
                                          & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_ff)))) 
                                  | ((2U & (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h4ea400bb__0) 
                                             << 1U) 
                                            | (0xfffffffeU 
                                               & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_ff)))) 
                                     | (1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h6472391d__0) 
                                              | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_ff))))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_upd 
        = ((((8U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_ff))
              ? (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                  >> 2U) & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h8108b176__0))
              : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h8108b176__0)) 
            << 3U) | ((((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_ff))
                         ? (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                             >> 2U) & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h803908b6__0))
                         : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h803908b6__0)) 
                       << 2U) | ((((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_ff))
                                    ? (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                                        >> 2U) & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h4ea400bb__0))
                                    : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h4ea400bb__0)) 
                                  << 1U) | ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_ff))
                                             ? (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                                                 >> 2U) 
                                                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h6472391d__0))
                                             : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h6472391d__0)))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_rdy = 1U;
    if ((0x100U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U])) {
        if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                      >> 7U)))) {
            if ((0x40U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U])) {
                if ((0x20U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U])) {
                    if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                  >> 4U)))) {
                        if ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_ff))) {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_res 
                                = (((0U != vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op2) 
                                    | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_cmd_rem))
                                    ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op1
                                    : 0xffffffffU);
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_rdy 
                                = (1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_iter_req)));
                        } else if ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_ff))) {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_res 
                                = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_cmd_rem)
                                    ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_res_rem
                                    : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_res_quo);
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_rdy 
                                = scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgExtracted_ha827bc50__0;
                        } else if ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_ff))) {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_res 
                                = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_cmd_rem)
                                    ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_sum_res)
                                    : (- vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_lo_ff));
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_rdy = 1U;
                        }
                    }
                } else if ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_ff))) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_res 
                        = (((0U != vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op2) 
                            | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_cmd_rem))
                            ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op1
                            : 0xffffffffU);
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_rdy 
                        = (1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_iter_req)));
                } else if ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_ff))) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_res 
                        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_cmd_rem)
                            ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_res_rem
                            : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_res_quo);
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_rdy 
                        = scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgExtracted_ha827bc50__0;
                } else if ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_ff))) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_res 
                        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_cmd_rem)
                            ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_sum_res)
                            : (- vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_lo_ff));
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_rdy = 1U;
                }
            } else if ((0x20U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U])) {
                if ((0x10U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U])) {
                    if ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_ff))) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_res 
                            = (((0U != vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op2) 
                                | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_cmd_rem))
                                ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op1
                                : 0xffffffffU);
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_rdy 
                            = (1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_iter_req)));
                    } else if ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_ff))) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_res 
                            = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_cmd_rem)
                                ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_res_rem
                                : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_res_quo);
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_rdy 
                            = scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgExtracted_ha827bc50__0;
                    } else if ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_ff))) {
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_res 
                            = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_cmd_rem)
                                ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_sum_res)
                                : (- vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_lo_ff));
                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_rdy = 1U;
                    }
                } else {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_res 
                        = scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgExtracted_h67bc2eca__0;
                }
            } else {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_res 
                    = scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgExtracted_h67bc2eca__0;
            }
        }
    } else if ((0x80U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U])) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_res 
            = ((0x40U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U])
                ? ((0x20U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U])
                    ? ((0x10U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U])
                        ? scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgExtracted_h67bc2eca__0
                        : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__shft_res)
                    : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__shft_res)
                : ((0x20U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U])
                    ? ((0x10U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U])
                        ? (~ (1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_flags)))
                        : (~ ((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_flags) 
                                     >> 2U)) ^ (1U 
                                                & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_flags) 
                                                   >> 1U)))))
                    : ((0x10U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U])
                        ? (~ (1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_flags) 
                                    >> 3U))) : (1U 
                                                & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_flags) 
                                                   >> 3U)))));
    } else if ((0x40U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U])) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_res 
            = ((0x20U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U])
                ? ((0x10U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U])
                    ? (1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_flags))
                    : ((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_flags) 
                              >> 2U)) ^ (1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_flags) 
                                               >> 1U))))
                : ((0x10U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U])
                    ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_res)
                    : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_res)));
    } else if ((0x20U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U])) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_res 
            = ((0x10U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U])
                ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op1 
                   ^ vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op2)
                : (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op1 
                   | vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op2));
    } else if ((0x10U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U])) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_res 
            = (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op1 
               & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op2);
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_upd 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_next) 
           != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_ff));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data = 0U;
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
            = ((1U == (3U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                             >> 0x1cU))) ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_w_data
                : ((2U == (3U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                 >> 0x1cU))) ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_rd_data 
                                                | vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_w_data)
                    : ((3U == (3U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                     >> 0x1cU))) ? 
                       (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_rd_data 
                        & (~ vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_w_data))
                        : 0U)));
    }
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_upd) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_dmode_next 
            = (1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data 
                     >> 0x1bU));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_m_next 
            = (1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data 
                     >> 9U));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_action_next 
            = (1U == (0x3fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_hit_next 
            = (1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data 
                     >> 0x18U));
    } else {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_dmode_next 
            = (1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_dmode_ff));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_m_next 
            = (1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_m_ff));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_action_next 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_action_ff;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_hit_next 
            = (1U & (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_bp_retire_qlfy) 
                      >> 4U) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_hit_ff)));
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_next 
        = ((0xeU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_next)) 
           | (1U & ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_upd))
                     ? (1U == (0x3fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data 
                                        >> 0xcU))) : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_ff))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_next 
        = ((0xeU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_next)) 
           | (1U & ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_upd))
                     ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data 
                        >> 0x1bU) : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_ff))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_next 
        = ((0xeU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_next)) 
           | (1U & ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_upd))
                     ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data 
                        >> 6U) : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_ff))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_next 
        = ((0xeU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_next)) 
           | (1U & ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_upd))
                     ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data 
                        >> 2U) : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_ff))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_next 
        = ((0xeU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_next)) 
           | (1U & ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_upd))
                     ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data
                     : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_ff))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_next 
        = ((0xeU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_next)) 
           | (1U & ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_upd))
                     ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data 
                        >> 1U) : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_ff))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_next 
        = ((0xdU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_next)) 
           | (2U & (((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_upd))
                      ? (1U == (0x3fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data 
                                         >> 0xcU)))
                      : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_ff) 
                         >> 1U)) << 1U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_next 
        = ((0xdU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_next)) 
           | (2U & (((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_upd))
                      ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data 
                         >> 0x1bU) : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_ff) 
                                      >> 1U)) << 1U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_next 
        = ((0xdU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_next)) 
           | (2U & (((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_upd))
                      ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data 
                         >> 6U) : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_ff) 
                                   >> 1U)) << 1U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_next 
        = ((0xdU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_next)) 
           | (2U & (((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_upd))
                      ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data 
                         >> 2U) : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_ff) 
                                   >> 1U)) << 1U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_next 
        = ((0xdU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_next)) 
           | (2U & (((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_upd))
                      ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data
                      : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_ff) 
                         >> 1U)) << 1U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_next 
        = ((0xdU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_next)) 
           | (2U & (((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_upd))
                      ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data 
                         >> 1U) : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_ff) 
                                   >> 1U)) << 1U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_next 
        = ((0xbU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_next)) 
           | (4U & (((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_upd))
                      ? (1U == (0x3fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data 
                                         >> 0xcU)))
                      : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_ff) 
                         >> 2U)) << 2U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_next 
        = ((0xbU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_next)) 
           | (4U & (((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_upd))
                      ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data 
                         >> 0x1bU) : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_ff) 
                                      >> 2U)) << 2U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_next 
        = ((0xbU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_next)) 
           | (4U & (((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_upd))
                      ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data 
                         >> 6U) : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_ff) 
                                   >> 2U)) << 2U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_next 
        = ((0xbU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_next)) 
           | (4U & (((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_upd))
                      ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data 
                         >> 2U) : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_ff) 
                                   >> 2U)) << 2U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_next 
        = ((0xbU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_next)) 
           | (4U & (((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_upd))
                      ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data
                      : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_ff) 
                         >> 2U)) << 2U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_next 
        = ((0xbU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_next)) 
           | (4U & (((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_upd))
                      ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data 
                         >> 1U) : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_ff) 
                                   >> 2U)) << 2U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_next 
        = ((7U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_next)) 
           | (8U & (((8U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_upd))
                      ? (1U == (0x3fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data 
                                         >> 0xcU)))
                      : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_ff) 
                         >> 3U)) << 3U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_next 
        = ((7U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_next)) 
           | (8U & (((8U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_upd))
                      ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data 
                         >> 0x1bU) : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_ff) 
                                      >> 3U)) << 3U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_next 
        = ((7U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_next)) 
           | (8U & (((8U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_upd))
                      ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data 
                         >> 6U) : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_ff) 
                                   >> 3U)) << 3U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_next 
        = ((7U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_next)) 
           | (8U & (((8U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_upd))
                      ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data 
                         >> 2U) : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_ff) 
                                   >> 3U)) << 3U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_next 
        = ((7U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_next)) 
           | (8U & (((8U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_upd))
                      ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data
                      : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_ff) 
                         >> 3U)) << 3U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_next 
        = ((7U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_next)) 
           | (8U & (((8U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_upd))
                      ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data 
                         >> 1U) : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_ff) 
                                   >> 3U)) << 3U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_next 
        = ((0xeU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_next)) 
           | (1U & ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_upd))
                     ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data 
                        >> 0x14U) : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_bp_retire_qlfy) 
                                     | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_ff)))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_next 
        = ((0xdU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_next)) 
           | (2U & (((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_upd))
                      ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data 
                         >> 0x14U) : (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_bp_retire_qlfy) 
                                       >> 1U) | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_ff) 
                                                 >> 1U))) 
                    << 1U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_next 
        = ((0xbU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_next)) 
           | (4U & (((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_upd))
                      ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data 
                         >> 0x14U) : (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_bp_retire_qlfy) 
                                       >> 2U) | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_ff) 
                                                 >> 2U))) 
                    << 2U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_next 
        = ((7U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_next)) 
           | (8U & (((8U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_upd))
                      ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data 
                         >> 0x14U) : (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_bp_retire_qlfy) 
                                       >> 3U) | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_ff) 
                                                 >> 3U))) 
                    << 3U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_dvdnd_lo_upd 
        = ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_rdy)) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_vd));
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_comb__TOP__33(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_comb__TOP__33\n"); );
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_mret_instr 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd_ff) 
           & ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
               >> 0x16U) & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2exu_i_x_req)) 
                            & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__dbg_halted)))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_next 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_upd_on_halt)
            ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_ff
            : (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr) 
                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_sel))
                ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data
                : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_ff));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data1_next 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data1_ff;
    if ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data1_next 
            = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr) 
                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_data1))
                ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wdata
                : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data1_ff);
    } else if ((5U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data1_next 
            = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dreg_wr_req)
                ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data
                : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data1_ff);
    } else if ((8U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data1_next 
            = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dreg_wr_req)
                ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data
                : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data1_ff);
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data0_next 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data0_ff;
    if ((8U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) {
        if ((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) {
            if ((1U & (~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)))) {
                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data0_next 
                        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dreg_wr_req)
                            ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data
                            : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data0_ff);
                }
            }
        } else if ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) {
            if ((1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)))) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data0_next 
                    = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dreg_wr_req)
                        ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data
                        : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data0_ff);
            }
        } else if ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data0_next 
                = ((0x301U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regno_ff))
                    ? 0x40001104U : ((0xf11U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regno_ff))
                                      ? 0U : ((0xf12U 
                                               == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regno_ff))
                                               ? 8U
                                               : ((0xf13U 
                                                   == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regno_ff))
                                                   ? 0x22011200U
                                                   : 
                                                  ((0xf14U 
                                                    == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regno_ff))
                                                    ? vlSelf->scr1_top_tb_ahb__DOT__fuse_mhartid
                                                    : 
                                                   (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_ff 
                                                    & (- (IData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff)))))))));
        }
    } else if ((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) {
        if ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) {
            if ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data0_next 
                    = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dreg_wr_req)
                        ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data
                        : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data0_ff);
            }
        } else if ((1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)))) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data0_next 
                = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dreg_wr_req)
                    ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data
                    : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data0_ff);
        }
    } else if ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data0_next 
            = ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))
                ? (((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_wr_ff)) 
                    & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dreg_wr_req))
                    ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data
                    : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data0_ff)
                : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dreg_wr_req)
                    ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data
                    : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data0_ff));
    } else if ((1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data0_next 
            = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr) 
                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_data0))
                ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wdata
                : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data0_ff);
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_mret 
        = ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_no_commit)) 
           & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__csr_access_ff)) 
              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_mret_instr)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_mstatus_mie_up 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_upd) 
           | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_upd) 
              | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_mret)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__csr_access_next 
        = ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__csr_access_ff)) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_mstatus_mie_up));
}

extern const VlUnpacked<CData/*1:0*/, 16> Vscr1_top_tb_ahb__ConstPool__TABLE_hc98d3354_0;

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_comb__TOP__34(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_comb__TOP__34\n"); );
    // Init
    CData/*2:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_width__22__Vfuncout;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_width__22__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_width__22__dmem_width;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_width__22__dmem_width = 0;
    CData/*2:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_width__22__tmp;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_width__22__tmp = 0;
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__Vfuncout;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__dmem_addr;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__dmem_addr = 0;
    CData/*1:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__dmem_width;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__dmem_width = 0;
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__dmem_wdata;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__dmem_wdata = 0;
    IData/*31:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__tmp;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__tmp = 0;
    CData/*3:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_be_form__29__Vfuncout;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_be_form__29__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_be_form__29__offset;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_be_form__29__offset = 0;
    CData/*1:0*/ __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_be_form__29__hsize;
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_be_form__29__hsize = 0;
    CData/*3:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__dmem_req_vd 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__lsu_req) 
           & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_exc_req)) 
              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_req_ack)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__lsu_exc_req 
        = ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_resp)) 
           | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_exc_req));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_req = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_req = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_req = 0U;
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__fsm) {
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__fsm) {
            if ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_resp))) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_req 
                    = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_dmem_req) 
                       & (1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__port_sel)));
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_req 
                    = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_dmem_req) 
                       & (2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__port_sel)));
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_req 
                    = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_dmem_req) 
                       & (0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__port_sel)));
            }
        }
    } else {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_req 
            = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_dmem_req) 
               & (1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__port_sel)));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_req 
            = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_dmem_req) 
               & (2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__port_sel)));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_req 
            = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_dmem_req) 
               & (0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__port_sel)));
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_data = 0U;
    if ((0x10000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
        if ((0x8000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
            if ((0x4000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                if ((0x2000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                    if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                  >> 0xcU)))) {
                        if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                      >> 0xbU)))) {
                            if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                          >> 0xaU)))) {
                                if ((0x200U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
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
                                                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_data 
                                                        = vlSelf->scr1_top_tb_ahb__DOT__fuse_mhartid;
                                                }
                                            }
                                        } else if (
                                                   (0x40U 
                                                    & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_data 
                                                = (
                                                   (0x20U 
                                                    & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])
                                                    ? 0x22011200U
                                                    : 8U);
                                        } else if (
                                                   (0x20U 
                                                    & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_data = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                 >> 0xdU)))) {
                if ((0x1000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                    if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                  >> 0xbU)))) {
                        if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                      >> 0xaU)))) {
                            if ((1U == (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                 >> 5U)))) {
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_data 
                                    = (IData)((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtime_reg 
                                               >> 0x20U));
                            } else if ((0U == (0x1fU 
                                               & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                  >> 5U)))) {
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_data 
                                    = (IData)((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_hi_ff 
                                               >> 0x18U));
                            } else if ((2U == (0x1fU 
                                               & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                  >> 5U)))) {
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_data 
                                    = (IData)((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_hi_ff 
                                               >> 0x18U));
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                     >> 0xbU)))) {
                    if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                  >> 0xaU)))) {
                        if ((1U == (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                             >> 5U)))) {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_data 
                                = (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtime_reg);
                        } else if ((0U == (0x1fU & 
                                           (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                            >> 5U)))) {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_data 
                                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT____VdfgExtracted_h5cf9f284__0;
                        } else if ((2U == (0x1fU & 
                                           (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                            >> 5U)))) {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_data 
                                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT____VdfgExtracted_h9d6c5aa2__0;
                        }
                    }
                }
            }
        } else if ((0x4000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
            if ((0x2000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                if ((0x1000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                    if ((0x800U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                        if ((0x400U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                            if ((0x200U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                              >> 8U)))) {
                                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_data 
                                        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ipic2csr_rdata;
                                }
                            }
                        }
                    } else if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                         >> 0xaU)))) {
                        if ((1U != (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                             >> 5U)))) {
                            if ((0U == (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                 >> 5U)))) {
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_data 
                                    = (IData)((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_hi_ff 
                                               >> 0x18U));
                            } else if ((2U == (0x1fU 
                                               & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                  >> 5U)))) {
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_data 
                                    = (IData)((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_hi_ff 
                                               >> 0x18U));
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                     >> 0xbU)))) {
                    if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                  >> 0xaU)))) {
                        if ((1U != (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                             >> 5U)))) {
                            if ((0U == (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                 >> 5U)))) {
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_data 
                                    = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT____VdfgExtracted_h5cf9f284__0;
                            } else if ((2U == (0x1fU 
                                               & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                  >> 5U)))) {
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_data 
                                    = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT____VdfgExtracted_h9d6c5aa2__0;
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x8000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
        if ((0x4000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
            if ((0x2000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                if ((0x1000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                    if ((0x800U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                        if ((0x400U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                            if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                          >> 9U)))) {
                                if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                              >> 8U)))) {
                                    if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                  >> 7U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                    >> 6U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                     >> 5U)))) {
                                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_data 
                                                    = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x400U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                        if ((0x200U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                            if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                          >> 8U)))) {
                                if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                              >> 7U)))) {
                                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_data 
                                        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_rd_data;
                                }
                            }
                        } else if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                             >> 8U)))) {
                            if ((0x80U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                              >> 6U)))) {
                                    if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                  >> 5U)))) {
                                        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_data 
                                            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata;
                                    }
                                }
                            } else if ((0x40U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                              >> 5U)))) {
                                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_data 
                                        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata;
                                }
                            } else {
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_data 
                                    = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata;
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x4000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
        if ((0x2000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
            if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                          >> 0xcU)))) {
                if ((0x800U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                    if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                  >> 0xaU)))) {
                        if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                      >> 9U)))) {
                            if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                          >> 8U)))) {
                                if ((0x80U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                    if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                    >> 5U)))) {
                                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_data 
                                                = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mip;
                                        }
                                    }
                                } else {
                                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_data 
                                        = ((0x40U & 
                                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])
                                            ? ((0x20U 
                                                & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])
                                                ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtval_ff
                                                : (
                                                   ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_i_ff) 
                                                    << 0x1fU) 
                                                   | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_ec_ff)))
                                            : ((0x20U 
                                                & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])
                                                ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mepc_ff 
                                                   << 1U)
                                                : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mscratch_ff));
                                }
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                     >> 0xaU)))) {
                    if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                  >> 9U)))) {
                        if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                      >> 8U)))) {
                            if ((0x80U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])) {
                                if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                              >> 6U)))) {
                                    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_data 
                                        = ((0x20U & 
                                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])
                                            ? ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtvec_base 
                                                << 6U) 
                                               | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtvec_mode_ff))
                                            : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie);
                                }
                            } else if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                 >> 6U)))) {
                                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_data 
                                    = ((0x20U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])
                                        ? 0x40001104U
                                        : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus);
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_fsm_curr) {
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_fsm_curr) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_fsm_next 
                = (1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__lsu_rdy)));
        }
    } else {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_fsm_next 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__dmem_req_vd;
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_code 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__brkpt_hw)
            ? 3U : (0xfU & ((0x10U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])
                             ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U]
                             : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__lsu_exc_req)
                                 ? ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_resp))
                                     ? (((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff)) 
                                         | ((4U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff)) 
                                            | ((2U 
                                                == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff)) 
                                               | ((5U 
                                                   == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff)) 
                                                  | (3U 
                                                     == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff))))))
                                         ? 5U : (((6U 
                                                   == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff)) 
                                                  | ((7U 
                                                      == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff)) 
                                                     | (8U 
                                                        == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff))))
                                                  ? 7U
                                                  : 0U))
                                     : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_exc_hwbrk)
                                         ? 3U : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__dmem_addr_mslgn_l)
                                                  ? 4U
                                                  : 
                                                 ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__dmem_addr_mslgn_s)
                                                   ? 6U
                                                   : 0U))))
                                 : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_rw_exc)
                                     ? 2U : 0xbU)))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_exc_req 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd_ff) 
           & ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
               >> 4U) | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__lsu_exc_req) 
                         | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_rw_exc) 
                            | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__brkpt_hw)))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_req_en 
        = ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_resp)) 
           ^ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_req));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_rd 
        = ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h2097eaa3__0)) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_req));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_wr 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h2097eaa3__0) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_req));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__divider_up = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__control_up = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimehi_up = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimelo_up = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmphi_up = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmplo_up = 0U;
    if ((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_req) 
          & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__dmem_req_valid)) 
         & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h2097eaa3__0))) {
        if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0 
                      >> 4U)))) {
            if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0 
                          >> 3U)))) {
                if ((4U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0)) {
                    if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0 
                                  >> 1U)))) {
                        if ((1U & (~ vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0))) {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__divider_up = 1U;
                        }
                    }
                }
                if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0 
                              >> 2U)))) {
                    if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0 
                                  >> 1U)))) {
                        if ((1U & (~ vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0))) {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__control_up = 1U;
                        }
                    }
                }
            }
            if ((8U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0)) {
                if ((4U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0)) {
                    if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0 
                                  >> 1U)))) {
                        if ((1U & (~ vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0))) {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimehi_up = 1U;
                        }
                    }
                }
                if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0 
                              >> 2U)))) {
                    if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0 
                                  >> 1U)))) {
                        if ((1U & (~ vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0))) {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimelo_up = 1U;
                        }
                    }
                }
            }
        }
        if ((0x10U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0)) {
            if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0 
                          >> 3U)))) {
                if ((4U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0)) {
                    if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0 
                                  >> 1U)))) {
                        if ((1U & (~ vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0))) {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmphi_up = 1U;
                        }
                    }
                }
                if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0 
                              >> 2U)))) {
                    if ((1U & (~ (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0 
                                  >> 1U)))) {
                        if ((1U & (~ vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0))) {
                            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmplo_up = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT____VdfgExtracted_h136b417e__0 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_req) 
           | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_full));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_new[1U] 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_req)
            ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0
            : 0U);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_new[2U] 
        = ((7U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_new[2U]) 
           | (0xfU & (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h2097eaa3__0) 
                       & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_req)) 
                      << 3U)));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_width__22__dmem_width 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_dmem_width;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_width__22__tmp 
        = ((0U == (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_width__22__dmem_width))
            ? 0U : ((1U == (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_width__22__dmem_width))
                     ? 1U : ((2U == (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_width__22__dmem_width))
                              ? 2U : 0U)));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_width__22__Vfuncout 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_width__22__tmp;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_new[2U] 
        = ((8U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_new[2U]) 
           | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_req)
               ? (0xfU & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_width__22__Vfuncout))
               : 0U));
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__dmem_wdata 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__mprf2exu_rs2_data;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__dmem_width 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_dmem_width;
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__dmem_addr 
        = (3U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0);
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__tmp = 0U;
    if ((0U == (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__dmem_width))) {
        __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__tmp 
            = ((2U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__dmem_addr))
                ? ((1U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__dmem_addr))
                    ? ((0xffffffU & __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__tmp) 
                       | (__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__dmem_wdata 
                          << 0x18U)) : ((0xff00ffffU 
                                         & __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__tmp) 
                                        | (0xff0000U 
                                           & (__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__dmem_wdata 
                                              << 0x10U))))
                : ((1U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__dmem_addr))
                    ? ((0xffff00ffU & __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__tmp) 
                       | (0xff00U & (__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__dmem_wdata 
                                     << 8U))) : ((0xffffff00U 
                                                  & __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__tmp) 
                                                 | (0xffU 
                                                    & __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__dmem_wdata))));
    } else if ((1U == (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__dmem_width))) {
        if ((2U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__dmem_addr))) {
            if ((2U & (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__dmem_addr))) {
                __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__tmp 
                    = ((0xffffU & __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__tmp) 
                       | (__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__dmem_wdata 
                          << 0x10U));
            }
        } else {
            __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__tmp 
                = ((0xffff0000U & __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__tmp) 
                   | (0xffffU & __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__dmem_wdata));
        }
    } else if ((2U == (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__dmem_width))) {
        __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__tmp 
            = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__dmem_wdata;
    }
    __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__Vfuncout 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__tmp;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_new[0U] 
        = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_req) 
            & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h2097eaa3__0))
            ? __Vfunc_scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__scr1_conv_mem2ahb_wdata__23__Vfuncout
            : 0U);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2mprf_rd_data 
        = ((0x8000000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U])
            ? ((0x4000000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U])
                ? ((0x2000000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U])
                    ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_res
                    : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_data)
                : ((0x2000000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U])
                    ? ((8U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff))
                        ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_rdata
                        : ((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff))
                            ? ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff))
                                ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_rdata
                                : ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff))
                                    ? (0xffffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_rdata)
                                    : (0xffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_rdata)))
                            : ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff))
                                ? ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff))
                                    ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_rdata
                                    : (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_rdata 
                                                       >> 0xfU)))) 
                                        << 0x10U) | 
                                       (0xffffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_rdata)))
                                : ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_rdata 
                                                       >> 7U)))) 
                                        << 8U) | (0xffU 
                                                  & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_rdata))
                                    : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_rdata))))
                    : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__inc_pc))
            : ((0x4000000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U])
                ? ((0x2000000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U])
                    ? ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                        << 0x1bU) | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                     >> 5U)) : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0)
                : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_res));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_data 
        = ((1U == (3U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                         >> 0x1cU))) ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_w_data
            : ((2U == (3U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                             >> 0x1cU))) ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_w_data 
                                            | vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_data)
                : ((3U == (3U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                 >> 0x1cU))) ? ((~ vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_w_data) 
                                                & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_data)
                    : 0U)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_exc_req_qlfy 
        = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd_ff)
             ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_exc_req)
             : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_exc_req_ff)) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmp_new 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmp_reg;
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmplo_up) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmp_new 
            = ((0xffffffff00000000ULL & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmp_new) 
               | (IData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__mprf2exu_rs2_data)));
    }
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmphi_up) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmp_new 
            = ((0xffffffffULL & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmp_new) 
               | ((QData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__mprf2exu_rs2_data)) 
                  << 0x20U));
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_rd = 0U;
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__fsm) {
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__fsm) {
            if (vlSelf->scr1_top_tb_ahb__DOT__dmem_hready) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_rd 
                    = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT____VdfgExtracted_h136b417e__0) 
                       & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__dmem_hresp)));
            }
        } else {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_rd = 0U;
        }
    } else if (vlSelf->scr1_top_tb_ahb__DOT__dmem_hready) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_rd 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT____VdfgExtracted_h136b417e__0;
    }
    __Vtableidx16 = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT____VdfgExtracted_h136b417e__0) 
                      << 3U) | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__dmem_hresp) 
                                 << 2U) | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__dmem_hready) 
                                            << 1U) 
                                           | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__fsm))));
    vlSelf->scr1_top_tb_ahb__DOT__dmem_htrans = Vscr1_top_tb_ahb__ConstPool__TABLE_hc98d3354_0
        [__Vtableidx16];
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_full) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[0U] 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_r[0U];
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[1U] 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_r[1U];
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[2U] 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_r[2U];
    } else {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[0U] 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_new[0U];
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[1U] 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_new[1U];
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[2U] 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_new[2U];
    }
    if ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_upd))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_lo_next 
            = (0xffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_data);
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_hi_next 
            = (0xffffffffffffffULL & (((QData)((IData)(
                                                       (0xffffffffULL 
                                                        & ((1ULL 
                                                            + vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_hi_ff) 
                                                           >> 0x18U)))) 
                                       << 0x18U) | (QData)((IData)(
                                                                   (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_data 
                                                                    >> 8U)))));
    } else {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_lo_next 
            = (0xffU & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_lo_ff) 
                        + (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten_cy_ff)));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_hi_next 
            = (0xffffffffffffffULL & ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_upd))
                                       ? (((QData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_data)) 
                                           << 0x18U) 
                                          | (QData)((IData)(
                                                            (0xffffffU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_hi_ff))))))
                                       : (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_hi_ff 
                                          + (QData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_hi_inc)))));
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_except 
        = ((3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state)) 
           & ((~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__brkpt_hw) 
                  | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__brkpt_qlfy))) 
              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_exc_req_qlfy)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__time_cmp_flag 
        = (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtime_reg 
           >= (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmphi_up) 
                | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmplo_up))
                ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmp_new
                : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmp_reg));
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_be_form__29__hsize 
        = (3U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[2U]);
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_be_form__29__offset 
        = (3U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[1U]);
    if ((0U == (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_be_form__29__hsize))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_be_form__Vstatic__tmp 
            = (0xfU & ((IData)(1U) << (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_be_form__29__offset)));
    } else if ((1U == (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_be_form__29__hsize))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_be_form__Vstatic__tmp 
            = (0xfU & ((IData)(3U) << (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_be_form__29__offset)));
    } else if ((2U == (IData)(__Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_be_form__29__hsize))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_be_form__Vstatic__tmp = 0xfU;
    }
    __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_be_form__29__Vfuncout 
        = vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_be_form__Vstatic__tmp;
    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_be 
        = __Vfunc_scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_be_form__29__Vfuncout;
    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_wr_hazard 
        = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_wr) 
            & ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[1U] 
                >> 2U) == (vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_addr 
                           >> 2U))) ? ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_be) 
                                       & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_be))
            : 0U);
}

extern const VlUnpacked<CData/*1:0*/, 1024> Vscr1_top_tb_ahb__ConstPool__TABLE_hf7c4cd53_0;

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_comb__TOP__35(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_comb__TOP__35\n"); );
    // Init
    SData/*9:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*3:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_rdy 
        = (1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__lsu_req)
                  ? ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__lsu_rdy) 
                     | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__lsu_exc_req))
                  : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_vd)
                      ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_rdy)
                      : (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_mstatus_mie_up)))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_take_exc 
        = ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__dbg_halted)) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_exc_req));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2mprf_w_req 
        = ((0U != (7U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                         >> 0x19U))) & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd_ff) 
                                        & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_exc_req)) 
                                           & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_no_commit)) 
                                              & ((6U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                                      >> 0x19U)))
                                                  ? 
                                                 (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__csr_access_ff))
                                                  : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_rdy))))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__instret 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd_ff) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_rdy));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_busy 
        = ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_rdy)) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd_ff));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_exc 
        = ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_no_commit)) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_take_exc));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h136f2fbe__0 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__instret) 
           & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h1024b93b__0) 
              & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_haa489fa9__0) 
                 & (0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_count_ff)))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_lo_inc 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten_ir_ff) 
           & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_exc_req)) 
              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__instret)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_sstep 
        = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
            >> 1U) & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__instret) 
                      & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_take_irq 
        = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_ip_ie) 
            & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_mie_ff)) 
           & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_busy)) 
              & ((~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                     >> 5U)) & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__dbg_halted)))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_skip_next 
        = (1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_wr_req)
                  ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data 
                     >> 9U) : ((~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h136f2fbe__0) 
                                   & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_skip_ff))) 
                               & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_skip_ff))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_count_next 
        = (0x3fffU & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_upd)
                       ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data 
                          >> 0xaU) : (((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_skip_ff)) 
                                       & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h136f2fbe__0))
                                       ? ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_count_ff) 
                                          - (IData)(1U))
                                       : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_count_ff))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_hi_inc 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_lo_inc) 
           & (0xffU == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_lo_ff)));
    if ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_upd))) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_lo_next 
            = (0xffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_data);
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_hi_next 
            = (0xffffffffffffffULL & (((QData)((IData)(
                                                       (0xffffffffULL 
                                                        & ((1ULL 
                                                            + vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_hi_ff) 
                                                           >> 0x18U)))) 
                                       << 0x18U) | (QData)((IData)(
                                                                   (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_data 
                                                                    >> 8U)))));
    } else {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_lo_next 
            = (0xffU & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_lo_ff) 
                        + (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_lo_inc)));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_hi_next 
            = (0xffffffffffffffULL & ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_upd))
                                       ? (((QData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_data)) 
                                           << 0x18U) 
                                          | (QData)((IData)(
                                                            (0xffffffU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_hi_ff))))))
                                       : (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_hi_ff 
                                          + (QData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_hi_inc)))));
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_halt_ack 
        = (1U & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__dbg_halted)) 
                 & ((~ (IData)((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__halt_req_timeout_cnt)))) 
                    | ((~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_busy) 
                           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff))) 
                       & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_sstep) 
                          | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_ebreak) 
                             | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_except) 
                                | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_halt_req) 
                                   | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_tmreq)))))))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_update 
        = ((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__init_pc) 
             | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__instret) 
                | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_take_irq))) 
            & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT____VdfgTmp_h76e0b655__0)) 
           | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2mprf_w_req));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_irq 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_take_irq) 
           & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_take_exc)) 
              & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_no_commit))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__init_pc)
            ? 0xb000U : ((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_take_exc) 
                           | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_take_irq)) 
                          | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_mret_instr))
                          ? (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_mret_instr) 
                              & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_take_irq)))
                              ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mepc_ff 
                                 << 1U) : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtvec_mode_ff)
                                            ? ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_take_exc)
                                                ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtvec_base 
                                                   << 6U)
                                                : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_eirq_pnd_en)
                                                    ? 
                                                   (0x2cU 
                                                    | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtvec_base 
                                                       << 6U))
                                                    : 
                                                   ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_sirq_pnd_en)
                                                     ? 
                                                    (0xcU 
                                                     | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtvec_base 
                                                        << 6U))
                                                     : 
                                                    ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_tirq_pnd_en)
                                                      ? 
                                                     (0x1cU 
                                                      | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtvec_base 
                                                         << 6U))
                                                      : 
                                                     (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtvec_base 
                                                      << 6U)))))
                                            : (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtvec_base 
                                               << 6U)))
                          : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__dbg_run_start_npbuf)
                              ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_ff
                              : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_run_start_ff)
                                  ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_ff
                                  : ((0x200000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U])
                                      ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__inc_pc
                                      : (0xfffffffeU 
                                         & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0))))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__init_pc) 
           | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_take_irq) 
              | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_take_exc) 
                 | (((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_mstatus_mie_up)) 
                     & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_mret_instr)) 
                    | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd_ff) 
                        & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                           >> 0x15U)) | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_run_start_ff) 
                                         | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__dbg_run_start_npbuf) 
                                            | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd_ff) 
                                               & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__jb_taken)))))))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_update_next 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff) 
           & ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state))
               ? ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state))
                   ? ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_update)) 
                      & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_halt_ack))
                   : ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_update)) 
                      & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_trans)))
               : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state) 
                  & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_update)) 
                     & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_halt_ack)))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT____VdfgTmp_he3db9a6d__0 
        = ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_halt_ack)) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_halt_req));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_halt_pnd 
        = ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_halt_ack)) 
           & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_trans) 
              | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dm_dhalt_req)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_halt_req 
        = ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_halted_ff)) 
           & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_ip_ie)) 
              & ((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd_ff) 
                   & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                      >> 0x14U)) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_run_start_ff)) 
                 & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_no_commit)) 
                    & (~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_halt_ack) 
                          | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                             >> 1U)))))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_i_next 
        = (1U & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_exc)) 
                 & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_irq) 
                    | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_upd)
                        ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_data 
                           >> 0x1fU) : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_i_ff)))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_mie_next 
        = (1U & ((~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_exc) 
                     | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_irq))) 
                 & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_mret)
                     ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_mpie_ff)
                     : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_upd)
                         ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_data 
                            >> 3U) : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_mie_ff)))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_mpie_next 
        = (1U & (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_exc) 
                  | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_irq))
                  ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_mie_ff)
                  : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_mret) 
                     | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_upd)
                         ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_data 
                            >> 7U) : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_mpie_ff)))));
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_exc) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_ec_next 
            = (0xfU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_code));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mepc_next 
            = (0x7fffffffU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_ff 
                              >> 1U));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtval_next 
            = ((8U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_code))
                ? 0U : ((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_code))
                         ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0
                         : ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_code))
                             ? ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_code))
                                 ? ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2exu_i_x_req)
                                     ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_ff
                                     : ((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_ldst_hit))
                                         ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0
                                         : 0U)) : (
                                                   (0x10U 
                                                    & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])
                                                    ? 
                                                   ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                                     << 0x1bU) 
                                                    | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                       >> 5U))
                                                    : 
                                                   (0x73U 
                                                    | ((0xfff00000U 
                                                        & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                           << 0xfU)) 
                                                       | ((0xf8000U 
                                                           & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U]) 
                                                          | ((0x7000U 
                                                              & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                                 >> 5U)) 
                                                             | (0xf80U 
                                                                & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                                                   << 2U))))))))
                             : ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_code))
                                 ? ((0x400U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U])
                                     ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__inc_pc
                                     : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_ff)
                                 : 0U))));
    } else {
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_irq) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_ec_next 
                = (0xfU & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_eirq_pnd_en)
                            ? 0xbU : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_sirq_pnd_en)
                                       ? 3U : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_tirq_pnd_en)
                                                ? 7U
                                                : 0xbU))));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtval_next = 0U;
        } else {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_ec_next 
                = (0xfU & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_upd)
                            ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_data
                            : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_ec_ff)));
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtval_next 
                = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtval_upd)
                    ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_data
                    : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtval_ff);
        }
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mepc_next 
            = (0x7fffffffU & (((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_mret_instr)) 
                               & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_irq))
                               ? (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd_ff)
                                    ? ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__jb_taken)
                                        ? (0xfffffffeU 
                                           & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0)
                                        : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__inc_pc)
                                    : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_ff) 
                                  >> 1U) : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mepc_upd)
                                             ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_data 
                                                >> 1U)
                                             : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mepc_ff)));
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_discard_cnt_upd 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req) 
           | ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_resp)) 
              | ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_resp)) 
                 & (0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_discard_cnt)))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__halt_req_timeout_cnt_next 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__dbg_halt2run)
            ? 0x3fU : (0x3fU & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__halt_req_timeout_cnt) 
                                - (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT____VdfgTmp_he3db9a6d__0))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_trans_next 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff) 
           & ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state))
               ? ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state))
                   ? ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_update)
                       ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_trans)
                       : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_halt_pnd))
                   : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_update)
                       ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_trans)
                       : ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_trans)) 
                          & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_req_ff) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT____VdfgTmp_h9a92a6aa__0)))))
               : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state) 
                  & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_update)
                      ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_trans)
                      : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_halt_pnd)))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_barrier 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_halted_ff) 
           | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_halt_req) 
              | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_run_start_ff) 
                 | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__dbg_halted) 
                    | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_halt_ack) 
                       | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__dbg_run_start_npbuf))))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__stop_fetch 
        = (1U & (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                  >> 4U) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_halt_req)));
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__new_pc_unaligned_next 
            = (1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc 
                     >> 1U));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_next 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_addr 
            = (0xfffffffcU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc);
    } else {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__new_pc_unaligned_next 
            = (1U & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_vd)) 
                     & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__new_pc_unaligned_ff)));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_next 
            = ((0x40U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__inc_pc 
                         ^ vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_ff))
                ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__inc_pc
                : ((0xffffffc0U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_ff) 
                   | (0x3fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__inc_pc)));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_addr 
            = (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_addr_ff 
               << 2U);
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_full)
            ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_r
            : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_addr);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_req_ack 
        = (1U & (((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__fsm)) 
                  | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__fsm) 
                     & (1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_resp)))) 
                 & ((0x480000U == (0xffff0000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_addr)) 
                    | (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_full)))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2ifu_rdy 
        = ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_barrier)) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_rdy));
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__ifu_fsm_curr) {
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__ifu_fsm_curr) {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__ifu_fsm_next 
                = (1U & (~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__stop_fetch) 
                            | ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req)) 
                               & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_er_discard_pnd)))));
        }
    } else {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__ifu_fsm_next 
            = ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__stop_fetch)) 
               & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req));
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_flush_req 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req) 
           | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__stop_fetch));
    vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_wr_hazard 
        = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_wr) 
            & ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo 
                >> 2U) == (vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_addr 
                           >> 2U))) ? ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_be) 
                                       & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_be))
            : 0U);
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__ifu_handshake_done 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__hdu2ifu_pbuf_vd) 
           & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2ifu_rdy) 
              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff)));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_en 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2ifu_rdy) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_vd));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wr_en 
        = ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_flush_req)) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_vd));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_addr_next 
        = ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_fsm_curr))
            ? 0U : (7U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_addr_ff) 
                          + ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_fsm_curr)) 
                             & ((~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_exc_req_qlfy) 
                                    | (7U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_addr_ff)))) 
                                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__ifu_handshake_done))))));
    __Vtableidx6 = (((((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state)) 
                       & (3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state_next)))
                       ? 1U : 0U) << 8U) | ((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__ifu_handshake_done) 
                                              & (7U 
                                                 == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_addr_ff))) 
                                             << 7U) 
                                            | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_exc_req_qlfy) 
                                                << 6U) 
                                               | (((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_exc_req_qlfy) 
                                                     | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__ifu_handshake_done))
                                                     ? 3U
                                                     : 2U) 
                                                   << 4U) 
                                                  | ((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__dbg_halted)
                                                        ? 0U
                                                        : 3U) 
                                                      << 2U) 
                                                     | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_fsm_curr))))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_fsm_next 
        = Vscr1_top_tb_ahb__ConstPool__TABLE_hf7c4cd53_0
        [__Vtableidx6];
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rd_size 
        = (((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_is_empty)) 
            & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_en))
            ? ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rd_hword)
                ? 1U : 2U) : 0U);
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_flush_req) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr_next = 0U;
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr_next = 0U;
    } else {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr_next 
            = (7U & ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wr_size))
                      ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr)
                      : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr) 
                         + ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wr_size))
                             ? 2U : 1U))));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr_next 
            = (7U & ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rd_size))
                      ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr)
                      : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr) 
                         + ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rd_hword)
                             ? 1U : 2U))));
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_req 
        = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req) 
            & ((~ (IData)((7U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_pnd_txns_cnt)))) 
               & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__stop_fetch)))) 
           | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__ifu_fsm_curr) 
              & ((~ (IData)((7U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_pnd_txns_cnt)))) 
                 & ((3U & (((IData)(4U) - ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr) 
                                           - (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr_next))) 
                           >> 1U)) > (7U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_pnd_txns_cnt) 
                                            - (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_discard_cnt)))))));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_imem_req = 0U;
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_imem_req = 0U;
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__fsm) {
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__fsm) {
            if ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_resp))) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_imem_req 
                    = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_req) 
                       & (0x480000U == (0xffff0000U 
                                        & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_addr)));
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_imem_req 
                    = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_req) 
                       & (0x480000U != (0xffff0000U 
                                        & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_addr)));
            }
        }
    } else {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_imem_req 
            = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_req) 
               & (0x480000U == (0xffff0000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_addr)));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_imem_req 
            = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_req) 
               & (0x480000U != (0xffff0000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_addr)));
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_handshake_done 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_req) 
           & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_req_ack));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__imem_req_en 
        = ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_imem_resp)) 
           ^ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_imem_req));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT____VdfgExtracted_h136b417e__3 
        = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_imem_req) 
           | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_full));
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_pnd_txns_cnt_next 
        = (7U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_pnd_txns_cnt) 
                 + ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_handshake_done) 
                    - (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_received))));
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_addr_next 
            = (0x3fffffffU & ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc 
                               >> 2U) + (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_handshake_done)));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_discard_cnt_next 
            = (7U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_pnd_txns_cnt_next) 
                     - (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_handshake_done)));
    } else {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_addr_next 
            = (0x3fffffffU & ((0xfU == (0xfU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_addr_ff))
                               ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_addr_ff 
                                  + (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_handshake_done))
                               : ((0x3ffffff0U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_addr_ff) 
                                  | (0xfU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_addr_ff 
                                             + (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_handshake_done))))));
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_discard_cnt_next 
            = (7U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_er_discard_pnd)
                      ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_pnd_txns_cnt_next)
                      : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_discard_cnt) 
                         - (IData)(1U))));
    }
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_rd = 0U;
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__fsm) {
        if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__fsm) {
            if (vlSelf->scr1_top_tb_ahb__DOT__imem_hready) {
                vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_rd 
                    = ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT____VdfgExtracted_h136b417e__3) 
                       & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__imem_hresp)));
            }
        } else {
            vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_rd = 0U;
        }
    } else if (vlSelf->scr1_top_tb_ahb__DOT__imem_hready) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_rd 
            = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT____VdfgExtracted_h136b417e__3;
    }
    __Vtableidx15 = (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT____VdfgExtracted_h136b417e__3) 
                      << 3U) | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__imem_hresp) 
                                 << 2U) | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__imem_hready) 
                                            << 1U) 
                                           | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__fsm))));
    vlSelf->scr1_top_tb_ahb__DOT__imem_htrans = Vscr1_top_tb_ahb__ConstPool__TABLE_hc98d3354_0
        [__Vtableidx15];
}

VL_INLINE_OPT void Vscr1_top_tb_ahb___024root___nba_comb__TOP__36(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___nba_comb__TOP__36\n"); );
    // Body
    vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtime_new 
        = vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtime_reg;
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__time_posedge) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtime_new 
            = (1ULL + vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtime_reg);
    }
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimelo_up) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtime_new 
            = ((0xffffffff00000000ULL & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtime_new) 
               | (IData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__mprf2exu_rs2_data)));
    }
    if (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimehi_up) {
        vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtime_new 
            = ((0xffffffffULL & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtime_new) 
               | ((QData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__mprf2exu_rs2_data)) 
                  << 0x20U));
    }
}

void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__0(Vscr1_top_tb_ahb___024root* vlSelf);
void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__1(Vscr1_top_tb_ahb___024root* vlSelf);
void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__2(Vscr1_top_tb_ahb___024root* vlSelf);
void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__3(Vscr1_top_tb_ahb___024root* vlSelf);
void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__4(Vscr1_top_tb_ahb___024root* vlSelf);
void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__5(Vscr1_top_tb_ahb___024root* vlSelf);
void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__6(Vscr1_top_tb_ahb___024root* vlSelf);
void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__7(Vscr1_top_tb_ahb___024root* vlSelf);
void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__8(Vscr1_top_tb_ahb___024root* vlSelf);
void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__9(Vscr1_top_tb_ahb___024root* vlSelf);
void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__10(Vscr1_top_tb_ahb___024root* vlSelf);
void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__11(Vscr1_top_tb_ahb___024root* vlSelf);
void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__12(Vscr1_top_tb_ahb___024root* vlSelf);
void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__13(Vscr1_top_tb_ahb___024root* vlSelf);
void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__14(Vscr1_top_tb_ahb___024root* vlSelf);
void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__15(Vscr1_top_tb_ahb___024root* vlSelf);
void Vscr1_top_tb_ahb___024root___nba_comb__TOP__0(Vscr1_top_tb_ahb___024root* vlSelf);
void Vscr1_top_tb_ahb___024root___nba_comb__TOP__1(Vscr1_top_tb_ahb___024root* vlSelf);
void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__16(Vscr1_top_tb_ahb___024root* vlSelf);
void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__17(Vscr1_top_tb_ahb___024root* vlSelf);
void Vscr1_top_tb_ahb___024root___nba_comb__TOP__2(Vscr1_top_tb_ahb___024root* vlSelf);
void Vscr1_top_tb_ahb___024root___nba_comb__TOP__3(Vscr1_top_tb_ahb___024root* vlSelf);
void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__18(Vscr1_top_tb_ahb___024root* vlSelf);
void Vscr1_top_tb_ahb___024root___nba_comb__TOP__4(Vscr1_top_tb_ahb___024root* vlSelf);
void Vscr1_top_tb_ahb___024root___nba_comb__TOP__5(Vscr1_top_tb_ahb___024root* vlSelf);
void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__19(Vscr1_top_tb_ahb___024root* vlSelf);
void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__20(Vscr1_top_tb_ahb___024root* vlSelf);
void Vscr1_top_tb_ahb___024root___nba_comb__TOP__6(Vscr1_top_tb_ahb___024root* vlSelf);
void Vscr1_top_tb_ahb___024root___nba_comb__TOP__7(Vscr1_top_tb_ahb___024root* vlSelf);
void Vscr1_top_tb_ahb___024root___nba_comb__TOP__8(Vscr1_top_tb_ahb___024root* vlSelf);
void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__21(Vscr1_top_tb_ahb___024root* vlSelf);
void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__22(Vscr1_top_tb_ahb___024root* vlSelf);
void Vscr1_top_tb_ahb___024root___nba_sequent__TOP__23(Vscr1_top_tb_ahb___024root* vlSelf);
void Vscr1_top_tb_ahb___024root___nba_comb__TOP__9(Vscr1_top_tb_ahb___024root* vlSelf);

void Vscr1_top_tb_ahb___024root___eval_nba(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___eval_nba\n"); );
    // Body
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_sequent__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_sequent__TOP__9(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_sequent__TOP__10(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_sequent__TOP__11(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_sequent__TOP__12(vlSelf);
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_sequent__TOP__13(vlSelf);
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_sequent__TOP__14(vlSelf);
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_sequent__TOP__15(vlSelf);
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
    }
    if ((0xbULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
    }
    if ((9ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_sequent__TOP__16(vlSelf);
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_sequent__TOP__17(vlSelf);
    }
    if ((0x106ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x104ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_comb__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_sequent__TOP__18(vlSelf);
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
    }
    if ((0x18ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((0x1c4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_comb__TOP__5(vlSelf);
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_sequent__TOP__19(vlSelf);
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_sequent__TOP__20(vlSelf);
    }
    if ((0x14ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_comb__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
    }
    if ((0x19ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_comb__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
    }
    if ((0xaULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_comb__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_sequent__TOP__21(vlSelf);
        vlSelf->__Vm_traceActivity[0x16U] = 1U;
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_sequent__TOP__22(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_sequent__TOP__23(vlSelf);
    }
    if ((0x105ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_comb__TOP__9(vlSelf);
        vlSelf->__Vm_traceActivity[0x17U] = 1U;
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_sequent__TOP__24(vlSelf);
        vlSelf->__Vm_traceActivity[0x18U] = 1U;
    }
    if ((0x104ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_comb__TOP__10(vlSelf);
        vlSelf->__Vm_traceActivity[0x19U] = 1U;
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_sequent__TOP__25(vlSelf);
        vlSelf->__Vm_traceActivity[0x1aU] = 1U;
    }
    if ((0x15ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_comb__TOP__11(vlSelf);
    }
    if ((0x114ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_comb__TOP__12(vlSelf);
        vlSelf->__Vm_traceActivity[0x1bU] = 1U;
    }
    if ((0xbULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_comb__TOP__13(vlSelf);
        vlSelf->__Vm_traceActivity[0x1cU] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_sequent__TOP__26(vlSelf);
        vlSelf->__Vm_traceActivity[0x1dU] = 1U;
    }
    if ((9ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_comb__TOP__14(vlSelf);
    }
    if ((0x808ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_comb__TOP__15(vlSelf);
    }
    if ((0x115ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_comb__TOP__16(vlSelf);
        vlSelf->__Vm_traceActivity[0x1eU] = 1U;
    }
    if ((0x106ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_comb__TOP__17(vlSelf);
    }
    if ((0x14ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_comb__TOP__18(vlSelf);
    }
    if ((0xdULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_comb__TOP__19(vlSelf);
    }
    if ((0xcULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_comb__TOP__20(vlSelf);
    }
    if ((0x1001ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_comb__TOP__21(vlSelf);
    }
    if ((0x1080ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_comb__TOP__22(vlSelf);
        vlSelf->__Vm_traceActivity[0x1fU] = 1U;
    }
    if ((0xc0ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_comb__TOP__23(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_comb__TOP__24(vlSelf);
        vlSelf->__Vm_traceActivity[0x20U] = 1U;
    }
    if ((0xaULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_comb__TOP__25(vlSelf);
        vlSelf->__Vm_traceActivity[0x21U] = 1U;
    }
    if ((0x1dULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_comb__TOP__26(vlSelf);
    }
    if ((0x11cULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_comb__TOP__27(vlSelf);
        vlSelf->__Vm_traceActivity[0x22U] = 1U;
    }
    if ((0x1cULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_comb__TOP__28(vlSelf);
    }
    if ((0xbULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_comb__TOP__29(vlSelf);
    }
    if ((0x11dULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_comb__TOP__30(vlSelf);
    }
    if ((0x11eULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_comb__TOP__31(vlSelf);
    }
    if ((0x1dULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_comb__TOP__32(vlSelf);
        vlSelf->__Vm_traceActivity[0x23U] = 1U;
    }
    if ((0x11dULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_comb__TOP__33(vlSelf);
        vlSelf->__Vm_traceActivity[0x24U] = 1U;
    }
    if ((0x1fULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_comb__TOP__34(vlSelf);
        vlSelf->__Vm_traceActivity[0x25U] = 1U;
    }
    if ((0x11fULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_comb__TOP__35(vlSelf);
        vlSelf->__Vm_traceActivity[0x26U] = 1U;
    }
    if ((0x81fULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_top_tb_ahb___024root___nba_comb__TOP__36(vlSelf);
    }
}

void Vscr1_top_tb_ahb___024root___eval_triggers__act(Vscr1_top_tb_ahb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vscr1_top_tb_ahb___024root___dump_triggers__act(Vscr1_top_tb_ahb___024root* vlSelf);
#endif  // VL_DEBUG
void Vscr1_top_tb_ahb___024root___timing_resume(Vscr1_top_tb_ahb___024root* vlSelf);
void Vscr1_top_tb_ahb___024root___eval_act(Vscr1_top_tb_ahb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vscr1_top_tb_ahb___024root___dump_triggers__nba(Vscr1_top_tb_ahb___024root* vlSelf);
#endif  // VL_DEBUG

void Vscr1_top_tb_ahb___024root___eval(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___eval\n"); );
    // Init
    VlTriggerVec<13> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vscr1_top_tb_ahb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vscr1_top_tb_ahb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/zeinab/scr1/src/tb/scr1_top_tb_ahb.sv", 12, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vscr1_top_tb_ahb___024root___timing_resume(vlSelf);
                Vscr1_top_tb_ahb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vscr1_top_tb_ahb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/zeinab/scr1/src/tb/scr1_top_tb_ahb.sv", 12, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vscr1_top_tb_ahb___024root___eval_nba(vlSelf);
        }
    }
}

void Vscr1_top_tb_ahb___024root___timing_resume(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___timing_resume\n"); );
    // Body
    if ((0x1000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vscr1_top_tb_ahb___024root___eval_debug_assertions(Vscr1_top_tb_ahb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG

std::string VL_TO_STRING(const Vscr1_top_tb_ahb_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__type_scr1_ireg_name_s__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{INT_00_ZERO:" + VL_TO_STRING(obj.__PVT__INT_00_ZERO);
        out += ", INT_01_RA:" + VL_TO_STRING(obj.__PVT__INT_01_RA);
        out += ", INT_02_SP:" + VL_TO_STRING(obj.__PVT__INT_02_SP);
        out += ", INT_03_GP:" + VL_TO_STRING(obj.__PVT__INT_03_GP);
        out += ", INT_04_TP:" + VL_TO_STRING(obj.__PVT__INT_04_TP);
        out += ", INT_05_T0:" + VL_TO_STRING(obj.__PVT__INT_05_T0);
        out += ", INT_06_T1:" + VL_TO_STRING(obj.__PVT__INT_06_T1);
        out += ", INT_07_T2:" + VL_TO_STRING(obj.__PVT__INT_07_T2);
        out += ", INT_08_S0:" + VL_TO_STRING(obj.__PVT__INT_08_S0);
        out += ", INT_09_S1:" + VL_TO_STRING(obj.__PVT__INT_09_S1);
        out += ", INT_10_A0:" + VL_TO_STRING(obj.__PVT__INT_10_A0);
        out += ", INT_11_A1:" + VL_TO_STRING(obj.__PVT__INT_11_A1);
        out += ", INT_12_A2:" + VL_TO_STRING(obj.__PVT__INT_12_A2);
        out += ", INT_13_A3:" + VL_TO_STRING(obj.__PVT__INT_13_A3);
        out += ", INT_14_A4:" + VL_TO_STRING(obj.__PVT__INT_14_A4);
        out += ", INT_15_A5:" + VL_TO_STRING(obj.__PVT__INT_15_A5);
        out += ", INT_16_A6:" + VL_TO_STRING(obj.__PVT__INT_16_A6);
        out += ", INT_17_A7:" + VL_TO_STRING(obj.__PVT__INT_17_A7);
        out += ", INT_18_S2:" + VL_TO_STRING(obj.__PVT__INT_18_S2);
        out += ", INT_19_S3:" + VL_TO_STRING(obj.__PVT__INT_19_S3);
        out += ", INT_20_S4:" + VL_TO_STRING(obj.__PVT__INT_20_S4);
        out += ", INT_21_S5:" + VL_TO_STRING(obj.__PVT__INT_21_S5);
        out += ", INT_22_S6:" + VL_TO_STRING(obj.__PVT__INT_22_S6);
        out += ", INT_23_S7:" + VL_TO_STRING(obj.__PVT__INT_23_S7);
        out += ", INT_24_S8:" + VL_TO_STRING(obj.__PVT__INT_24_S8);
        out += ", INT_25_S9:" + VL_TO_STRING(obj.__PVT__INT_25_S9);
        out += ", INT_26_S10:" + VL_TO_STRING(obj.__PVT__INT_26_S10);
        out += ", INT_27_S11:" + VL_TO_STRING(obj.__PVT__INT_27_S11);
        out += ", INT_28_T3:" + VL_TO_STRING(obj.__PVT__INT_28_T3);
        out += ", INT_29_T4:" + VL_TO_STRING(obj.__PVT__INT_29_T4);
        out += ", INT_30_T5:" + VL_TO_STRING(obj.__PVT__INT_30_T5);
        out += ", INT_31_T6:" + VL_TO_STRING(obj.__PVT__INT_31_T6);
        out += "}";
    return out;
}

std::string VL_TO_STRING(const Vscr1_top_tb_ahb_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__type_scr1_search_one_2_s__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{vd:" + VL_TO_STRING(obj.__PVT__vd);
        out += ", idx:" + VL_TO_STRING(obj.__PVT__idx);
        out += "}";
    return out;
}

std::string VL_TO_STRING(const Vscr1_top_tb_ahb_scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__type_scr1_search_one_16_s__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{vd:" + VL_TO_STRING(obj.__PVT__vd);
        out += ", idx:" + VL_TO_STRING(obj.__PVT__idx);
        out += "}";
    return out;
}

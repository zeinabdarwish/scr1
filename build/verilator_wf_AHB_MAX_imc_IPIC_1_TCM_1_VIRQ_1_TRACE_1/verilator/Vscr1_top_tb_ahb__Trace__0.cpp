// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vscr1_top_tb_ahb__Syms.h"


void Vscr1_top_tb_ahb___024root__trace_chg_sub_0(Vscr1_top_tb_ahb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vscr1_top_tb_ahb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root__trace_chg_top_0\n"); );
    // Init
    Vscr1_top_tb_ahb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vscr1_top_tb_ahb___024root*>(voidSelf);
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vscr1_top_tb_ahb___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vscr1_top_tb_ahb___024root__trace_chg_sub_0(Vscr1_top_tb_ahb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSelf->scr1_top_tb_ahb__DOT__rtc_clk));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+1,(vlSelf->scr1_top_tb_ahb__DOT__fuse_mhartid),32);
        bufp->chgIData(oldp+2,(vlSelf->scr1_top_tb_ahb__DOT__imem_req_ack_stall),32);
        bufp->chgIData(oldp+3,(vlSelf->scr1_top_tb_ahb__DOT__dmem_req_ack_stall),32);
        bufp->chgIData(oldp+4,(vlSelf->scr1_top_tb_ahb__DOT__f_results),32);
        bufp->chgIData(oldp+5,(vlSelf->scr1_top_tb_ahb__DOT__f_info),32);
        bufp->chgCData(oldp+6,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_be),4);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgIData(oldp+7,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                               .__PVT__INT_00_ZERO),32);
        bufp->chgIData(oldp+8,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                               .__PVT__INT_01_RA),32);
        bufp->chgIData(oldp+9,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                               .__PVT__INT_02_SP),32);
        bufp->chgIData(oldp+10,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                                .__PVT__INT_03_GP),32);
        bufp->chgIData(oldp+11,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                                .__PVT__INT_04_TP),32);
        bufp->chgIData(oldp+12,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                                .__PVT__INT_05_T0),32);
        bufp->chgIData(oldp+13,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                                .__PVT__INT_06_T1),32);
        bufp->chgIData(oldp+14,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                                .__PVT__INT_07_T2),32);
        bufp->chgIData(oldp+15,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                                .__PVT__INT_08_S0),32);
        bufp->chgIData(oldp+16,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                                .__PVT__INT_09_S1),32);
        bufp->chgIData(oldp+17,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                                .__PVT__INT_10_A0),32);
        bufp->chgIData(oldp+18,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                                .__PVT__INT_11_A1),32);
        bufp->chgIData(oldp+19,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                                .__PVT__INT_12_A2),32);
        bufp->chgIData(oldp+20,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                                .__PVT__INT_13_A3),32);
        bufp->chgIData(oldp+21,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                                .__PVT__INT_14_A4),32);
        bufp->chgIData(oldp+22,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                                .__PVT__INT_15_A5),32);
        bufp->chgIData(oldp+23,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                                .__PVT__INT_16_A6),32);
        bufp->chgIData(oldp+24,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                                .__PVT__INT_17_A7),32);
        bufp->chgIData(oldp+25,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                                .__PVT__INT_18_S2),32);
        bufp->chgIData(oldp+26,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                                .__PVT__INT_19_S3),32);
        bufp->chgIData(oldp+27,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                                .__PVT__INT_20_S4),32);
        bufp->chgIData(oldp+28,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                                .__PVT__INT_21_S5),32);
        bufp->chgIData(oldp+29,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                                .__PVT__INT_22_S6),32);
        bufp->chgIData(oldp+30,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                                .__PVT__INT_23_S7),32);
        bufp->chgIData(oldp+31,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                                .__PVT__INT_24_S8),32);
        bufp->chgIData(oldp+32,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                                .__PVT__INT_25_S9),32);
        bufp->chgIData(oldp+33,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                                .__PVT__INT_26_S10),32);
        bufp->chgIData(oldp+34,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                                .__PVT__INT_27_S11),32);
        bufp->chgIData(oldp+35,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                                .__PVT__INT_28_T3),32);
        bufp->chgIData(oldp+36,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                                .__PVT__INT_29_T4),32);
        bufp->chgIData(oldp+37,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                                .__PVT__INT_30_T5),32);
        bufp->chgIData(oldp+38,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                                .__PVT__INT_31_T6),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[0x1fU]))) {
        bufp->chgCData(oldp+39,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_next),4);
        bufp->chgBit(oldp+40,((0xbU == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_next))));
        bufp->chgBit(oldp+41,((3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_next))));
        bufp->chgBit(oldp+42,((4U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_next))));
        bufp->chgBit(oldp+43,((8U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_next))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+44,(vlSelf->scr1_top_tb_ahb__DOT__watchdogs_cnt),32);
        bufp->chgWData(oldp+45,(vlSelf->scr1_top_tb_ahb__DOT__test_file),256);
        bufp->chgBit(oldp+53,(vlSelf->scr1_top_tb_ahb__DOT__test_running));
        bufp->chgIData(oldp+54,(vlSelf->scr1_top_tb_ahb__DOT__tests_passed),32);
        bufp->chgIData(oldp+55,(vlSelf->scr1_top_tb_ahb__DOT__tests_total),32);
        bufp->chgCData(oldp+56,(vlSelf->scr1_top_tb_ahb__DOT__rst_cnt),2);
        bufp->chgBit(oldp+57,(vlSelf->scr1_top_tb_ahb__DOT__rst_init));
        bufp->chgBit(oldp+58,(vlSelf->scr1_top_tb_ahb__DOT__identify_test__Vstatic__res));
        bufp->chgWData(oldp+59,(vlSelf->scr1_top_tb_ahb__DOT__identify_test__Vstatic__pattern_compliance),80);
        bufp->chgIData(oldp+62,(vlSelf->scr1_top_tb_ahb__DOT__identify_test__Vstatic__pattern_arch),23);
        bufp->chgWData(oldp+63,(vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__res),256);
        bufp->chgIData(oldp+71,(vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__i),32);
        bufp->chgIData(oldp+72,(vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__j),32);
        bufp->chgWData(oldp+73,(vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__res),256);
        bufp->chgIData(oldp+81,(vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i),32);
        bufp->chgIData(oldp+82,(vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__j),32);
        bufp->chgWData(oldp+83,(vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__pattern_compliance),80);
        bufp->chgIData(oldp+86,(vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__pattern_arch),23);
        bufp->chgIData(oldp+87,(vlSelf->scr1_top_tb_ahb__DOT__remove_trailing_whitespaces__Vstatic__i),32);
        bufp->chgWData(oldp+88,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__test_file),256);
        bufp->chgBit(oldp+96,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__test_file_init));
        bufp->chgIData(oldp+97,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_imem_rdata),32);
        bufp->chgIData(oldp+98,(((0x1fU >= ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_rdata_shift_reg) 
                                            << 3U))
                                  ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_rdata_local 
                                     >> ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_rdata_shift_reg) 
                                         << 3U)) : 0U)),32);
        bufp->chgIData(oldp+99,((((5U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
                                  | (8U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)))
                                  ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data1_ff
                                  : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data0_ff)),32);
        bufp->chgBit(oldp+100,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_wr_ff));
        bufp->chgBit(oldp+101,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_postexec_ff));
        bufp->chgSData(oldp+102,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regno_ff),12);
        bufp->chgCData(oldp+103,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_size_ff),2);
        bufp->chgCData(oldp+104,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff),4);
        bufp->chgBit(oldp+105,((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))));
        bufp->chgBit(oldp+106,((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))));
        bufp->chgBit(oldp+107,((9U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))));
        bufp->chgBit(oldp+108,((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))));
        bufp->chgBit(oldp+109,(((5U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
                                | (8U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)))));
        bufp->chgBit(oldp+110,(((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
                                & (1U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)))));
        bufp->chgIData(oldp+111,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_command_ff),32);
        bufp->chgBit(oldp+112,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_autoexec_ff));
        bufp->chgIData(oldp+113,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf0_ff),32);
        bufp->chgIData(oldp+114,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf1_ff),32);
        bufp->chgIData(oldp+115,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf2_ff),32);
        bufp->chgIData(oldp+116,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf3_ff),32);
        bufp->chgIData(oldp+117,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf4_ff),32);
        bufp->chgIData(oldp+118,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf5_ff),32);
        bufp->chgIData(oldp+119,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data0_ff),32);
        bufp->chgIData(oldp+120,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data1_ff),32);
        bufp->chgBit(oldp+121,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_err_exc_ff));
        bufp->chgBit(oldp+122,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_err_acc_busy_ff));
        bufp->chgCData(oldp+123,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abstractcs_cmderr_ff),3);
        bufp->chgBit(oldp+124,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_req_ff));
        bufp->chgCData(oldp+125,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rd),5);
        bufp->chgCData(oldp+126,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rs1),5);
        bufp->chgCData(oldp+127,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_mem_funct3),3);
        bufp->chgIData(oldp+128,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_instr_next),32);
        bufp->chgIData(oldp+129,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_instr_ff),32);
        bufp->chgBit(oldp+130,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_pbuf_ebreak_ff));
        bufp->chgIData(oldp+131,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__hdu2ifu_pbuf_instr),32);
        bufp->chgBit(oldp+132,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__idu2exu_use_rs1_ff));
        bufp->chgBit(oldp+133,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__idu2exu_use_rs2_ff));
        bufp->chgBit(oldp+134,((1U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_iter_cnt)));
        bufp->chgIData(oldp+135,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_dvdnd_lo_ff),32);
        bufp->chgIData(oldp+136,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_iter_cnt),32);
        bufp->chgBit(oldp+137,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_c_ff));
        bufp->chgIData(oldp+138,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_hi_ff),32);
        bufp->chgIData(oldp+139,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_lo_ff),32);
        bufp->chgIData(oldp+140,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tdata2_ff[0U]),32);
        bufp->chgIData(oldp+141,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tdata2_ff[1U]),32);
        bufp->chgIData(oldp+142,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tdata2_ff[2U]),32);
        bufp->chgIData(oldp+143,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tdata2_ff[3U]),32);
        bufp->chgBit(oldp+144,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_r[2U] 
                                      >> 3U))));
        bufp->chgCData(oldp+145,((7U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_r[2U])),3);
        bufp->chgIData(oldp+146,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_r[1U]),32);
        bufp->chgIData(oldp+147,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_r[0U]),32);
        bufp->chgIData(oldp+148,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_r),32);
        bufp->chgIData(oldp+149,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_rdata_local),32);
        bufp->chgCData(oldp+150,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_rdata_shift_reg),2);
        bufp->chgIData(oldp+151,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+152,(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__test_pass));
        bufp->chgBit(oldp+153,(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__test_error));
        bufp->chgIData(oldp+154,(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__f_test),32);
        bufp->chgWData(oldp+155,(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__full_filename),256);
        bufp->chgIData(oldp+163,(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmpv),32);
        bufp->chgIData(oldp+164,(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__start),32);
        bufp->chgIData(oldp+165,(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__stop),32);
        bufp->chgIData(oldp+166,(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__ref_data),32);
        bufp->chgIData(oldp+167,(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__test_data),32);
        bufp->chgIData(oldp+168,(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__start_addr),32);
        bufp->chgIData(oldp+169,(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__trap_addr),32);
        bufp->chgIData(oldp+170,(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__fd),32);
        bufp->chgWData(oldp+171,(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmpstr),2048);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+235,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_ir_shift_ff));
        bufp->chgCData(oldp+236,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_shift_ff),5);
        bufp->chgBit(oldp+237,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_bypass_reg__DOT__shift_reg));
        bufp->chgBit(oldp+238,((1U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_idcode_reg__DOT__shift_reg)));
        bufp->chgBit(oldp+239,((1U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_dr_bld_id_reg__DOT__shift_reg)));
        bufp->chgIData(oldp+240,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_dr_bld_id_reg__DOT__shift_reg),32);
        bufp->chgIData(oldp+241,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_idcode_reg__DOT__shift_reg),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+242,(vlSelf->scr1_top_tb_ahb__DOT__imem_hrdata),32);
        bufp->chgIData(oldp+243,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp),32);
        bufp->chgIData(oldp+244,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__addr_mirage),20);
        bufp->chgBit(oldp+245,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_ahb_state));
        bufp->chgIData(oldp+246,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_ahb_addr),32);
        bufp->chgIData(oldp+247,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_req_ack_stall),32);
        bufp->chgBit(oldp+248,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_req_ack_rnd));
        bufp->chgBit(oldp+249,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_req_ack));
        bufp->chgIData(oldp+250,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_hrdata_l),32);
        bufp->chgIData(oldp+251,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack_stall),32);
        bufp->chgBit(oldp+252,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack_rnd));
        bufp->chgCData(oldp+253,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_size),3);
        bufp->chgIData(oldp+254,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_hrdata_l),32);
        bufp->chgBit(oldp+255,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_rstn_reset_sync__DOT__rst_n_dff) 
                                      >> 1U))));
        bufp->chgBit(oldp+256,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_cpu_rstn_reset_sync__DOT__rst_n_dff) 
                                      >> 1U))));
        bufp->chgCData(oldp+257,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_cpu_rstn_reset_sync__DOT__rst_n_dff),2);
        bufp->chgCData(oldp+258,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_pwrup_rstn_reset_sync__DOT__rst_n_dff),2);
        bufp->chgCData(oldp+259,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_rstn_reset_sync__DOT__rst_n_dff),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+260,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff));
        bufp->chgBit(oldp+261,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff));
        bufp->chgBit(oldp+262,((1U & (~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_status_sync__DOT__data_dff) 
                                         >> 1U)))));
        bufp->chgBit(oldp+263,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_update));
        bufp->chgBit(oldp+264,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_tdi));
        bufp->chgBit(oldp+265,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_scu_ch_sel));
        bufp->chgBit(oldp+266,((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_ff))));
        bufp->chgBit(oldp+267,((1U & (~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_status_sync__DOT__data_dff) 
                                         >> 1U)))));
        bufp->chgBit(oldp+268,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_dr_upd_req));
        bufp->chgCData(oldp+269,((0xfU & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_ff) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+270,((3U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_ff) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+271,((3U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_ff))),2);
        bufp->chgCData(oldp+272,((0xfU & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shadow_ff) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+273,((3U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shadow_ff) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+274,((3U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shadow_ff))),2);
        bufp->chgCData(oldp+275,((3U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_control_ff) 
                                        >> 2U))),2);
        bufp->chgBit(oldp+276,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_control_ff) 
                                      >> 1U))));
        bufp->chgBit(oldp+277,((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_control_ff))));
        bufp->chgBit(oldp+278,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_status_ff_dly) 
                                      >> 3U))));
        bufp->chgBit(oldp+279,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_status_ff_dly) 
                                      >> 2U))));
        bufp->chgBit(oldp+280,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_status_ff_dly) 
                                      >> 1U))));
        bufp->chgBit(oldp+281,((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_status_ff_dly))));
        bufp->chgBit(oldp+282,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_sticky_sts_ff) 
                                      >> 3U))));
        bufp->chgBit(oldp+283,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_sticky_sts_ff) 
                                      >> 2U))));
        bufp->chgBit(oldp+284,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_sticky_sts_ff) 
                                      >> 1U))));
        bufp->chgBit(oldp+285,((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_sticky_sts_ff))));
        bufp->chgBit(oldp+286,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_status_ff));
        bufp->chgBit(oldp+287,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_status_sync__DOT__data_dff) 
                                      >> 1U))));
        bufp->chgBit(oldp+288,((1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_control_ff)))));
        bufp->chgBit(oldp+289,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_status_ff));
        bufp->chgBit(oldp+290,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_status_sync__DOT__data_dff) 
                                      >> 1U))));
        bufp->chgBit(oldp+291,((1U & (~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_control_ff) 
                                         >> 1U)))));
        bufp->chgBit(oldp+292,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_status_ff));
        bufp->chgBit(oldp+293,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_status_sync__DOT__data_dff) 
                                      >> 1U))));
        bufp->chgCData(oldp+294,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_status_sync__DOT__data_dff),2);
        bufp->chgCData(oldp+295,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_status_sync__DOT__data_dff),2);
        bufp->chgCData(oldp+296,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_status_sync__DOT__data_dff),2);
        bufp->chgIData(oldp+297,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+298,((1U & VL_REDXOR_4((6U 
                                                  & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg_sync))))));
        bufp->chgBit(oldp+299,((1U & VL_REDXOR_4((0xcU 
                                                  & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg_sync))))));
        bufp->chgCData(oldp+300,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divpos_sync),4);
        bufp->chgCData(oldp+301,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg_sync),4);
        bufp->chgCData(oldp+302,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_tdi_sync),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgBit(oldp+303,((1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_full)))));
        bufp->chgBit(oldp+304,((1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_full)))));
        bufp->chgCData(oldp+305,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_imem_resp),2);
        bufp->chgCData(oldp+306,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_resp),2);
        bufp->chgIData(oldp+307,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_rdata),32);
        bufp->chgCData(oldp+308,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_resp),2);
        bufp->chgBit(oldp+309,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__timer_irq));
        bufp->chgQData(oldp+310,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtime_reg),64);
        bufp->chgIData(oldp+312,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_ff),32);
        bufp->chgBit(oldp+313,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__init_pc));
        bufp->chgBit(oldp+314,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mip_meip));
        bufp->chgBit(oldp+315,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_err_rvi_hi));
        bufp->chgBit(oldp+316,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd_ff));
        bufp->chgIData(oldp+317,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus),32);
        bufp->chgBit(oldp+318,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_mie_ff));
        bufp->chgBit(oldp+319,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_mpie_ff));
        bufp->chgIData(oldp+320,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie),32);
        bufp->chgBit(oldp+321,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_mtie_ff));
        bufp->chgBit(oldp+322,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_meie_ff));
        bufp->chgBit(oldp+323,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_msie_ff));
        bufp->chgIData(oldp+324,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtvec_base),26);
        bufp->chgBit(oldp+325,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtvec_mode_ff));
        bufp->chgIData(oldp+326,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mscratch_ff),32);
        bufp->chgIData(oldp+327,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mepc_ff),31);
        bufp->chgIData(oldp+328,((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mepc_ff 
                                  << 1U)),32);
        bufp->chgBit(oldp+329,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_i_ff));
        bufp->chgCData(oldp+330,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_ec_ff),4);
        bufp->chgIData(oldp+331,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtval_ff),32);
        bufp->chgQData(oldp+332,(((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_hi_ff 
                                   << 8U) | (QData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_lo_ff)))),64);
        bufp->chgCData(oldp+334,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_lo_ff),8);
        bufp->chgQData(oldp+335,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_hi_ff),56);
        bufp->chgQData(oldp+337,((0xffffffffffffffULL 
                                  & (1ULL + vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_hi_ff))),56);
        bufp->chgQData(oldp+339,(((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_hi_ff 
                                   << 8U) | (QData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_lo_ff)))),64);
        bufp->chgBit(oldp+341,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten_cy_ff));
        bufp->chgCData(oldp+342,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_lo_ff),8);
        bufp->chgBit(oldp+343,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_hi_inc));
        bufp->chgQData(oldp+344,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_hi_ff),56);
        bufp->chgQData(oldp+346,((0xffffffffffffffULL 
                                  & (1ULL + vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_hi_ff))),56);
        bufp->chgIData(oldp+348,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten),32);
        bufp->chgBit(oldp+349,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten_ir_ff));
        bufp->chgBit(oldp+350,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_eirq_pnd_en));
        bufp->chgBit(oldp+351,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_tirq_pnd_en));
        bufp->chgBit(oldp+352,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_exc_req_ff));
        bufp->chgBit(oldp+353,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_run_start_ff));
        bufp->chgBit(oldp+354,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_halted_ff));
        bufp->chgCData(oldp+355,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__init_pc_v),4);
        bufp->chgBit(oldp+356,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__csr_access_ff));
        bufp->chgBit(oldp+357,((1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__csr_access_ff)))));
        bufp->chgCData(oldp+358,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_ff),2);
        bufp->chgBit(oldp+359,((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_ff))));
        bufp->chgBit(oldp+360,((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_ff))));
        bufp->chgBit(oldp+361,((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_ff))));
        bufp->chgBit(oldp+362,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_fsm_curr));
        bufp->chgBit(oldp+363,((1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_fsm_curr)))));
        bufp->chgCData(oldp+364,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff),4);
        bufp->chgBit(oldp+365,(((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff)) 
                                | ((4U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff)) 
                                   | ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff)) 
                                      | ((5U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff)) 
                                         | (3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff))))))));
        bufp->chgBit(oldp+366,(((6U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff)) 
                                | ((7U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff)) 
                                   | (8U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff))))));
        bufp->chgBit(oldp+367,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__new_pc_unaligned_ff));
        bufp->chgBit(oldp+368,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__instr_hi_rvi_lo_ff));
        bufp->chgBit(oldp+369,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rd_hword));
        bufp->chgCData(oldp+370,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr),3);
        bufp->chgCData(oldp+371,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr),3);
        bufp->chgSData(oldp+372,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data[0]),16);
        bufp->chgSData(oldp+373,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data[1]),16);
        bufp->chgSData(oldp+374,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data[2]),16);
        bufp->chgSData(oldp+375,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data[3]),16);
        bufp->chgSData(oldp+376,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data_head),16);
        bufp->chgSData(oldp+377,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data
                                 [(3U & ((IData)(1U) 
                                         + (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr)))]),16);
        bufp->chgBit(oldp+378,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err[0]));
        bufp->chgBit(oldp+379,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err[1]));
        bufp->chgBit(oldp+380,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err[2]));
        bufp->chgBit(oldp+381,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err[3]));
        bufp->chgBit(oldp+382,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err_head));
        bufp->chgBit(oldp+383,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err
                               [(3U & ((IData)(1U) 
                                       + (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr)))]));
        bufp->chgBit(oldp+384,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_is_empty));
        bufp->chgBit(oldp+385,((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_ocpd_h))));
        bufp->chgBit(oldp+386,((1U & (~ (IData)((3U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data_head))))))));
        bufp->chgBit(oldp+387,((3U == (3U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data_head)))));
        bufp->chgCData(oldp+388,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_ocpd_h),3);
        bufp->chgBit(oldp+389,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__ifu_fsm_curr));
        bufp->chgBit(oldp+390,((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_discard_cnt))));
        bufp->chgIData(oldp+391,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_addr_ff),30);
        bufp->chgCData(oldp+392,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_pnd_txns_cnt),3);
        bufp->chgCData(oldp+393,((7U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_pnd_txns_cnt) 
                                        - (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_discard_cnt)))),3);
        bufp->chgBit(oldp+394,((7U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_pnd_txns_cnt))));
        bufp->chgCData(oldp+395,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_discard_cnt),3);
        bufp->chgSData(oldp+396,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lines),16);
        bufp->chgSData(oldp+397,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lines_sync),16);
        bufp->chgSData(oldp+398,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lines_dly),16);
        bufp->chgCData(oldp+399,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_cisv_ff),5);
        bufp->chgBit(oldp+400,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT____VdfgExtracted_h169dacea__0));
        bufp->chgBit(oldp+401,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT____VdfgExtracted_h1692cb19__0));
        bufp->chgCData(oldp+402,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_idxr_ff),4);
        bufp->chgSData(oldp+403,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_ff),16);
        bufp->chgSData(oldp+404,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_isvr_ff),16);
        bufp->chgSData(oldp+405,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ier_ff),16);
        bufp->chgSData(oldp+406,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_imr_ff),16);
        bufp->chgSData(oldp+407,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_iinvr_ff),16);
        bufp->chgBit(oldp+408,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_icsr) 
                                      >> 8U))));
        bufp->chgBit(oldp+409,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_icsr) 
                                      >> 7U))));
        bufp->chgBit(oldp+410,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_icsr) 
                                      >> 6U))));
        bufp->chgBit(oldp+411,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_icsr) 
                                      >> 5U))));
        bufp->chgBit(oldp+412,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_icsr) 
                                      >> 4U))));
        bufp->chgCData(oldp+413,((0xfU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_icsr))),4);
        bufp->chgBit(oldp+414,((1U & (~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_cisv_ff) 
                                         >> 4U)))));
        bufp->chgCData(oldp+415,((0xfU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_cisv_ff))),4);
        bufp->chgBit(oldp+416,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irr_priority
                               .__PVT__vd));
        bufp->chgCData(oldp+417,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irr_priority
                                 .__PVT__idx),4);
        bufp->chgBit(oldp+418,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__isvr_priority_eoi
                               .__PVT__vd));
        bufp->chgCData(oldp+419,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__isvr_priority_eoi
                                 .__PVT__idx),4);
        bufp->chgSData(oldp+420,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ier_ff) 
                                  & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_ff))),16);
        bufp->chgBit(oldp+421,((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irr_priority
                                .__PVT__idx < (0xfU 
                                               & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_cisv_ff)))));
        bufp->chgSData(oldp+422,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_isvr_eoi),16);
        bufp->chgIData(oldp+423,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0U]),32);
        bufp->chgIData(oldp+424,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[1U]),32);
        bufp->chgIData(oldp+425,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[2U]),32);
        bufp->chgIData(oldp+426,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[3U]),32);
        bufp->chgIData(oldp+427,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[4U]),32);
        bufp->chgIData(oldp+428,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[5U]),32);
        bufp->chgIData(oldp+429,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[6U]),32);
        bufp->chgIData(oldp+430,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[7U]),32);
        bufp->chgIData(oldp+431,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[8U]),32);
        bufp->chgIData(oldp+432,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[9U]),32);
        bufp->chgIData(oldp+433,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xaU]),32);
        bufp->chgIData(oldp+434,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xbU]),32);
        bufp->chgIData(oldp+435,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xcU]),32);
        bufp->chgIData(oldp+436,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xdU]),32);
        bufp->chgIData(oldp+437,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xeU]),32);
        bufp->chgIData(oldp+438,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xfU]),32);
        bufp->chgIData(oldp+439,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x10U]),32);
        bufp->chgIData(oldp+440,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x11U]),32);
        bufp->chgIData(oldp+441,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x12U]),32);
        bufp->chgIData(oldp+442,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x13U]),32);
        bufp->chgIData(oldp+443,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x14U]),32);
        bufp->chgIData(oldp+444,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x15U]),32);
        bufp->chgIData(oldp+445,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x16U]),32);
        bufp->chgIData(oldp+446,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x17U]),32);
        bufp->chgIData(oldp+447,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x18U]),32);
        bufp->chgIData(oldp+448,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x19U]),32);
        bufp->chgIData(oldp+449,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x1aU]),32);
        bufp->chgIData(oldp+450,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x1bU]),32);
        bufp->chgIData(oldp+451,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x1cU]),32);
        bufp->chgIData(oldp+452,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x1dU]),32);
        bufp->chgIData(oldp+453,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x1eU]),32);
        bufp->chgBit(oldp+454,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_full));
        bufp->chgBit(oldp+455,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__fsm));
        bufp->chgCData(oldp+456,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__port_sel_r),2);
        bufp->chgBit(oldp+457,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__fsm));
        bufp->chgBit(oldp+458,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_full));
        bufp->chgBit(oldp+459,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__fsm));
        bufp->chgBit(oldp+460,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__port_sel_r));
        bufp->chgQData(oldp+461,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmp_reg),64);
        bufp->chgBit(oldp+463,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timer_en));
        bufp->chgSData(oldp+464,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timer_div),10);
        bufp->chgSData(oldp+465,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timeclk_cnt),10);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[7U] 
                     | vlSelf->__Vm_traceActivity[0x23U]))) {
        bufp->chgBit(oldp+466,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten_cy_ff) 
                                      | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_upd)))));
        bufp->chgBit(oldp+467,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_hi_inc) 
                                | (0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_upd)))));
        bufp->chgCData(oldp+468,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_start_vd)
                                   ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irr_priority
                                  .__PVT__idx : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_eoi_req)
                                                  ? 
                                                 (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__isvr_priority_eoi
                                                  .__PVT__vd
                                                   ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__isvr_priority_eoi
                                                  .__PVT__idx
                                                   : 0x10U)
                                                  : 0U))),5);
        bufp->chgBit(oldp+469,((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irr_priority
                                .__PVT__vd & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__soi_wr_req))));
        bufp->chgBit(oldp+470,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_next) 
                                != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_ff))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[7U] 
                     | vlSelf->__Vm_traceActivity[0x25U]))) {
        bufp->chgBit(oldp+471,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd_ff)
                                 ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_exc_req)
                                 : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_exc_req_ff))));
        bufp->chgBit(oldp+472,(((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_fsm_curr)) 
                                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__dmem_req_vd))));
        bufp->chgBit(oldp+473,(((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_full)) 
                                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_req))));
        bufp->chgBit(oldp+474,(((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_rd)) 
                                & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_full)) 
                                   & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_req)))));
        bufp->chgBit(oldp+475,(((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_resp)) 
                                ^ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_req))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[7U] 
                     | vlSelf->__Vm_traceActivity[0x26U]))) {
        bufp->chgBit(oldp+476,(((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_is_empty)) 
                                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_en))));
        bufp->chgBit(oldp+477,(((3U & (((IData)(4U) 
                                        - ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr) 
                                           - (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr_next))) 
                                       >> 1U)) > (7U 
                                                  & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_pnd_txns_cnt) 
                                                     - (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_discard_cnt))))));
        bufp->chgCData(oldp+478,((7U & ((IData)(4U) 
                                        - ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr) 
                                           - (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr_next))))),3);
        bufp->chgCData(oldp+479,((3U & (((IData)(4U) 
                                         - ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr) 
                                            - (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr_next))) 
                                        >> 1U))),2);
        bufp->chgIData(oldp+480,((0x3fffffffU & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req)
                                                  ? 
                                                 ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc 
                                                   >> 2U) 
                                                  + (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_handshake_done))
                                                  : 
                                                 ((0xfU 
                                                   == 
                                                   (0xfU 
                                                    & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_addr_ff))
                                                   ? 
                                                  (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_addr_ff 
                                                   + (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_handshake_done))
                                                   : 
                                                  ((0x3ffffff0U 
                                                    & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_addr_ff) 
                                                   | (0xfU 
                                                      & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_addr_ff 
                                                         + (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_handshake_done)))))))),30);
        bufp->chgBit(oldp+481,(((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_full)) 
                                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_imem_req))));
        bufp->chgBit(oldp+482,(((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_rd)) 
                                & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_full)) 
                                   & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_imem_req)))));
        bufp->chgBit(oldp+483,(((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_imem_resp)) 
                                ^ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_imem_req))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgBit(oldp+484,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_sel));
        bufp->chgCData(oldp+485,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_id),2);
        bufp->chgBit(oldp+486,((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_ff))));
        bufp->chgBit(oldp+487,((1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ndmreset_ff)))));
        bufp->chgBit(oldp+488,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_req_ff));
        bufp->chgBit(oldp+489,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_haltreq_ff));
        bufp->chgBit(oldp+490,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_resumereq_ff));
        bufp->chgBit(oldp+491,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ackhavereset_ff));
        bufp->chgBit(oldp+492,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ndmreset_ff));
        bufp->chgBit(oldp+493,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__havereset_skip_pwrup_ff));
        bufp->chgBit(oldp+494,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_havereset_ff));
        bufp->chgBit(oldp+495,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_resumeack_ff));
        bufp->chgBit(oldp+496,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_halted_ff));
        bufp->chgCData(oldp+497,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff),3);
        bufp->chgBit(oldp+498,((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff))));
        bufp->chgBit(oldp+499,((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff))));
        bufp->chgBit(oldp+500,((3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff))));
        bufp->chgBit(oldp+501,((4U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff))));
        bufp->chgBit(oldp+502,((5U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff))));
        bufp->chgQData(oldp+503,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_ff),41);
        bufp->chgQData(oldp+505,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_rdata),41);
        bufp->chgIData(oldp+507,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__dm_rdata_ff),32);
        bufp->chgBit(oldp+508,((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_id))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgBit(oldp+509,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_event));
        bufp->chgBit(oldp+510,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_hart_status) 
                                      >> 3U))));
        bufp->chgBit(oldp+511,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_hart_status) 
                                      >> 2U))));
        bufp->chgCData(oldp+512,((3U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_hart_status))),2);
        bufp->chgCData(oldp+513,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_addr_ff),3);
        bufp->chgBit(oldp+514,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                                      >> 4U))));
        bufp->chgBit(oldp+515,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                                      >> 2U))));
        bufp->chgBit(oldp+516,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                                      >> 5U))));
        bufp->chgBit(oldp+517,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                                      >> 3U))));
        bufp->chgBit(oldp+518,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                                      >> 1U))));
        bufp->chgIData(oldp+519,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_ff),32);
        bufp->chgBit(oldp+520,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__hdu2ifu_pbuf_vd));
        bufp->chgBit(oldp+521,((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_fsm_curr))));
        bufp->chgCData(oldp+522,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state),2);
        bufp->chgBit(oldp+523,((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state))));
        bufp->chgBit(oldp+524,((3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state))));
        bufp->chgBit(oldp+525,((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state))));
        bufp->chgBit(oldp+526,((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state))));
        bufp->chgBit(oldp+527,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_trans));
        bufp->chgBit(oldp+528,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_update));
        bufp->chgBit(oldp+529,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                                      >> 4U))));
        bufp->chgBit(oldp+530,((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl))));
        bufp->chgCData(oldp+531,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__halt_req_timeout_cnt),6);
        bufp->chgBit(oldp+532,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__halt_req_timeout_cnt)))))));
        bufp->chgBit(oldp+533,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_haltstatus) 
                                      >> 3U))));
        bufp->chgCData(oldp+534,((7U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_haltstatus))),3);
        bufp->chgCData(oldp+535,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_fsm_curr),2);
        bufp->chgBit(oldp+536,((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_fsm_curr))));
        bufp->chgBit(oldp+537,((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_fsm_curr))));
        bufp->chgBit(oldp+538,((7U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_addr_ff))));
        bufp->chgBit(oldp+539,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_instr_wait_latching));
        bufp->chgBit(oldp+540,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_ebreakm));
        bufp->chgBit(oldp+541,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_stepie));
        bufp->chgBit(oldp+542,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_step));
        bufp->chgCData(oldp+543,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_cause),3);
        bufp->chgCData(oldp+544,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tselect_ff),3);
        bufp->chgCData(oldp+545,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_ff),4);
        bufp->chgCData(oldp+546,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_ff),4);
        bufp->chgCData(oldp+547,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_ff),4);
        bufp->chgCData(oldp+548,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_ff),4);
        bufp->chgCData(oldp+549,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_ff),4);
        bufp->chgCData(oldp+550,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_ff),4);
        bufp->chgCData(oldp+551,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_ff),4);
        bufp->chgBit(oldp+552,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_dmode_ff));
        bufp->chgBit(oldp+553,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_m_ff));
        bufp->chgBit(oldp+554,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_action_ff));
        bufp->chgBit(oldp+555,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_hit_ff));
        bufp->chgSData(oldp+556,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_count_ff),14);
        bufp->chgBit(oldp+557,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_skip_ff));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xaU])) {
        bufp->chgBit(oldp+558,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_sel_tapout));
        bufp->chgCData(oldp+559,(((0x10U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_ff))
                                   ? 1U : ((0x11U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_ff))
                                            ? 2U : 0U))),2);
        bufp->chgBit(oldp+560,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_scu_ch_sel_tapout));
        bufp->chgCData(oldp+561,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_ff),5);
        bufp->chgBit(oldp+562,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__dr_bypass_sel));
        bufp->chgBit(oldp+563,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__dr_idcode_sel));
        bufp->chgBit(oldp+564,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__dr_bld_id_sel));
        bufp->chgBit(oldp+565,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xbU])) {
        bufp->chgBit(oldp+566,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_dr_capture_ff));
        bufp->chgBit(oldp+567,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_dr_shift_ff));
        bufp->chgBit(oldp+568,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_dr_update_ff));
        bufp->chgBit(oldp+569,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divpos));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xcU])) {
        bufp->chgBit(oldp+570,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_capture));
        bufp->chgBit(oldp+571,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_shift));
        bufp->chgBit(oldp+572,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff));
        bufp->chgBit(oldp+573,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff));
        bufp->chgBit(oldp+574,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_capture) 
                                | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_shift))));
        bufp->chgBit(oldp+575,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_dr_cap_req));
        bufp->chgBit(oldp+576,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_dr_shft_req));
        bufp->chgBit(oldp+577,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_dr_cap_req) 
                                | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_dr_shft_req))));
        bufp->chgBit(oldp+578,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_control_wr_req));
        bufp->chgCData(oldp+579,((3U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_mode_ff) 
                                        >> 2U))),2);
        bufp->chgBit(oldp+580,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_mode_ff) 
                                      >> 1U))));
        bufp->chgBit(oldp+581,((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_mode_ff))));
        bufp->chgBit(oldp+582,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_mode_wr_req));
        bufp->chgBit(oldp+583,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_sticky_sts_wr_req));
        bufp->chgBit(oldp+584,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_rise_load));
        bufp->chgBit(oldp+585,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_rise_reset));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xdU])) {
        bufp->chgBit(oldp+586,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h2097eaa3__0));
        bufp->chgCData(oldp+587,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_dmem_width),2);
        bufp->chgCData(oldp+588,((0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                           >> 5U))),5);
        bufp->chgSData(oldp+589,((0xfffU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                            >> 5U))),12);
        bufp->chgCData(oldp+590,((3U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                        >> 0x1cU))),2);
        bufp->chgCData(oldp+591,((7U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                        >> 5U))),3);
        bufp->chgBit(oldp+592,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h2158131e__0));
        bufp->chgBit(oldp+593,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h2097eaa3__0));
        bufp->chgCData(oldp+594,((3U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                        >> 5U))),2);
        bufp->chgBit(oldp+595,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_hdu_req));
        bufp->chgBit(oldp+596,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_brkm_req));
        bufp->chgBit(oldp+597,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+598,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                      >> 9U))));
        bufp->chgCData(oldp+599,((0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                           >> 4U))),5);
        bufp->chgBit(oldp+600,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                      >> 3U))));
        bufp->chgCData(oldp+601,((0xfU & ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                           << 1U) | 
                                          (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                           >> 0x1fU)))),4);
        bufp->chgBit(oldp+602,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                      >> 0x1eU))));
        bufp->chgCData(oldp+603,((3U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                        >> 0x1cU))),2);
        bufp->chgCData(oldp+604,((7U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                        >> 0x19U))),3);
        bufp->chgBit(oldp+605,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+606,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+607,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+608,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                      >> 0x15U))));
        bufp->chgBit(oldp+609,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                      >> 0x14U))));
        bufp->chgCData(oldp+610,((0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+611,((0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                           >> 0xaU))),5);
        bufp->chgIData(oldp+612,(((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                   << 0x1bU) | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                >> 5U))),32);
        bufp->chgBit(oldp+613,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                      >> 4U))));
        bufp->chgCData(oldp+614,((0xfU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])),4);
        bufp->chgIData(oldp+615,((0x73U | ((0xfff00000U 
                                            & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                               << 0xfU)) 
                                           | ((0xf8000U 
                                               & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U]) 
                                              | ((0x7000U 
                                                  & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                                     >> 5U)) 
                                                 | (0xf80U 
                                                    & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                                       << 2U))))))),32);
        bufp->chgIData(oldp+616,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_addr_op2),32);
        bufp->chgCData(oldp+617,((0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                           >> 4U))),5);
        bufp->chgBit(oldp+618,(((0xcU == (0x1fU & (
                                                   vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                                   >> 4U))) 
                                | ((0xdU == (0x1fU 
                                             & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                                >> 4U))) 
                                   | (0xeU == (0x1fU 
                                               & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                                  >> 4U)))))));
        bufp->chgCData(oldp+619,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__shft_cmd),2);
        bufp->chgBit(oldp+620,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_cmd_is_iter));
        bufp->chgCData(oldp+621,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_cmd_is_iter)
                                   ? 2U : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_cmd_mul)
                                            ? 1U : 0U))),2);
        bufp->chgBit(oldp+622,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_cmd_mul));
        bufp->chgCData(oldp+623,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mul_cmd),2);
        bufp->chgBit(oldp+624,((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mul_cmd))));
        bufp->chgCData(oldp+625,((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_cmd_rem) 
                                   << 1U) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgTmp_h8ffc7cb8__0))),2);
        bufp->chgBit(oldp+626,((0U == (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_cmd_rem) 
                                        << 1U) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgTmp_h8ffc7cb8__0)))));
        bufp->chgBit(oldp+627,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_cmd_rem));
        bufp->chgBit(oldp+628,((1U & (~ (IData)((3U 
                                                 == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mul_cmd)))))));
        bufp->chgBit(oldp+629,((1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgTmp_hf046458b__0)))));
        bufp->chgBit(oldp+630,((1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgTmp_h8ffc7cb8__0)))));
        bufp->chgCData(oldp+631,((0xfU & ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                           << 1U) | 
                                          (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                           >> 0x1fU)))),4);
        bufp->chgBit(oldp+632,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h2158131e__0));
        bufp->chgBit(oldp+633,(((3U == (0xfU & ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                                 << 1U) 
                                                | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                                   >> 0x1fU)))) 
                                | (8U == (0xfU & ((
                                                   vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                                   << 1U) 
                                                  | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+634,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__dmem_wdth_hword));
        bufp->chgBit(oldp+635,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT____VdfgTmp_hbf509d11__0) 
                                | (6U == (0xfU & ((
                                                   vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                                   << 1U) 
                                                  | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                                     >> 0x1fU)))))));
        bufp->chgBit(oldp+636,((2U == (3U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                             >> 5U)))));
        bufp->chgQData(oldp+637,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__current_time),64);
        bufp->chgBit(oldp+639,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_update_r));
        bufp->chgCData(oldp+640,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__event_type),8);
        bufp->chgIData(oldp+641,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_pc),32);
        bufp->chgIData(oldp+642,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_npc),32);
        bufp->chgIData(oldp+643,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_instr),32);
        bufp->chgBit(oldp+644,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_up));
        bufp->chgCData(oldp+645,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr),5);
        bufp->chgIData(oldp+646,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_wdata),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0xdU] 
                     | vlSelf->__Vm_traceActivity[0x23U]))) {
        bufp->chgBit(oldp+647,(((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                 >> 0x17U) & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_cmp))));
        bufp->chgBit(oldp+648,(((0U == (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_cmd_rem) 
                                         << 1U) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgTmp_h8ffc7cb8__0))) 
                                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_ops_diff_sgn))));
        bufp->chgBit(oldp+649,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_cmd_rem) 
                                & ((0U != vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_res_rem) 
                                   & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_op1_is_neg) 
                                      ^ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_res_rem_c))))));
        bufp->chgBit(oldp+650,(((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op1 
                                 >> 0x1fU) & (~ (IData)(
                                                        (3U 
                                                         == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mul_cmd)))))));
        bufp->chgBit(oldp+651,(((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgTmp_hf046458b__0)) 
                                & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op2 
                                   >> 0x1fU))));
        bufp->chgQData(oldp+652,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_cmd_mul)
                                   ? (((QData)((IData)(
                                                       ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op1 
                                                         >> 0x1fU) 
                                                        & (~ (IData)(
                                                                     (3U 
                                                                      == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mul_cmd))))))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op1)))
                                   : 0ULL)),33);
        bufp->chgQData(oldp+654,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_cmd_mul)
                                   ? (((QData)((IData)(
                                                       ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgTmp_hf046458b__0)) 
                                                        & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op2 
                                                           >> 0x1fU)))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op2)))
                                   : 0ULL)),33);
        bufp->chgQData(oldp+656,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_cmd_mul)
                                   ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgTmp_h202d6225__0
                                   : 0ULL)),64);
        bufp->chgBit(oldp+658,(((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgTmp_h8ffc7cb8__0)) 
                                & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op2 
                                   >> 0x1fU))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xeU])) {
        bufp->chgSData(oldp+659,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__irq_lines_reg),16);
        bufp->chgBit(oldp+660,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__soft_irq_reg));
        bufp->chgBit(oldp+661,(vlSelf->scr1_top_tb_ahb__DOT__imem_hready));
        bufp->chgBit(oldp+662,(vlSelf->scr1_top_tb_ahb__DOT__imem_hresp));
        bufp->chgIData(oldp+663,(vlSelf->scr1_top_tb_ahb__DOT__dmem_hrdata),32);
        bufp->chgIData(oldp+664,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__Vstatic__addr_mirage),20);
        bufp->chgBit(oldp+665,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack));
        bufp->chgBit(oldp+666,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_state));
        bufp->chgIData(oldp+667,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_addr),32);
        bufp->chgBit(oldp+668,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_wr));
        bufp->chgCData(oldp+669,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_be),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0xfU])) {
        bufp->chgIData(oldp+670,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_rdata),32);
        bufp->chgBit(oldp+671,((3U == (3U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_rdata 
                                             >> 0x10U)))));
        bufp->chgBit(oldp+672,((3U == (3U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_rdata))));
        bufp->chgSData(oldp+673,((0xffffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_rdata)),16);
        bufp->chgSData(oldp+674,((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_rdata 
                                  >> 0x10U)),16);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x10U])) {
        bufp->chgIData(oldp+675,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0),32);
        bufp->chgIData(oldp+676,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__mprf2exu_rs1_data),32);
        bufp->chgIData(oldp+677,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_w_data),32);
        bufp->chgIData(oldp+678,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0),32);
        bufp->chgIData(oldp+679,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_addr_op1),32);
        bufp->chgIData(oldp+680,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__inc_pc),32);
        bufp->chgIData(oldp+681,((0xfffffffeU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0)),32);
        bufp->chgBit(oldp+682,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__lsu_req));
        bufp->chgBit(oldp+683,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__mprf_rs1_req));
        bufp->chgBit(oldp+684,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__mprf_rs2_req));
        bufp->chgBit(oldp+685,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__dmem_addr_mslgn));
        bufp->chgBit(oldp+686,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__dmem_addr_mslgn_l));
        bufp->chgBit(oldp+687,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__dmem_addr_mslgn_s));
        bufp->chgBit(oldp+688,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_req));
        bufp->chgCData(oldp+689,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__port_sel),2);
        bufp->chgCData(oldp+690,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_byteen),4);
        bufp->chgSData(oldp+691,((0x3fffU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0 
                                             >> 2U))),14);
        bufp->chgBit(oldp+692,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__dmem_req_valid));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x11U])) {
        bufp->chgBit(oldp+693,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_req));
        bufp->chgBit(oldp+694,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr));
        bufp->chgCData(oldp+695,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr),7);
        bufp->chgIData(oldp+696,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wdata),32);
        bufp->chgBit(oldp+697,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_req) 
                                & (0x10U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr)))));
        bufp->chgBit(oldp+698,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_abstractcs));
        bufp->chgBit(oldp+699,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_abstractauto));
        bufp->chgBit(oldp+700,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_command));
        bufp->chgBit(oldp+701,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_data1));
        bufp->chgBit(oldp+702,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf0));
        bufp->chgBit(oldp+703,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf1));
        bufp->chgBit(oldp+704,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf2));
        bufp->chgBit(oldp+705,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf3));
        bufp->chgBit(oldp+706,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf4));
        bufp->chgBit(oldp+707,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf5));
        bufp->chgBit(oldp+708,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_wr_req));
        bufp->chgBit(oldp+709,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr) 
                                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_abstractcs))));
        bufp->chgBit(oldp+710,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr) 
                                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_data1))));
        bufp->chgBit(oldp+711,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__command_wr_req));
        bufp->chgBit(oldp+712,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr) 
                                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_abstractauto))));
        bufp->chgBit(oldp+713,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr) 
                                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf0))));
        bufp->chgBit(oldp+714,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr) 
                                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf1))));
        bufp->chgBit(oldp+715,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr) 
                                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf2))));
        bufp->chgBit(oldp+716,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr) 
                                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf3))));
        bufp->chgBit(oldp+717,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr) 
                                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf4))));
        bufp->chgBit(oldp+718,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr) 
                                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf5))));
        bufp->chgBit(oldp+719,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_req) 
                                & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr)))));
        bufp->chgBit(oldp+720,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tapc_dmi_access_req));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x12U])) {
        bufp->chgBit(oldp+721,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__clk_en_dm_ff));
        bufp->chgCData(oldp+722,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_ff),2);
        bufp->chgBit(oldp+723,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_ff));
        bufp->chgCData(oldp+724,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_next),2);
        bufp->chgBit(oldp+725,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dm_dhalt_req));
        bufp->chgBit(oldp+726,((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_ff))));
        bufp->chgBit(oldp+727,((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_ff))));
        bufp->chgBit(oldp+728,((3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_ff))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x13U])) {
        bufp->chgCData(oldp+729,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0),2);
        bufp->chgCData(oldp+730,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_pbuf_addr_qlfy),3);
        bufp->chgBit(oldp+731,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_resp_exc));
        bufp->chgBit(oldp+732,((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0))));
        bufp->chgBit(oldp+733,((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0))));
        bufp->chgBit(oldp+734,((3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0))));
        bufp->chgBit(oldp+735,((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x14U])) {
        bufp->chgIData(oldp+736,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr),32);
        bufp->chgBit(oldp+737,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+738,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                      >> 9U))));
        bufp->chgCData(oldp+739,((0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                           >> 4U))),5);
        bufp->chgBit(oldp+740,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                      >> 3U))));
        bufp->chgCData(oldp+741,((0xfU & ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                           << 1U) | 
                                          (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                           >> 0x1fU)))),4);
        bufp->chgBit(oldp+742,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                      >> 0x1eU))));
        bufp->chgCData(oldp+743,((3U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                        >> 0x1cU))),2);
        bufp->chgCData(oldp+744,((7U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                        >> 0x19U))),3);
        bufp->chgBit(oldp+745,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+746,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+747,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+748,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                      >> 0x15U))));
        bufp->chgBit(oldp+749,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                      >> 0x14U))));
        bufp->chgCData(oldp+750,((0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+751,((0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                           >> 0xaU))),5);
        bufp->chgCData(oldp+752,((0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                           >> 5U))),5);
        bufp->chgIData(oldp+753,(((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                   << 0x1bU) | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                                                >> 5U))),32);
        bufp->chgBit(oldp+754,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                                      >> 4U))));
        bufp->chgCData(oldp+755,((0xfU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U])),4);
        bufp->chgBit(oldp+756,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs1));
        bufp->chgBit(oldp+757,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs2));
        bufp->chgBit(oldp+758,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rd));
        bufp->chgBit(oldp+759,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_imm));
        bufp->chgCData(oldp+760,((3U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)),2);
        bufp->chgCData(oldp+761,((0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                           >> 2U))),5);
        bufp->chgBit(oldp+762,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvi_illegal));
        bufp->chgCData(oldp+763,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3),3);
        bufp->chgCData(oldp+764,((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                  >> 0x19U)),7);
        bufp->chgSData(oldp+765,((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                  >> 0x14U)),12);
        bufp->chgCData(oldp+766,((0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                           >> 0x14U))),5);
        bufp->chgBit(oldp+767,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvc_illegal));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x15U])) {
        bufp->chgCData(oldp+768,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_resp),2);
        bufp->chgBit(oldp+769,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_ip_ie));
        bufp->chgIData(oldp+770,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mip),32);
        bufp->chgBit(oldp+771,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_sirq_pnd_en));
        bufp->chgBit(oldp+772,((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_resp))));
        bufp->chgBit(oldp+773,((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_resp))));
        bufp->chgBit(oldp+774,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_er_discard_pnd));
        bufp->chgBit(oldp+775,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_received));
        bufp->chgBit(oldp+776,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_vd));
        bufp->chgIData(oldp+777,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[6U]),32);
        bufp->chgIData(oldp+778,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[5U]),32);
        bufp->chgIData(oldp+779,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[4U]),32);
        bufp->chgIData(oldp+780,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[3U]),32);
        bufp->chgIData(oldp+781,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[2U]),32);
        bufp->chgIData(oldp+782,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[1U]),32);
        bufp->chgIData(oldp+783,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[0U]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x16U])) {
        bufp->chgBit(oldp+784,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_cpu_rstn_reset_sync__DOT__local_rst_n_in));
        bufp->chgIData(oldp+785,((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__data_fifo)),32);
        bufp->chgCData(oldp+786,((7U & (IData)((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__data_fifo 
                                                >> 0x22U)))),3);
        bufp->chgCData(oldp+787,((3U & (IData)((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__data_fifo 
                                                >> 0x20U)))),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x17U])) {
        bufp->chgIData(oldp+788,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_rdata),32);
        bufp->chgBit(oldp+789,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_rpt_command));
        bufp->chgBit(oldp+790,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_data0));
        bufp->chgBit(oldp+791,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_any));
        bufp->chgIData(oldp+792,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd),32);
        bufp->chgBit(oldp+793,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_csr_ro));
        bufp->chgCData(oldp+794,((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd 
                                  >> 0x18U)),8);
        bufp->chgBit(oldp+795,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd 
                                      >> 0x11U))));
        bufp->chgCData(oldp+796,((0xfU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+797,((0x7fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd 
                                           >> 5U))),7);
        bufp->chgBit(oldp+798,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd 
                                      >> 0x10U))));
        bufp->chgCData(oldp+799,((7U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd 
                                        >> 0x14U))),3);
        bufp->chgBit(oldp+800,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd 
                                      >> 0x12U))));
        bufp->chgBit(oldp+801,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0x880000U 
                                                  & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd)))))));
        bufp->chgBit(oldp+802,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0x8c2000U 
                                                  & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd)))))));
        bufp->chgBit(oldp+803,((2U == (7U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd 
                                             >> 0x14U)))));
        bufp->chgBit(oldp+804,((3U > (7U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd 
                                            >> 0x14U)))));
        bufp->chgSData(oldp+805,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regno),12);
        bufp->chgBit(oldp+806,((0U == (0xfU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+807,((IData)((0x1000U == 
                                        (0xffe0U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd)))));
        bufp->chgBit(oldp+808,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_hartreg_vd));
        bufp->chgBit(oldp+809,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_hartmem_vd));
        bufp->chgBit(oldp+810,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_reg_access_req));
        bufp->chgBit(oldp+811,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_reg_access_req) 
                                & (0U == (0xf000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd)))));
        bufp->chgBit(oldp+812,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_reg_access_req) 
                                & (IData)((0x1000U 
                                           == (0xffe0U 
                                               & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd))))));
        bufp->chgBit(oldp+813,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_execprogbuf_req));
        bufp->chgBit(oldp+814,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_mprf_access_vd));
        bufp->chgBit(oldp+815,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_mem_access_vd));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x18U])) {
        bufp->chgBit(oldp+816,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff));
        bufp->chgBit(oldp+817,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff));
        bufp->chgBit(oldp+818,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_dm_rstn_buf_cell__DOT__reset_n_status_ff));
        bufp->chgCData(oldp+819,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_csr_wdata),4);
        bufp->chgCData(oldp+820,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_csr_rdata),4);
        bufp->chgBit(oldp+821,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_status_ff) 
                                      >> 3U))));
        bufp->chgBit(oldp+822,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_status_ff) 
                                      >> 2U))));
        bufp->chgBit(oldp+823,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_status_ff) 
                                      >> 1U))));
        bufp->chgBit(oldp+824,((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_status_ff))));
        bufp->chgBit(oldp+825,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_status_ff_posedge) 
                                      >> 3U))));
        bufp->chgBit(oldp+826,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_status_ff_posedge) 
                                      >> 2U))));
        bufp->chgBit(oldp+827,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_status_ff_posedge) 
                                      >> 1U))));
        bufp->chgBit(oldp+828,((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_status_ff_posedge))));
        bufp->chgBit(oldp+829,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__dm_rst_n_in));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x19U])) {
        bufp->chgBit(oldp+830,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__clk_en_dm));
        bufp->chgBit(oldp+831,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_haltreq_next));
        bufp->chgBit(oldp+832,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_resumereq_next));
        bufp->chgBit(oldp+833,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ackhavereset_next));
        bufp->chgBit(oldp+834,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ndmreset_next));
        bufp->chgBit(oldp+835,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__clk_en_abs));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1aU])) {
        bufp->chgCData(oldp+836,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_ff),4);
        bufp->chgBit(oldp+837,((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_ff))));
        bufp->chgBit(oldp+838,((0xfU == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_ff))));
        bufp->chgBit(oldp+839,((0xaU == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_ff))));
        bufp->chgBit(oldp+840,((0xbU == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_ff))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1bU])) {
        bufp->chgBit(oldp+841,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_resp));
        bufp->chgBit(oldp+842,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_halt_req));
        bufp->chgBit(oldp+843,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_cmd_req));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1cU])) {
        bufp->chgCData(oldp+844,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__instr_type),3);
        bufp->chgBit(oldp+845,(((7U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__instr_type)) 
                                | ((5U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__instr_type)) 
                                   | (3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__instr_type))))));
        bufp->chgCData(oldp+846,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wr_size),2);
        bufp->chgBit(oldp+847,((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wr_size))));
        bufp->chgBit(oldp+848,((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wr_size))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1dU])) {
        bufp->chgBit(oldp+849,(vlSelf->scr1_top_tb_ahb__DOT__dmem_hready));
        bufp->chgBit(oldp+850,(vlSelf->scr1_top_tb_ahb__DOT__dmem_hresp));
        bufp->chgBit(oldp+851,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__rst_n_mux));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x1eU])) {
        bufp->chgBit(oldp+852,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_wr_next));
        bufp->chgBit(oldp+853,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_postexec_next));
        bufp->chgCData(oldp+854,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_size_next),2);
        bufp->chgBit(oldp+855,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_csr_ro_access_vd));
        bufp->chgBit(oldp+856,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_csr_rw_access_vd));
        bufp->chgCData(oldp+857,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_next),4);
        bufp->chgCData(oldp+858,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abstractcs_cmderr_next),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x20U])) {
        bufp->chgIData(oldp+859,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_rdata),32);
        bufp->chgBit(oldp+860,((1U & (IData)((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__resp_fifo 
                                              >> 0x25U)))));
        bufp->chgCData(oldp+861,((7U & (IData)((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__resp_fifo 
                                                >> 0x22U)))),3);
        bufp->chgCData(oldp+862,((3U & (IData)((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__resp_fifo 
                                                >> 0x20U)))),2);
        bufp->chgIData(oldp+863,((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__resp_fifo)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x21U])) {
        bufp->chgCData(oldp+864,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_resp),2);
        bufp->chgBit(oldp+865,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__lsu_rdy));
        bufp->chgBit(oldp+866,((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_resp))));
        bufp->chgBit(oldp+867,((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_resp))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x22U])) {
        bufp->chgBit(oldp+868,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_cmd_resp));
        bufp->chgBit(oldp+869,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__cmd_resp_ok));
        bufp->chgBit(oldp+870,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__dbg_halted));
        bufp->chgBit(oldp+871,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__dbg_halt2run));
        bufp->chgCData(oldp+872,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state_next),2);
        bufp->chgBit(oldp+873,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_event_next));
        bufp->chgBit(oldp+874,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_upd_on_halt));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x23U])) {
        bufp->chgBit(oldp+875,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_dmem_req));
        bufp->chgBit(oldp+876,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dscratch0_sel));
        bufp->chgBit(oldp+877,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr) 
                                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dscratch0_sel))));
        bufp->chgIData(oldp+878,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data),32);
        bufp->chgBit(oldp+879,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dreg_wr_req));
        bufp->chgBit(oldp+880,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__brkpt_hw));
        bufp->chgBit(oldp+881,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req));
        bufp->chgBit(oldp+882,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_w_req));
        bufp->chgBit(oldp+883,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_rw_exc));
        bufp->chgBit(oldp+884,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_r_req));
        bufp->chgBit(oldp+885,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_w_req));
        bufp->chgCData(oldp+886,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_addr),3);
        bufp->chgIData(oldp+887,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_wdata),32);
        bufp->chgIData(oldp+888,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ipic2csr_rdata),32);
        bufp->chgBit(oldp+889,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2tdu_req));
        bufp->chgIData(oldp+890,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata),32);
        bufp->chgBit(oldp+891,((1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2tdu_req_qlfy)))));
        bufp->chgBit(oldp+892,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2tdu_req_qlfy));
        bufp->chgCData(oldp+893,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_ldst_hit),4);
        bufp->chgBit(oldp+894,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2exu_i_x_req));
        bufp->chgBit(oldp+895,((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_ldst_hit))));
        bufp->chgCData(oldp+896,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_bp_retire),5);
        bufp->chgBit(oldp+897,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h215ccd09__0));
        bufp->chgCData(oldp+898,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_bp_retire_qlfy),5);
        bufp->chgBit(oldp+899,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2hdu_req));
        bufp->chgIData(oldp+900,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_rd_data),32);
        bufp->chgBit(oldp+901,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr));
        bufp->chgBit(oldp+902,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2hdu_dmode_req));
        bufp->chgBit(oldp+903,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_no_commit));
        bufp->chgBit(oldp+904,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_upd));
        bufp->chgBit(oldp+905,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_upd));
        bufp->chgBit(oldp+906,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtvec_upd));
        bufp->chgBit(oldp+907,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mscratch_upd));
        bufp->chgBit(oldp+908,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mepc_upd));
        bufp->chgBit(oldp+909,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_upd));
        bufp->chgBit(oldp+910,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtval_upd));
        bufp->chgCData(oldp+911,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_upd),2);
        bufp->chgCData(oldp+912,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_upd),2);
        bufp->chgBit(oldp+913,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten_upd));
        bufp->chgBit(oldp+914,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc));
        bufp->chgBit(oldp+915,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc));
        bufp->chgBit(oldp+916,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__exu_req_no_exc));
        bufp->chgBit(oldp+917,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_r_req) 
                                | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_w_req))));
        bufp->chgBit(oldp+918,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_rdy));
        bufp->chgBit(oldp+919,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_vd));
        bufp->chgIData(oldp+920,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op1),32);
        bufp->chgIData(oldp+921,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op2),32);
        bufp->chgIData(oldp+922,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_res),32);
        bufp->chgBit(oldp+923,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_cmp));
        bufp->chgBit(oldp+924,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__jb_taken));
        bufp->chgQData(oldp+925,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_res),33);
        bufp->chgBit(oldp+927,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_flags) 
                                      >> 3U))));
        bufp->chgBit(oldp+928,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_flags) 
                                      >> 2U))));
        bufp->chgBit(oldp+929,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_flags) 
                                      >> 1U))));
        bufp->chgBit(oldp+930,((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_flags))));
        bufp->chgBit(oldp+931,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_pos_ovflw));
        bufp->chgBit(oldp+932,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_neg_ovflw));
        bufp->chgBit(oldp+933,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_ops_diff_sgn));
        bufp->chgBit(oldp+934,(((0U != vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op1) 
                                & (0U != vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op2))));
        bufp->chgIData(oldp+935,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__shft_op1),32);
        bufp->chgCData(oldp+936,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__shft_op2),5);
        bufp->chgIData(oldp+937,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__shft_res),32);
        bufp->chgBit(oldp+938,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_iter_req));
        bufp->chgBit(oldp+939,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_corr_req));
        bufp->chgCData(oldp+940,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_next),2);
        bufp->chgBit(oldp+941,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_op1_is_neg));
        bufp->chgBit(oldp+942,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_res_rem_c));
        bufp->chgIData(oldp+943,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_res_rem),32);
        bufp->chgIData(oldp+944,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_res_quo),32);
        bufp->chgBit(oldp+945,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_quo_bit));
        bufp->chgBit(oldp+946,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_dvdnd_lo_upd));
        bufp->chgIData(oldp+947,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_dvdnd_lo_next),32);
        bufp->chgBit(oldp+948,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_sum_sub));
        bufp->chgQData(oldp+949,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_sum_op1),33);
        bufp->chgQData(oldp+951,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_sum_op2),33);
        bufp->chgQData(oldp+953,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_sum_res),33);
        bufp->chgBit(oldp+955,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__unnamedblk1__DOT__sgn));
        bufp->chgBit(oldp+956,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__unnamedblk1__DOT__inv));
        bufp->chgBit(oldp+957,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_exc_req));
        bufp->chgBit(oldp+958,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_exc_hwbrk));
        bufp->chgBit(oldp+959,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_tmreq));
        bufp->chgBit(oldp+960,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_sel));
        bufp->chgBit(oldp+961,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_wr));
        bufp->chgCData(oldp+962,((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
                                  >> 0x1cU)),4);
        bufp->chgSData(oldp+963,((0xfffU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
                                            >> 0x10U))),12);
        bufp->chgBit(oldp+964,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
                                      >> 0xfU))));
        bufp->chgCData(oldp+965,((7U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
                                        >> 0xcU))),3);
        bufp->chgBit(oldp+966,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
                                      >> 0xbU))));
        bufp->chgCData(oldp+967,((3U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
                                        >> 9U))),2);
        bufp->chgCData(oldp+968,((7U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
                                        >> 6U))),3);
        bufp->chgCData(oldp+969,((7U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
                                        >> 3U))),3);
        bufp->chgBit(oldp+970,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
                                      >> 2U))));
        bufp->chgCData(oldp+971,((3U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data)),2);
        bufp->chgCData(oldp+972,((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
                                  >> 0x1cU)),4);
        bufp->chgSData(oldp+973,((0xfffU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
                                            >> 0x10U))),12);
        bufp->chgBit(oldp+974,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
                                      >> 0xfU))));
        bufp->chgCData(oldp+975,((7U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
                                        >> 0xcU))),3);
        bufp->chgBit(oldp+976,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
                                      >> 0xbU))));
        bufp->chgCData(oldp+977,((3U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
                                        >> 9U))),2);
        bufp->chgCData(oldp+978,((7U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
                                        >> 6U))),3);
        bufp->chgCData(oldp+979,((7U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
                                        >> 3U))),3);
        bufp->chgBit(oldp+980,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
                                      >> 2U))));
        bufp->chgCData(oldp+981,((3U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out)),2);
        bufp->chgBit(oldp+982,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_sel));
        bufp->chgBit(oldp+983,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr) 
                                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_sel))));
        bufp->chgSData(oldp+984,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_edge_detected),16);
        bufp->chgSData(oldp+985,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lvl),16);
        bufp->chgBit(oldp+986,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_cisv_upd));
        bufp->chgBit(oldp+987,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__cicsr_wr_req));
        bufp->chgBit(oldp+988,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__eoi_wr_req));
        bufp->chgBit(oldp+989,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_eoi_req));
        bufp->chgBit(oldp+990,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__soi_wr_req));
        bufp->chgBit(oldp+991,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__idxr_wr_req));
        bufp->chgSData(oldp+992,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_next),16);
        bufp->chgSData(oldp+993,((0xffffU & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lvl)) 
                                             | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_imr_next)))),16);
        bufp->chgSData(oldp+994,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_clr_req),16);
        bufp->chgSData(oldp+995,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_clr),16);
        bufp->chgSData(oldp+996,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_isvr_next),16);
        bufp->chgBit(oldp+997,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__cicsr_wr_req) 
                                | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__icsr_wr_req))));
        bufp->chgSData(oldp+998,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ier_next),16);
        bufp->chgSData(oldp+999,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_imr_next),16);
        bufp->chgSData(oldp+1000,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_iinvr_next),16);
        bufp->chgBit(oldp+1001,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__icsr_wr_req));
        bufp->chgBit(oldp+1002,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_start_vd));
        bufp->chgIData(oldp+1003,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data),32);
        bufp->chgBit(oldp+1004,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_tselect));
        bufp->chgCData(oldp+1005,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_mcontrol),4);
        bufp->chgCData(oldp+1006,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_tdata2),4);
        bufp->chgBit(oldp+1007,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_icount));
        bufp->chgCData(oldp+1008,((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h8108b176__0) 
                                    << 3U) | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h803908b6__0) 
                                               << 2U) 
                                              | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h4ea400bb__0) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h6472391d__0))))),4);
        bufp->chgCData(oldp+1009,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_clk_en),4);
        bufp->chgCData(oldp+1010,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_upd),4);
        bufp->chgCData(oldp+1011,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_next),4);
        bufp->chgCData(oldp+1012,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_next),4);
        bufp->chgCData(oldp+1013,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_next),4);
        bufp->chgCData(oldp+1014,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_next),4);
        bufp->chgCData(oldp+1015,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_next),4);
        bufp->chgCData(oldp+1016,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_next),4);
        bufp->chgCData(oldp+1017,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_next),4);
        bufp->chgBit(oldp+1018,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_wr_req));
        bufp->chgBit(oldp+1019,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_clk_en));
        bufp->chgBit(oldp+1020,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_upd));
        bufp->chgBit(oldp+1021,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_dmode_next));
        bufp->chgBit(oldp+1022,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_m_next));
        bufp->chgBit(oldp+1023,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_action_next));
        bufp->chgBit(oldp+1024,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_hit_next));
        bufp->chgCData(oldp+1025,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tdata2_upd),4);
        bufp->chgIData(oldp+1026,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1027,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+1028,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+1029,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+1030,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__unnamedblk5__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x24U])) {
        bufp->chgIData(oldp+1031,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data0_next),32);
        bufp->chgIData(oldp+1032,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data1_next),32);
        bufp->chgBit(oldp+1033,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_mret_instr));
        bufp->chgBit(oldp+1034,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_mstatus_mie_up));
        bufp->chgBit(oldp+1035,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_mret));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x25U])) {
        bufp->chgCData(oldp+1036,((7U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[2U])),3);
        bufp->chgCData(oldp+1037,(vlSelf->scr1_top_tb_ahb__DOT__dmem_htrans),2);
        bufp->chgIData(oldp+1038,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[1U]),32);
        bufp->chgBit(oldp+1039,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[2U] 
                                       >> 3U))));
        bufp->chgCData(oldp+1040,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_be),4);
        bufp->chgCData(oldp+1041,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_wr_hazard),4);
        bufp->chgBit(oldp+1042,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_req));
        bufp->chgBit(oldp+1043,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_req));
        bufp->chgBit(oldp+1044,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_req));
        bufp->chgIData(oldp+1045,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2mprf_rd_data),32);
        bufp->chgIData(oldp+1046,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_data),32);
        bufp->chgCData(oldp+1047,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_code),4);
        bufp->chgBit(oldp+1048,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_exc_req_qlfy));
        bufp->chgIData(oldp+1049,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_data),32);
        bufp->chgBit(oldp+1050,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_exc_req));
        bufp->chgBit(oldp+1051,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__lsu_exc_req));
        bufp->chgBit(oldp+1052,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_fsm_next));
        bufp->chgBit(oldp+1053,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__dmem_req_vd));
        bufp->chgBit(oldp+1054,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_except));
        bufp->chgBit(oldp+1055,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_rd));
        bufp->chgBit(oldp+1056,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_new[2U] 
                                       >> 3U))));
        bufp->chgCData(oldp+1057,((7U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_new[2U])),3);
        bufp->chgIData(oldp+1058,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_new[1U]),32);
        bufp->chgIData(oldp+1059,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_new[0U]),32);
        bufp->chgBit(oldp+1060,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[2U] 
                                       >> 3U))));
        bufp->chgCData(oldp+1061,((7U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[2U])),3);
        bufp->chgIData(oldp+1062,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[1U]),32);
        bufp->chgIData(oldp+1063,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[0U]),32);
        bufp->chgBit(oldp+1064,((1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT____VdfgExtracted_h136b417e__0)))));
        bufp->chgBit(oldp+1065,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_rd));
        bufp->chgBit(oldp+1066,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_wr));
        bufp->chgQData(oldp+1067,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmp_new),64);
        bufp->chgBit(oldp+1069,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__control_up));
        bufp->chgBit(oldp+1070,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__divider_up));
        bufp->chgBit(oldp+1071,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimelo_up));
        bufp->chgBit(oldp+1072,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimehi_up));
        bufp->chgBit(oldp+1073,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmplo_up));
        bufp->chgBit(oldp+1074,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmphi_up));
        bufp->chgBit(oldp+1075,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__time_cmp_flag));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x26U])) {
        bufp->chgCData(oldp+1076,(vlSelf->scr1_top_tb_ahb__DOT__imem_htrans),2);
        bufp->chgIData(oldp+1077,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo),32);
        bufp->chgCData(oldp+1078,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_wr_hazard),4);
        bufp->chgBit(oldp+1079,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_req_ack));
        bufp->chgBit(oldp+1080,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_req));
        bufp->chgIData(oldp+1081,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_addr),32);
        bufp->chgBit(oldp+1082,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_imem_req));
        bufp->chgBit(oldp+1083,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_imem_req));
        bufp->chgBit(oldp+1084,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req));
        bufp->chgIData(oldp+1085,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc),32);
        bufp->chgBit(oldp+1086,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__stop_fetch));
        bufp->chgBit(oldp+1087,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_halt_req));
        bufp->chgBit(oldp+1088,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__instret));
        bufp->chgBit(oldp+1089,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2ifu_rdy));
        bufp->chgBit(oldp+1090,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2mprf_w_req));
        bufp->chgBit(oldp+1091,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_take_irq));
        bufp->chgBit(oldp+1092,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_take_exc));
        bufp->chgBit(oldp+1093,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_halt_ack));
        bufp->chgBit(oldp+1094,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_busy));
        bufp->chgBit(oldp+1095,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_mie_next));
        bufp->chgBit(oldp+1096,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_mpie_next));
        bufp->chgBit(oldp+1097,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_i_next));
        bufp->chgBit(oldp+1098,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_lo_inc));
        bufp->chgBit(oldp+1099,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_hi_inc));
        bufp->chgBit(oldp+1100,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_exc));
        bufp->chgBit(oldp+1101,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_irq));
        bufp->chgBit(oldp+1102,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_barrier));
        bufp->chgBit(oldp+1103,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_en));
        bufp->chgBit(oldp+1104,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_barrier) 
                                 | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_rdy))));
        bufp->chgBit(oldp+1105,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_rdy));
        bufp->chgBit(oldp+1106,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_trans_next));
        bufp->chgBit(oldp+1107,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_update_next));
        bufp->chgBit(oldp+1108,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_halt_pnd));
        bufp->chgBit(oldp+1109,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_sstep));
        bufp->chgBit(oldp+1110,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__ifu_handshake_done));
        bufp->chgCData(oldp+1111,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_fsm_next),2);
        bufp->chgCData(oldp+1112,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rd_size),2);
        bufp->chgBit(oldp+1113,((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rd_size))));
        bufp->chgCData(oldp+1114,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr_next),3);
        bufp->chgBit(oldp+1115,(((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rd_size)) 
                                 | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_flush_req))));
        bufp->chgBit(oldp+1116,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wr_en));
        bufp->chgBit(oldp+1117,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_flush_req));
        bufp->chgBit(oldp+1118,(((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__stop_fetch)) 
                                 & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req))));
        bufp->chgBit(oldp+1119,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__ifu_fsm_next));
        bufp->chgBit(oldp+1120,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_handshake_done));
        bufp->chgBit(oldp+1121,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_handshake_done) 
                                 | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req))));
        bufp->chgCData(oldp+1122,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_pnd_txns_cnt_next),3);
        bufp->chgSData(oldp+1123,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_count_next),14);
        bufp->chgBit(oldp+1124,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_update));
        bufp->chgBit(oldp+1125,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_rd));
        bufp->chgIData(oldp+1126,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo),32);
        bufp->chgBit(oldp+1127,((1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT____VdfgExtracted_h136b417e__3)))));
        bufp->chgBit(oldp+1128,((0x480000U == (0xffff0000U 
                                               & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_addr))));
        bufp->chgSData(oldp+1129,((0x3fffU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_addr 
                                              >> 2U))),14);
    }
    bufp->chgBit(oldp+1130,(vlSelf->clk));
    bufp->chgBit(oldp+1131,(vlSelf->scr1_top_tb_ahb__DOT__trst_n));
    bufp->chgBit(oldp+1132,(vlSelf->scr1_top_tb_ahb__DOT__tck));
    bufp->chgBit(oldp+1133,(vlSelf->scr1_top_tb_ahb__DOT__tms));
    bufp->chgBit(oldp+1134,(vlSelf->scr1_top_tb_ahb__DOT__tdi));
    bufp->chgBit(oldp+1135,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tdo_out_ff));
    bufp->chgBit(oldp+1136,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tdo_en_ff));
    bufp->chgCData(oldp+1137,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_be_form__Vstatic__tmp),4);
    bufp->chgBit(oldp+1138,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tapc_trst_n));
    bufp->chgBit(oldp+1139,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_req_ack));
    bufp->chgIData(oldp+1140,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__mprf2exu_rs2_data),32);
    bufp->chgIData(oldp+1141,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_rdata),32);
    bufp->chgCData(oldp+1142,((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__fsm) 
                                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__imem_hready))
                                ? ((IData)(vlSelf->scr1_top_tb_ahb__DOT__imem_hresp)
                                    ? 2U : 1U) : 0U)),2);
    bufp->chgCData(oldp+1143,((((IData)(vlSelf->scr1_top_tb_ahb__DOT__dmem_hready) 
                                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__fsm))
                                ? ((IData)(vlSelf->scr1_top_tb_ahb__DOT__dmem_hresp)
                                    ? 2U : 1U) : 0U)),2);
    bufp->chgBit(oldp+1144,((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_scu_ch_sel) 
                              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_ff)) 
                             | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_sel) 
                                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_ff)))));
    bufp->chgBit(oldp+1145,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_cmd_resp) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff))));
    bufp->chgBit(oldp+1146,((1U & ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state))
                                    ? ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff)) 
                                       | (~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_req_ff) 
                                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_init_pc_qlfy))))
                                    : ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff)) 
                                       | (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_update)))))));
    bufp->chgBit(oldp+1147,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_event) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff))));
    bufp->chgIData(oldp+1148,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_pbuf_instr),32);
    bufp->chgBit(oldp+1149,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dscratch0_sel) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff))));
    bufp->chgIData(oldp+1150,((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_ff 
                               & (- (IData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff))))),32);
    bufp->chgBit(oldp+1151,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_data0))));
    bufp->chgBit(oldp+1152,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_wr_req)
                                    ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wdata
                                    : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_ff)))));
    bufp->chgBit(oldp+1153,((1U & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_ff)) 
                                   | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__havereset_skip_pwrup_ff)
                                       ? ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0)) 
                                          & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ndmreset_ff)))
                                       : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__havereset_skip_pwrup_ff))))));
    bufp->chgBit(oldp+1154,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_ff) 
                             & (((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__havereset_skip_pwrup_ff)) 
                                 & (0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0))) 
                                | ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ackhavereset_ff)) 
                                   & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_havereset_ff))))));
    bufp->chgBit(oldp+1155,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_ff) 
                             & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_resumereq_ff) 
                                & ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0)) 
                                   | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_resumeack_ff))))));
    bufp->chgBit(oldp+1156,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_ff) 
                             & ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0)) 
                                | ((1U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0)) 
                                   & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_halted_ff))))));
    bufp->chgIData(oldp+1157,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_ff)
                                ? (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__command_wr_req) 
                                    & (0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)))
                                    ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wdata
                                    : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_command_ff)
                                : 0U)),32);
    bufp->chgBit(oldp+1158,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_ff) 
                             & ((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr) 
                                  & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_abstractauto)) 
                                 & (0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)))
                                 ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wdata
                                 : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_autoexec_ff)))));
    bufp->chgBit(oldp+1159,(((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_wr_ff)) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dreg_wr_req))));
    bufp->chgBit(oldp+1160,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__clk_en_abs) 
                             & ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
                                | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h65cca704__0)))));
    bufp->chgBit(oldp+1161,(((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h65cca704__0))));
    bufp->chgBit(oldp+1162,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__clk_en_abs) 
                             & ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
                                | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_any)))));
    bufp->chgBit(oldp+1163,(((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_any))));
    bufp->chgBit(oldp+1164,((1U & (~ ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
                                      | ((9U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
                                         | ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
                                            | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_resp))))))));
    bufp->chgCData(oldp+1165,((((~ ((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff)) 
                                    & ((4U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff)) 
                                       & (0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0))))) 
                                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_ff))
                                ? ((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff))
                                    ? ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff))
                                        ? ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff))
                                            ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff)
                                            : ((1U 
                                                == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0))
                                                ? 0U
                                                : 6U))
                                        : ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff))
                                            ? ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__cmd_resp_ok)
                                                ? 6U
                                                : 5U)
                                            : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__cmd_resp_ok)
                                                ? 3U
                                                : 4U)))
                                    : ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff))
                                        ? ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff))
                                            ? ((2U 
                                                == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0))
                                                ? 0U
                                                : 3U)
                                            : ((3U 
                                                == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0))
                                                ? 3U
                                                : 2U))
                                        : ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff))
                                            ? ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__cmd_resp_ok)
                                                ? 2U
                                                : 1U)
                                            : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_req_ff)
                                                ? 1U
                                                : (
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
                                : 0U)),3);
    bufp->chgCData(oldp+1166,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_req_ff)
                                ? 1U : (((2U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0)) 
                                         & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_haltreq_ff))
                                         ? 4U : (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_resumereq_ff) 
                                                  & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_resumeack_ff)) 
                                                     & (2U 
                                                        == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0))))
                                                  ? 5U
                                                  : 0U)))),3);
    bufp->chgBit(oldp+1167,(((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff)) 
                             & ((4U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff)) 
                                & (0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0))))));
    bufp->chgBit(oldp+1168,(((2U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0)) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_haltreq_ff))));
    bufp->chgBit(oldp+1169,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_resumereq_ff) 
                             & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_resumeack_ff)) 
                                & (2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0))))));
    bufp->chgBit(oldp+1170,(((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
                             & (0x100073U == vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_pbuf_instr))));
    bufp->chgBit(oldp+1171,((((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff)) 
                              | ((4U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff)) 
                                 | (5U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff)))) 
                             & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__cmd_resp_ok)) 
                                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_ff)))));
    bufp->chgQData(oldp+1172,(((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_id))
                                ? (QData)((IData)((
                                                   ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_tdi) 
                                                    << 0x1fU) 
                                                   | (0x7fffffffU 
                                                      & (IData)(
                                                                (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_ff 
                                                                 >> 1U))))))
                                : (((QData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_tdi)) 
                                    << 0x28U) | (0xffffffffffULL 
                                                 & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_ff 
                                                    >> 1U))))),41);
    bufp->chgQData(oldp+1174,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_capture)
                                ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_rdata
                                : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_shift)
                                    ? ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_id))
                                        ? (QData)((IData)(
                                                          (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_tdi) 
                                                            << 0x1fU) 
                                                           | (0x7fffffffU 
                                                              & (IData)(
                                                                        (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_ff 
                                                                         >> 1U))))))
                                        : (((QData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_tdi)) 
                                            << 0x28U) 
                                           | (0xffffffffffULL 
                                              & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_ff 
                                                 >> 1U))))
                                    : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_ff))),41);
    bufp->chgIData(oldp+1176,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd_ff)
                                ? ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__jb_taken)
                                    ? (0xfffffffeU 
                                       & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0)
                                    : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__inc_pc)
                                : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_ff)),32);
    bufp->chgBit(oldp+1177,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd_ff) 
                             & (3U == (0xfU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])))));
    bufp->chgBit(oldp+1178,(((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_exc_req)) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__instret))));
    bufp->chgBit(oldp+1179,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_vd));
    bufp->chgBit(oldp+1180,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_imem_err));
    bufp->chgCData(oldp+1181,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__mprf_rs1_req)
                                ? (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                            >> 0xfU))
                                : 0U)),5);
    bufp->chgCData(oldp+1182,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__mprf_rs2_req)
                                ? (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                            >> 0xaU))
                                : 0U)),5);
    bufp->chgBit(oldp+1183,(((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__csr_access_ff)) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_mret_instr))));
    bufp->chgIData(oldp+1184,(((8U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_code))
                                ? 0U : ((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_code))
                                         ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0
                                         : ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_code))
                                             ? ((1U 
                                                 & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_code))
                                                 ? 
                                                ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2exu_i_x_req)
                                                  ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_ff
                                                  : 
                                                 ((0U 
                                                   != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_ldst_hit))
                                                   ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0
                                                   : 0U))
                                                 : 
                                                ((0x10U 
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
                                             : ((1U 
                                                 & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_code))
                                                 ? 
                                                ((0x400U 
                                                  & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U])
                                                  ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__inc_pc
                                                  : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_ff)
                                                 : 0U))))),32);
    bufp->chgIData(oldp+1185,((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_mret_instr) 
                                & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_take_irq)))
                                ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mepc_ff 
                                   << 1U) : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtvec_mode_ff)
                                              ? ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_take_exc)
                                                  ? 
                                                 (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtvec_base 
                                                  << 6U)
                                                  : 
                                                 ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_eirq_pnd_en)
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
                                                 << 6U)))),32);
    bufp->chgBit(oldp+1186,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_ip_ie) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_mie_ff))));
    bufp->chgBit(oldp+1187,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__lsu_req) 
                             & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_fsm_curr)) 
                                & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2exu_i_x_req))))));
    bufp->chgCData(oldp+1188,((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_hit) 
                                << 4U) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_hit))),5);
    bufp->chgBit(oldp+1189,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_haa489fa9__0));
    bufp->chgBit(oldp+1190,(((3U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state)) 
                             | ((2U != (3U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                              >> 5U))) 
                                & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr))))));
    bufp->chgBit(oldp+1191,(((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state)) 
                             & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_update) 
                                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff)))));
    bufp->chgBit(oldp+1192,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2ifu_rdy) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff))));
    bufp->chgBit(oldp+1193,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_busy) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff))));
    bufp->chgBit(oldp+1194,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__instret) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff))));
    bufp->chgBit(oldp+1195,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_init_pc_qlfy));
    bufp->chgBit(oldp+1196,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__brkpt_qlfy));
    bufp->chgIData(oldp+1197,((0x7fffffffU & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_exc)
                                               ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_ff 
                                                  >> 1U)
                                               : ((
                                                   (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_mret_instr)) 
                                                   & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_irq))
                                                   ? 
                                                  (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd_ff)
                                                     ? 
                                                    ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__jb_taken)
                                                      ? 
                                                     (0xfffffffeU 
                                                      & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0)
                                                      : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__inc_pc)
                                                     : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_ff) 
                                                   >> 1U)
                                                   : 
                                                  ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mepc_upd)
                                                    ? 
                                                   (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_data 
                                                    >> 1U)
                                                    : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mepc_ff))))),31);
    bufp->chgCData(oldp+1198,((0xfU & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_exc)
                                        ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_code)
                                        : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_irq)
                                            ? ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_eirq_pnd_en)
                                                ? 0xbU
                                                : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_sirq_pnd_en)
                                                    ? 3U
                                                    : 
                                                   ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_tirq_pnd_en)
                                                     ? 7U
                                                     : 0xbU)))
                                            : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_upd)
                                                ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_data
                                                : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_ec_ff)))))),4);
    bufp->chgCData(oldp+1199,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_eirq_pnd_en)
                                ? 0xbU : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_sirq_pnd_en)
                                           ? 3U : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_tirq_pnd_en)
                                                    ? 7U
                                                    : 0xbU)))),4);
    bufp->chgIData(oldp+1200,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_exc)
                                ? ((8U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_code))
                                    ? 0U : ((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_code))
                                             ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0
                                             : ((2U 
                                                 & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_code))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_code))
                                                  ? 
                                                 ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2exu_i_x_req)
                                                   ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_ff
                                                   : 
                                                  ((0U 
                                                    != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_ldst_hit))
                                                    ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0
                                                    : 0U))
                                                  : 
                                                 ((0x10U 
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
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_code))
                                                  ? 
                                                 ((0x400U 
                                                   & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U])
                                                   ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__inc_pc
                                                   : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_ff)
                                                  : 0U))))
                                : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_irq)
                                    ? 0U : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtval_upd)
                                             ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_data
                                             : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtval_ff)))),32);
    bufp->chgBit(oldp+1201,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_lo_inc) 
                                   | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_upd)))));
    bufp->chgCData(oldp+1202,((0xffU & ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_upd))
                                         ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_data
                                         : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_lo_ff) 
                                            + (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_lo_inc))))),8);
    bufp->chgBit(oldp+1203,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_hi_inc) 
                             | (0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_upd)))));
    bufp->chgQData(oldp+1204,((0xffffffffffffffULL 
                               & ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_upd))
                                   ? (((QData)((IData)(
                                                       (0xffffffffULL 
                                                        & ((1ULL 
                                                            + vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_hi_ff) 
                                                           >> 0x18U)))) 
                                       << 0x18U) | (QData)((IData)(
                                                                   (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_data 
                                                                    >> 8U))))
                                   : ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_upd))
                                       ? (((QData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_data)) 
                                           << 0x18U) 
                                          | (QData)((IData)(
                                                            (0xffffffU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_hi_ff))))))
                                       : (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_hi_ff 
                                          + (QData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_hi_inc))))))),56);
    bufp->chgCData(oldp+1206,((0xffU & ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_upd))
                                         ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_data
                                         : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_lo_ff) 
                                            + (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten_cy_ff))))),8);
    bufp->chgQData(oldp+1207,((0xffffffffffffffULL 
                               & ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_upd))
                                   ? (((QData)((IData)(
                                                       (0xffffffffULL 
                                                        & ((1ULL 
                                                            + vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_hi_ff) 
                                                           >> 0x18U)))) 
                                       << 0x18U) | (QData)((IData)(
                                                                   (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_data 
                                                                    >> 8U))))
                                   : ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_upd))
                                       ? (((QData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_data)) 
                                           << 0x18U) 
                                          | (QData)((IData)(
                                                            (0xffffffU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_hi_ff))))))
                                       : (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_hi_ff 
                                          + (QData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_hi_inc))))))),56);
    bufp->chgBit(oldp+1209,(((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_mret_instr)) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_irq))));
    bufp->chgBit(oldp+1210,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__dbg_run_start_npbuf));
    bufp->chgBit(oldp+1211,(((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_barrier)) 
                             & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req)) 
                                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_vd)))));
    bufp->chgBit(oldp+1212,(((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__dbg_halt2run)) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_exc_req))));
    bufp->chgBit(oldp+1213,(((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_ip_ie)) 
                             & ((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd_ff) 
                                  & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                     >> 0x14U)) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_run_start_ff)) 
                                & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_no_commit)) 
                                   & (~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_halt_ack) 
                                         | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                                            >> 1U))))))));
    bufp->chgBit(oldp+1214,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_run_req));
    bufp->chgBit(oldp+1215,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_halted_ff) 
                             & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_take_irq)) 
                                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_ip_ie)))));
    bufp->chgBit(oldp+1216,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_halt_req) 
                             | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_run_req))));
    bufp->chgBit(oldp+1217,((1U & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_run_req)) 
                                   | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_halt_req)))));
    bufp->chgBit(oldp+1218,((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__instret) 
                              | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_take_irq) 
                                 | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__dbg_run_start_npbuf))) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT____VdfgTmp_h76e0b655__0))));
    bufp->chgIData(oldp+1219,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req)
                                ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc
                                : ((0x40U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__inc_pc 
                                             ^ vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_ff))
                                    ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__inc_pc
                                    : ((0xffffffc0U 
                                        & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_ff) 
                                       | (0x3fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__inc_pc))))),32);
    bufp->chgIData(oldp+1220,(((8U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff))
                                ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_rdata
                                : ((4U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff))
                                    ? ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff))
                                        ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_rdata
                                        : ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff))
                                            ? (0xffffU 
                                               & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_rdata)
                                            : (0xffU 
                                               & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_rdata)))
                                    : ((2U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff))
                                        ? ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff))
                                            ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_rdata
                                            : (((- (IData)(
                                                           (1U 
                                                            & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_rdata 
                                                               >> 0xfU)))) 
                                                << 0x10U) 
                                               | (0xffffU 
                                                  & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_rdata)))
                                        : ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff))
                                            ? (((- (IData)(
                                                           (1U 
                                                            & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_rdata 
                                                               >> 7U)))) 
                                                << 8U) 
                                               | (0xffU 
                                                  & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_rdata))
                                            : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_rdata))))),32);
    bufp->chgCData(oldp+1221,(((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_resp))
                                ? (((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff)) 
                                    | ((4U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff)) 
                                       | ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff)) 
                                          | ((5U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff)) 
                                             | (3U 
                                                == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff))))))
                                    ? 5U : (((6U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff)) 
                                             | ((7U 
                                                 == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff)) 
                                                | (8U 
                                                   == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff))))
                                             ? 7U : 0U))
                                : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_exc_hwbrk)
                                    ? 3U : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__dmem_addr_mslgn_l)
                                             ? 4U : 
                                            ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__dmem_addr_mslgn_s)
                                              ? 6U : 0U))))),4);
    bufp->chgBit(oldp+1222,(((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__csr_access_ff)) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_mstatus_mie_up))));
    bufp->chgIData(oldp+1223,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req)
                                ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc
                                : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__inc_pc)),32);
    bufp->chgBit(oldp+1224,((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__init_pc) 
                              | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__instret) 
                                 | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_take_irq))) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT____VdfgTmp_h76e0b655__0))));
    bufp->chgIData(oldp+1225,(((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_ff))
                                ? ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_cmd_is_iter)
                                    ? 0x40000000U : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_iter_cnt)
                                : (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_iter_cnt 
                                   >> 1U))),32);
    bufp->chgBit(oldp+1226,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_cmd_is_iter)
                              ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_res_rem_c)
                              : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_c_ff))));
    bufp->chgIData(oldp+1227,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_cmd_is_iter)
                                ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_res_rem
                                : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_hi_ff)),32);
    bufp->chgIData(oldp+1228,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_cmd_is_iter)
                                ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_res_quo
                                : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_lo_ff)),32);
    bufp->chgBit(oldp+1229,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_req_ff) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT____VdfgTmp_h9a92a6aa__0))));
    bufp->chgBit(oldp+1230,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT____VdfgTmp_h9a92a6aa__0) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_cmd_req))));
    bufp->chgBit(oldp+1231,(((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state)) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_trans_next))));
    bufp->chgBit(oldp+1232,((((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state)) 
                              | (3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state))) 
                             & (2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state_next)))));
    bufp->chgCData(oldp+1233,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__dbg_halt2run)
                                ? 0x3fU : (0x3fU & 
                                           ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__halt_req_timeout_cnt) 
                                            - (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT____VdfgTmp_he3db9a6d__0))))),6);
    bufp->chgBit(oldp+1234,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__dbg_halt2run) 
                             | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT____VdfgTmp_he3db9a6d__0))));
    bufp->chgCData(oldp+1235,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_tmreq)
                                ? 2U : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_ebreak)
                                         ? 1U : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_halt_req)
                                                  ? 3U
                                                  : 
                                                 ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_sstep)
                                                   ? 4U
                                                   : 0U))))),3);
    bufp->chgBit(oldp+1236,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_ebreak));
    bufp->chgBit(oldp+1237,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_sstep) 
                             | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_ebreak) 
                                | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_except) 
                                   | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_halt_req) 
                                      | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_tmreq)))))));
    bufp->chgBit(oldp+1238,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__ifu_handshake_done) 
                             & (7U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_addr_ff)))));
    bufp->chgBit(oldp+1239,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_exc_req_qlfy) 
                             | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__ifu_handshake_done))));
    bufp->chgBit(oldp+1240,(((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state)) 
                             & (3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state_next)))));
    bufp->chgCData(oldp+1241,(((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_fsm_curr))
                                ? 0U : (7U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_addr_ff) 
                                              + ((1U 
                                                  == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_fsm_curr)) 
                                                 & ((~ 
                                                     ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_exc_req_qlfy) 
                                                      | (7U 
                                                         == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_addr_ff)))) 
                                                    & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__ifu_handshake_done))))))),3);
    bufp->chgBit(oldp+1242,(((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_fsm_curr)) 
                             & ((~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_exc_req_qlfy) 
                                    | (7U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_addr_ff)))) 
                                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__ifu_handshake_done)))));
    bufp->chgIData(oldp+1243,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_upd_on_halt)
                                ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_ff
                                : (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr) 
                                    & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_sel))
                                    ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data
                                    : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_ff))),32);
    bufp->chgIData(oldp+1244,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_sel)
                                ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_ff
                                : 0U)),32);
    bufp->chgIData(oldp+1245,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dscratch0_sel)
                                ? (((5U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
                                    | (8U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)))
                                    ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data1_ff
                                    : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data0_ff)
                                : 0U)),32);
    bufp->chgBit(oldp+1246,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req)
                                    ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc 
                                       >> 1U) : ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_vd)) 
                                                 & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__new_pc_unaligned_ff))))));
    bufp->chgBit(oldp+1247,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req) 
                             | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_vd))));
    bufp->chgCData(oldp+1248,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_flush_req)
                                ? 0U : (7U & ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wr_size))
                                               ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr)
                                               : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr) 
                                                  + 
                                                  ((1U 
                                                    == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wr_size))
                                                    ? 2U
                                                    : 1U)))))),3);
    bufp->chgBit(oldp+1249,(((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wr_size)) 
                             | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_flush_req))));
    bufp->chgBit(oldp+1250,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__stop_fetch) 
                             | ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req)) 
                                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_er_discard_pnd)))));
    bufp->chgBit(oldp+1251,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_handshake_done) 
                             ^ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_received))));
    bufp->chgBit(oldp+1252,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req) 
                             | ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_resp)) 
                                | ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_resp)) 
                                   & (0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_discard_cnt)))))));
    bufp->chgCData(oldp+1253,((7U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req)
                                      ? ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_pnd_txns_cnt_next) 
                                         - (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_handshake_done))
                                      : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_er_discard_pnd)
                                          ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_pnd_txns_cnt_next)
                                          : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_discard_cnt) 
                                             - (IData)(1U)))))),3);
    bufp->chgBit(oldp+1254,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2mprf_w_req) 
                             & (0U != (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                                >> 5U))))));
    bufp->chgBit(oldp+1255,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__mprf_rs1_req) 
                             & (0U != (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                                >> 0xfU))))));
    bufp->chgBit(oldp+1256,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__mprf_rs2_req) 
                             & (0U != (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                                >> 0xaU))))));
    bufp->chgBit(oldp+1257,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_tselect) 
                             & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_req) 
                                & (5U > (7U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data))))));
    bufp->chgCData(oldp+1258,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_hit),4);
    bufp->chgBit(oldp+1259,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_wr_req)
                                    ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data 
                                       >> 9U) : ((~ 
                                                  ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h136f2fbe__0) 
                                                   & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_skip_ff))) 
                                                 & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_skip_ff))))));
    bufp->chgBit(oldp+1260,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h1024b93b__0) 
                             & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_haa489fa9__0) 
                                & (0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_count_ff))))));
    bufp->chgBit(oldp+1261,(((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_skip_ff)) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h136f2fbe__0))));
    bufp->chgBit(oldp+1262,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h136f2fbe__0) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_skip_ff))));
    bufp->chgBit(oldp+1263,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_hit));
    bufp->chgIData(oldp+1264,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core),32);
    bufp->chgIData(oldp+1265,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__time_cnt),32);
    bufp->chgCData(oldp+1266,((0xfU & (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_dr_cap_req)
                                         ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shadow_ff)
                                         : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_dr_shft_req)
                                             ? (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_tdi) 
                                                 << 7U) 
                                                | (0x7fU 
                                                   & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_ff) 
                                                      >> 1U)))
                                             : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_ff))) 
                                       >> 4U))),4);
    bufp->chgCData(oldp+1267,((3U & (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_dr_cap_req)
                                       ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shadow_ff)
                                       : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_dr_shft_req)
                                           ? (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_tdi) 
                                               << 7U) 
                                              | (0x7fU 
                                                 & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_ff) 
                                                    >> 1U)))
                                           : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_ff))) 
                                     >> 2U))),2);
    bufp->chgCData(oldp+1268,((3U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_dr_cap_req)
                                      ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shadow_ff)
                                      : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_dr_shft_req)
                                          ? (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_tdi) 
                                              << 7U) 
                                             | (0x7fU 
                                                & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_ff) 
                                                   >> 1U)))
                                          : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_ff))))),2);
    bufp->chgBit(oldp+1269,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__sys_rst_n_in));
    bufp->chgBit(oldp+1270,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__core_rst_n_in_sync));
    bufp->chgBit(oldp+1271,((1U & (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_mode_ff) 
                                    >> 1U) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__core_rst_n_in_sync)))));
    bufp->chgBit(oldp+1272,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__trst_n_int));
    bufp->chgCData(oldp+1273,(((0xaU == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_ff))
                                ? 1U : ((0xbU == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_ff))
                                         ? (((IData)(vlSelf->scr1_top_tb_ahb__DOT__tdi) 
                                             << 4U) 
                                            | (0xfU 
                                               & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_shift_ff) 
                                                  >> 1U)))
                                         : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_shift_ff)))),5);
    bufp->chgCData(oldp+1274,(((0xfU == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_ff))
                                ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_shift_ff)
                                : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_ff))),5);
    bufp->chgBit(oldp+1275,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__dr_out));
    bufp->chgBit(oldp+1276,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_dr_shift_ff) 
                             | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_ir_shift_ff))));
    bufp->chgBit(oldp+1277,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_dr_shift_ff)
                              ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__dr_out)
                              : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_ir_shift_ff) 
                                 & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_shift_ff)))));
    bufp->chgCData(oldp+1278,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_capture_sync),3);
    bufp->chgCData(oldp+1279,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_shift_sync),3);
    bufp->chgBit(oldp+1280,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__fsm));
    bufp->chgBit(oldp+1281,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__dmem_hready) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__fsm))));
    bufp->chgBit(oldp+1282,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__fsm) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__imem_hready))));
    bufp->chgCData(oldp+1283,((((IData)(vlSelf->scr1_top_tb_ahb__DOT__trst_n) 
                                << 1U) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_cpu_rstn_reset_sync__DOT__local_rst_n_in))),2);
    bufp->chgIData(oldp+1284,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_writedata),32);
    bufp->chgQData(oldp+1285,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtime_new),64);
    bufp->chgBit(oldp+1287,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timer_clksrc_rtc));
    bufp->chgCData(oldp+1288,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__rtc_sync),4);
    bufp->chgBit(oldp+1289,((1U & VL_REDXOR_4((0xcU 
                                               & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__rtc_sync))))));
    bufp->chgBit(oldp+1290,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timeclk_cnt_en));
    bufp->chgBit(oldp+1291,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__time_posedge));
}

void Vscr1_top_tb_ahb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root__trace_cleanup\n"); );
    // Init
    Vscr1_top_tb_ahb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vscr1_top_tb_ahb___024root*>(voidSelf);
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xeU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xfU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x10U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x11U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x12U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x13U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x14U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x15U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x16U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x17U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x18U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x19U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1aU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1bU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1cU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1dU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1eU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x1fU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x20U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x21U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x22U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x23U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x24U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x25U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x26U] = 0U;
}

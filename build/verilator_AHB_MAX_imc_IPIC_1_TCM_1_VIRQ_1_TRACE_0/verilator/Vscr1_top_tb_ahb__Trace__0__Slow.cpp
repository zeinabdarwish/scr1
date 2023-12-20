// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vscr1_top_tb_ahb__Syms.h"


VL_ATTR_COLD void Vscr1_top_tb_ahb___024root__trace_init_sub__TOP__0(Vscr1_top_tb_ahb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->pushNamePrefix("scr1_top_tb_ahb ");
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->declBus(c+1293,"SCR1_MEM_SIZE", false,-1, 31,0);
    tracep->declBus(c+1294,"TIMEOUT", false,-1, 31,0);
    tracep->declBus(c+1295,"ARCH", false,-1, 31,0);
    tracep->declBus(c+1296,"COMPLIANCE", false,-1, 31,0);
    tracep->declBus(c+1297,"ADDR_START", false,-1, 31,0);
    tracep->declBus(c+1298,"ADDR_TRAP_VECTOR", false,-1, 31,0);
    tracep->declBus(c+1299,"ADDR_TRAP_DEFAULT", false,-1, 31,0);
    tracep->declBit(c+785,"rst_n", false,-1);
    tracep->declBit(c+1,"rtc_clk", false,-1);
    tracep->declBus(c+660,"irq_lines", false,-1, 15,0);
    tracep->declBit(c+661,"soft_irq", false,-1);
    tracep->declBus(c+2,"fuse_mhartid", false,-1, 31,0);
    tracep->declBus(c+3,"imem_req_ack_stall", false,-1, 31,0);
    tracep->declBus(c+4,"dmem_req_ack_stall", false,-1, 31,0);
    tracep->declBit(c+1300,"test_mode", false,-1);
    tracep->declBit(c+1132,"trst_n", false,-1);
    tracep->declBit(c+1133,"tck", false,-1);
    tracep->declBit(c+1134,"tms", false,-1);
    tracep->declBit(c+1135,"tdi", false,-1);
    tracep->declBit(c+1136,"tdo", false,-1);
    tracep->declBit(c+1137,"tdo_en", false,-1);
    tracep->declBus(c+1301,"imem_hprot", false,-1, 3,0);
    tracep->declBus(c+1302,"imem_hburst", false,-1, 2,0);
    tracep->declBus(c+1303,"imem_hsize", false,-1, 2,0);
    tracep->declBus(c+1077,"imem_htrans", false,-1, 1,0);
    tracep->declBus(c+1078,"imem_haddr", false,-1, 31,0);
    tracep->declBit(c+662,"imem_hready", false,-1);
    tracep->declBus(c+243,"imem_hrdata", false,-1, 31,0);
    tracep->declBit(c+663,"imem_hresp", false,-1);
    tracep->declBus(c+1304,"dmem_hprot", false,-1, 3,0);
    tracep->declBus(c+1302,"dmem_hburst", false,-1, 2,0);
    tracep->declBus(c+1037,"dmem_hsize", false,-1, 2,0);
    tracep->declBus(c+1038,"dmem_htrans", false,-1, 1,0);
    tracep->declBus(c+1039,"dmem_haddr", false,-1, 31,0);
    tracep->declBit(c+1040,"dmem_hwrite", false,-1);
    tracep->declBus(c+786,"dmem_hwdata", false,-1, 31,0);
    tracep->declBit(c+850,"dmem_hready", false,-1);
    tracep->declBus(c+664,"dmem_hrdata", false,-1, 31,0);
    tracep->declBit(c+851,"dmem_hresp", false,-1);
    tracep->declBus(c+45,"watchdogs_cnt", false,-1, 31,0);
    tracep->declBus(c+5,"f_results", false,-1, 31,0);
    tracep->declBus(c+6,"f_info", false,-1, 31,0);
    tracep->declArray(c+46,"test_file", false,-1, 255,0);
    tracep->declBit(c+54,"test_running", false,-1);
    tracep->declBus(c+55,"tests_passed", false,-1, 31,0);
    tracep->declBus(c+56,"tests_total", false,-1, 31,0);
    tracep->declBus(c+57,"rst_cnt", false,-1, 1,0);
    tracep->declBit(c+58,"rst_init", false,-1);
    tracep->declBit(c+59,"identify_test__Vstatic__res", false,-1);
    tracep->declArray(c+60,"identify_test__Vstatic__pattern_compliance", false,-1, 79,0);
    tracep->declBus(c+63,"identify_test__Vstatic__pattern_arch", false,-1, 22,0);
    tracep->declArray(c+64,"get_filename__Vstatic__res", false,-1, 255,0);
    tracep->declBus(c+72,"get_filename__Vstatic__i", false,-1, 31,0);
    tracep->declBus(c+73,"get_filename__Vstatic__j", false,-1, 31,0);
    tracep->declArray(c+74,"get_ref_filename__Vstatic__res", false,-1, 255,0);
    tracep->declBus(c+82,"get_ref_filename__Vstatic__i", false,-1, 31,0);
    tracep->declBus(c+83,"get_ref_filename__Vstatic__j", false,-1, 31,0);
    tracep->declArray(c+84,"get_ref_filename__Vstatic__pattern_compliance", false,-1, 79,0);
    tracep->declBus(c+87,"get_ref_filename__Vstatic__pattern_arch", false,-1, 22,0);
    tracep->declBus(c+88,"remove_trailing_whitespaces__Vstatic__i", false,-1, 31,0);
    tracep->pushNamePrefix("i_memory_tb ");
    tracep->declBus(c+1305,"SCR1_MEM_POWER_SIZE", false,-1, 31,0);
    tracep->declBit(c+785,"rst_n", false,-1);
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->declBus(c+660,"irq_lines", false,-1, 15,0);
    tracep->declBit(c+661,"soft_irq", false,-1);
    tracep->declBus(c+3,"imem_req_ack_stall_in", false,-1, 31,0);
    tracep->declBus(c+4,"dmem_req_ack_stall_in", false,-1, 31,0);
    tracep->declBus(c+1303,"imem_hsize", false,-1, 2,0);
    tracep->declBus(c+1077,"imem_htrans", false,-1, 1,0);
    tracep->declBus(c+1078,"imem_haddr", false,-1, 31,0);
    tracep->declBit(c+662,"imem_hready", false,-1);
    tracep->declBus(c+243,"imem_hrdata", false,-1, 31,0);
    tracep->declBit(c+663,"imem_hresp", false,-1);
    tracep->declBus(c+1037,"dmem_hsize", false,-1, 2,0);
    tracep->declBus(c+1038,"dmem_htrans", false,-1, 1,0);
    tracep->declBus(c+1039,"dmem_haddr", false,-1, 31,0);
    tracep->declBit(c+1040,"dmem_hwrite", false,-1);
    tracep->declBus(c+786,"dmem_hwdata", false,-1, 31,0);
    tracep->declBit(c+850,"dmem_hready", false,-1);
    tracep->declBus(c+664,"dmem_hrdata", false,-1, 31,0);
    tracep->declBit(c+851,"dmem_hresp", false,-1);
    tracep->declBus(c+660,"irq_lines_reg", false,-1, 15,0);
    tracep->declBit(c+661,"soft_irq_reg", false,-1);
    tracep->declBit(c+1306,"mirage_en", false,-1);
    tracep->declBit(c+1307,"mirage_rangeen", false,-1);
    tracep->declBus(c+1308,"mirage_adrlo", false,-1, 31,0);
    tracep->declBus(c+1308,"mirage_adrhi", false,-1, 31,0);
    tracep->declArray(c+89,"test_file", false,-1, 255,0);
    tracep->declBit(c+97,"test_file_init", false,-1);
    tracep->declBus(c+244,"scr1_read_mem__Vstatic__tmp", false,-1, 31,0);
    tracep->declBus(c+245,"scr1_read_mem__Vstatic__addr_mirage", false,-1, 19,0);
    tracep->declBus(c+665,"scr1_write_mem__Vstatic__addr_mirage", false,-1, 19,0);
    tracep->declBus(c+1138,"scr1_be_form__Vstatic__tmp", false,-1, 3,0);
    tracep->declBit(c+246,"imem_ahb_state", false,-1);
    tracep->declBus(c+247,"imem_ahb_addr", false,-1, 31,0);
    tracep->declBus(c+248,"imem_req_ack_stall", false,-1, 31,0);
    tracep->declBit(c+249,"imem_req_ack_rnd", false,-1);
    tracep->declBit(c+250,"imem_req_ack", false,-1);
    tracep->declBit(c+1309,"imem_req_ack_nc", false,-1);
    tracep->declBus(c+7,"imem_be", false,-1, 3,0);
    tracep->declBus(c+251,"imem_hrdata_l", false,-1, 31,0);
    tracep->declBus(c+1079,"imem_wr_hazard", false,-1, 3,0);
    tracep->declBus(c+252,"dmem_req_ack_stall", false,-1, 31,0);
    tracep->declBit(c+253,"dmem_req_ack_rnd", false,-1);
    tracep->declBit(c+666,"dmem_req_ack", false,-1);
    tracep->declBit(c+1310,"dmem_req_ack_nc", false,-1);
    tracep->declBus(c+1041,"dmem_be", false,-1, 3,0);
    tracep->declBit(c+667,"dmem_ahb_state", false,-1);
    tracep->declBus(c+668,"dmem_ahb_addr", false,-1, 31,0);
    tracep->declBit(c+669,"dmem_ahb_wr", false,-1);
    tracep->declBus(c+254,"dmem_ahb_size", false,-1, 2,0);
    tracep->declBus(c+670,"dmem_ahb_be", false,-1, 3,0);
    tracep->declBus(c+255,"dmem_hrdata_l", false,-1, 31,0);
    tracep->declBus(c+1042,"dmem_wr_hazard", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_top ");
    tracep->declBit(c+785,"pwrup_rst_n", false,-1);
    tracep->declBit(c+785,"rst_n", false,-1);
    tracep->declBit(c+785,"cpu_rst_n", false,-1);
    tracep->declBit(c+1300,"test_mode", false,-1);
    tracep->declBit(c+1311,"test_rst_n", false,-1);
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->declBit(c+1,"rtc_clk", false,-1);
    tracep->declBit(c+261,"sys_rst_n_o", false,-1);
    tracep->declBit(c+262,"sys_rdc_qlfy_o", false,-1);
    tracep->declBus(c+2,"fuse_mhartid", false,-1, 31,0);
    tracep->declBus(c+1312,"fuse_idcode", false,-1, 31,0);
    tracep->declBus(c+660,"irq_lines", false,-1, 15,0);
    tracep->declBit(c+661,"soft_irq", false,-1);
    tracep->declBit(c+1132,"trst_n", false,-1);
    tracep->declBit(c+1133,"tck", false,-1);
    tracep->declBit(c+1134,"tms", false,-1);
    tracep->declBit(c+1135,"tdi", false,-1);
    tracep->declBit(c+1136,"tdo", false,-1);
    tracep->declBit(c+1137,"tdo_en", false,-1);
    tracep->declBus(c+1301,"imem_hprot", false,-1, 3,0);
    tracep->declBus(c+1302,"imem_hburst", false,-1, 2,0);
    tracep->declBus(c+1303,"imem_hsize", false,-1, 2,0);
    tracep->declBus(c+1077,"imem_htrans", false,-1, 1,0);
    tracep->declBit(c+1300,"imem_hmastlock", false,-1);
    tracep->declBus(c+1078,"imem_haddr", false,-1, 31,0);
    tracep->declBit(c+662,"imem_hready", false,-1);
    tracep->declBus(c+243,"imem_hrdata", false,-1, 31,0);
    tracep->declBit(c+663,"imem_hresp", false,-1);
    tracep->declBus(c+1304,"dmem_hprot", false,-1, 3,0);
    tracep->declBus(c+1302,"dmem_hburst", false,-1, 2,0);
    tracep->declBus(c+1037,"dmem_hsize", false,-1, 2,0);
    tracep->declBus(c+1038,"dmem_htrans", false,-1, 1,0);
    tracep->declBit(c+1300,"dmem_hmastlock", false,-1);
    tracep->declBus(c+1039,"dmem_haddr", false,-1, 31,0);
    tracep->declBit(c+1040,"dmem_hwrite", false,-1);
    tracep->declBus(c+786,"dmem_hwdata", false,-1, 31,0);
    tracep->declBit(c+850,"dmem_hready", false,-1);
    tracep->declBus(c+664,"dmem_hrdata", false,-1, 31,0);
    tracep->declBit(c+851,"dmem_hresp", false,-1);
    tracep->declBus(c+1313,"SCR1_CLUSTER_TOP_RST_SYNC_STAGES_NUM", false,-1, 31,0);
    tracep->declBit(c+852,"pwrup_rst_n_sync", false,-1);
    tracep->declBit(c+256,"rst_n_sync", false,-1);
    tracep->declBit(c+257,"cpu_rst_n_sync", false,-1);
    tracep->declBit(c+817,"core_rst_n_local", false,-1);
    tracep->declBit(c+1139,"tapc_trst_n", false,-1);
    tracep->declBit(c+1080,"core_imem_req_ack", false,-1);
    tracep->declBit(c+1081,"core_imem_req", false,-1);
    tracep->declBit(c+1314,"core_imem_cmd", false,-1);
    tracep->declBus(c+1082,"core_imem_addr", false,-1, 31,0);
    tracep->declBus(c+671,"core_imem_rdata", false,-1, 31,0);
    tracep->declBus(c+769,"core_imem_resp", false,-1, 1,0);
    tracep->declBit(c+1140,"core_dmem_req_ack", false,-1);
    tracep->declBit(c+876,"core_dmem_req", false,-1);
    tracep->declBit(c+587,"core_dmem_cmd", false,-1);
    tracep->declBus(c+588,"core_dmem_width", false,-1, 1,0);
    tracep->declBus(c+676,"core_dmem_addr", false,-1, 31,0);
    tracep->declBus(c+1141,"core_dmem_wdata", false,-1, 31,0);
    tracep->declBus(c+1142,"core_dmem_rdata", false,-1, 31,0);
    tracep->declBus(c+865,"core_dmem_resp", false,-1, 1,0);
    tracep->declBit(c+304,"ahb_imem_req_ack", false,-1);
    tracep->declBit(c+1083,"ahb_imem_req", false,-1);
    tracep->declBit(c+1314,"ahb_imem_cmd", false,-1);
    tracep->declBus(c+1082,"ahb_imem_addr", false,-1, 31,0);
    tracep->declBus(c+243,"ahb_imem_rdata", false,-1, 31,0);
    tracep->declBus(c+1143,"ahb_imem_resp", false,-1, 1,0);
    tracep->declBit(c+305,"ahb_dmem_req_ack", false,-1);
    tracep->declBit(c+1043,"ahb_dmem_req", false,-1);
    tracep->declBit(c+587,"ahb_dmem_cmd", false,-1);
    tracep->declBus(c+588,"ahb_dmem_width", false,-1, 1,0);
    tracep->declBus(c+676,"ahb_dmem_addr", false,-1, 31,0);
    tracep->declBus(c+1141,"ahb_dmem_wdata", false,-1, 31,0);
    tracep->declBus(c+860,"ahb_dmem_rdata", false,-1, 31,0);
    tracep->declBus(c+1144,"ahb_dmem_resp", false,-1, 1,0);
    tracep->declBit(c+1311,"tcm_imem_req_ack", false,-1);
    tracep->declBit(c+1084,"tcm_imem_req", false,-1);
    tracep->declBit(c+1314,"tcm_imem_cmd", false,-1);
    tracep->declBus(c+1082,"tcm_imem_addr", false,-1, 31,0);
    tracep->declBus(c+98,"tcm_imem_rdata", false,-1, 31,0);
    tracep->declBus(c+306,"tcm_imem_resp", false,-1, 1,0);
    tracep->declBit(c+1311,"tcm_dmem_req_ack", false,-1);
    tracep->declBit(c+1044,"tcm_dmem_req", false,-1);
    tracep->declBit(c+587,"tcm_dmem_cmd", false,-1);
    tracep->declBus(c+588,"tcm_dmem_width", false,-1, 1,0);
    tracep->declBus(c+676,"tcm_dmem_addr", false,-1, 31,0);
    tracep->declBus(c+1141,"tcm_dmem_wdata", false,-1, 31,0);
    tracep->declBus(c+99,"tcm_dmem_rdata", false,-1, 31,0);
    tracep->declBus(c+307,"tcm_dmem_resp", false,-1, 1,0);
    tracep->declBit(c+1311,"timer_dmem_req_ack", false,-1);
    tracep->declBit(c+1045,"timer_dmem_req", false,-1);
    tracep->declBit(c+587,"timer_dmem_cmd", false,-1);
    tracep->declBus(c+588,"timer_dmem_width", false,-1, 1,0);
    tracep->declBus(c+676,"timer_dmem_addr", false,-1, 31,0);
    tracep->declBus(c+1141,"timer_dmem_wdata", false,-1, 31,0);
    tracep->declBus(c+308,"timer_dmem_rdata", false,-1, 31,0);
    tracep->declBus(c+309,"timer_dmem_resp", false,-1, 1,0);
    tracep->declBit(c+310,"timer_irq", false,-1);
    tracep->declQuad(c+311,"timer_val", false,-1, 63,0);
    tracep->pushNamePrefix("i_core_top ");
    tracep->declBit(c+852,"pwrup_rst_n", false,-1);
    tracep->declBit(c+256,"rst_n", false,-1);
    tracep->declBit(c+257,"cpu_rst_n", false,-1);
    tracep->declBit(c+1300,"test_mode", false,-1);
    tracep->declBit(c+1311,"test_rst_n", false,-1);
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->declBit(c+817,"core_rst_n_o", false,-1);
    tracep->declBit(c+818,"core_rdc_qlfy_o", false,-1);
    tracep->declBit(c+261,"sys_rst_n_o", false,-1);
    tracep->declBit(c+262,"sys_rdc_qlfy_o", false,-1);
    tracep->declBus(c+2,"core_fuse_mhartid_i", false,-1, 31,0);
    tracep->declBus(c+1312,"tapc_fuse_idcode_i", false,-1, 31,0);
    tracep->declBus(c+660,"core_irq_lines_i", false,-1, 15,0);
    tracep->declBit(c+661,"core_irq_soft_i", false,-1);
    tracep->declBit(c+310,"core_irq_mtimer_i", false,-1);
    tracep->declQuad(c+311,"core_mtimer_val_i", false,-1, 63,0);
    tracep->declBit(c+1139,"tapc_trst_n", false,-1);
    tracep->declBit(c+1133,"tapc_tck", false,-1);
    tracep->declBit(c+1134,"tapc_tms", false,-1);
    tracep->declBit(c+1135,"tapc_tdi", false,-1);
    tracep->declBit(c+1136,"tapc_tdo", false,-1);
    tracep->declBit(c+1137,"tapc_tdo_en", false,-1);
    tracep->declBit(c+1080,"imem2core_req_ack_i", false,-1);
    tracep->declBit(c+1081,"core2imem_req_o", false,-1);
    tracep->declBit(c+1314,"core2imem_cmd_o", false,-1);
    tracep->declBus(c+1082,"core2imem_addr_o", false,-1, 31,0);
    tracep->declBus(c+671,"imem2core_rdata_i", false,-1, 31,0);
    tracep->declBus(c+769,"imem2core_resp_i", false,-1, 1,0);
    tracep->declBit(c+1140,"dmem2core_req_ack_i", false,-1);
    tracep->declBit(c+876,"core2dmem_req_o", false,-1);
    tracep->declBit(c+587,"core2dmem_cmd_o", false,-1);
    tracep->declBus(c+588,"core2dmem_width_o", false,-1, 1,0);
    tracep->declBus(c+676,"core2dmem_addr_o", false,-1, 31,0);
    tracep->declBus(c+1141,"core2dmem_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1142,"dmem2core_rdata_i", false,-1, 31,0);
    tracep->declBus(c+865,"dmem2core_resp_i", false,-1, 1,0);
    tracep->declBus(c+1313,"SCR1_CORE_TOP_RST_SYNC_STAGES_NUM", false,-1, 31,0);
    tracep->declBit(c+817,"core_rst_n", false,-1);
    tracep->declBit(c+1315,"core_rst_n_status_sync", false,-1);
    tracep->declBit(c+263,"core_rst_status", false,-1);
    tracep->declBit(c+818,"core2hdu_rdc_qlfy", false,-1);
    tracep->declBit(c+818,"core2dm_rdc_qlfy", false,-1);
    tracep->declBit(c+852,"pwrup_rst_n_sync", false,-1);
    tracep->declBit(c+1316,"rst_n_sync", false,-1);
    tracep->declBit(c+1317,"cpu_rst_n_sync", false,-1);
    tracep->declBit(c+485,"tapc_dmi_ch_sel", false,-1);
    tracep->declBus(c+486,"tapc_dmi_ch_id", false,-1, 1,0);
    tracep->declBit(c+571,"tapc_dmi_ch_capture", false,-1);
    tracep->declBit(c+572,"tapc_dmi_ch_shift", false,-1);
    tracep->declBit(c+264,"tapc_dmi_ch_update", false,-1);
    tracep->declBit(c+265,"tapc_dmi_ch_tdi", false,-1);
    tracep->declBit(c+487,"tapc_dmi_ch_tdo", false,-1);
    tracep->declBit(c+559,"tapc_dmi_ch_sel_tapout", false,-1);
    tracep->declBus(c+560,"tapc_dmi_ch_id_tapout", false,-1, 1,0);
    tracep->declBit(c+567,"tapc_dmi_ch_capture_tapout", false,-1);
    tracep->declBit(c+568,"tapc_dmi_ch_shift_tapout", false,-1);
    tracep->declBit(c+569,"tapc_dmi_ch_update_tapout", false,-1);
    tracep->declBit(c+1135,"tapc_dmi_ch_tdi_tapout", false,-1);
    tracep->declBit(c+1145,"tapc_dmi_ch_tdo_tapin", false,-1);
    tracep->declBit(c+694,"dmi_req", false,-1);
    tracep->declBit(c+695,"dmi_wr", false,-1);
    tracep->declBus(c+696,"dmi_addr", false,-1, 6,0);
    tracep->declBus(c+697,"dmi_wdata", false,-1, 31,0);
    tracep->declBit(c+1311,"dmi_resp", false,-1);
    tracep->declBus(c+789,"dmi_rdata", false,-1, 31,0);
    tracep->declBit(c+266,"tapc_scu_ch_sel", false,-1);
    tracep->declBit(c+561,"tapc_scu_ch_sel_tapout", false,-1);
    tracep->declBit(c+267,"tapc_scu_ch_tdo", false,-1);
    tracep->declBit(c+1145,"tapc_ch_tdo", false,-1);
    tracep->declBit(c+261,"sys_rst_n", false,-1);
    tracep->declBit(c+268,"sys_rst_status", false,-1);
    tracep->declBit(c+573,"hdu_rst_n", false,-1);
    tracep->declBit(c+574,"hdu2dm_rdc_qlfy", false,-1);
    tracep->declBit(c+488,"ndm_rst_n", false,-1);
    tracep->declBit(c+819,"dm_rst_n", false,-1);
    tracep->declBit(c+488,"hart_rst_n", false,-1);
    tracep->declBit(c+722,"dm_active", false,-1);
    tracep->declBit(c+489,"dm_cmd_req", false,-1);
    tracep->declBus(c+723,"dm_cmd", false,-1, 1,0);
    tracep->declBit(c+869,"dm_cmd_resp", false,-1);
    tracep->declBit(c+1146,"dm_cmd_resp_qlfy", false,-1);
    tracep->declBit(c+1147,"dm_cmd_rcode", false,-1);
    tracep->declBit(c+510,"dm_hart_event", false,-1);
    tracep->declBit(c+1148,"dm_hart_event_qlfy", false,-1);
    tracep->pushNamePrefix("dm_hart_status ");
    tracep->declBit(c+511,"except", false,-1);
    tracep->declBit(c+512,"ebreak", false,-1);
    tracep->declBus(c+513,"dbg_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dm_hart_status_qlfy ");
    tracep->declBit(c+511,"except", false,-1);
    tracep->declBit(c+512,"ebreak", false,-1);
    tracep->declBus(c+730,"dbg_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+514,"dm_pbuf_addr", false,-1, 2,0);
    tracep->declBus(c+731,"dm_pbuf_addr_qlfy", false,-1, 2,0);
    tracep->declBus(c+1149,"dm_pbuf_instr", false,-1, 31,0);
    tracep->declBit(c+877,"dm_dreg_req", false,-1);
    tracep->declBit(c+1150,"dm_dreg_req_qlfy", false,-1);
    tracep->declBit(c+878,"dm_dreg_wr", false,-1);
    tracep->declBus(c+879,"dm_dreg_wdata", false,-1, 31,0);
    tracep->declBit(c+1311,"dm_dreg_resp", false,-1);
    tracep->declBit(c+1300,"dm_dreg_fail", false,-1);
    tracep->declBus(c+100,"dm_dreg_rdata", false,-1, 31,0);
    tracep->declBus(c+313,"dm_pc_sample", false,-1, 31,0);
    tracep->declBus(c+1151,"dm_pc_sample_qlfy", false,-1, 31,0);
    tracep->pushNamePrefix("i_dm ");
    tracep->declBit(c+819,"rst_n", false,-1);
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->declBit(c+694,"dmi2dm_req_i", false,-1);
    tracep->declBit(c+695,"dmi2dm_wr_i", false,-1);
    tracep->declBus(c+696,"dmi2dm_addr_i", false,-1, 6,0);
    tracep->declBus(c+697,"dmi2dm_wdata_i", false,-1, 31,0);
    tracep->declBit(c+1311,"dm2dmi_resp_o", false,-1);
    tracep->declBus(c+789,"dm2dmi_rdata_o", false,-1, 31,0);
    tracep->declBit(c+488,"ndm_rst_n_o", false,-1);
    tracep->declBit(c+488,"hart_rst_n_o", false,-1);
    tracep->declBit(c+722,"dm2pipe_active_o", false,-1);
    tracep->declBit(c+489,"dm2pipe_cmd_req_o", false,-1);
    tracep->declBus(c+723,"dm2pipe_cmd_o", false,-1, 1,0);
    tracep->declBit(c+1146,"pipe2dm_cmd_resp_i", false,-1);
    tracep->declBit(c+1147,"pipe2dm_cmd_rcode_i", false,-1);
    tracep->declBit(c+1148,"pipe2dm_hart_event_i", false,-1);
    tracep->pushNamePrefix("pipe2dm_hart_status_i ");
    tracep->declBit(c+511,"except", false,-1);
    tracep->declBit(c+512,"ebreak", false,-1);
    tracep->declBus(c+730,"dbg_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+2,"soc2dm_fuse_mhartid_i", false,-1, 31,0);
    tracep->declBus(c+1151,"pipe2dm_pc_sample_i", false,-1, 31,0);
    tracep->declBus(c+731,"pipe2dm_pbuf_addr_i", false,-1, 2,0);
    tracep->declBus(c+1149,"dm2pipe_pbuf_instr_o", false,-1, 31,0);
    tracep->declBit(c+1150,"pipe2dm_dreg_req_i", false,-1);
    tracep->declBit(c+878,"pipe2dm_dreg_wr_i", false,-1);
    tracep->declBus(c+879,"pipe2dm_dreg_wdata_i", false,-1, 31,0);
    tracep->declBit(c+1311,"dm2pipe_dreg_resp_o", false,-1);
    tracep->declBit(c+1300,"dm2pipe_dreg_fail_o", false,-1);
    tracep->declBus(c+100,"dm2pipe_dreg_rdata_o", false,-1, 31,0);
    tracep->declBus(c+1318,"SCR1_OP_SYSTEM", false,-1, 6,0);
    tracep->declBus(c+1319,"SCR1_OP_LOAD", false,-1, 6,0);
    tracep->declBus(c+1320,"SCR1_OP_STORE", false,-1, 6,0);
    tracep->declBus(c+1321,"SCR1_FUNCT3_CSRRW", false,-1, 2,0);
    tracep->declBus(c+1303,"SCR1_FUNCT3_CSRRS", false,-1, 2,0);
    tracep->declBus(c+1302,"SCR1_FUNCT3_SB", false,-1, 2,0);
    tracep->declBus(c+1321,"SCR1_FUNCT3_SH", false,-1, 2,0);
    tracep->declBus(c+1303,"SCR1_FUNCT3_SW", false,-1, 2,0);
    tracep->declBus(c+1303,"SCR1_FUNCT3_LW", false,-1, 2,0);
    tracep->declBus(c+1322,"SCR1_FUNCT3_LBU", false,-1, 2,0);
    tracep->declBus(c+1323,"SCR1_FUNCT3_LHU", false,-1, 2,0);
    tracep->declBus(c+1324,"DMCONTROL_HARTRESET", false,-1, 0,0);
    tracep->declBus(c+1324,"DMCONTROL_RESERVEDB", false,-1, 0,0);
    tracep->declBus(c+1324,"DMCONTROL_HASEL", false,-1, 0,0);
    tracep->declBus(c+1324,"DMCONTROL_HARTSELLO", false,-1, 0,0);
    tracep->declBus(c+1324,"DMCONTROL_HARTSELHI", false,-1, 0,0);
    tracep->declBus(c+1324,"DMCONTROL_RESERVEDA", false,-1, 0,0);
    tracep->declBus(c+1324,"DMSTATUS_RESERVEDC", false,-1, 0,0);
    tracep->declBus(c+1325,"DMSTATUS_IMPEBREAK", false,-1, 0,0);
    tracep->declBus(c+1324,"DMSTATUS_RESERVEDB", false,-1, 0,0);
    tracep->declBus(c+1324,"DMSTATUS_ALLUNAVAIL", false,-1, 0,0);
    tracep->declBus(c+1324,"DMSTATUS_ANYUNAVAIL", false,-1, 0,0);
    tracep->declBus(c+1324,"DMSTATUS_ALLANYUNAVAIL", false,-1, 0,0);
    tracep->declBus(c+1324,"DMSTATUS_ALLANYNONEXIST", false,-1, 0,0);
    tracep->declBus(c+1325,"DMSTATUS_AUTHENTICATED", false,-1, 0,0);
    tracep->declBus(c+1324,"DMSTATUS_AUTHBUSY", false,-1, 0,0);
    tracep->declBus(c+1324,"DMSTATUS_RESERVEDA", false,-1, 0,0);
    tracep->declBus(c+1324,"DMSTATUS_DEVTREEVALID", false,-1, 0,0);
    tracep->declBus(c+1326,"DMSTATUS_VERSION", false,-1, 1,0);
    tracep->declBus(c+1324,"HARTINFO_RESERVEDB", false,-1, 0,0);
    tracep->declBus(c+1304,"HARTINFO_NSCRATCH", false,-1, 3,0);
    tracep->declBus(c+1324,"HARTINFO_RESERVEDA", false,-1, 0,0);
    tracep->declBus(c+1324,"HARTINFO_DATAACCESS", false,-1, 0,0);
    tracep->declBus(c+1304,"HARTINFO_DATASIZE", false,-1, 3,0);
    tracep->declBus(c+1327,"HARTINFO_DATAADDR", false,-1, 11,0);
    tracep->declBus(c+1324,"ABSTRACTCS_RESERVEDD", false,-1, 0,0);
    tracep->declBus(c+1328,"ABSTRACTCS_PROGBUFSIZE", false,-1, 4,0);
    tracep->declBus(c+1324,"ABSTRACTCS_RESERVEDC", false,-1, 0,0);
    tracep->declBus(c+1324,"ABSTRACTCS_RESERVEDB", false,-1, 0,0);
    tracep->declBus(c+1324,"ABSTRACTCS_RESERVEDA", false,-1, 0,0);
    tracep->declBus(c+1329,"ABSTRACTCS_DATACOUNT", false,-1, 3,0);
    tracep->declBus(c+1324,"ABS_CMD_HARTREG", false,-1, 0,0);
    tracep->declBus(c+1326,"ABS_CMD_HARTMEM", false,-1, 1,0);
    tracep->declBus(c+1301,"ABS_CMD_HARTREG_CSR", false,-1, 3,0);
    tracep->declBus(c+1304,"ABS_CMD_HARTREG_INTFPU", false,-1, 3,0);
    tracep->declBus(c+1330,"ABS_CMD_HARTREG_INT", false,-1, 6,0);
    tracep->declBus(c+1331,"ABS_CMD_HARTREG_FPU", false,-1, 6,0);
    tracep->declBus(c+1332,"ABS_EXEC_EBREAK", false,-1, 31,0);
    tracep->declBit(c+698,"dmi_req_dmcontrol", false,-1);
    tracep->declBit(c+699,"dmi_req_abstractcs", false,-1);
    tracep->declBit(c+700,"dmi_req_abstractauto", false,-1);
    tracep->declBit(c+701,"dmi_req_command", false,-1);
    tracep->declBit(c+790,"dmi_rpt_command", false,-1);
    tracep->declBit(c+791,"dmi_req_data0", false,-1);
    tracep->declBit(c+702,"dmi_req_data1", false,-1);
    tracep->declBit(c+703,"dmi_req_progbuf0", false,-1);
    tracep->declBit(c+704,"dmi_req_progbuf1", false,-1);
    tracep->declBit(c+705,"dmi_req_progbuf2", false,-1);
    tracep->declBit(c+706,"dmi_req_progbuf3", false,-1);
    tracep->declBit(c+707,"dmi_req_progbuf4", false,-1);
    tracep->declBit(c+708,"dmi_req_progbuf5", false,-1);
    tracep->declBit(c+792,"dmi_req_any", false,-1);
    tracep->declBit(c+709,"dmcontrol_wr_req", false,-1);
    tracep->declBit(c+710,"abstractcs_wr_req", false,-1);
    tracep->declBit(c+1152,"data0_wr_req", false,-1);
    tracep->declBit(c+711,"data1_wr_req", false,-1);
    tracep->declBit(c+880,"dreg_wr_req", false,-1);
    tracep->declBit(c+712,"command_wr_req", false,-1);
    tracep->declBit(c+713,"autoexec_wr_req", false,-1);
    tracep->declBit(c+714,"progbuf0_wr_req", false,-1);
    tracep->declBit(c+715,"progbuf1_wr_req", false,-1);
    tracep->declBit(c+716,"progbuf2_wr_req", false,-1);
    tracep->declBit(c+717,"progbuf3_wr_req", false,-1);
    tracep->declBit(c+718,"progbuf4_wr_req", false,-1);
    tracep->declBit(c+719,"progbuf5_wr_req", false,-1);
    tracep->declBit(c+831,"clk_en_dm", false,-1);
    tracep->declBit(c+722,"clk_en_dm_ff", false,-1);
    tracep->declBit(c+490,"dmcontrol_haltreq_ff", false,-1);
    tracep->declBit(c+832,"dmcontrol_haltreq_next", false,-1);
    tracep->declBit(c+491,"dmcontrol_resumereq_ff", false,-1);
    tracep->declBit(c+833,"dmcontrol_resumereq_next", false,-1);
    tracep->declBit(c+492,"dmcontrol_ackhavereset_ff", false,-1);
    tracep->declBit(c+834,"dmcontrol_ackhavereset_next", false,-1);
    tracep->declBit(c+493,"dmcontrol_ndmreset_ff", false,-1);
    tracep->declBit(c+835,"dmcontrol_ndmreset_next", false,-1);
    tracep->declBit(c+724,"dmcontrol_dmactive_ff", false,-1);
    tracep->declBit(c+1153,"dmcontrol_dmactive_next", false,-1);
    tracep->declBit(c+494,"havereset_skip_pwrup_ff", false,-1);
    tracep->declBit(c+1154,"havereset_skip_pwrup_next", false,-1);
    tracep->declBit(c+495,"dmstatus_allany_havereset_ff", false,-1);
    tracep->declBit(c+1155,"dmstatus_allany_havereset_next", false,-1);
    tracep->declBit(c+496,"dmstatus_allany_resumeack_ff", false,-1);
    tracep->declBit(c+1156,"dmstatus_allany_resumeack_next", false,-1);
    tracep->declBit(c+497,"dmstatus_allany_halted_ff", false,-1);
    tracep->declBit(c+1157,"dmstatus_allany_halted_next", false,-1);
    tracep->declBus(c+793,"abs_cmd", false,-1, 31,0);
    tracep->declBit(c+794,"abs_cmd_csr_ro", false,-1);
    tracep->declBus(c+795,"abs_cmd_type", false,-1, 7,0);
    tracep->declBit(c+796,"abs_cmd_regacs", false,-1);
    tracep->declBus(c+797,"abs_cmd_regtype", false,-1, 3,0);
    tracep->declBus(c+798,"abs_cmd_regfile", false,-1, 6,0);
    tracep->declBit(c+799,"abs_cmd_regwr", false,-1);
    tracep->declBus(c+800,"abs_cmd_regsize", false,-1, 2,0);
    tracep->declBit(c+801,"abs_cmd_execprogbuf", false,-1);
    tracep->declBit(c+802,"abs_cmd_regvalid", false,-1);
    tracep->declBus(c+800,"abs_cmd_memsize", false,-1, 2,0);
    tracep->declBit(c+799,"abs_cmd_memwr", false,-1);
    tracep->declBit(c+803,"abs_cmd_memvalid", false,-1);
    tracep->declBit(c+804,"abs_cmd_regsize_vd", false,-1);
    tracep->declBit(c+805,"abs_cmd_memsize_vd", false,-1);
    tracep->declBit(c+101,"abs_cmd_wr_ff", false,-1);
    tracep->declBit(c+853,"abs_cmd_wr_next", false,-1);
    tracep->declBit(c+102,"abs_cmd_postexec_ff", false,-1);
    tracep->declBit(c+854,"abs_cmd_postexec_next", false,-1);
    tracep->declBus(c+806,"abs_cmd_regno", false,-1, 11,0);
    tracep->declBus(c+103,"abs_cmd_regno_ff", false,-1, 11,0);
    tracep->declBus(c+104,"abs_cmd_size_ff", false,-1, 1,0);
    tracep->declBus(c+855,"abs_cmd_size_next", false,-1, 1,0);
    tracep->declBit(c+807,"abs_reg_access_csr", false,-1);
    tracep->declBit(c+808,"abs_reg_access_mprf", false,-1);
    tracep->declBit(c+809,"abs_cmd_hartreg_vd", false,-1);
    tracep->declBit(c+810,"abs_cmd_hartmem_vd", false,-1);
    tracep->declBit(c+811,"abs_cmd_reg_access_req", false,-1);
    tracep->declBit(c+812,"abs_cmd_csr_access_req", false,-1);
    tracep->declBit(c+813,"abs_cmd_mprf_access_req", false,-1);
    tracep->declBit(c+814,"abs_cmd_execprogbuf_req", false,-1);
    tracep->declBit(c+856,"abs_cmd_csr_ro_access_vd", false,-1);
    tracep->declBit(c+857,"abs_cmd_csr_rw_access_vd", false,-1);
    tracep->declBit(c+815,"abs_cmd_mprf_access_vd", false,-1);
    tracep->declBit(c+816,"abs_cmd_mem_access_vd", false,-1);
    tracep->declBus(c+105,"abs_fsm_ff", false,-1, 3,0);
    tracep->declBus(c+858,"abs_fsm_next", false,-1, 3,0);
    tracep->declBit(c+106,"abs_fsm_idle", false,-1);
    tracep->declBit(c+107,"abs_fsm_exec", false,-1);
    tracep->declBit(c+108,"abs_fsm_csr_ro", false,-1);
    tracep->declBit(c+109,"abs_fsm_err", false,-1);
    tracep->declBit(c+110,"abs_fsm_use_addr", false,-1);
    tracep->declBit(c+836,"clk_en_abs", false,-1);
    tracep->declBit(c+111,"abstractcs_busy", false,-1);
    tracep->declBit(c+1333,"abstractcs_ro_en", false,-1);
    tracep->declBus(c+112,"abs_command_ff", false,-1, 31,0);
    tracep->declBus(c+1158,"abs_command_next", false,-1, 31,0);
    tracep->declBit(c+113,"abs_autoexec_ff", false,-1);
    tracep->declBit(c+1159,"abs_autoexec_next", false,-1);
    tracep->declBus(c+114,"abs_progbuf0_ff", false,-1, 31,0);
    tracep->declBus(c+115,"abs_progbuf1_ff", false,-1, 31,0);
    tracep->declBus(c+116,"abs_progbuf2_ff", false,-1, 31,0);
    tracep->declBus(c+117,"abs_progbuf3_ff", false,-1, 31,0);
    tracep->declBus(c+118,"abs_progbuf4_ff", false,-1, 31,0);
    tracep->declBus(c+119,"abs_progbuf5_ff", false,-1, 31,0);
    tracep->declBit(c+1160,"data0_xreg_save", false,-1);
    tracep->declBus(c+120,"abs_data0_ff", false,-1, 31,0);
    tracep->declBus(c+1032,"abs_data0_next", false,-1, 31,0);
    tracep->declBus(c+121,"abs_data1_ff", false,-1, 31,0);
    tracep->declBus(c+1033,"abs_data1_next", false,-1, 31,0);
    tracep->declBit(c+1161,"abs_err_exc_upd", false,-1);
    tracep->declBit(c+122,"abs_err_exc_ff", false,-1);
    tracep->declBit(c+1162,"abs_err_exc_next", false,-1);
    tracep->declBit(c+1163,"abs_err_acc_busy_upd", false,-1);
    tracep->declBit(c+123,"abs_err_acc_busy_ff", false,-1);
    tracep->declBit(c+1164,"abs_err_acc_busy_next", false,-1);
    tracep->declBus(c+124,"abstractcs_cmderr_ff", false,-1, 2,0);
    tracep->declBus(c+859,"abstractcs_cmderr_next", false,-1, 2,0);
    tracep->declBit(c+1165,"abs_exec_req_next", false,-1);
    tracep->declBit(c+125,"abs_exec_req_ff", false,-1);
    tracep->declBus(c+126,"abs_instr_rd", false,-1, 4,0);
    tracep->declBus(c+127,"abs_instr_rs1", false,-1, 4,0);
    tracep->declBus(c+1334,"abs_instr_rs2", false,-1, 4,0);
    tracep->declBus(c+128,"abs_instr_mem_funct3", false,-1, 2,0);
    tracep->declBus(c+129,"abs_exec_instr_next", false,-1, 31,0);
    tracep->declBus(c+130,"abs_exec_instr_ff", false,-1, 31,0);
    tracep->declBus(c+1166,"dhi_fsm_next", false,-1, 2,0);
    tracep->declBus(c+498,"dhi_fsm_ff", false,-1, 2,0);
    tracep->declBus(c+1167,"dhi_req", false,-1, 2,0);
    tracep->declBit(c+499,"dhi_fsm_idle", false,-1);
    tracep->declBit(c+500,"dhi_fsm_exec", false,-1);
    tracep->declBit(c+501,"dhi_fsm_exec_halt", false,-1);
    tracep->declBit(c+502,"dhi_fsm_halt_req", false,-1);
    tracep->declBit(c+503,"dhi_fsm_resume_req", false,-1);
    tracep->declBit(c+870,"cmd_resp_ok", false,-1);
    tracep->declBit(c+1168,"hart_rst_unexp", false,-1);
    tracep->declBit(c+1169,"halt_req_vd", false,-1);
    tracep->declBit(c+1170,"resume_req_vd", false,-1);
    tracep->declBit(c+842,"dhi_resp", false,-1);
    tracep->declBit(c+732,"dhi_resp_exc", false,-1);
    tracep->declBit(c+131,"hart_pbuf_ebreak_ff", false,-1);
    tracep->declBit(c+1171,"hart_pbuf_ebreak_next", false,-1);
    tracep->declBit(c+489,"hart_cmd_req_ff", false,-1);
    tracep->declBit(c+1172,"hart_cmd_req_next", false,-1);
    tracep->declBus(c+723,"hart_cmd_ff", false,-1, 1,0);
    tracep->declBus(c+725,"hart_cmd_next", false,-1, 1,0);
    tracep->declBit(c+733,"hart_state_reset", false,-1);
    tracep->declBit(c+734,"hart_state_run", false,-1);
    tracep->declBit(c+735,"hart_state_drun", false,-1);
    tracep->declBit(c+736,"hart_state_dhalt", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_dmi ");
    tracep->declBit(c+819,"rst_n", false,-1);
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->declBit(c+485,"tapcsync2dmi_ch_sel_i", false,-1);
    tracep->declBus(c+486,"tapcsync2dmi_ch_id_i", false,-1, 1,0);
    tracep->declBit(c+571,"tapcsync2dmi_ch_capture_i", false,-1);
    tracep->declBit(c+572,"tapcsync2dmi_ch_shift_i", false,-1);
    tracep->declBit(c+264,"tapcsync2dmi_ch_update_i", false,-1);
    tracep->declBit(c+265,"tapcsync2dmi_ch_tdi_i", false,-1);
    tracep->declBit(c+487,"dmi2tapcsync_ch_tdo_o", false,-1);
    tracep->declBit(c+1311,"dm2dmi_resp_i", false,-1);
    tracep->declBus(c+789,"dm2dmi_rdata_i", false,-1, 31,0);
    tracep->declBit(c+694,"dmi2dm_req_o", false,-1);
    tracep->declBit(c+695,"dmi2dm_wr_o", false,-1);
    tracep->declBus(c+696,"dmi2dm_addr_o", false,-1, 6,0);
    tracep->declBus(c+697,"dmi2dm_wdata_o", false,-1, 31,0);
    tracep->declBus(c+1335,"DTMCS_RESERVEDB_HI", false,-1, 4,0);
    tracep->declBus(c+1336,"DTMCS_RESERVEDB_LO", false,-1, 4,0);
    tracep->declBus(c+1337,"DTMCS_DMIHARDRESET", false,-1, 4,0);
    tracep->declBus(c+1338,"DTMCS_DMIRESET", false,-1, 4,0);
    tracep->declBus(c+1339,"DTMCS_RESERVEDA", false,-1, 4,0);
    tracep->declBus(c+1340,"DTMCS_IDLE_HI", false,-1, 4,0);
    tracep->declBus(c+1341,"DTMCS_IDLE_LO", false,-1, 4,0);
    tracep->declBus(c+1342,"DTMCS_DMISTAT_HI", false,-1, 4,0);
    tracep->declBus(c+1343,"DTMCS_DMISTAT_LO", false,-1, 4,0);
    tracep->declBus(c+1344,"DTMCS_ABITS_HI", false,-1, 4,0);
    tracep->declBus(c+1345,"DTMCS_ABITS_LO", false,-1, 4,0);
    tracep->declBus(c+1346,"DTMCS_VERSION_HI", false,-1, 4,0);
    tracep->declBus(c+1347,"DTMCS_VERSION_LO", false,-1, 4,0);
    tracep->declBus(c+1347,"DMI_OP_LO", false,-1, 4,0);
    tracep->declBus(c+1295,"DMI_OP_HI", false,-1, 31,0);
    tracep->declBus(c+1296,"DMI_DATA_LO", false,-1, 31,0);
    tracep->declBus(c+1348,"DMI_DATA_HI", false,-1, 31,0);
    tracep->declBus(c+1349,"DMI_ADDR_LO", false,-1, 31,0);
    tracep->declBus(c+1350,"DMI_ADDR_HI", false,-1, 31,0);
    tracep->declBit(c+575,"tap_dr_upd", false,-1);
    tracep->declQuad(c+504,"tap_dr_ff", false,-1, 40,0);
    tracep->declQuad(c+1173,"tap_dr_shift", false,-1, 40,0);
    tracep->declQuad(c+506,"tap_dr_rdata", false,-1, 40,0);
    tracep->declQuad(c+1175,"tap_dr_next", false,-1, 40,0);
    tracep->declBit(c+720,"dm_rdata_upd", false,-1);
    tracep->declBus(c+508,"dm_rdata_ff", false,-1, 31,0);
    tracep->declBit(c+721,"tapc_dmi_access_req", false,-1);
    tracep->declBit(c+509,"tapc_dtmcs_sel", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_pipe_top ");
    tracep->declBit(c+817,"pipe_rst_n", false,-1);
    tracep->declBit(c+818,"pipe2hdu_rdc_qlfy_i", false,-1);
    tracep->declBit(c+573,"dbg_rst_n", false,-1);
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->declBit(c+1081,"pipe2imem_req_o", false,-1);
    tracep->declBit(c+1314,"pipe2imem_cmd_o", false,-1);
    tracep->declBus(c+1082,"pipe2imem_addr_o", false,-1, 31,0);
    tracep->declBit(c+1080,"imem2pipe_req_ack_i", false,-1);
    tracep->declBus(c+671,"imem2pipe_rdata_i", false,-1, 31,0);
    tracep->declBus(c+769,"imem2pipe_resp_i", false,-1, 1,0);
    tracep->declBit(c+876,"pipe2dmem_req_o", false,-1);
    tracep->declBit(c+587,"pipe2dmem_cmd_o", false,-1);
    tracep->declBus(c+588,"pipe2dmem_width_o", false,-1, 1,0);
    tracep->declBus(c+676,"pipe2dmem_addr_o", false,-1, 31,0);
    tracep->declBus(c+1141,"pipe2dmem_wdata_o", false,-1, 31,0);
    tracep->declBit(c+1140,"dmem2pipe_req_ack_i", false,-1);
    tracep->declBus(c+1142,"dmem2pipe_rdata_i", false,-1, 31,0);
    tracep->declBus(c+865,"dmem2pipe_resp_i", false,-1, 1,0);
    tracep->declBit(c+1311,"dbg_en", false,-1);
    tracep->declBit(c+722,"dm2pipe_active_i", false,-1);
    tracep->declBit(c+489,"dm2pipe_cmd_req_i", false,-1);
    tracep->declBus(c+723,"dm2pipe_cmd_i", false,-1, 1,0);
    tracep->declBit(c+869,"pipe2dm_cmd_resp_o", false,-1);
    tracep->declBit(c+1147,"pipe2dm_cmd_rcode_o", false,-1);
    tracep->declBit(c+510,"pipe2dm_hart_event_o", false,-1);
    tracep->pushNamePrefix("pipe2dm_hart_status_o ");
    tracep->declBit(c+511,"except", false,-1);
    tracep->declBit(c+512,"ebreak", false,-1);
    tracep->declBus(c+513,"dbg_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+514,"pipe2dm_pbuf_addr_o", false,-1, 2,0);
    tracep->declBus(c+1149,"dm2pipe_pbuf_instr_i", false,-1, 31,0);
    tracep->declBit(c+877,"pipe2dm_dreg_req_o", false,-1);
    tracep->declBit(c+878,"pipe2dm_dreg_wr_o", false,-1);
    tracep->declBus(c+879,"pipe2dm_dreg_wdata_o", false,-1, 31,0);
    tracep->declBit(c+1311,"dm2pipe_dreg_resp_i", false,-1);
    tracep->declBit(c+1300,"dm2pipe_dreg_fail_i", false,-1);
    tracep->declBus(c+100,"dm2pipe_dreg_rdata_i", false,-1, 31,0);
    tracep->declBus(c+313,"pipe2dm_pc_sample_o", false,-1, 31,0);
    tracep->declBus(c+660,"soc2pipe_irq_lines_i", false,-1, 15,0);
    tracep->declBit(c+661,"soc2pipe_irq_soft_i", false,-1);
    tracep->declBit(c+310,"soc2pipe_irq_mtimer_i", false,-1);
    tracep->declQuad(c+311,"soc2pipe_mtimer_val_i", false,-1, 63,0);
    tracep->declBus(c+2,"soc2pipe_fuse_mhartid_i", false,-1, 31,0);
    tracep->declBus(c+313,"curr_pc", false,-1, 31,0);
    tracep->declBus(c+1177,"next_pc", false,-1, 31,0);
    tracep->declBit(c+1085,"new_pc_req", false,-1);
    tracep->declBus(c+1086,"new_pc", false,-1, 31,0);
    tracep->declBit(c+1087,"stop_fetch", false,-1);
    tracep->declBit(c+472,"exu_exc_req", false,-1);
    tracep->declBit(c+1178,"brkpt", false,-1);
    tracep->declBit(c+314,"exu_init_pc", false,-1);
    tracep->declBit(c+1088,"wfi_run2halt", false,-1);
    tracep->declBit(c+1089,"instret", false,-1);
    tracep->declBit(c+1179,"instret_nexc", false,-1);
    tracep->declBit(c+315,"ipic2csr_irq", false,-1);
    tracep->declBit(c+881,"brkpt_hw", false,-1);
    tracep->declBit(c+1180,"ifu2idu_vd", false,-1);
    tracep->declBus(c+737,"ifu2idu_instr", false,-1, 31,0);
    tracep->declBit(c+1181,"ifu2idu_imem_err", false,-1);
    tracep->declBit(c+316,"ifu2idu_err_rvi_hi", false,-1);
    tracep->declBit(c+1090,"idu2ifu_rdy", false,-1);
    tracep->declBit(c+1180,"idu2exu_req", false,-1);
    tracep->pushNamePrefix("idu2exu_cmd ");
    tracep->declBit(c+738,"instr_rvc", false,-1);
    tracep->declBus(c+739,"ialu_op", false,-1, 0,0);
    tracep->declBus(c+740,"ialu_cmd", false,-1, 4,0);
    tracep->declBus(c+741,"sum2_op", false,-1, 0,0);
    tracep->declBus(c+742,"lsu_cmd", false,-1, 3,0);
    tracep->declBus(c+743,"csr_op", false,-1, 0,0);
    tracep->declBus(c+744,"csr_cmd", false,-1, 1,0);
    tracep->declBus(c+745,"rd_wb_sel", false,-1, 2,0);
    tracep->declBit(c+746,"jump_req", false,-1);
    tracep->declBit(c+747,"branch_req", false,-1);
    tracep->declBit(c+748,"mret_req", false,-1);
    tracep->declBit(c+749,"fencei_req", false,-1);
    tracep->declBit(c+750,"wfi_req", false,-1);
    tracep->declBus(c+751,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+752,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+753,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+754,"imm", false,-1, 31,0);
    tracep->declBit(c+755,"exc_req", false,-1);
    tracep->declBus(c+756,"exc_code", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+757,"idu2exu_use_rs1", false,-1);
    tracep->declBit(c+758,"idu2exu_use_rs2", false,-1);
    tracep->declBit(c+759,"idu2exu_use_rd", false,-1);
    tracep->declBit(c+760,"idu2exu_use_imm", false,-1);
    tracep->declBit(c+1090,"exu2idu_rdy", false,-1);
    tracep->declBus(c+1182,"exu2mprf_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+677,"mprf2exu_rs1_data", false,-1, 31,0);
    tracep->declBus(c+1183,"exu2mprf_rs2_addr", false,-1, 4,0);
    tracep->declBus(c+1141,"mprf2exu_rs2_data", false,-1, 31,0);
    tracep->declBit(c+1091,"exu2mprf_w_req", false,-1);
    tracep->declBus(c+589,"exu2mprf_rd_addr", false,-1, 4,0);
    tracep->declBus(c+1046,"exu2mprf_rd_data", false,-1, 31,0);
    tracep->declBus(c+590,"exu2csr_rw_addr", false,-1, 11,0);
    tracep->declBit(c+882,"exu2csr_r_req", false,-1);
    tracep->declBus(c+1047,"csr2exu_r_data", false,-1, 31,0);
    tracep->declBit(c+883,"exu2csr_w_req", false,-1);
    tracep->declBus(c+591,"exu2csr_w_cmd", false,-1, 1,0);
    tracep->declBus(c+678,"exu2csr_w_data", false,-1, 31,0);
    tracep->declBit(c+884,"csr2exu_rw_exc", false,-1);
    tracep->declBit(c+1092,"exu2csr_take_irq", false,-1);
    tracep->declBit(c+1093,"exu2csr_take_exc", false,-1);
    tracep->declBit(c+1184,"exu2csr_mret_update", false,-1);
    tracep->declBit(c+1034,"exu2csr_mret_instr", false,-1);
    tracep->declBus(c+1048,"exu2csr_exc_code", false,-1, 3,0);
    tracep->declBus(c+1185,"exu2csr_trap_val", false,-1, 31,0);
    tracep->declBus(c+1186,"csr2exu_new_pc", false,-1, 31,0);
    tracep->declBit(c+1187,"csr2exu_irq", false,-1);
    tracep->declBit(c+770,"csr2exu_ip_ie", false,-1);
    tracep->declBit(c+1035,"csr2exu_mstatus_mie_up", false,-1);
    tracep->declBit(c+885,"csr2ipic_r_req", false,-1);
    tracep->declBit(c+886,"csr2ipic_w_req", false,-1);
    tracep->declBus(c+887,"csr2ipic_addr", false,-1, 2,0);
    tracep->declBus(c+888,"csr2ipic_wdata", false,-1, 31,0);
    tracep->declBus(c+889,"ipic2csr_rdata", false,-1, 31,0);
    tracep->declBit(c+890,"csr2tdu_req", false,-1);
    tracep->declBus(c+591,"csr2tdu_cmd", false,-1, 1,0);
    tracep->declBus(c+592,"csr2tdu_addr", false,-1, 2,0);
    tracep->declBus(c+678,"csr2tdu_wdata", false,-1, 31,0);
    tracep->declBus(c+891,"tdu2csr_rdata", false,-1, 31,0);
    tracep->declBit(c+892,"tdu2csr_resp", false,-1);
    tracep->declBit(c+893,"csr2tdu_req_qlfy", false,-1);
    tracep->pushNamePrefix("exu2tdu_i_mon ");
    tracep->declBit(c+317,"vd", false,-1);
    tracep->declBit(c+1089,"req", false,-1);
    tracep->declBus(c+313,"addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2tdu_d_mon ");
    tracep->declBit(c+1188,"vd", false,-1);
    tracep->declBit(c+593,"load", false,-1);
    tracep->declBit(c+594,"store", false,-1);
    tracep->declBus(c+679,"addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+1189,"tdu2exu_i_match", false,-1, 4,0);
    tracep->declBus(c+894,"tdu2lsu_d_match", false,-1, 3,0);
    tracep->declBit(c+895,"tdu2exu_i_x_req", false,-1);
    tracep->declBit(c+895,"tdu2lsu_i_x_req", false,-1);
    tracep->declBit(c+896,"tdu2lsu_d_x_req", false,-1);
    tracep->declBus(c+897,"exu2tdu_bp_retire", false,-1, 4,0);
    tracep->pushNamePrefix("exu2tdu_i_mon_qlfy ");
    tracep->declBit(c+1190,"vd", false,-1);
    tracep->declBit(c+1089,"req", false,-1);
    tracep->declBus(c+313,"addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2tdu_d_mon_qlfy ");
    tracep->declBit(c+898,"vd", false,-1);
    tracep->declBit(c+593,"load", false,-1);
    tracep->declBit(c+594,"store", false,-1);
    tracep->declBus(c+679,"addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+899,"exu2tdu_bp_retire_qlfy", false,-1, 4,0);
    tracep->declBit(c+515,"fetch_pbuf", false,-1);
    tracep->declBit(c+900,"csr2hdu_req", false,-1);
    tracep->declBus(c+591,"csr2hdu_cmd", false,-1, 1,0);
    tracep->declBus(c+595,"csr2hdu_addr", false,-1, 1,0);
    tracep->declBus(c+678,"csr2hdu_wdata", false,-1, 31,0);
    tracep->declBus(c+901,"hdu2csr_rdata", false,-1, 31,0);
    tracep->declBit(c+1191,"hdu2csr_resp", false,-1);
    tracep->declBit(c+902,"csr2hdu_req_qlfy", false,-1);
    tracep->declBit(c+516,"hwbrk_dsbl", false,-1);
    tracep->declBit(c+516,"hdu_hwbrk_dsbl", false,-1);
    tracep->declBit(c+903,"tdu2hdu_dmode_req", false,-1);
    tracep->declBit(c+904,"exu_no_commit", false,-1);
    tracep->declBit(c+517,"exu_irq_dsbl", false,-1);
    tracep->declBit(c+518,"exu_pc_advmt_dsbl", false,-1);
    tracep->declBit(c+519,"exu_dmode_sstep_en", false,-1);
    tracep->declBit(c+871,"dbg_halted", false,-1);
    tracep->declBit(c+1094,"dbg_run2halt", false,-1);
    tracep->declBit(c+872,"dbg_halt2run", false,-1);
    tracep->declBit(c+1192,"dbg_run_start", false,-1);
    tracep->declBus(c+520,"dbg_new_pc", false,-1, 31,0);
    tracep->declBit(c+1090,"ifu2hdu_pbuf_rdy", false,-1);
    tracep->declBit(c+521,"hdu2ifu_pbuf_vd", false,-1);
    tracep->declBit(c+522,"hdu2ifu_pbuf_err", false,-1);
    tracep->declBus(c+132,"hdu2ifu_pbuf_instr", false,-1, 31,0);
    tracep->declBit(c+1193,"ifu2hdu_pbuf_rdy_qlfy", false,-1);
    tracep->declBit(c+1194,"exu_busy_qlfy", false,-1);
    tracep->declBit(c+1195,"instret_qlfy", false,-1);
    tracep->declBit(c+1196,"exu_init_pc_qlfy", false,-1);
    tracep->declBit(c+1049,"exu_exc_req_qlfy", false,-1);
    tracep->declBit(c+1197,"brkpt_qlfy", false,-1);
    tracep->declBit(c+1095,"exu_busy", false,-1);
    tracep->declBit(c+1351,"pipe2clkctl_wake_req_o", false,-1);
    tracep->pushNamePrefix("i_pipe_csr ");
    tracep->declBit(c+817,"rst_n", false,-1);
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->declBit(c+315,"soc2csr_irq_ext_i", false,-1);
    tracep->declBit(c+661,"soc2csr_irq_soft_i", false,-1);
    tracep->declBit(c+310,"soc2csr_irq_mtimer_i", false,-1);
    tracep->declQuad(c+311,"soc2csr_mtimer_val_i", false,-1, 63,0);
    tracep->declBus(c+2,"soc2csr_fuse_mhartid_i", false,-1, 31,0);
    tracep->declBit(c+882,"exu2csr_r_req_i", false,-1);
    tracep->declBus(c+590,"exu2csr_rw_addr_i", false,-1, 11,0);
    tracep->declBus(c+1047,"csr2exu_r_data_o", false,-1, 31,0);
    tracep->declBit(c+883,"exu2csr_w_req_i", false,-1);
    tracep->declBus(c+591,"exu2csr_w_cmd_i", false,-1, 1,0);
    tracep->declBus(c+678,"exu2csr_w_data_i", false,-1, 31,0);
    tracep->declBit(c+884,"csr2exu_rw_exc_o", false,-1);
    tracep->declBit(c+1092,"exu2csr_take_irq_i", false,-1);
    tracep->declBit(c+1093,"exu2csr_take_exc_i", false,-1);
    tracep->declBit(c+1184,"exu2csr_mret_update_i", false,-1);
    tracep->declBit(c+1034,"exu2csr_mret_instr_i", false,-1);
    tracep->declBus(c+1048,"exu2csr_exc_code_i", false,-1, 3,0);
    tracep->declBus(c+1185,"exu2csr_trap_val_i", false,-1, 31,0);
    tracep->declBit(c+1187,"csr2exu_irq_o", false,-1);
    tracep->declBit(c+770,"csr2exu_ip_ie_o", false,-1);
    tracep->declBit(c+1035,"csr2exu_mstatus_mie_up_o", false,-1);
    tracep->declBit(c+885,"csr2ipic_r_req_o", false,-1);
    tracep->declBit(c+886,"csr2ipic_w_req_o", false,-1);
    tracep->declBus(c+887,"csr2ipic_addr_o", false,-1, 2,0);
    tracep->declBus(c+888,"csr2ipic_wdata_o", false,-1, 31,0);
    tracep->declBus(c+889,"ipic2csr_rdata_i", false,-1, 31,0);
    tracep->declBit(c+900,"csr2hdu_req_o", false,-1);
    tracep->declBus(c+591,"csr2hdu_cmd_o", false,-1, 1,0);
    tracep->declBus(c+595,"csr2hdu_addr_o", false,-1, 1,0);
    tracep->declBus(c+678,"csr2hdu_wdata_o", false,-1, 31,0);
    tracep->declBus(c+901,"hdu2csr_rdata_i", false,-1, 31,0);
    tracep->declBit(c+1191,"hdu2csr_resp_i", false,-1);
    tracep->declBit(c+904,"hdu2csr_no_commit_i", false,-1);
    tracep->declBit(c+890,"csr2tdu_req_o", false,-1);
    tracep->declBus(c+591,"csr2tdu_cmd_o", false,-1, 1,0);
    tracep->declBus(c+592,"csr2tdu_addr_o", false,-1, 2,0);
    tracep->declBus(c+678,"csr2tdu_wdata_o", false,-1, 31,0);
    tracep->declBus(c+891,"tdu2csr_rdata_i", false,-1, 31,0);
    tracep->declBit(c+892,"tdu2csr_resp_i", false,-1);
    tracep->declBit(c+1179,"exu2csr_instret_no_exc_i", false,-1);
    tracep->declBus(c+313,"exu2csr_pc_curr_i", false,-1, 31,0);
    tracep->declBus(c+1177,"exu2csr_pc_next_i", false,-1, 31,0);
    tracep->declBus(c+1186,"csr2exu_new_pc_o", false,-1, 31,0);
    tracep->declBus(c+1295,"PC_LSB", false,-1, 31,0);
    tracep->declBit(c+905,"csr_mstatus_upd", false,-1);
    tracep->declBus(c+318,"csr_mstatus", false,-1, 31,0);
    tracep->declBit(c+319,"csr_mstatus_mie_ff", false,-1);
    tracep->declBit(c+1096,"csr_mstatus_mie_next", false,-1);
    tracep->declBit(c+320,"csr_mstatus_mpie_ff", false,-1);
    tracep->declBit(c+1097,"csr_mstatus_mpie_next", false,-1);
    tracep->declBit(c+906,"csr_mie_upd", false,-1);
    tracep->declBus(c+321,"csr_mie", false,-1, 31,0);
    tracep->declBit(c+322,"csr_mie_mtie_ff", false,-1);
    tracep->declBit(c+323,"csr_mie_meie_ff", false,-1);
    tracep->declBit(c+324,"csr_mie_msie_ff", false,-1);
    tracep->declBit(c+907,"csr_mtvec_upd", false,-1);
    tracep->declBus(c+325,"csr_mtvec_base", false,-1, 31,6);
    tracep->declBit(c+326,"csr_mtvec_mode", false,-1);
    tracep->declBit(c+326,"csr_mtvec_mode_ff", false,-1);
    tracep->declBit(c+326,"csr_mtvec_mode_vect", false,-1);
    tracep->declBit(c+908,"csr_mscratch_upd", false,-1);
    tracep->declBus(c+327,"csr_mscratch_ff", false,-1, 31,0);
    tracep->declBit(c+909,"csr_mepc_upd", false,-1);
    tracep->declBus(c+328,"csr_mepc_ff", false,-1, 31,1);
    tracep->declBus(c+1198,"csr_mepc_next", false,-1, 31,1);
    tracep->declBus(c+329,"csr_mepc", false,-1, 31,0);
    tracep->declBit(c+910,"csr_mcause_upd", false,-1);
    tracep->declBit(c+330,"csr_mcause_i_ff", false,-1);
    tracep->declBit(c+1098,"csr_mcause_i_next", false,-1);
    tracep->declBus(c+331,"csr_mcause_ec_ff", false,-1, 3,0);
    tracep->declBus(c+1199,"csr_mcause_ec_next", false,-1, 3,0);
    tracep->declBus(c+1200,"csr_mcause_ec_new", false,-1, 3,0);
    tracep->declBit(c+911,"csr_mtval_upd", false,-1);
    tracep->declBus(c+332,"csr_mtval_ff", false,-1, 31,0);
    tracep->declBus(c+1201,"csr_mtval_next", false,-1, 31,0);
    tracep->declBus(c+771,"csr_mip", false,-1, 31,0);
    tracep->declBit(c+310,"csr_mip_mtip", false,-1);
    tracep->declBit(c+315,"csr_mip_meip", false,-1);
    tracep->declBit(c+661,"csr_mip_msip", false,-1);
    tracep->declBus(c+912,"csr_minstret_upd", false,-1, 1,0);
    tracep->declQuad(c+333,"csr_minstret", false,-1, 63,0);
    tracep->declBit(c+1099,"csr_minstret_lo_inc", false,-1);
    tracep->declBit(c+1202,"csr_minstret_lo_upd", false,-1);
    tracep->declBus(c+335,"csr_minstret_lo_ff", false,-1, 7,0);
    tracep->declBus(c+1203,"csr_minstret_lo_next", false,-1, 7,0);
    tracep->declBit(c+1100,"csr_minstret_hi_inc", false,-1);
    tracep->declBit(c+1204,"csr_minstret_hi_upd", false,-1);
    tracep->declQuad(c+336,"csr_minstret_hi_ff", false,-1, 63,8);
    tracep->declQuad(c+1205,"csr_minstret_hi_next", false,-1, 63,8);
    tracep->declQuad(c+338,"csr_minstret_hi_new", false,-1, 63,8);
    tracep->declBus(c+913,"csr_mcycle_upd", false,-1, 1,0);
    tracep->declQuad(c+340,"csr_mcycle", false,-1, 63,0);
    tracep->declBit(c+342,"csr_mcycle_lo_inc", false,-1);
    tracep->declBit(c+467,"csr_mcycle_lo_upd", false,-1);
    tracep->declBus(c+343,"csr_mcycle_lo_ff", false,-1, 7,0);
    tracep->declBus(c+1207,"csr_mcycle_lo_next", false,-1, 7,0);
    tracep->declBit(c+344,"csr_mcycle_hi_inc", false,-1);
    tracep->declBit(c+468,"csr_mcycle_hi_upd", false,-1);
    tracep->declQuad(c+345,"csr_mcycle_hi_ff", false,-1, 63,8);
    tracep->declQuad(c+1208,"csr_mcycle_hi_next", false,-1, 63,8);
    tracep->declQuad(c+347,"csr_mcycle_hi_new", false,-1, 63,8);
    tracep->declBit(c+914,"csr_mcounten_upd", false,-1);
    tracep->declBus(c+349,"csr_mcounten", false,-1, 31,0);
    tracep->declBit(c+342,"csr_mcounten_cy_ff", false,-1);
    tracep->declBit(c+350,"csr_mcounten_ir_ff", false,-1);
    tracep->declBus(c+1047,"csr_r_data", false,-1, 31,0);
    tracep->declBus(c+1050,"csr_w_data", false,-1, 31,0);
    tracep->declBit(c+1101,"e_exc", false,-1);
    tracep->declBit(c+1102,"e_irq", false,-1);
    tracep->declBit(c+1036,"e_mret", false,-1);
    tracep->declBit(c+1210,"e_irq_nmret", false,-1);
    tracep->declBit(c+351,"csr_eirq_pnd_en", false,-1);
    tracep->declBit(c+772,"csr_sirq_pnd_en", false,-1);
    tracep->declBit(c+352,"csr_tirq_pnd_en", false,-1);
    tracep->declBit(c+915,"csr_w_exc", false,-1);
    tracep->declBit(c+916,"csr_r_exc", false,-1);
    tracep->declBit(c+917,"exu_req_no_exc", false,-1);
    tracep->declBit(c+918,"csr_ipic_req", false,-1);
    tracep->declBit(c+596,"csr_hdu_req", false,-1);
    tracep->declBit(c+597,"csr_brkm_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_pipe_exu ");
    tracep->declBit(c+817,"rst_n", false,-1);
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->declBit(c+1180,"idu2exu_req_i", false,-1);
    tracep->declBit(c+1090,"exu2idu_rdy_o", false,-1);
    tracep->pushNamePrefix("idu2exu_cmd_i ");
    tracep->declBit(c+738,"instr_rvc", false,-1);
    tracep->declBus(c+739,"ialu_op", false,-1, 0,0);
    tracep->declBus(c+740,"ialu_cmd", false,-1, 4,0);
    tracep->declBus(c+741,"sum2_op", false,-1, 0,0);
    tracep->declBus(c+742,"lsu_cmd", false,-1, 3,0);
    tracep->declBus(c+743,"csr_op", false,-1, 0,0);
    tracep->declBus(c+744,"csr_cmd", false,-1, 1,0);
    tracep->declBus(c+745,"rd_wb_sel", false,-1, 2,0);
    tracep->declBit(c+746,"jump_req", false,-1);
    tracep->declBit(c+747,"branch_req", false,-1);
    tracep->declBit(c+748,"mret_req", false,-1);
    tracep->declBit(c+749,"fencei_req", false,-1);
    tracep->declBit(c+750,"wfi_req", false,-1);
    tracep->declBus(c+751,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+752,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+753,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+754,"imm", false,-1, 31,0);
    tracep->declBit(c+755,"exc_req", false,-1);
    tracep->declBus(c+756,"exc_code", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+757,"idu2exu_use_rs1_i", false,-1);
    tracep->declBit(c+758,"idu2exu_use_rs2_i", false,-1);
    tracep->declBit(c+759,"idu2exu_use_rd_i", false,-1);
    tracep->declBit(c+760,"idu2exu_use_imm_i", false,-1);
    tracep->declBus(c+1182,"exu2mprf_rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+677,"mprf2exu_rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+1183,"exu2mprf_rs2_addr_o", false,-1, 4,0);
    tracep->declBus(c+1141,"mprf2exu_rs2_data_i", false,-1, 31,0);
    tracep->declBit(c+1091,"exu2mprf_w_req_o", false,-1);
    tracep->declBus(c+589,"exu2mprf_rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+1046,"exu2mprf_rd_data_o", false,-1, 31,0);
    tracep->declBus(c+590,"exu2csr_rw_addr_o", false,-1, 11,0);
    tracep->declBit(c+882,"exu2csr_r_req_o", false,-1);
    tracep->declBus(c+1047,"csr2exu_r_data_i", false,-1, 31,0);
    tracep->declBit(c+883,"exu2csr_w_req_o", false,-1);
    tracep->declBus(c+591,"exu2csr_w_cmd_o", false,-1, 1,0);
    tracep->declBus(c+678,"exu2csr_w_data_o", false,-1, 31,0);
    tracep->declBit(c+884,"csr2exu_rw_exc_i", false,-1);
    tracep->declBit(c+1092,"exu2csr_take_irq_o", false,-1);
    tracep->declBit(c+1093,"exu2csr_take_exc_o", false,-1);
    tracep->declBit(c+1184,"exu2csr_mret_update_o", false,-1);
    tracep->declBit(c+1034,"exu2csr_mret_instr_o", false,-1);
    tracep->declBus(c+1048,"exu2csr_exc_code_o", false,-1, 3,0);
    tracep->declBus(c+1185,"exu2csr_trap_val_o", false,-1, 31,0);
    tracep->declBus(c+1186,"csr2exu_new_pc_i", false,-1, 31,0);
    tracep->declBit(c+1187,"csr2exu_irq_i", false,-1);
    tracep->declBit(c+770,"csr2exu_ip_ie_i", false,-1);
    tracep->declBit(c+1035,"csr2exu_mstatus_mie_up_i", false,-1);
    tracep->declBit(c+876,"exu2dmem_req_o", false,-1);
    tracep->declBit(c+587,"exu2dmem_cmd_o", false,-1);
    tracep->declBus(c+588,"exu2dmem_width_o", false,-1, 1,0);
    tracep->declBus(c+676,"exu2dmem_addr_o", false,-1, 31,0);
    tracep->declBus(c+1141,"exu2dmem_wdata_o", false,-1, 31,0);
    tracep->declBit(c+1140,"dmem2exu_req_ack_i", false,-1);
    tracep->declBus(c+1142,"dmem2exu_rdata_i", false,-1, 31,0);
    tracep->declBus(c+865,"dmem2exu_resp_i", false,-1, 1,0);
    tracep->declBit(c+472,"exu2pipe_exc_req_o", false,-1);
    tracep->declBit(c+1178,"exu2pipe_brkpt_o", false,-1);
    tracep->declBit(c+314,"exu2pipe_init_pc_o", false,-1);
    tracep->declBit(c+1088,"exu2pipe_wfi_run2halt_o", false,-1);
    tracep->declBit(c+1089,"exu2pipe_instret_o", false,-1);
    tracep->declBit(c+1179,"exu2csr_instret_no_exc_o", false,-1);
    tracep->declBit(c+1095,"exu2pipe_exu_busy_o", false,-1);
    tracep->declBit(c+904,"hdu2exu_no_commit_i", false,-1);
    tracep->declBit(c+517,"hdu2exu_irq_dsbl_i", false,-1);
    tracep->declBit(c+518,"hdu2exu_pc_advmt_dsbl_i", false,-1);
    tracep->declBit(c+519,"hdu2exu_dmode_sstep_en_i", false,-1);
    tracep->declBit(c+515,"hdu2exu_pbuf_fetch_i", false,-1);
    tracep->declBit(c+871,"hdu2exu_dbg_halted_i", false,-1);
    tracep->declBit(c+1094,"hdu2exu_dbg_run2halt_i", false,-1);
    tracep->declBit(c+872,"hdu2exu_dbg_halt2run_i", false,-1);
    tracep->declBit(c+1192,"hdu2exu_dbg_run_start_i", false,-1);
    tracep->declBus(c+520,"hdu2exu_dbg_new_pc_i", false,-1, 31,0);
    tracep->pushNamePrefix("exu2tdu_imon_o ");
    tracep->declBit(c+317,"vd", false,-1);
    tracep->declBit(c+1089,"req", false,-1);
    tracep->declBus(c+313,"addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+1189,"tdu2exu_ibrkpt_match_i", false,-1, 4,0);
    tracep->declBit(c+895,"tdu2exu_ibrkpt_exc_req_i", false,-1);
    tracep->pushNamePrefix("lsu2tdu_dmon_o ");
    tracep->declBit(c+1188,"vd", false,-1);
    tracep->declBit(c+593,"load", false,-1);
    tracep->declBit(c+594,"store", false,-1);
    tracep->declBus(c+679,"addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+895,"tdu2lsu_ibrkpt_exc_req_i", false,-1);
    tracep->declBus(c+894,"tdu2lsu_dbrkpt_match_i", false,-1, 3,0);
    tracep->declBit(c+896,"tdu2lsu_dbrkpt_exc_req_i", false,-1);
    tracep->declBus(c+897,"exu2tdu_ibrkpt_ret_o", false,-1, 4,0);
    tracep->declBit(c+881,"exu2hdu_ibrkpt_hw_o", false,-1);
    tracep->declBus(c+313,"exu2pipe_pc_curr_o", false,-1, 31,0);
    tracep->declBus(c+1177,"exu2csr_pc_next_o", false,-1, 31,0);
    tracep->declBit(c+1085,"exu2ifu_pc_new_req_o", false,-1);
    tracep->declBus(c+1086,"exu2ifu_pc_new_o", false,-1, 31,0);
    tracep->declBus(c+1352,"SCR1_JUMP_MASK", false,-1, 31,0);
    tracep->declBit(c+317,"exu_queue_vd", false,-1);
    tracep->pushNamePrefix("exu_queue ");
    tracep->declBit(c+598,"instr_rvc", false,-1);
    tracep->declBus(c+599,"ialu_op", false,-1, 0,0);
    tracep->declBus(c+600,"ialu_cmd", false,-1, 4,0);
    tracep->declBus(c+601,"sum2_op", false,-1, 0,0);
    tracep->declBus(c+602,"lsu_cmd", false,-1, 3,0);
    tracep->declBus(c+603,"csr_op", false,-1, 0,0);
    tracep->declBus(c+604,"csr_cmd", false,-1, 1,0);
    tracep->declBus(c+605,"rd_wb_sel", false,-1, 2,0);
    tracep->declBit(c+606,"jump_req", false,-1);
    tracep->declBit(c+607,"branch_req", false,-1);
    tracep->declBit(c+608,"mret_req", false,-1);
    tracep->declBit(c+609,"fencei_req", false,-1);
    tracep->declBit(c+610,"wfi_req", false,-1);
    tracep->declBus(c+611,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+612,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+589,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+613,"imm", false,-1, 31,0);
    tracep->declBit(c+614,"exc_req", false,-1);
    tracep->declBus(c+615,"exc_code", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1103,"exu_queue_barrier", false,-1);
    tracep->declBit(c+1211,"dbg_run_start_npbuf", false,-1);
    tracep->declBit(c+1104,"exu_queue_en", false,-1);
    tracep->declBus(c+616,"exu_illegal_instr", false,-1, 31,0);
    tracep->declBit(c+133,"idu2exu_use_rs1_ff", false,-1);
    tracep->declBit(c+134,"idu2exu_use_rs2_ff", false,-1);
    tracep->declBit(c+1105,"exu_queue_vd_upd", false,-1);
    tracep->declBit(c+317,"exu_queue_vd_ff", false,-1);
    tracep->declBit(c+1212,"exu_queue_vd_next", false,-1);
    tracep->declBit(c+919,"ialu_rdy", false,-1);
    tracep->declBit(c+920,"ialu_vd", false,-1);
    tracep->declBus(c+921,"ialu_main_op1", false,-1, 31,0);
    tracep->declBus(c+922,"ialu_main_op2", false,-1, 31,0);
    tracep->declBus(c+923,"ialu_main_res", false,-1, 31,0);
    tracep->declBus(c+680,"ialu_addr_op1", false,-1, 31,0);
    tracep->declBus(c+617,"ialu_addr_op2", false,-1, 31,0);
    tracep->declBus(c+676,"ialu_addr_res", false,-1, 31,0);
    tracep->declBit(c+924,"ialu_cmp", false,-1);
    tracep->declBit(c+1051,"exu_exc_req", false,-1);
    tracep->declBit(c+353,"exu_exc_req_ff", false,-1);
    tracep->declBit(c+1213,"exu_exc_req_next", false,-1);
    tracep->declBus(c+1048,"exc_code", false,-1, 3,0);
    tracep->declBus(c+1185,"exc_trap_val", false,-1, 31,0);
    tracep->declBit(c+598,"instr_fault_rvi_hi", false,-1);
    tracep->declBit(c+1214,"wfi_halt_cond", false,-1);
    tracep->declBit(c+1215,"wfi_run_req", false,-1);
    tracep->declBit(c+1088,"wfi_halt_req", false,-1);
    tracep->declBit(c+354,"wfi_run_start_ff", false,-1);
    tracep->declBit(c+1216,"wfi_run_start_next", false,-1);
    tracep->declBit(c+1217,"wfi_halted_upd", false,-1);
    tracep->declBit(c+355,"wfi_halted_ff", false,-1);
    tracep->declBit(c+1218,"wfi_halted_next", false,-1);
    tracep->declBus(c+356,"init_pc_v", false,-1, 3,0);
    tracep->declBit(c+314,"init_pc", false,-1);
    tracep->declBus(c+681,"inc_pc", false,-1, 31,0);
    tracep->declBit(c+648,"branch_taken", false,-1);
    tracep->declBit(c+925,"jb_taken", false,-1);
    tracep->declBus(c+682,"jb_new_pc", false,-1, 31,0);
    tracep->declBit(c+1219,"pc_curr_upd", false,-1);
    tracep->declBus(c+313,"pc_curr_ff", false,-1, 31,0);
    tracep->declBus(c+1220,"pc_curr_next", false,-1, 31,0);
    tracep->declBit(c+683,"lsu_req", false,-1);
    tracep->declBit(c+866,"lsu_rdy", false,-1);
    tracep->declBus(c+1221,"lsu_l_data", false,-1, 31,0);
    tracep->declBit(c+1052,"lsu_exc_req", false,-1);
    tracep->declBus(c+1222,"lsu_exc_code", false,-1, 3,0);
    tracep->declBit(c+1106,"exu_rdy", false,-1);
    tracep->declBit(c+684,"mprf_rs1_req", false,-1);
    tracep->declBit(c+685,"mprf_rs2_req", false,-1);
    tracep->declBus(c+611,"mprf_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+612,"mprf_rs2_addr", false,-1, 4,0);
    tracep->declBit(c+357,"csr_access_ff", false,-1);
    tracep->declBit(c+1223,"csr_access_next", false,-1);
    tracep->declBit(c+358,"csr_access_init", false,-1);
    tracep->declBus(c+1224,"update_pc", false,-1, 31,0);
    tracep->declBit(c+1225,"update_pc_en", false,-1);
    tracep->pushNamePrefix("i_ialu ");
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->declBit(c+817,"rst_n", false,-1);
    tracep->declBit(c+920,"exu2ialu_rvm_cmd_vd_i", false,-1);
    tracep->declBit(c+919,"ialu2exu_rvm_res_rdy_o", false,-1);
    tracep->declBus(c+921,"exu2ialu_main_op1_i", false,-1, 31,0);
    tracep->declBus(c+922,"exu2ialu_main_op2_i", false,-1, 31,0);
    tracep->declBus(c+618,"exu2ialu_cmd_i", false,-1, 4,0);
    tracep->declBus(c+923,"ialu2exu_main_res_o", false,-1, 31,0);
    tracep->declBit(c+924,"ialu2exu_cmp_res_o", false,-1);
    tracep->declBus(c+680,"exu2ialu_addr_op1_i", false,-1, 31,0);
    tracep->declBus(c+617,"exu2ialu_addr_op2_i", false,-1, 31,0);
    tracep->declBus(c+676,"ialu2exu_addr_res_o", false,-1, 31,0);
    tracep->declBus(c+1353,"SCR1_MUL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1354,"SCR1_MUL_RES_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1348,"SCR1_MDU_SUM_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1295,"SCR1_DIV_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1355,"SCR1_DIV_CNT_INIT", false,-1, 31,0);
    tracep->declQuad(c+926,"main_sum_res", false,-1, 32,0);
    tracep->pushNamePrefix("main_sum_flags ");
    tracep->declBit(c+928,"z", false,-1);
    tracep->declBit(c+929,"s", false,-1);
    tracep->declBit(c+930,"o", false,-1);
    tracep->declBit(c+931,"c", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+932,"main_sum_pos_ovflw", false,-1);
    tracep->declBit(c+933,"main_sum_neg_ovflw", false,-1);
    tracep->declBit(c+934,"main_ops_diff_sgn", false,-1);
    tracep->declBit(c+935,"main_ops_non_zero", false,-1);
    tracep->declBit(c+619,"ialu_cmd_shft", false,-1);
    tracep->declBus(c+936,"shft_op1", false,-1, 31,0);
    tracep->declBus(c+937,"shft_op2", false,-1, 4,0);
    tracep->declBus(c+620,"shft_cmd", false,-1, 1,0);
    tracep->declBus(c+938,"shft_res", false,-1, 31,0);
    tracep->declBit(c+621,"mdu_cmd_is_iter", false,-1);
    tracep->declBit(c+939,"mdu_iter_req", false,-1);
    tracep->declBit(c+135,"mdu_iter_rdy", false,-1);
    tracep->declBit(c+940,"mdu_corr_req", false,-1);
    tracep->declBit(c+649,"div_corr_req", false,-1);
    tracep->declBit(c+650,"rem_corr_req", false,-1);
    tracep->declBus(c+359,"mdu_fsm_ff", false,-1, 1,0);
    tracep->declBus(c+941,"mdu_fsm_next", false,-1, 1,0);
    tracep->declBit(c+360,"mdu_fsm_idle", false,-1);
    tracep->declBit(c+361,"mdu_fsm_iter", false,-1);
    tracep->declBit(c+362,"mdu_fsm_corr", false,-1);
    tracep->declBus(c+622,"mdu_cmd", false,-1, 1,0);
    tracep->declBit(c+623,"mdu_cmd_mul", false,-1);
    tracep->declBit(c+621,"mdu_cmd_div", false,-1);
    tracep->declBus(c+624,"mul_cmd", false,-1, 1,0);
    tracep->declBit(c+625,"mul_cmd_hi", false,-1);
    tracep->declBus(c+626,"div_cmd", false,-1, 1,0);
    tracep->declBit(c+627,"div_cmd_div", false,-1);
    tracep->declBit(c+628,"div_cmd_rem", false,-1);
    tracep->declBit(c+629,"mul_op1_is_sgn", false,-1);
    tracep->declBit(c+630,"mul_op2_is_sgn", false,-1);
    tracep->declBit(c+651,"mul_op1_sgn", false,-1);
    tracep->declBit(c+652,"mul_op2_sgn", false,-1);
    tracep->declQuad(c+653,"mul_op1", false,-1, 32,0);
    tracep->declQuad(c+655,"mul_op2", false,-1, 32,0);
    tracep->declQuad(c+657,"mul_res", false,-1, 63,0);
    tracep->declBit(c+631,"div_ops_are_sgn", false,-1);
    tracep->declBit(c+942,"div_op1_is_neg", false,-1);
    tracep->declBit(c+659,"div_op2_is_neg", false,-1);
    tracep->declBit(c+943,"div_res_rem_c", false,-1);
    tracep->declBus(c+944,"div_res_rem", false,-1, 31,0);
    tracep->declBus(c+945,"div_res_quo", false,-1, 31,0);
    tracep->declBit(c+946,"div_quo_bit", false,-1);
    tracep->declBit(c+947,"div_dvdnd_lo_upd", false,-1);
    tracep->declBus(c+136,"div_dvdnd_lo_ff", false,-1, 31,0);
    tracep->declBus(c+948,"div_dvdnd_lo_next", false,-1, 31,0);
    tracep->declBit(c+949,"mdu_sum_sub", false,-1);
    tracep->declQuad(c+950,"mdu_sum_op1", false,-1, 32,0);
    tracep->declQuad(c+952,"mdu_sum_op2", false,-1, 32,0);
    tracep->declQuad(c+954,"mdu_sum_res", false,-1, 32,0);
    tracep->declBit(c+947,"mdu_iter_cnt_en", false,-1);
    tracep->declBus(c+137,"mdu_iter_cnt", false,-1, 31,0);
    tracep->declBus(c+1226,"mdu_iter_cnt_next", false,-1, 31,0);
    tracep->declBit(c+947,"mdu_res_upd", false,-1);
    tracep->declBit(c+138,"mdu_res_c_ff", false,-1);
    tracep->declBit(c+1227,"mdu_res_c_next", false,-1);
    tracep->declBus(c+139,"mdu_res_hi_ff", false,-1, 31,0);
    tracep->declBus(c+1228,"mdu_res_hi_next", false,-1, 31,0);
    tracep->declBus(c+140,"mdu_res_lo_ff", false,-1, 31,0);
    tracep->declBus(c+1229,"mdu_res_lo_next", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+956,"sgn", false,-1);
    tracep->declBit(c+957,"inv", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_lsu ");
    tracep->declBit(c+817,"rst_n", false,-1);
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->declBit(c+683,"exu2lsu_req_i", false,-1);
    tracep->declBus(c+632,"exu2lsu_cmd_i", false,-1, 3,0);
    tracep->declBus(c+676,"exu2lsu_addr_i", false,-1, 31,0);
    tracep->declBus(c+1141,"exu2lsu_sdata_i", false,-1, 31,0);
    tracep->declBit(c+866,"lsu2exu_rdy_o", false,-1);
    tracep->declBus(c+1221,"lsu2exu_ldata_o", false,-1, 31,0);
    tracep->declBit(c+1052,"lsu2exu_exc_o", false,-1);
    tracep->declBus(c+1222,"lsu2exu_exc_code_o", false,-1, 3,0);
    tracep->pushNamePrefix("lsu2tdu_dmon_o ");
    tracep->declBit(c+1188,"vd", false,-1);
    tracep->declBit(c+593,"load", false,-1);
    tracep->declBit(c+594,"store", false,-1);
    tracep->declBus(c+679,"addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+895,"tdu2lsu_ibrkpt_exc_req_i", false,-1);
    tracep->declBit(c+896,"tdu2lsu_dbrkpt_exc_req_i", false,-1);
    tracep->declBit(c+876,"lsu2dmem_req_o", false,-1);
    tracep->declBit(c+587,"lsu2dmem_cmd_o", false,-1);
    tracep->declBus(c+588,"lsu2dmem_width_o", false,-1, 1,0);
    tracep->declBus(c+676,"lsu2dmem_addr_o", false,-1, 31,0);
    tracep->declBus(c+1141,"lsu2dmem_wdata_o", false,-1, 31,0);
    tracep->declBit(c+1140,"dmem2lsu_req_ack_i", false,-1);
    tracep->declBus(c+1142,"dmem2lsu_rdata_i", false,-1, 31,0);
    tracep->declBus(c+865,"dmem2lsu_resp_i", false,-1, 1,0);
    tracep->declBit(c+363,"lsu_fsm_curr", false,-1);
    tracep->declBit(c+1053,"lsu_fsm_next", false,-1);
    tracep->declBit(c+364,"lsu_fsm_idle", false,-1);
    tracep->declBit(c+473,"lsu_cmd_upd", false,-1);
    tracep->declBus(c+365,"lsu_cmd_ff", false,-1, 3,0);
    tracep->declBit(c+366,"lsu_cmd_ff_load", false,-1);
    tracep->declBit(c+367,"lsu_cmd_ff_store", false,-1);
    tracep->declBit(c+633,"dmem_cmd_load", false,-1);
    tracep->declBit(c+587,"dmem_cmd_store", false,-1);
    tracep->declBit(c+634,"dmem_wdth_word", false,-1);
    tracep->declBit(c+635,"dmem_wdth_hword", false,-1);
    tracep->declBit(c+636,"dmem_wdth_byte", false,-1);
    tracep->declBit(c+867,"dmem_resp_ok", false,-1);
    tracep->declBit(c+868,"dmem_resp_er", false,-1);
    tracep->declBit(c+866,"dmem_resp_received", false,-1);
    tracep->declBit(c+1054,"dmem_req_vd", false,-1);
    tracep->declBit(c+958,"lsu_exc_req", false,-1);
    tracep->declBit(c+686,"dmem_addr_mslgn", false,-1);
    tracep->declBit(c+687,"dmem_addr_mslgn_l", false,-1);
    tracep->declBit(c+688,"dmem_addr_mslgn_s", false,-1);
    tracep->declBit(c+959,"lsu_exc_hwbrk", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_pipe_hdu ");
    tracep->declBus(c+1325,"HART_PBUF_INSTR_REGOUT_EN", false,-1, 0,0);
    tracep->declBit(c+573,"rst_n", false,-1);
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->declBit(c+722,"clk_en", false,-1);
    tracep->declBit(c+818,"pipe2hdu_rdc_qlfy_i", false,-1);
    tracep->declBit(c+902,"csr2hdu_req_i", false,-1);
    tracep->declBus(c+591,"csr2hdu_cmd_i", false,-1, 1,0);
    tracep->declBus(c+595,"csr2hdu_addr_i", false,-1, 1,0);
    tracep->declBus(c+678,"csr2hdu_wdata_i", false,-1, 31,0);
    tracep->declBit(c+1191,"hdu2csr_resp_o", false,-1);
    tracep->declBus(c+901,"hdu2csr_rdata_o", false,-1, 31,0);
    tracep->declBit(c+489,"dm2hdu_cmd_req_i", false,-1);
    tracep->declBus(c+723,"dm2hdu_cmd_i", false,-1, 1,0);
    tracep->declBit(c+869,"hdu2dm_cmd_resp_o", false,-1);
    tracep->declBit(c+1147,"hdu2dm_cmd_rcode_o", false,-1);
    tracep->declBit(c+510,"hdu2dm_hart_event_o", false,-1);
    tracep->pushNamePrefix("hdu2dm_hart_status_o ");
    tracep->declBit(c+511,"except", false,-1);
    tracep->declBit(c+512,"ebreak", false,-1);
    tracep->declBus(c+513,"dbg_state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+514,"hdu2dm_pbuf_addr_o", false,-1, 2,0);
    tracep->declBus(c+1149,"dm2hdu_pbuf_instr_i", false,-1, 31,0);
    tracep->declBit(c+877,"hdu2dm_dreg_req_o", false,-1);
    tracep->declBit(c+878,"hdu2dm_dreg_wr_o", false,-1);
    tracep->declBus(c+879,"hdu2dm_dreg_wdata_o", false,-1, 31,0);
    tracep->declBit(c+1311,"dm2hdu_dreg_resp_i", false,-1);
    tracep->declBit(c+1300,"dm2hdu_dreg_fail_i", false,-1);
    tracep->declBus(c+100,"dm2hdu_dreg_rdata_i", false,-1, 31,0);
    tracep->declBit(c+516,"hdu2tdu_hwbrk_dsbl_o", false,-1);
    tracep->declBit(c+903,"tdu2hdu_dmode_req_i", false,-1);
    tracep->declBit(c+881,"exu2hdu_ibrkpt_hw_i", false,-1);
    tracep->declBit(c+1194,"pipe2hdu_exu_busy_i", false,-1);
    tracep->declBit(c+1195,"pipe2hdu_instret_i", false,-1);
    tracep->declBit(c+1196,"pipe2hdu_init_pc_i", false,-1);
    tracep->declBit(c+1049,"pipe2hdu_exu_exc_req_i", false,-1);
    tracep->declBit(c+1197,"pipe2hdu_brkpt_i", false,-1);
    tracep->declBit(c+515,"hdu2exu_pbuf_fetch_o", false,-1);
    tracep->declBit(c+904,"hdu2exu_no_commit_o", false,-1);
    tracep->declBit(c+517,"hdu2exu_irq_dsbl_o", false,-1);
    tracep->declBit(c+518,"hdu2exu_pc_advmt_dsbl_o", false,-1);
    tracep->declBit(c+519,"hdu2exu_dmode_sstep_en_o", false,-1);
    tracep->declBit(c+871,"hdu2exu_dbg_halted_o", false,-1);
    tracep->declBit(c+1094,"hdu2exu_dbg_run2halt_o", false,-1);
    tracep->declBit(c+872,"hdu2exu_dbg_halt2run_o", false,-1);
    tracep->declBit(c+1192,"hdu2exu_dbg_run_start_o", false,-1);
    tracep->declBus(c+313,"pipe2hdu_pc_curr_i", false,-1, 31,0);
    tracep->declBus(c+520,"hdu2exu_dbg_new_pc_o", false,-1, 31,0);
    tracep->declBit(c+1193,"ifu2hdu_pbuf_instr_rdy_i", false,-1);
    tracep->declBit(c+521,"hdu2ifu_pbuf_instr_vd_o", false,-1);
    tracep->declBit(c+522,"hdu2ifu_pbuf_instr_err_o", false,-1);
    tracep->declBus(c+132,"hdu2ifu_pbuf_instr_o", false,-1, 31,0);
    tracep->declBus(c+1356,"SCR1_HDU_TIMEOUT", false,-1, 31,0);
    tracep->declBus(c+1357,"SCR1_HDU_TIMEOUT_WIDTH", false,-1, 31,0);
    tracep->declBit(c+726,"dm_dhalt_req", false,-1);
    tracep->declBit(c+1230,"dm_run_req", false,-1);
    tracep->declBit(c+727,"dm_cmd_run", false,-1);
    tracep->declBit(c+728,"dm_cmd_dhalted", false,-1);
    tracep->declBit(c+729,"dm_cmd_drun", false,-1);
    tracep->declBus(c+523,"dbg_state", false,-1, 1,0);
    tracep->declBus(c+873,"dbg_state_next", false,-1, 1,0);
    tracep->declBit(c+524,"dbg_state_dhalted", false,-1);
    tracep->declBit(c+525,"dbg_state_drun", false,-1);
    tracep->declBit(c+526,"dbg_state_run", false,-1);
    tracep->declBit(c+527,"dbg_state_reset", false,-1);
    tracep->declBit(c+528,"dfsm_trans", false,-1);
    tracep->declBit(c+1107,"dfsm_trans_next", false,-1);
    tracep->declBit(c+529,"dfsm_update", false,-1);
    tracep->declBit(c+1108,"dfsm_update_next", false,-1);
    tracep->declBit(c+510,"dfsm_event", false,-1);
    tracep->declBit(c+874,"dfsm_event_next", false,-1);
    tracep->declBit(c+1231,"hart_resume_req", false,-1);
    tracep->declBit(c+843,"hart_halt_req", false,-1);
    tracep->declBit(c+844,"hart_cmd_req", false,-1);
    tracep->declBit(c+1232,"hart_runctrl_upd", false,-1);
    tracep->declBit(c+1233,"hart_runctrl_clr", false,-1);
    tracep->pushNamePrefix("hart_runctrl ");
    tracep->declBit(c+517,"irq_dsbl", false,-1);
    tracep->declBit(c+530,"fetch_src", false,-1);
    tracep->declBit(c+518,"pc_advmt_dsbl", false,-1);
    tracep->declBit(c+516,"hwbrkpt_dsbl", false,-1);
    tracep->pushNamePrefix("redirect ");
    tracep->declBit(c+519,"sstep", false,-1);
    tracep->declBit(c+531,"ebreak", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+532,"halt_req_timeout_cnt", false,-1, 5,0);
    tracep->declBus(c+1234,"halt_req_timeout_cnt_next", false,-1, 5,0);
    tracep->declBit(c+1235,"halt_req_timeout_cnt_en", false,-1);
    tracep->declBit(c+533,"halt_req_timeout_flag", false,-1);
    tracep->pushNamePrefix("hart_haltstatus ");
    tracep->declBit(c+534,"except", false,-1);
    tracep->declBus(c+535,"cause", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+1236,"hart_haltcause", false,-1, 2,0);
    tracep->declBit(c+1109,"hart_halt_pnd", false,-1);
    tracep->declBit(c+1094,"hart_halt_ack", false,-1);
    tracep->declBit(c+1110,"dmode_cause_sstep", false,-1);
    tracep->declBit(c+1055,"dmode_cause_except", false,-1);
    tracep->declBit(c+1237,"dmode_cause_ebreak", false,-1);
    tracep->declBit(c+1238,"dmode_cause_any", false,-1);
    tracep->declBit(c+960,"dmode_cause_tmreq", false,-1);
    tracep->declBit(c+1111,"ifu_handshake_done", false,-1);
    tracep->declBit(c+1239,"pbuf_exc_inj_req", false,-1);
    tracep->declBit(c+1240,"pbuf_exc_inj_end", false,-1);
    tracep->declBit(c+1241,"pbuf_start_fetch", false,-1);
    tracep->declBus(c+536,"pbuf_fsm_curr", false,-1, 1,0);
    tracep->declBus(c+1112,"pbuf_fsm_next", false,-1, 1,0);
    tracep->declBit(c+537,"pbuf_fsm_idle", false,-1);
    tracep->declBit(c+538,"pbuf_fsm_fetch", false,-1);
    tracep->declBit(c+522,"pbuf_fsm_excinj", false,-1);
    tracep->declBus(c+514,"pbuf_addr_ff", false,-1, 2,0);
    tracep->declBus(c+1242,"pbuf_addr_next", false,-1, 2,0);
    tracep->declBit(c+539,"pbuf_addr_end", false,-1);
    tracep->declBit(c+1243,"pbuf_addr_next_vd", false,-1);
    tracep->declBit(c+540,"pbuf_instr_wait_latching", false,-1);
    tracep->declBit(c+875,"csr_upd_on_halt", false,-1);
    tracep->declBit(c+902,"csr_wr", false,-1);
    tracep->declBus(c+879,"csr_wr_data", false,-1, 31,0);
    tracep->declBus(c+901,"csr_rd_data", false,-1, 31,0);
    tracep->declBit(c+961,"csr_dcsr_sel", false,-1);
    tracep->declBit(c+962,"csr_dcsr_wr", false,-1);
    tracep->pushNamePrefix("csr_dcsr_in ");
    tracep->declBus(c+963,"xdebugver", false,-1, 3,0);
    tracep->declBus(c+964,"rsrv3", false,-1, 11,0);
    tracep->declBit(c+965,"ebreakm", false,-1);
    tracep->declBus(c+966,"rsrv2", false,-1, 2,0);
    tracep->declBit(c+967,"stepie", false,-1);
    tracep->declBus(c+968,"rsrv1", false,-1, 1,0);
    tracep->declBus(c+969,"cause", false,-1, 2,0);
    tracep->declBus(c+970,"rsrv0", false,-1, 2,0);
    tracep->declBit(c+971,"step", false,-1);
    tracep->declBus(c+972,"prv", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_dcsr_out ");
    tracep->declBus(c+973,"xdebugver", false,-1, 3,0);
    tracep->declBus(c+974,"rsrv3", false,-1, 11,0);
    tracep->declBit(c+975,"ebreakm", false,-1);
    tracep->declBus(c+976,"rsrv2", false,-1, 2,0);
    tracep->declBit(c+977,"stepie", false,-1);
    tracep->declBus(c+978,"rsrv1", false,-1, 1,0);
    tracep->declBus(c+979,"cause", false,-1, 2,0);
    tracep->declBus(c+980,"rsrv0", false,-1, 2,0);
    tracep->declBit(c+981,"step", false,-1);
    tracep->declBus(c+982,"prv", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+541,"csr_dcsr_ebreakm", false,-1);
    tracep->declBit(c+542,"csr_dcsr_stepie", false,-1);
    tracep->declBit(c+543,"csr_dcsr_step", false,-1);
    tracep->declBus(c+544,"csr_dcsr_cause", false,-1, 2,0);
    tracep->declBit(c+983,"csr_dpc_sel", false,-1);
    tracep->declBit(c+984,"csr_dpc_wr", false,-1);
    tracep->declBus(c+520,"csr_dpc_ff", false,-1, 31,0);
    tracep->declBus(c+1244,"csr_dpc_next", false,-1, 31,0);
    tracep->declBus(c+1245,"csr_dpc_out", false,-1, 31,0);
    tracep->declBit(c+637,"csr_addr_dscratch0", false,-1);
    tracep->declBit(c+877,"csr_dscratch0_sel", false,-1);
    tracep->declBit(c+1358,"csr_dscratch0_wr", false,-1);
    tracep->declBus(c+1246,"csr_dscratch0_out", false,-1, 31,0);
    tracep->declBit(c+1300,"csr_dscratch0_resp", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_pipe_idu ");
    tracep->declBit(c+817,"rst_n", false,-1);
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->declBit(c+1090,"idu2ifu_rdy_o", false,-1);
    tracep->declBus(c+737,"ifu2idu_instr_i", false,-1, 31,0);
    tracep->declBit(c+1181,"ifu2idu_imem_err_i", false,-1);
    tracep->declBit(c+316,"ifu2idu_err_rvi_hi_i", false,-1);
    tracep->declBit(c+1180,"ifu2idu_vd_i", false,-1);
    tracep->declBit(c+1180,"idu2exu_req_o", false,-1);
    tracep->pushNamePrefix("idu2exu_cmd_o ");
    tracep->declBit(c+738,"instr_rvc", false,-1);
    tracep->declBus(c+739,"ialu_op", false,-1, 0,0);
    tracep->declBus(c+740,"ialu_cmd", false,-1, 4,0);
    tracep->declBus(c+741,"sum2_op", false,-1, 0,0);
    tracep->declBus(c+742,"lsu_cmd", false,-1, 3,0);
    tracep->declBus(c+743,"csr_op", false,-1, 0,0);
    tracep->declBus(c+744,"csr_cmd", false,-1, 1,0);
    tracep->declBus(c+745,"rd_wb_sel", false,-1, 2,0);
    tracep->declBit(c+746,"jump_req", false,-1);
    tracep->declBit(c+747,"branch_req", false,-1);
    tracep->declBit(c+748,"mret_req", false,-1);
    tracep->declBit(c+749,"fencei_req", false,-1);
    tracep->declBit(c+750,"wfi_req", false,-1);
    tracep->declBus(c+751,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+752,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+753,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+754,"imm", false,-1, 31,0);
    tracep->declBit(c+755,"exc_req", false,-1);
    tracep->declBus(c+756,"exc_code", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+757,"idu2exu_use_rs1_o", false,-1);
    tracep->declBit(c+758,"idu2exu_use_rs2_o", false,-1);
    tracep->declBit(c+759,"idu2exu_use_rd_o", false,-1);
    tracep->declBit(c+760,"idu2exu_use_imm_o", false,-1);
    tracep->declBit(c+1090,"exu2idu_rdy_i", false,-1);
    tracep->declBus(c+1347,"SCR1_MPRF_ZERO_ADDR", false,-1, 4,0);
    tracep->declBus(c+1359,"SCR1_MPRF_RA_ADDR", false,-1, 4,0);
    tracep->declBus(c+1360,"SCR1_MPRF_SP_ADDR", false,-1, 4,0);
    tracep->declBus(c+737,"instr", false,-1, 31,0);
    tracep->declBus(c+761,"instr_type", false,-1, 1,0);
    tracep->declBus(c+762,"rvi_opcode", false,-1, 6,2);
    tracep->declBit(c+763,"rvi_illegal", false,-1);
    tracep->declBus(c+764,"funct3", false,-1, 2,0);
    tracep->declBus(c+765,"funct7", false,-1, 6,0);
    tracep->declBus(c+766,"funct12", false,-1, 11,0);
    tracep->declBus(c+767,"shamt", false,-1, 4,0);
    tracep->declBit(c+768,"rvc_illegal", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_pipe_ifu ");
    tracep->declBit(c+817,"rst_n", false,-1);
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->declBit(c+1087,"pipe2ifu_stop_fetch_i", false,-1);
    tracep->declBit(c+1080,"imem2ifu_req_ack_i", false,-1);
    tracep->declBit(c+1081,"ifu2imem_req_o", false,-1);
    tracep->declBit(c+1314,"ifu2imem_cmd_o", false,-1);
    tracep->declBus(c+1082,"ifu2imem_addr_o", false,-1, 31,0);
    tracep->declBus(c+671,"imem2ifu_rdata_i", false,-1, 31,0);
    tracep->declBus(c+769,"imem2ifu_resp_i", false,-1, 1,0);
    tracep->declBit(c+1085,"exu2ifu_pc_new_req_i", false,-1);
    tracep->declBus(c+1086,"exu2ifu_pc_new_i", false,-1, 31,0);
    tracep->declBit(c+515,"hdu2ifu_pbuf_fetch_i", false,-1);
    tracep->declBit(c+1090,"ifu2hdu_pbuf_rdy_o", false,-1);
    tracep->declBit(c+521,"hdu2ifu_pbuf_vd_i", false,-1);
    tracep->declBit(c+522,"hdu2ifu_pbuf_err_i", false,-1);
    tracep->declBus(c+132,"hdu2ifu_pbuf_instr_i", false,-1, 31,0);
    tracep->declBit(c+1090,"idu2ifu_rdy_i", false,-1);
    tracep->declBus(c+737,"ifu2idu_instr_o", false,-1, 31,0);
    tracep->declBit(c+1181,"ifu2idu_imem_err_o", false,-1);
    tracep->declBit(c+316,"ifu2idu_err_rvi_hi_o", false,-1);
    tracep->declBit(c+1180,"ifu2idu_vd_o", false,-1);
    tracep->declBus(c+1296,"SCR1_IFU_Q_SIZE_WORD", false,-1, 31,0);
    tracep->declBus(c+1361,"SCR1_IFU_Q_SIZE_HALF", false,-1, 31,0);
    tracep->declBus(c+1362,"SCR1_TXN_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1296,"SCR1_IFU_QUEUE_ADR_W", false,-1, 31,0);
    tracep->declBus(c+1362,"SCR1_IFU_QUEUE_PTR_W", false,-1, 31,0);
    tracep->declBus(c+1362,"SCR1_IFU_Q_FREE_H_W", false,-1, 31,0);
    tracep->declBus(c+1296,"SCR1_IFU_Q_FREE_W_W", false,-1, 31,0);
    tracep->declBit(c+368,"new_pc_unaligned_ff", false,-1);
    tracep->declBit(c+1247,"new_pc_unaligned_next", false,-1);
    tracep->declBit(c+1248,"new_pc_unaligned_upd", false,-1);
    tracep->declBit(c+672,"instr_hi_is_rvi", false,-1);
    tracep->declBit(c+673,"instr_lo_is_rvi", false,-1);
    tracep->declBus(c+845,"instr_type", false,-1, 2,0);
    tracep->declBit(c+369,"instr_hi_rvi_lo_ff", false,-1);
    tracep->declBit(c+846,"instr_hi_rvi_lo_next", false,-1);
    tracep->declBus(c+1113,"q_rd_size", false,-1, 1,0);
    tracep->declBit(c+477,"q_rd_vd", false,-1);
    tracep->declBit(c+1114,"q_rd_none", false,-1);
    tracep->declBit(c+370,"q_rd_hword", false,-1);
    tracep->declBus(c+847,"q_wr_size", false,-1, 1,0);
    tracep->declBit(c+848,"q_wr_none", false,-1);
    tracep->declBit(c+849,"q_wr_full", false,-1);
    tracep->declBus(c+371,"q_rptr", false,-1, 2,0);
    tracep->declBus(c+1115,"q_rptr_next", false,-1, 2,0);
    tracep->declBit(c+1116,"q_rptr_upd", false,-1);
    tracep->declBus(c+372,"q_wptr", false,-1, 2,0);
    tracep->declBus(c+1249,"q_wptr_next", false,-1, 2,0);
    tracep->declBit(c+1250,"q_wptr_upd", false,-1);
    tracep->declBit(c+1117,"q_wr_en", false,-1);
    tracep->declBit(c+1118,"q_flush_req", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+373+i*1,"q_data", true,(i+0), 15,0);
    }
    tracep->declBus(c+377,"q_data_head", false,-1, 15,0);
    tracep->declBus(c+378,"q_data_next", false,-1, 15,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+379+i*1,"q_err", true,(i+0));
    }
    tracep->declBit(c+383,"q_err_head", false,-1);
    tracep->declBit(c+384,"q_err_next", false,-1);
    tracep->declBit(c+385,"q_is_empty", false,-1);
    tracep->declBit(c+478,"q_has_free_slots", false,-1);
    tracep->declBit(c+386,"q_has_1_ocpd_hw", false,-1);
    tracep->declBit(c+387,"q_head_is_rvc", false,-1);
    tracep->declBit(c+388,"q_head_is_rvi", false,-1);
    tracep->declBus(c+389,"q_ocpd_h", false,-1, 2,0);
    tracep->declBus(c+479,"q_free_h_next", false,-1, 2,0);
    tracep->declBus(c+480,"q_free_w_next", false,-1, 1,0);
    tracep->declBit(c+1119,"ifu_fetch_req", false,-1);
    tracep->declBit(c+1251,"ifu_stop_req", false,-1);
    tracep->declBit(c+390,"ifu_fsm_curr", false,-1);
    tracep->declBit(c+1120,"ifu_fsm_next", false,-1);
    tracep->declBit(c+390,"ifu_fsm_fetch", false,-1);
    tracep->declBit(c+773,"imem_resp_ok", false,-1);
    tracep->declBit(c+774,"imem_resp_er", false,-1);
    tracep->declBit(c+775,"imem_resp_er_discard_pnd", false,-1);
    tracep->declBit(c+391,"imem_resp_discard_req", false,-1);
    tracep->declBit(c+776,"imem_resp_received", false,-1);
    tracep->declBit(c+777,"imem_resp_vd", false,-1);
    tracep->declBit(c+1121,"imem_handshake_done", false,-1);
    tracep->declBus(c+674,"imem_rdata_lo", false,-1, 15,0);
    tracep->declBus(c+675,"imem_rdata_hi", false,-1, 31,16);
    tracep->declBit(c+1122,"imem_addr_upd", false,-1);
    tracep->declBus(c+392,"imem_addr_ff", false,-1, 31,2);
    tracep->declBus(c+481,"imem_addr_next", false,-1, 31,2);
    tracep->declBit(c+1252,"imem_pnd_txns_cnt_upd", false,-1);
    tracep->declBus(c+393,"imem_pnd_txns_cnt", false,-1, 2,0);
    tracep->declBus(c+1123,"imem_pnd_txns_cnt_next", false,-1, 2,0);
    tracep->declBus(c+394,"imem_vd_pnd_txns_cnt", false,-1, 2,0);
    tracep->declBit(c+395,"imem_pnd_txns_q_full", false,-1);
    tracep->declBit(c+1253,"imem_resp_discard_cnt_upd", false,-1);
    tracep->declBus(c+396,"imem_resp_discard_cnt", false,-1, 2,0);
    tracep->declBus(c+1254,"imem_resp_discard_cnt_next", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_pipe_ipic ");
    tracep->declBit(c+817,"rst_n", false,-1);
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->declBus(c+660,"soc2ipic_irq_lines_i", false,-1, 15,0);
    tracep->declBit(c+885,"csr2ipic_r_req_i", false,-1);
    tracep->declBit(c+886,"csr2ipic_w_req_i", false,-1);
    tracep->declBus(c+887,"csr2ipic_addr_i", false,-1, 2,0);
    tracep->declBus(c+888,"csr2ipic_wdata_i", false,-1, 31,0);
    tracep->declBus(c+889,"ipic2csr_rdata_o", false,-1, 31,0);
    tracep->declBit(c+315,"ipic2csr_irq_m_req_o", false,-1);
    tracep->declBus(c+397,"irq_lines", false,-1, 15,0);
    tracep->declBus(c+398,"irq_lines_sync", false,-1, 15,0);
    tracep->declBus(c+399,"irq_lines_dly", false,-1, 15,0);
    tracep->declBus(c+985,"irq_edge_detected", false,-1, 15,0);
    tracep->declBus(c+986,"irq_lvl", false,-1, 15,0);
    tracep->declBit(c+987,"ipic_cisv_upd", false,-1);
    tracep->declBus(c+400,"ipic_cisv_ff", false,-1, 4,0);
    tracep->declBus(c+469,"ipic_cisv_next", false,-1, 4,0);
    tracep->declBit(c+988,"cicsr_wr_req", false,-1);
    tracep->pushNamePrefix("ipic_cicsr ");
    tracep->declBit(c+401,"ip", false,-1);
    tracep->declBit(c+402,"ie", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+989,"eoi_wr_req", false,-1);
    tracep->declBit(c+990,"ipic_eoi_req", false,-1);
    tracep->declBit(c+991,"soi_wr_req", false,-1);
    tracep->declBit(c+470,"ipic_soi_req", false,-1);
    tracep->declBit(c+992,"idxr_wr_req", false,-1);
    tracep->declBus(c+403,"ipic_idxr_ff", false,-1, 3,0);
    tracep->declBit(c+471,"ipic_ipr_upd", false,-1);
    tracep->declBus(c+404,"ipic_ipr_ff", false,-1, 15,0);
    tracep->declBus(c+993,"ipic_ipr_next", false,-1, 15,0);
    tracep->declBus(c+994,"ipic_ipr_clr_cond", false,-1, 15,0);
    tracep->declBus(c+995,"ipic_ipr_clr_req", false,-1, 15,0);
    tracep->declBus(c+996,"ipic_ipr_clr", false,-1, 15,0);
    tracep->declBit(c+987,"ipic_isvr_upd", false,-1);
    tracep->declBus(c+405,"ipic_isvr_ff", false,-1, 15,0);
    tracep->declBus(c+997,"ipic_isvr_next", false,-1, 15,0);
    tracep->declBit(c+998,"ipic_ier_upd", false,-1);
    tracep->declBus(c+406,"ipic_ier_ff", false,-1, 15,0);
    tracep->declBus(c+999,"ipic_ier_next", false,-1, 15,0);
    tracep->declBus(c+407,"ipic_imr_ff", false,-1, 15,0);
    tracep->declBus(c+1000,"ipic_imr_next", false,-1, 15,0);
    tracep->declBus(c+408,"ipic_iinvr_ff", false,-1, 15,0);
    tracep->declBus(c+1001,"ipic_iinvr_next", false,-1, 15,0);
    tracep->declBit(c+1002,"icsr_wr_req", false,-1);
    tracep->pushNamePrefix("ipic_icsr ");
    tracep->declBit(c+409,"ip", false,-1);
    tracep->declBit(c+410,"ie", false,-1);
    tracep->declBit(c+411,"im", false,-1);
    tracep->declBit(c+412,"inv", false,-1);
    tracep->declBit(c+413,"isv", false,-1);
    tracep->declBus(c+414,"line", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+415,"irq_serv_vd", false,-1);
    tracep->declBus(c+416,"irq_serv_idx", false,-1, 3,0);
    tracep->declBit(c+417,"irq_req_vd", false,-1);
    tracep->declBus(c+418,"irq_req_idx", false,-1, 3,0);
    tracep->declBit(c+419,"irq_eoi_req_vd", false,-1);
    tracep->declBus(c+420,"irq_eoi_req_idx", false,-1, 3,0);
    tracep->declBus(c+421,"irq_req_v", false,-1, 15,0);
    tracep->declBit(c+1003,"irq_start_vd", false,-1);
    tracep->declBit(c+422,"irq_hi_prior_pnd", false,-1);
    tracep->pushNamePrefix("irr_priority ");
    tracep->declBit(c+417,"vd", false,-1);
    tracep->declBus(c+418,"idx", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("isvr_priority_eoi ");
    tracep->declBit(c+419,"vd", false,-1);
    tracep->declBus(c+420,"idx", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+423,"ipic_isvr_eoi", false,-1, 15,0);
    tracep->pushNamePrefix("unnamedblk8 ");
    tracep->declBus(c+1363,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_pipe_mprf ");
    tracep->declBit(c+817,"rst_n", false,-1);
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->declBus(c+1182,"exu2mprf_rs1_addr_i", false,-1, 4,0);
    tracep->declBus(c+677,"mprf2exu_rs1_data_o", false,-1, 31,0);
    tracep->declBus(c+1183,"exu2mprf_rs2_addr_i", false,-1, 4,0);
    tracep->declBus(c+1141,"mprf2exu_rs2_data_o", false,-1, 31,0);
    tracep->declBit(c+1091,"exu2mprf_w_req_i", false,-1);
    tracep->declBus(c+589,"exu2mprf_rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+1046,"exu2mprf_rd_data_i", false,-1, 31,0);
    tracep->declBit(c+1255,"wr_req_vd", false,-1);
    tracep->declBit(c+1256,"rs1_addr_vd", false,-1);
    tracep->declBit(c+1257,"rs2_addr_vd", false,-1);
    tracep->pushNamePrefix("mprf_int");
    tracep->declBus(c+424,"[1]", false,-1, 31,0);
    tracep->declBus(c+425,"[2]", false,-1, 31,0);
    tracep->declBus(c+426,"[3]", false,-1, 31,0);
    tracep->declBus(c+427,"[4]", false,-1, 31,0);
    tracep->declBus(c+428,"[5]", false,-1, 31,0);
    tracep->declBus(c+429,"[6]", false,-1, 31,0);
    tracep->declBus(c+430,"[7]", false,-1, 31,0);
    tracep->declBus(c+431,"[8]", false,-1, 31,0);
    tracep->declBus(c+432,"[9]", false,-1, 31,0);
    tracep->declBus(c+433,"[10]", false,-1, 31,0);
    tracep->declBus(c+434,"[11]", false,-1, 31,0);
    tracep->declBus(c+435,"[12]", false,-1, 31,0);
    tracep->declBus(c+436,"[13]", false,-1, 31,0);
    tracep->declBus(c+437,"[14]", false,-1, 31,0);
    tracep->declBus(c+438,"[15]", false,-1, 31,0);
    tracep->declBus(c+439,"[16]", false,-1, 31,0);
    tracep->declBus(c+440,"[17]", false,-1, 31,0);
    tracep->declBus(c+441,"[18]", false,-1, 31,0);
    tracep->declBus(c+442,"[19]", false,-1, 31,0);
    tracep->declBus(c+443,"[20]", false,-1, 31,0);
    tracep->declBus(c+444,"[21]", false,-1, 31,0);
    tracep->declBus(c+445,"[22]", false,-1, 31,0);
    tracep->declBus(c+446,"[23]", false,-1, 31,0);
    tracep->declBus(c+447,"[24]", false,-1, 31,0);
    tracep->declBus(c+448,"[25]", false,-1, 31,0);
    tracep->declBus(c+449,"[26]", false,-1, 31,0);
    tracep->declBus(c+450,"[27]", false,-1, 31,0);
    tracep->declBus(c+451,"[28]", false,-1, 31,0);
    tracep->declBus(c+452,"[29]", false,-1, 31,0);
    tracep->declBus(c+453,"[30]", false,-1, 31,0);
    tracep->declBus(c+454,"[31]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_pipe_tdu ");
    tracep->declBit(c+573,"rst_n", false,-1);
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->declBit(c+1311,"clk_en", false,-1);
    tracep->declBit(c+516,"tdu_dsbl_i", false,-1);
    tracep->declBit(c+893,"csr2tdu_req_i", false,-1);
    tracep->declBus(c+591,"csr2tdu_cmd_i", false,-1, 1,0);
    tracep->declBus(c+592,"csr2tdu_addr_i", false,-1, 2,0);
    tracep->declBus(c+678,"csr2tdu_wdata_i", false,-1, 31,0);
    tracep->declBus(c+891,"tdu2csr_rdata_o", false,-1, 31,0);
    tracep->declBit(c+892,"tdu2csr_resp_o", false,-1);
    tracep->pushNamePrefix("exu2tdu_imon_i ");
    tracep->declBit(c+1190,"vd", false,-1);
    tracep->declBit(c+1089,"req", false,-1);
    tracep->declBus(c+313,"addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+1189,"tdu2exu_ibrkpt_match_o", false,-1, 4,0);
    tracep->declBit(c+895,"tdu2exu_ibrkpt_exc_req_o", false,-1);
    tracep->declBus(c+899,"exu2tdu_bp_retire_i", false,-1, 4,0);
    tracep->declBit(c+895,"tdu2lsu_ibrkpt_exc_req_o", false,-1);
    tracep->pushNamePrefix("lsu2tdu_dmon_i ");
    tracep->declBit(c+898,"vd", false,-1);
    tracep->declBit(c+593,"load", false,-1);
    tracep->declBit(c+594,"store", false,-1);
    tracep->declBus(c+679,"addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+894,"tdu2lsu_dbrkpt_match_o", false,-1, 3,0);
    tracep->declBit(c+896,"tdu2lsu_dbrkpt_exc_req_o", false,-1);
    tracep->declBit(c+903,"tdu2hdu_dmode_req_o", false,-1);
    tracep->declBus(c+1364,"MTRIG_NUM", false,-1, 31,0);
    tracep->declBus(c+1365,"ALLTRIG_NUM", false,-1, 31,0);
    tracep->declBus(c+1366,"ALLTRIG_W", false,-1, 31,0);
    tracep->declBit(c+689,"csr_wr_req", false,-1);
    tracep->declBus(c+1004,"csr_wr_data", false,-1, 31,0);
    tracep->declBit(c+1005,"csr_addr_tselect", false,-1);
    tracep->declBus(c+1006,"csr_addr_mcontrol", false,-1, 3,0);
    tracep->declBus(c+1007,"csr_addr_tdata2", false,-1, 3,0);
    tracep->declBit(c+1008,"csr_addr_icount", false,-1);
    tracep->declBit(c+1258,"csr_tselect_upd", false,-1);
    tracep->declBus(c+545,"csr_tselect_ff", false,-1, 2,0);
    tracep->declBus(c+1009,"csr_mcontrol_wr_req", false,-1, 3,0);
    tracep->declBus(c+1010,"csr_mcontrol_clk_en", false,-1, 3,0);
    tracep->declBus(c+1011,"csr_mcontrol_upd", false,-1, 3,0);
    tracep->declBus(c+546,"csr_mcontrol_dmode_ff", false,-1, 3,0);
    tracep->declBus(c+1012,"csr_mcontrol_dmode_next", false,-1, 3,0);
    tracep->declBus(c+547,"csr_mcontrol_m_ff", false,-1, 3,0);
    tracep->declBus(c+1013,"csr_mcontrol_m_next", false,-1, 3,0);
    tracep->declBus(c+548,"csr_mcontrol_exec_ff", false,-1, 3,0);
    tracep->declBus(c+1014,"csr_mcontrol_exec_next", false,-1, 3,0);
    tracep->declBus(c+549,"csr_mcontrol_load_ff", false,-1, 3,0);
    tracep->declBus(c+1015,"csr_mcontrol_load_next", false,-1, 3,0);
    tracep->declBus(c+550,"csr_mcontrol_store_ff", false,-1, 3,0);
    tracep->declBus(c+1016,"csr_mcontrol_store_next", false,-1, 3,0);
    tracep->declBus(c+551,"csr_mcontrol_action_ff", false,-1, 3,0);
    tracep->declBus(c+1017,"csr_mcontrol_action_next", false,-1, 3,0);
    tracep->declBus(c+552,"csr_mcontrol_hit_ff", false,-1, 3,0);
    tracep->declBus(c+1018,"csr_mcontrol_hit_next", false,-1, 3,0);
    tracep->declBus(c+1259,"csr_mcontrol_exec_hit", false,-1, 3,0);
    tracep->declBus(c+894,"csr_mcontrol_ldst_hit", false,-1, 3,0);
    tracep->declBit(c+1019,"csr_icount_wr_req", false,-1);
    tracep->declBit(c+1020,"csr_icount_clk_en", false,-1);
    tracep->declBit(c+1021,"csr_icount_upd", false,-1);
    tracep->declBit(c+553,"csr_icount_dmode_ff", false,-1);
    tracep->declBit(c+1022,"csr_icount_dmode_next", false,-1);
    tracep->declBit(c+554,"csr_icount_m_ff", false,-1);
    tracep->declBit(c+1023,"csr_icount_m_next", false,-1);
    tracep->declBit(c+555,"csr_icount_action_ff", false,-1);
    tracep->declBit(c+1024,"csr_icount_action_next", false,-1);
    tracep->declBit(c+556,"csr_icount_hit_ff", false,-1);
    tracep->declBit(c+1025,"csr_icount_hit_next", false,-1);
    tracep->declBus(c+557,"csr_icount_count_ff", false,-1, 13,0);
    tracep->declBus(c+1124,"csr_icount_count_next", false,-1, 13,0);
    tracep->declBit(c+558,"csr_icount_skip_ff", false,-1);
    tracep->declBit(c+1260,"csr_icount_skip_next", false,-1);
    tracep->declBit(c+1261,"csr_icount_decr_en", false,-1);
    tracep->declBit(c+1262,"csr_icount_count_decr", false,-1);
    tracep->declBit(c+1263,"csr_icount_skip_dsbl", false,-1);
    tracep->declBit(c+1264,"csr_icount_hit", false,-1);
    tracep->declBus(c+1026,"csr_tdata2_upd", false,-1, 3,0);
    tracep->pushNamePrefix("csr_tdata2_ff");
    tracep->declBus(c+141,"[0]", false,-1, 31,0);
    tracep->declBus(c+142,"[1]", false,-1, 31,0);
    tracep->declBus(c+143,"[2]", false,-1, 31,0);
    tracep->declBus(c+144,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1027,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+1028,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+1029,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+1030,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+1031,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+1364,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_tracelog ");
    tracep->declBit(c+817,"rst_n", false,-1);
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->declBus(c+2,"soc2pipe_fuse_mhartid_i", false,-1, 31,0);
    tracep->pushNamePrefix("mprf2trace_int_i");
    tracep->declBus(c+424,"[1]", false,-1, 31,0);
    tracep->declBus(c+425,"[2]", false,-1, 31,0);
    tracep->declBus(c+426,"[3]", false,-1, 31,0);
    tracep->declBus(c+427,"[4]", false,-1, 31,0);
    tracep->declBus(c+428,"[5]", false,-1, 31,0);
    tracep->declBus(c+429,"[6]", false,-1, 31,0);
    tracep->declBus(c+430,"[7]", false,-1, 31,0);
    tracep->declBus(c+431,"[8]", false,-1, 31,0);
    tracep->declBus(c+432,"[9]", false,-1, 31,0);
    tracep->declBus(c+433,"[10]", false,-1, 31,0);
    tracep->declBus(c+434,"[11]", false,-1, 31,0);
    tracep->declBus(c+435,"[12]", false,-1, 31,0);
    tracep->declBus(c+436,"[13]", false,-1, 31,0);
    tracep->declBus(c+437,"[14]", false,-1, 31,0);
    tracep->declBus(c+438,"[15]", false,-1, 31,0);
    tracep->declBus(c+439,"[16]", false,-1, 31,0);
    tracep->declBus(c+440,"[17]", false,-1, 31,0);
    tracep->declBus(c+441,"[18]", false,-1, 31,0);
    tracep->declBus(c+442,"[19]", false,-1, 31,0);
    tracep->declBus(c+443,"[20]", false,-1, 31,0);
    tracep->declBus(c+444,"[21]", false,-1, 31,0);
    tracep->declBus(c+445,"[22]", false,-1, 31,0);
    tracep->declBus(c+446,"[23]", false,-1, 31,0);
    tracep->declBus(c+447,"[24]", false,-1, 31,0);
    tracep->declBus(c+448,"[25]", false,-1, 31,0);
    tracep->declBus(c+449,"[26]", false,-1, 31,0);
    tracep->declBus(c+450,"[27]", false,-1, 31,0);
    tracep->declBus(c+451,"[28]", false,-1, 31,0);
    tracep->declBus(c+452,"[29]", false,-1, 31,0);
    tracep->declBus(c+453,"[30]", false,-1, 31,0);
    tracep->declBus(c+454,"[31]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1091,"mprf2trace_wr_en_i", false,-1);
    tracep->declBus(c+589,"mprf2trace_wr_addr_i", false,-1, 4,0);
    tracep->declBus(c+1046,"mprf2trace_wr_data_i", false,-1, 31,0);
    tracep->declBit(c+1225,"exu2trace_update_pc_en_i", false,-1);
    tracep->declBus(c+1224,"exu2trace_update_pc_i", false,-1, 31,0);
    tracep->declBus(c+737,"ifu2trace_instr_i", false,-1, 31,0);
    tracep->declBit(c+319,"csr2trace_mstatus_mie_i", false,-1);
    tracep->declBit(c+320,"csr2trace_mstatus_mpie_i", false,-1);
    tracep->declBus(c+325,"csr2trace_mtvec_base_i", false,-1, 31,6);
    tracep->declBit(c+326,"csr2trace_mtvec_mode_i", false,-1);
    tracep->declBit(c+323,"csr2trace_mie_meie_i", false,-1);
    tracep->declBit(c+322,"csr2trace_mie_mtie_i", false,-1);
    tracep->declBit(c+324,"csr2trace_mie_msie_i", false,-1);
    tracep->declBit(c+315,"csr2trace_mip_meip_i", false,-1);
    tracep->declBit(c+310,"csr2trace_mip_mtip_i", false,-1);
    tracep->declBit(c+661,"csr2trace_mip_msip_i", false,-1);
    tracep->declBus(c+328,"csr2trace_mepc_i", false,-1, 31,1);
    tracep->declBit(c+330,"csr2trace_mcause_irq_i", false,-1);
    tracep->declBus(c+331,"csr2trace_mcause_ec_i", false,-1, 3,0);
    tracep->declBus(c+332,"csr2trace_mtval_i", false,-1, 31,0);
    tracep->declBit(c+1101,"csr2trace_e_exc_i", false,-1);
    tracep->declBit(c+1102,"csr2trace_e_irq_i", false,-1);
    tracep->declBit(c+1351,"pipe2trace_e_wake_i", false,-1);
    tracep->pushNamePrefix("mprf_int_alias ");
    tracep->declBus(c+8,"INT_00_ZERO", false,-1, 31,0);
    tracep->declBus(c+9,"INT_01_RA", false,-1, 31,0);
    tracep->declBus(c+10,"INT_02_SP", false,-1, 31,0);
    tracep->declBus(c+11,"INT_03_GP", false,-1, 31,0);
    tracep->declBus(c+12,"INT_04_TP", false,-1, 31,0);
    tracep->declBus(c+13,"INT_05_T0", false,-1, 31,0);
    tracep->declBus(c+14,"INT_06_T1", false,-1, 31,0);
    tracep->declBus(c+15,"INT_07_T2", false,-1, 31,0);
    tracep->declBus(c+16,"INT_08_S0", false,-1, 31,0);
    tracep->declBus(c+17,"INT_09_S1", false,-1, 31,0);
    tracep->declBus(c+18,"INT_10_A0", false,-1, 31,0);
    tracep->declBus(c+19,"INT_11_A1", false,-1, 31,0);
    tracep->declBus(c+20,"INT_12_A2", false,-1, 31,0);
    tracep->declBus(c+21,"INT_13_A3", false,-1, 31,0);
    tracep->declBus(c+22,"INT_14_A4", false,-1, 31,0);
    tracep->declBus(c+23,"INT_15_A5", false,-1, 31,0);
    tracep->declBus(c+24,"INT_16_A6", false,-1, 31,0);
    tracep->declBus(c+25,"INT_17_A7", false,-1, 31,0);
    tracep->declBus(c+26,"INT_18_S2", false,-1, 31,0);
    tracep->declBus(c+27,"INT_19_S3", false,-1, 31,0);
    tracep->declBus(c+28,"INT_20_S4", false,-1, 31,0);
    tracep->declBus(c+29,"INT_21_S5", false,-1, 31,0);
    tracep->declBus(c+30,"INT_22_S6", false,-1, 31,0);
    tracep->declBus(c+31,"INT_23_S7", false,-1, 31,0);
    tracep->declBus(c+32,"INT_24_S8", false,-1, 31,0);
    tracep->declBus(c+33,"INT_25_S9", false,-1, 31,0);
    tracep->declBus(c+34,"INT_26_S10", false,-1, 31,0);
    tracep->declBus(c+35,"INT_27_S11", false,-1, 31,0);
    tracep->declBus(c+36,"INT_28_T3", false,-1, 31,0);
    tracep->declBus(c+37,"INT_29_T4", false,-1, 31,0);
    tracep->declBus(c+38,"INT_30_T5", false,-1, 31,0);
    tracep->declBus(c+39,"INT_31_T6", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declQuad(c+638,"current_time", false,-1, 63,0);
    tracep->declBit(c+1311,"trace_flag", false,-1);
    tracep->declBit(c+1125,"trace_update", false,-1);
    tracep->declBit(c+640,"trace_update_r", false,-1);
    tracep->declBus(c+641,"event_type", false,-1, 7,0);
    tracep->declBus(c+642,"trace_pc", false,-1, 31,0);
    tracep->declBus(c+643,"trace_npc", false,-1, 31,0);
    tracep->declBus(c+644,"trace_instr", false,-1, 31,0);
    tracep->pushNamePrefix("csr_trace1 ");
    tracep->declBus(c+778,"mstatus", false,-1, 31,0);
    tracep->declBus(c+779,"mtvec", false,-1, 31,0);
    tracep->declBus(c+780,"mie", false,-1, 31,0);
    tracep->declBus(c+781,"mip", false,-1, 31,0);
    tracep->declBus(c+782,"mepc", false,-1, 31,0);
    tracep->declBus(c+783,"mcause", false,-1, 31,0);
    tracep->declBus(c+784,"mtval", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+1265,"trace_fhandler_core", false,-1, 31,0);
    tracep->declBit(c+645,"mprf_up", false,-1);
    tracep->declBus(c+646,"mprf_addr", false,-1, 4,0);
    tracep->declBus(c+647,"mprf_wdata", false,-1, 31,0);
    tracep->declBus(c+1266,"time_cnt", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_scu ");
    tracep->declBit(c+852,"pwrup_rst_n", false,-1);
    tracep->declBit(c+256,"rst_n", false,-1);
    tracep->declBit(c+257,"cpu_rst_n", false,-1);
    tracep->declBit(c+1300,"test_mode", false,-1);
    tracep->declBit(c+1311,"test_rst_n", false,-1);
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->declBit(c+266,"tapcsync2scu_ch_sel_i", false,-1);
    tracep->declBit(c+1300,"tapcsync2scu_ch_id_i", false,-1);
    tracep->declBit(c+571,"tapcsync2scu_ch_capture_i", false,-1);
    tracep->declBit(c+572,"tapcsync2scu_ch_shift_i", false,-1);
    tracep->declBit(c+264,"tapcsync2scu_ch_update_i", false,-1);
    tracep->declBit(c+265,"tapcsync2scu_ch_tdi_i", false,-1);
    tracep->declBit(c+267,"scu2tapcsync_ch_tdo_o", false,-1);
    tracep->declBit(c+488,"ndm_rst_n_i", false,-1);
    tracep->declBit(c+488,"hart_rst_n_i", false,-1);
    tracep->declBit(c+261,"sys_rst_n_o", false,-1);
    tracep->declBit(c+817,"core_rst_n_o", false,-1);
    tracep->declBit(c+819,"dm_rst_n_o", false,-1);
    tracep->declBit(c+573,"hdu_rst_n_o", false,-1);
    tracep->declBit(c+268,"sys_rst_status_o", false,-1);
    tracep->declBit(c+263,"core_rst_status_o", false,-1);
    tracep->declBit(c+262,"sys_rdc_qlfy_o", false,-1);
    tracep->declBit(c+818,"core_rdc_qlfy_o", false,-1);
    tracep->declBit(c+818,"core2hdu_rdc_qlfy_o", false,-1);
    tracep->declBit(c+818,"core2dm_rdc_qlfy_o", false,-1);
    tracep->declBit(c+574,"hdu2dm_rdc_qlfy_o", false,-1);
    tracep->declBus(c+1313,"SCR1_SCU_RST_SYNC_STAGES_NUM", false,-1, 31,0);
    tracep->declBit(c+266,"scu_csr_req", false,-1);
    tracep->declBit(c+576,"tapc_dr_cap_req", false,-1);
    tracep->declBit(c+577,"tapc_dr_shft_req", false,-1);
    tracep->declBit(c+269,"tapc_dr_upd_req", false,-1);
    tracep->declBit(c+578,"tapc_shift_upd", false,-1);
    tracep->pushNamePrefix("tapc_shift_ff ");
    tracep->declBus(c+270,"data", false,-1, 3,0);
    tracep->declBus(c+271,"addr", false,-1, 1,0);
    tracep->declBus(c+272,"op", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tapc_shift_next ");
    tracep->declBus(c+1267,"data", false,-1, 3,0);
    tracep->declBus(c+1268,"addr", false,-1, 1,0);
    tracep->declBus(c+1269,"op", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tapc_shadow_ff ");
    tracep->declBus(c+273,"data", false,-1, 3,0);
    tracep->declBus(c+274,"addr", false,-1, 1,0);
    tracep->declBus(c+275,"op", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+820,"scu_csr_wdata", false,-1, 3,0);
    tracep->declBus(c+821,"scu_csr_rdata", false,-1, 3,0);
    tracep->pushNamePrefix("scu_control_ff ");
    tracep->declBus(c+276,"rsrv", false,-1, 1,0);
    tracep->declBit(c+277,"core_reset", false,-1);
    tracep->declBit(c+278,"sys_reset", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+579,"scu_control_wr_req", false,-1);
    tracep->pushNamePrefix("scu_mode_ff ");
    tracep->declBus(c+580,"rsrv", false,-1, 1,0);
    tracep->declBit(c+581,"hdu_rst_bhv", false,-1);
    tracep->declBit(c+582,"dm_rst_bhv", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+583,"scu_mode_wr_req", false,-1);
    tracep->pushNamePrefix("scu_status_ff ");
    tracep->declBit(c+822,"hdu_reset", false,-1);
    tracep->declBit(c+823,"dm_reset", false,-1);
    tracep->declBit(c+824,"core_reset", false,-1);
    tracep->declBit(c+825,"sys_reset", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("scu_status_ff_dly ");
    tracep->declBit(c+279,"hdu_reset", false,-1);
    tracep->declBit(c+280,"dm_reset", false,-1);
    tracep->declBit(c+281,"core_reset", false,-1);
    tracep->declBit(c+282,"sys_reset", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("scu_status_ff_posedge ");
    tracep->declBit(c+826,"hdu_reset", false,-1);
    tracep->declBit(c+827,"dm_reset", false,-1);
    tracep->declBit(c+828,"core_reset", false,-1);
    tracep->declBit(c+829,"sys_reset", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("scu_sticky_sts_ff ");
    tracep->declBit(c+283,"hdu_reset", false,-1);
    tracep->declBit(c+284,"dm_reset", false,-1);
    tracep->declBit(c+285,"core_reset", false,-1);
    tracep->declBit(c+286,"sys_reset", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+584,"scu_sticky_sts_wr_req", false,-1);
    tracep->declBit(c+852,"pwrup_rst_n_sync", false,-1);
    tracep->declBit(c+256,"rst_n_sync", false,-1);
    tracep->declBit(c+257,"cpu_rst_n_sync", false,-1);
    tracep->declBit(c+1270,"sys_rst_n_in", false,-1);
    tracep->declBit(c+287,"sys_rst_n_status", false,-1);
    tracep->declBit(c+288,"sys_rst_n_status_sync", false,-1);
    tracep->declBit(c+262,"sys_rst_n_qlfy", false,-1);
    tracep->declBit(c+289,"sys_reset_n", false,-1);
    tracep->declBit(c+1271,"core_rst_n_in_sync", false,-1);
    tracep->declBit(c+290,"core_rst_n_status", false,-1);
    tracep->declBit(c+291,"core_rst_n_status_sync", false,-1);
    tracep->declBit(c+818,"core_rst_n_qlfy", false,-1);
    tracep->declBit(c+292,"core_reset_n", false,-1);
    tracep->declBit(c+1272,"hdu_rst_n_in_sync", false,-1);
    tracep->declBit(c+293,"hdu_rst_n_status", false,-1);
    tracep->declBit(c+294,"hdu_rst_n_status_sync", false,-1);
    tracep->declBit(c+574,"hdu_rst_n_qlfy", false,-1);
    tracep->declBit(c+830,"dm_rst_n_in", false,-1);
    tracep->declBit(c+819,"dm_rst_n_status", false,-1);
    tracep->pushNamePrefix("i_core_rstn_qlfy_adapter_cell_sync ");
    tracep->declBit(c+852,"rst_n", false,-1);
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->declBit(c+1311,"test_rst_n", false,-1);
    tracep->declBit(c+1300,"test_mode", false,-1);
    tracep->declBit(c+1271,"reset_n_in_sync", false,-1);
    tracep->declBit(c+818,"reset_n_out_qlfy", false,-1);
    tracep->declBit(c+817,"reset_n_out", false,-1);
    tracep->declBit(c+290,"reset_n_status", false,-1);
    tracep->declBit(c+852,"rst_n_mux", false,-1);
    tracep->declBit(c+818,"reset_n_front_ff", false,-1);
    tracep->pushNamePrefix("i_reset_output_buf ");
    tracep->declBit(c+852,"rst_n", false,-1);
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->declBit(c+1300,"test_mode", false,-1);
    tracep->declBit(c+1311,"test_rst_n", false,-1);
    tracep->declBit(c+818,"reset_n_in", false,-1);
    tracep->declBit(c+817,"reset_n_out", false,-1);
    tracep->declBit(c+290,"reset_n_status", false,-1);
    tracep->declBit(c+817,"reset_n_ff", false,-1);
    tracep->declBit(c+290,"reset_n_status_ff", false,-1);
    tracep->declBit(c+852,"rst_n_mux", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_core_rstn_status_sync ");
    tracep->declBus(c+1313,"STAGES_AMOUNT", false,-1, 31,0);
    tracep->declBit(c+852,"rst_n", false,-1);
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->declBit(c+290,"data_in", false,-1);
    tracep->declBit(c+291,"data_out", false,-1);
    tracep->declBus(c+295,"data_dff", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_dm_rstn_buf_cell ");
    tracep->declBit(c+852,"rst_n", false,-1);
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->declBit(c+1300,"test_mode", false,-1);
    tracep->declBit(c+1311,"test_rst_n", false,-1);
    tracep->declBit(c+830,"reset_n_in", false,-1);
    tracep->declBit(c+819,"reset_n_out", false,-1);
    tracep->declBit(c+819,"reset_n_status", false,-1);
    tracep->declBit(c+819,"reset_n_ff", false,-1);
    tracep->declBit(c+819,"reset_n_status_ff", false,-1);
    tracep->declBit(c+852,"rst_n_mux", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_hdu_rstn_qlfy_adapter_cell_sync ");
    tracep->declBit(c+852,"rst_n", false,-1);
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->declBit(c+1311,"test_rst_n", false,-1);
    tracep->declBit(c+1300,"test_mode", false,-1);
    tracep->declBit(c+1272,"reset_n_in_sync", false,-1);
    tracep->declBit(c+574,"reset_n_out_qlfy", false,-1);
    tracep->declBit(c+573,"reset_n_out", false,-1);
    tracep->declBit(c+293,"reset_n_status", false,-1);
    tracep->declBit(c+852,"rst_n_mux", false,-1);
    tracep->declBit(c+574,"reset_n_front_ff", false,-1);
    tracep->pushNamePrefix("i_reset_output_buf ");
    tracep->declBit(c+852,"rst_n", false,-1);
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->declBit(c+1300,"test_mode", false,-1);
    tracep->declBit(c+1311,"test_rst_n", false,-1);
    tracep->declBit(c+574,"reset_n_in", false,-1);
    tracep->declBit(c+573,"reset_n_out", false,-1);
    tracep->declBit(c+293,"reset_n_status", false,-1);
    tracep->declBit(c+573,"reset_n_ff", false,-1);
    tracep->declBit(c+293,"reset_n_status_ff", false,-1);
    tracep->declBit(c+852,"rst_n_mux", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_hdu_rstn_status_sync ");
    tracep->declBus(c+1313,"STAGES_AMOUNT", false,-1, 31,0);
    tracep->declBit(c+852,"rst_n", false,-1);
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->declBit(c+293,"data_in", false,-1);
    tracep->declBit(c+294,"data_out", false,-1);
    tracep->declBus(c+296,"data_dff", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_sys_rstn_qlfy_adapter_cell_sync ");
    tracep->declBit(c+852,"rst_n", false,-1);
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->declBit(c+1311,"test_rst_n", false,-1);
    tracep->declBit(c+1300,"test_mode", false,-1);
    tracep->declBit(c+1270,"reset_n_in_sync", false,-1);
    tracep->declBit(c+262,"reset_n_out_qlfy", false,-1);
    tracep->declBit(c+261,"reset_n_out", false,-1);
    tracep->declBit(c+287,"reset_n_status", false,-1);
    tracep->declBit(c+852,"rst_n_mux", false,-1);
    tracep->declBit(c+262,"reset_n_front_ff", false,-1);
    tracep->pushNamePrefix("i_reset_output_buf ");
    tracep->declBit(c+852,"rst_n", false,-1);
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->declBit(c+1300,"test_mode", false,-1);
    tracep->declBit(c+1311,"test_rst_n", false,-1);
    tracep->declBit(c+262,"reset_n_in", false,-1);
    tracep->declBit(c+261,"reset_n_out", false,-1);
    tracep->declBit(c+287,"reset_n_status", false,-1);
    tracep->declBit(c+261,"reset_n_ff", false,-1);
    tracep->declBit(c+287,"reset_n_status_ff", false,-1);
    tracep->declBit(c+852,"rst_n_mux", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_sys_rstn_status_sync ");
    tracep->declBus(c+1313,"STAGES_AMOUNT", false,-1, 31,0);
    tracep->declBit(c+852,"rst_n", false,-1);
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->declBit(c+287,"data_in", false,-1);
    tracep->declBit(c+288,"data_out", false,-1);
    tracep->declBus(c+297,"data_dff", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+298,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_tapc ");
    tracep->declBit(c+1139,"tapc_trst_n", false,-1);
    tracep->declBit(c+1133,"tapc_tck", false,-1);
    tracep->declBit(c+1134,"tapc_tms", false,-1);
    tracep->declBit(c+1135,"tapc_tdi", false,-1);
    tracep->declBit(c+1136,"tapc_tdo", false,-1);
    tracep->declBit(c+1137,"tapc_tdo_en", false,-1);
    tracep->declBus(c+1312,"soc2tapc_fuse_idcode_i", false,-1, 31,0);
    tracep->declBit(c+561,"tapc2tapcsync_scu_ch_sel_o", false,-1);
    tracep->declBit(c+559,"tapc2tapcsync_dmi_ch_sel_o", false,-1);
    tracep->declBus(c+560,"tapc2tapcsync_ch_id_o", false,-1, 1,0);
    tracep->declBit(c+567,"tapc2tapcsync_ch_capture_o", false,-1);
    tracep->declBit(c+568,"tapc2tapcsync_ch_shift_o", false,-1);
    tracep->declBit(c+569,"tapc2tapcsync_ch_update_o", false,-1);
    tracep->declBit(c+1135,"tapc2tapcsync_ch_tdi_o", false,-1);
    tracep->declBit(c+1145,"tapcsync2tapc_ch_tdo_i", false,-1);
    tracep->declBit(c+1273,"trst_n_int", false,-1);
    tracep->declBus(c+837,"tap_fsm_ff", false,-1, 3,0);
    tracep->declBus(c+40,"tap_fsm_next", false,-1, 3,0);
    tracep->declBit(c+838,"tap_fsm_reset", false,-1);
    tracep->declBit(c+839,"tap_fsm_ir_upd", false,-1);
    tracep->declBit(c+840,"tap_fsm_ir_cap", false,-1);
    tracep->declBit(c+841,"tap_fsm_ir_shft", false,-1);
    tracep->declBit(c+236,"tap_fsm_ir_shift_ff", false,-1);
    tracep->declBit(c+41,"tap_fsm_ir_shift_next", false,-1);
    tracep->declBit(c+567,"tap_fsm_dr_capture_ff", false,-1);
    tracep->declBit(c+42,"tap_fsm_dr_capture_next", false,-1);
    tracep->declBit(c+568,"tap_fsm_dr_shift_ff", false,-1);
    tracep->declBit(c+43,"tap_fsm_dr_shift_next", false,-1);
    tracep->declBit(c+569,"tap_fsm_dr_update_ff", false,-1);
    tracep->declBit(c+44,"tap_fsm_dr_update_next", false,-1);
    tracep->declBus(c+237,"tap_ir_shift_ff", false,-1, 4,0);
    tracep->declBus(c+1274,"tap_ir_shift_next", false,-1, 4,0);
    tracep->declBus(c+562,"tap_ir_ff", false,-1, 4,0);
    tracep->declBus(c+1275,"tap_ir_next", false,-1, 4,0);
    tracep->declBit(c+563,"dr_bypass_sel", false,-1);
    tracep->declBit(c+238,"dr_bypass_tdo", false,-1);
    tracep->declBit(c+564,"dr_idcode_sel", false,-1);
    tracep->declBit(c+239,"dr_idcode_tdo", false,-1);
    tracep->declBit(c+565,"dr_bld_id_sel", false,-1);
    tracep->declBit(c+240,"dr_bld_id_tdo", false,-1);
    tracep->declBit(c+1276,"dr_out", false,-1);
    tracep->declBit(c+1137,"tdo_en_ff", false,-1);
    tracep->declBit(c+1277,"tdo_en_next", false,-1);
    tracep->declBit(c+1136,"tdo_out_ff", false,-1);
    tracep->declBit(c+1278,"tdo_out_next", false,-1);
    tracep->pushNamePrefix("i_bypass_reg ");
    tracep->declBus(c+1367,"SCR1_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1324,"SCR1_RESET_VALUE", false,-1, 0,0);
    tracep->declBit(c+1133,"clk", false,-1);
    tracep->declBit(c+1139,"rst_n", false,-1);
    tracep->declBit(c+1273,"rst_n_sync", false,-1);
    tracep->declBit(c+563,"fsm_dr_select", false,-1);
    tracep->declBit(c+567,"fsm_dr_capture", false,-1);
    tracep->declBit(c+568,"fsm_dr_shift", false,-1);
    tracep->declBit(c+1135,"din_serial", false,-1);
    tracep->declBus(c+1300,"din_parallel", false,-1, 0,0);
    tracep->declBit(c+238,"dout_serial", false,-1);
    tracep->declBus(c+238,"dout_parallel", false,-1, 0,0);
    tracep->declBus(c+238,"shift_reg", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_tap_dr_bld_id_reg ");
    tracep->declBus(c+1368,"SCR1_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1369,"SCR1_RESET_VALUE", false,-1, 31,0);
    tracep->declBit(c+1133,"clk", false,-1);
    tracep->declBit(c+1139,"rst_n", false,-1);
    tracep->declBit(c+1273,"rst_n_sync", false,-1);
    tracep->declBit(c+565,"fsm_dr_select", false,-1);
    tracep->declBit(c+567,"fsm_dr_capture", false,-1);
    tracep->declBit(c+568,"fsm_dr_shift", false,-1);
    tracep->declBit(c+1135,"din_serial", false,-1);
    tracep->declBus(c+1370,"din_parallel", false,-1, 31,0);
    tracep->declBit(c+240,"dout_serial", false,-1);
    tracep->declBus(c+241,"dout_parallel", false,-1, 31,0);
    tracep->declBus(c+241,"shift_reg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_tap_idcode_reg ");
    tracep->declBus(c+1368,"SCR1_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1369,"SCR1_RESET_VALUE", false,-1, 31,0);
    tracep->declBit(c+1133,"clk", false,-1);
    tracep->declBit(c+1139,"rst_n", false,-1);
    tracep->declBit(c+1273,"rst_n_sync", false,-1);
    tracep->declBit(c+564,"fsm_dr_select", false,-1);
    tracep->declBit(c+567,"fsm_dr_capture", false,-1);
    tracep->declBit(c+568,"fsm_dr_shift", false,-1);
    tracep->declBit(c+1135,"din_serial", false,-1);
    tracep->declBus(c+1312,"din_parallel", false,-1, 31,0);
    tracep->declBit(c+239,"dout_serial", false,-1);
    tracep->declBus(c+242,"dout_parallel", false,-1, 31,0);
    tracep->declBus(c+242,"shift_reg", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_tapc_synchronizer ");
    tracep->declBit(c+852,"pwrup_rst_n", false,-1);
    tracep->declBit(c+819,"dm_rst_n", false,-1);
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->declBit(c+1139,"tapc_trst_n", false,-1);
    tracep->declBit(c+1133,"tapc_tck", false,-1);
    tracep->declBit(c+561,"tapc2tapcsync_scu_ch_sel_i", false,-1);
    tracep->declBit(c+266,"tapcsync2scu_ch_sel_o", false,-1);
    tracep->declBit(c+559,"tapc2tapcsync_dmi_ch_sel_i", false,-1);
    tracep->declBit(c+485,"tapcsync2dmi_ch_sel_o", false,-1);
    tracep->declBus(c+560,"tapc2tapcsync_ch_id_i", false,-1, 1,0);
    tracep->declBus(c+486,"tapcsync2core_ch_id_o", false,-1, 1,0);
    tracep->declBit(c+567,"tapc2tapcsync_ch_capture_i", false,-1);
    tracep->declBit(c+571,"tapcsync2core_ch_capture_o", false,-1);
    tracep->declBit(c+568,"tapc2tapcsync_ch_shift_i", false,-1);
    tracep->declBit(c+572,"tapcsync2core_ch_shift_o", false,-1);
    tracep->declBit(c+569,"tapc2tapcsync_ch_update_i", false,-1);
    tracep->declBit(c+264,"tapcsync2core_ch_update_o", false,-1);
    tracep->declBit(c+1135,"tapc2tapcsync_ch_tdi_i", false,-1);
    tracep->declBit(c+265,"tapcsync2core_ch_tdi_o", false,-1);
    tracep->declBit(c+1145,"tapc2tapcsync_ch_tdo_i", false,-1);
    tracep->declBit(c+1145,"tapcsync2core_ch_tdo_o", false,-1);
    tracep->declBit(c+570,"tck_divpos", false,-1);
    tracep->declBit(c+566,"tck_divneg", false,-1);
    tracep->declBit(c+585,"tck_rise_load", false,-1);
    tracep->declBit(c+586,"tck_rise_reset", false,-1);
    tracep->declBit(c+299,"tck_fall_load", false,-1);
    tracep->declBit(c+300,"tck_fall_reset", false,-1);
    tracep->declBus(c+301,"tck_divpos_sync", false,-1, 3,0);
    tracep->declBus(c+302,"tck_divneg_sync", false,-1, 3,0);
    tracep->declBus(c+1279,"dmi_ch_capture_sync", false,-1, 2,0);
    tracep->declBus(c+1280,"dmi_ch_shift_sync", false,-1, 2,0);
    tracep->declBus(c+303,"dmi_ch_tdi_sync", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_cpu_rstn_reset_sync ");
    tracep->declBus(c+1313,"STAGES_AMOUNT", false,-1, 31,0);
    tracep->declBit(c+785,"rst_n", false,-1);
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->declBit(c+1311,"test_rst_n", false,-1);
    tracep->declBit(c+1300,"test_mode", false,-1);
    tracep->declBit(c+785,"rst_n_in", false,-1);
    tracep->declBit(c+257,"rst_n_out", false,-1);
    tracep->declBus(c+258,"rst_n_dff", false,-1, 1,0);
    tracep->declBit(c+785,"local_rst_n_in", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_dmem_ahb ");
    tracep->declBit(c+817,"rst_n", false,-1);
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->declBit(c+305,"dmem_req_ack", false,-1);
    tracep->declBit(c+1043,"dmem_req", false,-1);
    tracep->declBit(c+587,"dmem_cmd", false,-1);
    tracep->declBus(c+588,"dmem_width", false,-1, 1,0);
    tracep->declBus(c+676,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+1141,"dmem_wdata", false,-1, 31,0);
    tracep->declBus(c+860,"dmem_rdata", false,-1, 31,0);
    tracep->declBus(c+1144,"dmem_resp", false,-1, 1,0);
    tracep->declBus(c+1304,"hprot", false,-1, 3,0);
    tracep->declBus(c+1302,"hburst", false,-1, 2,0);
    tracep->declBus(c+1037,"hsize", false,-1, 2,0);
    tracep->declBus(c+1038,"htrans", false,-1, 1,0);
    tracep->declBit(c+1300,"hmastlock", false,-1);
    tracep->declBus(c+1039,"haddr", false,-1, 31,0);
    tracep->declBit(c+1040,"hwrite", false,-1);
    tracep->declBus(c+786,"hwdata", false,-1, 31,0);
    tracep->declBit(c+850,"hready", false,-1);
    tracep->declBus(c+664,"hrdata", false,-1, 31,0);
    tracep->declBit(c+851,"hresp", false,-1);
    tracep->declBit(c+1281,"fsm", false,-1);
    tracep->declBit(c+1056,"req_fifo_rd", false,-1);
    tracep->declBit(c+474,"req_fifo_wr", false,-1);
    tracep->declBit(c+475,"req_fifo_up", false,-1);
    tracep->pushNamePrefix("req_fifo_new ");
    tracep->declBit(c+1057,"hwrite", false,-1);
    tracep->declBus(c+1058,"hwidth", false,-1, 2,0);
    tracep->declBus(c+1059,"haddr", false,-1, 31,0);
    tracep->declBus(c+1060,"hwdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("req_fifo_r ");
    tracep->declBit(c+145,"hwrite", false,-1);
    tracep->declBus(c+146,"hwidth", false,-1, 2,0);
    tracep->declBus(c+147,"haddr", false,-1, 31,0);
    tracep->declBus(c+148,"hwdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("req_fifo");
    tracep->pushNamePrefix("[0] ");
    tracep->declBit(c+1061,"hwrite", false,-1);
    tracep->declBus(c+1062,"hwidth", false,-1, 2,0);
    tracep->declBus(c+1063,"haddr", false,-1, 31,0);
    tracep->declBus(c+1064,"hwdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1065,"req_fifo_empty", false,-1);
    tracep->declBit(c+455,"req_fifo_full", false,-1);
    tracep->pushNamePrefix("data_fifo ");
    tracep->declBus(c+787,"hwidth", false,-1, 2,0);
    tracep->declBus(c+788,"haddr", false,-1, 1,0);
    tracep->declBus(c+786,"hwdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("resp_fifo ");
    tracep->declBit(c+861,"hresp", false,-1);
    tracep->declBus(c+862,"hwidth", false,-1, 2,0);
    tracep->declBus(c+863,"haddr", false,-1, 1,0);
    tracep->declBus(c+864,"hrdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1282,"resp_fifo_hready", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_dmem_router ");
    tracep->declBus(c+1371,"SCR1_PORT1_ADDR_MASK", false,-1, 31,0);
    tracep->declBus(c+1372,"SCR1_PORT1_ADDR_PATTERN", false,-1, 31,0);
    tracep->declBus(c+1373,"SCR1_PORT2_ADDR_MASK", false,-1, 31,0);
    tracep->declBus(c+1374,"SCR1_PORT2_ADDR_PATTERN", false,-1, 31,0);
    tracep->declBit(c+817,"rst_n", false,-1);
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->declBit(c+1140,"dmem_req_ack", false,-1);
    tracep->declBit(c+876,"dmem_req", false,-1);
    tracep->declBit(c+587,"dmem_cmd", false,-1);
    tracep->declBus(c+588,"dmem_width", false,-1, 1,0);
    tracep->declBus(c+676,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+1141,"dmem_wdata", false,-1, 31,0);
    tracep->declBus(c+1142,"dmem_rdata", false,-1, 31,0);
    tracep->declBus(c+865,"dmem_resp", false,-1, 1,0);
    tracep->declBit(c+305,"port0_req_ack", false,-1);
    tracep->declBit(c+1043,"port0_req", false,-1);
    tracep->declBit(c+587,"port0_cmd", false,-1);
    tracep->declBus(c+588,"port0_width", false,-1, 1,0);
    tracep->declBus(c+676,"port0_addr", false,-1, 31,0);
    tracep->declBus(c+1141,"port0_wdata", false,-1, 31,0);
    tracep->declBus(c+860,"port0_rdata", false,-1, 31,0);
    tracep->declBus(c+1144,"port0_resp", false,-1, 1,0);
    tracep->declBit(c+1311,"port1_req_ack", false,-1);
    tracep->declBit(c+1044,"port1_req", false,-1);
    tracep->declBit(c+587,"port1_cmd", false,-1);
    tracep->declBus(c+588,"port1_width", false,-1, 1,0);
    tracep->declBus(c+676,"port1_addr", false,-1, 31,0);
    tracep->declBus(c+1141,"port1_wdata", false,-1, 31,0);
    tracep->declBus(c+99,"port1_rdata", false,-1, 31,0);
    tracep->declBus(c+307,"port1_resp", false,-1, 1,0);
    tracep->declBit(c+1311,"port2_req_ack", false,-1);
    tracep->declBit(c+1045,"port2_req", false,-1);
    tracep->declBit(c+587,"port2_cmd", false,-1);
    tracep->declBus(c+588,"port2_width", false,-1, 1,0);
    tracep->declBus(c+676,"port2_addr", false,-1, 31,0);
    tracep->declBus(c+1141,"port2_wdata", false,-1, 31,0);
    tracep->declBus(c+308,"port2_rdata", false,-1, 31,0);
    tracep->declBus(c+309,"port2_resp", false,-1, 1,0);
    tracep->declBit(c+456,"fsm", false,-1);
    tracep->declBus(c+690,"port_sel", false,-1, 1,0);
    tracep->declBus(c+457,"port_sel_r", false,-1, 1,0);
    tracep->declBus(c+1142,"sel_rdata", false,-1, 31,0);
    tracep->declBus(c+865,"sel_resp", false,-1, 1,0);
    tracep->declBit(c+1140,"sel_req_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_imem_ahb ");
    tracep->declBit(c+817,"rst_n", false,-1);
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->declBit(c+304,"imem_req_ack", false,-1);
    tracep->declBit(c+1083,"imem_req", false,-1);
    tracep->declBus(c+1082,"imem_addr", false,-1, 31,0);
    tracep->declBus(c+243,"imem_rdata", false,-1, 31,0);
    tracep->declBus(c+1143,"imem_resp", false,-1, 1,0);
    tracep->declBus(c+1301,"hprot", false,-1, 3,0);
    tracep->declBus(c+1302,"hburst", false,-1, 2,0);
    tracep->declBus(c+1303,"hsize", false,-1, 2,0);
    tracep->declBus(c+1077,"htrans", false,-1, 1,0);
    tracep->declBit(c+1300,"hmastlock", false,-1);
    tracep->declBus(c+1078,"haddr", false,-1, 31,0);
    tracep->declBit(c+662,"hready", false,-1);
    tracep->declBus(c+243,"hrdata", false,-1, 31,0);
    tracep->declBit(c+663,"hresp", false,-1);
    tracep->declBit(c+458,"fsm", false,-1);
    tracep->declBit(c+1126,"req_fifo_rd", false,-1);
    tracep->declBit(c+482,"req_fifo_wr", false,-1);
    tracep->declBit(c+483,"req_fifo_up", false,-1);
    tracep->pushNamePrefix("req_fifo_r ");
    tracep->declBus(c+149,"haddr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("req_fifo");
    tracep->pushNamePrefix("[0] ");
    tracep->declBus(c+1127,"haddr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1128,"req_fifo_empty", false,-1);
    tracep->declBit(c+459,"req_fifo_full", false,-1);
    tracep->pushNamePrefix("resp_fifo ");
    tracep->declBit(c+663,"hresp", false,-1);
    tracep->declBus(c+243,"hrdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1283,"resp_fifo_hready", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_imem_router ");
    tracep->declBus(c+1371,"SCR1_ADDR_MASK", false,-1, 31,0);
    tracep->declBus(c+1372,"SCR1_ADDR_PATTERN", false,-1, 31,0);
    tracep->declBit(c+817,"rst_n", false,-1);
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->declBit(c+1080,"imem_req_ack", false,-1);
    tracep->declBit(c+1081,"imem_req", false,-1);
    tracep->declBit(c+1314,"imem_cmd", false,-1);
    tracep->declBus(c+1082,"imem_addr", false,-1, 31,0);
    tracep->declBus(c+671,"imem_rdata", false,-1, 31,0);
    tracep->declBus(c+769,"imem_resp", false,-1, 1,0);
    tracep->declBit(c+304,"port0_req_ack", false,-1);
    tracep->declBit(c+1083,"port0_req", false,-1);
    tracep->declBit(c+1314,"port0_cmd", false,-1);
    tracep->declBus(c+1082,"port0_addr", false,-1, 31,0);
    tracep->declBus(c+243,"port0_rdata", false,-1, 31,0);
    tracep->declBus(c+1143,"port0_resp", false,-1, 1,0);
    tracep->declBit(c+1311,"port1_req_ack", false,-1);
    tracep->declBit(c+1084,"port1_req", false,-1);
    tracep->declBit(c+1314,"port1_cmd", false,-1);
    tracep->declBus(c+1082,"port1_addr", false,-1, 31,0);
    tracep->declBus(c+98,"port1_rdata", false,-1, 31,0);
    tracep->declBus(c+306,"port1_resp", false,-1, 1,0);
    tracep->declBit(c+460,"fsm", false,-1);
    tracep->declBit(c+1129,"port_sel", false,-1);
    tracep->declBit(c+461,"port_sel_r", false,-1);
    tracep->declBus(c+671,"sel_rdata", false,-1, 31,0);
    tracep->declBus(c+769,"sel_resp", false,-1, 1,0);
    tracep->declBit(c+1080,"sel_req_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_pwrup_rstn_reset_sync ");
    tracep->declBus(c+1313,"STAGES_AMOUNT", false,-1, 31,0);
    tracep->declBit(c+785,"rst_n", false,-1);
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->declBit(c+1311,"test_rst_n", false,-1);
    tracep->declBit(c+1300,"test_mode", false,-1);
    tracep->declBit(c+1311,"rst_n_in", false,-1);
    tracep->declBit(c+852,"rst_n_out", false,-1);
    tracep->declBus(c+259,"rst_n_dff", false,-1, 1,0);
    tracep->declBit(c+785,"local_rst_n_in", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_rstn_reset_sync ");
    tracep->declBus(c+1313,"STAGES_AMOUNT", false,-1, 31,0);
    tracep->declBit(c+785,"rst_n", false,-1);
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->declBit(c+1311,"test_rst_n", false,-1);
    tracep->declBit(c+1300,"test_mode", false,-1);
    tracep->declBit(c+785,"rst_n_in", false,-1);
    tracep->declBit(c+256,"rst_n_out", false,-1);
    tracep->declBus(c+260,"rst_n_dff", false,-1, 1,0);
    tracep->declBit(c+785,"local_rst_n_in", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_tapc_rstn_and2_cell ");
    tracep->declBus(c+1284,"rst_n_in", false,-1, 1,0);
    tracep->declBit(c+1311,"test_rst_n", false,-1);
    tracep->declBit(c+1300,"test_mode", false,-1);
    tracep->declBit(c+1139,"rst_n_out", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_tcm ");
    tracep->declBus(c+1375,"SCR1_TCM_SIZE", false,-1, 31,0);
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->declBit(c+817,"rst_n", false,-1);
    tracep->declBit(c+1311,"imem_req_ack", false,-1);
    tracep->declBit(c+1084,"imem_req", false,-1);
    tracep->declBus(c+1082,"imem_addr", false,-1, 31,0);
    tracep->declBus(c+98,"imem_rdata", false,-1, 31,0);
    tracep->declBus(c+306,"imem_resp", false,-1, 1,0);
    tracep->declBit(c+1311,"dmem_req_ack", false,-1);
    tracep->declBit(c+1044,"dmem_req", false,-1);
    tracep->declBit(c+587,"dmem_cmd", false,-1);
    tracep->declBus(c+588,"dmem_width", false,-1, 1,0);
    tracep->declBus(c+676,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+1141,"dmem_wdata", false,-1, 31,0);
    tracep->declBus(c+99,"dmem_rdata", false,-1, 31,0);
    tracep->declBus(c+307,"dmem_resp", false,-1, 1,0);
    tracep->declBit(c+484,"imem_req_en", false,-1);
    tracep->declBit(c+476,"dmem_req_en", false,-1);
    tracep->declBit(c+1084,"imem_rd", false,-1);
    tracep->declBit(c+1066,"dmem_rd", false,-1);
    tracep->declBit(c+1067,"dmem_wr", false,-1);
    tracep->declBus(c+1285,"dmem_writedata", false,-1, 31,0);
    tracep->declBus(c+150,"dmem_rdata_local", false,-1, 31,0);
    tracep->declBus(c+691,"dmem_byteen", false,-1, 3,0);
    tracep->declBus(c+151,"dmem_rdata_shift_reg", false,-1, 1,0);
    tracep->pushNamePrefix("i_dp_memory ");
    tracep->declBus(c+1353,"SCR1_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1375,"SCR1_SIZE", false,-1, 31,0);
    tracep->declBus(c+1361,"SCR1_NBYTES", false,-1, 31,0);
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->declBit(c+1084,"rena", false,-1);
    tracep->declBus(c+1130,"addra", false,-1, 15,2);
    tracep->declBus(c+98,"qa", false,-1, 31,0);
    tracep->declBit(c+1066,"renb", false,-1);
    tracep->declBit(c+1067,"wenb", false,-1);
    tracep->declBus(c+691,"webb", false,-1, 3,0);
    tracep->declBus(c+692,"addrb", false,-1, 15,2);
    tracep->declBus(c+1285,"datab", false,-1, 31,0);
    tracep->declBus(c+150,"qb", false,-1, 31,0);
    tracep->declBus(c+1376,"RAM_SIZE_WORDS", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+152,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("i_timer ");
    tracep->declBit(c+817,"rst_n", false,-1);
    tracep->declBit(c+1131,"clk", false,-1);
    tracep->declBit(c+1,"rtc_clk", false,-1);
    tracep->declBit(c+1045,"dmem_req", false,-1);
    tracep->declBit(c+587,"dmem_cmd", false,-1);
    tracep->declBus(c+588,"dmem_width", false,-1, 1,0);
    tracep->declBus(c+676,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+1141,"dmem_wdata", false,-1, 31,0);
    tracep->declBit(c+1311,"dmem_req_ack", false,-1);
    tracep->declBus(c+308,"dmem_rdata", false,-1, 31,0);
    tracep->declBus(c+309,"dmem_resp", false,-1, 1,0);
    tracep->declQuad(c+311,"timer_val", false,-1, 63,0);
    tracep->declBit(c+310,"timer_irq", false,-1);
    tracep->declBus(c+1365,"SCR1_TIMER_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1347,"SCR1_TIMER_CONTROL", false,-1, 4,0);
    tracep->declBus(c+1345,"SCR1_TIMER_DIVIDER", false,-1, 4,0);
    tracep->declBus(c+1377,"SCR1_TIMER_MTIMELO", false,-1, 4,0);
    tracep->declBus(c+1341,"SCR1_TIMER_MTIMEHI", false,-1, 4,0);
    tracep->declBus(c+1338,"SCR1_TIMER_MTIMECMPLO", false,-1, 4,0);
    tracep->declBus(c+1378,"SCR1_TIMER_MTIMECMPHI", false,-1, 4,0);
    tracep->declBus(c+1379,"SCR1_TIMER_CONTROL_EN_OFFSET", false,-1, 31,0);
    tracep->declBus(c+1367,"SCR1_TIMER_CONTROL_CLKSRC_OFFSET", false,-1, 31,0);
    tracep->declBus(c+1380,"SCR1_TIMER_DIVIDER_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+311,"mtime_reg", false,-1, 63,0);
    tracep->declQuad(c+1286,"mtime_new", false,-1, 63,0);
    tracep->declQuad(c+462,"mtimecmp_reg", false,-1, 63,0);
    tracep->declQuad(c+1068,"mtimecmp_new", false,-1, 63,0);
    tracep->declBit(c+464,"timer_en", false,-1);
    tracep->declBit(c+1288,"timer_clksrc_rtc", false,-1);
    tracep->declBus(c+465,"timer_div", false,-1, 9,0);
    tracep->declBit(c+1070,"control_up", false,-1);
    tracep->declBit(c+1071,"divider_up", false,-1);
    tracep->declBit(c+1072,"mtimelo_up", false,-1);
    tracep->declBit(c+1073,"mtimehi_up", false,-1);
    tracep->declBit(c+1074,"mtimecmplo_up", false,-1);
    tracep->declBit(c+1075,"mtimecmphi_up", false,-1);
    tracep->declBit(c+693,"dmem_req_valid", false,-1);
    tracep->declBus(c+1289,"rtc_sync", false,-1, 3,0);
    tracep->declBit(c+1290,"rtc_ext_pulse", false,-1);
    tracep->declBus(c+466,"timeclk_cnt", false,-1, 9,0);
    tracep->declBit(c+1291,"timeclk_cnt_en", false,-1);
    tracep->declBit(c+1292,"time_posedge", false,-1);
    tracep->declBit(c+1076,"time_cmp_flag", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBit(c+153,"test_pass", false,-1);
    tracep->declBit(c+154,"test_error", false,-1);
    tracep->declBus(c+155,"f_test", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declArray(c+156,"full_filename", false,-1, 255,0);
    tracep->pushNamePrefix("unnamedblk7 ");
    tracep->declBus(c+164,"tmpv", false,-1, 31,0);
    tracep->declBus(c+165,"start", false,-1, 31,0);
    tracep->declBus(c+166,"stop", false,-1, 31,0);
    tracep->declBus(c+167,"ref_data", false,-1, 31,0);
    tracep->declBus(c+168,"test_data", false,-1, 31,0);
    tracep->declBus(c+169,"start_addr", false,-1, 31,0);
    tracep->declBus(c+170,"trap_addr", false,-1, 31,0);
    tracep->declBus(c+171,"fd", false,-1, 31,0);
    tracep->declBus(c+1381,"code", false,-1, 31,0);
    tracep->declArray(c+172,"tmpstr", false,-1, 2047,0);
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vscr1_top_tb_ahb___024root__trace_init_sub__TOP____024unit__0(Vscr1_top_tb_ahb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root__trace_init_sub__TOP____024unit__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1382,"SCR1_MTVEC_BASE_WR_BITS", false,-1, 31,0);
    tracep->declBus(c+1364,"SCR1_TDU_TRIG_NUM", false,-1, 31,0);
    tracep->declBus(c+1383,"SCR1_ARCH_RST_VECTOR", false,-1, 31,0);
    tracep->declBus(c+1384,"SCR1_ARCH_MTVEC_BASE", false,-1, 31,0);
    tracep->declBus(c+1385,"SCR1_TCM_ADDR_MASK", false,-1, 31,0);
    tracep->declBus(c+1386,"SCR1_TCM_ADDR_PATTERN", false,-1, 31,0);
    tracep->declBus(c+1387,"SCR1_TIMER_ADDR_MASK", false,-1, 31,0);
    tracep->declBus(c+1388,"SCR1_TIMER_ADDR_PATTERN", false,-1, 31,0);
    tracep->declBus(c+1389,"SCR1_SIM_EXIT_ADDR", false,-1, 31,0);
    tracep->declBus(c+1390,"SCR1_SIM_PRINT_ADDR", false,-1, 31,0);
    tracep->declBus(c+1391,"SCR1_SIM_EXT_IRQ_ADDR", false,-1, 31,0);
    tracep->declBus(c+1392,"SCR1_SIM_SOFT_IRQ_ADDR", false,-1, 31,0);
    tracep->declBus(c+1393,"SCR1_CSR_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1357,"SCR1_CSR_MTVEC_BASE_ZERO_BITS", false,-1, 31,0);
    tracep->declBus(c+1382,"SCR1_CSR_MTVEC_BASE_VAL_BITS", false,-1, 31,0);
    tracep->declBus(c+1394,"SCR1_CSR_MTVEC_BASE_WR_RST_VAL", false,-1, 31,6);
    tracep->declBus(c+1379,"SCR1_CSR_MTVEC_BASE_RO_BITS", false,-1, 31,0);
    tracep->declBus(c+1364,"SCR1_EXC_CODE_WIDTH_E", false,-1, 31,0);
    tracep->declBus(c+1395,"SCR1_EXC_CODE_IRQ_M_SOFTWARE", false,-1, 3,0);
    tracep->declBus(c+1396,"SCR1_EXC_CODE_IRQ_M_TIMER", false,-1, 3,0);
    tracep->declBus(c+1397,"SCR1_EXC_CODE_IRQ_M_EXTERNAL", false,-1, 3,0);
    tracep->declBus(c+1398,"SCR1_EXC_CODE_RESET", false,-1, 3,0);
    tracep->declBus(c+1296,"SCR1_IALU_OP_ALL_NUM_E", false,-1, 31,0);
    tracep->declBus(c+1295,"SCR1_IALU_OP_WIDTH_E", false,-1, 31,0);
    tracep->declBus(c+1399,"SCR1_IALU_CMD_ALL_NUM_E", false,-1, 31,0);
    tracep->declBus(c+1400,"SCR1_IALU_CMD_WIDTH_E", false,-1, 31,0);
    tracep->declBus(c+1296,"SCR1_SUM2_OP_ALL_NUM_E", false,-1, 31,0);
    tracep->declBus(c+1295,"SCR1_SUM2_OP_WIDTH_E", false,-1, 31,0);
    tracep->declBus(c+1401,"SCR1_LSU_CMD_ALL_NUM_E", false,-1, 31,0);
    tracep->declBus(c+1361,"SCR1_LSU_CMD_WIDTH_E", false,-1, 31,0);
    tracep->declBus(c+1296,"SCR1_CSR_OP_ALL_NUM_E", false,-1, 31,0);
    tracep->declBus(c+1295,"SCR1_CSR_OP_WIDTH_E", false,-1, 31,0);
    tracep->declBus(c+1361,"SCR1_CSR_CMD_ALL_NUM_E", false,-1, 31,0);
    tracep->declBus(c+1296,"SCR1_CSR_CMD_WIDTH_E", false,-1, 31,0);
    tracep->declBus(c+1402,"SCR1_RD_WB_ALL_NUM_E", false,-1, 31,0);
    tracep->declBus(c+1362,"SCR1_RD_WB_WIDTH_E", false,-1, 31,0);
    tracep->declBus(c+1400,"SCR1_GPR_FIELD_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1364,"SCR1_HDU_DEBUGCSR_ADDR_SPAN", false,-1, 31,0);
    tracep->declBus(c+1313,"SCR1_HDU_DEBUGCSR_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1403,"SCR1_HDU_DEBUGCSR_DCSR_XDEBUGVER", false,-1, 3,0);
    tracep->declBus(c+1404,"SCR1_HDU_PBUF_ADDR_SPAN", false,-1, 31,0);
    tracep->declBus(c+1366,"SCR1_HDU_PBUF_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1368,"SCR1_HDU_DATA_REG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1368,"SCR1_HDU_CORE_INSTR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1405,"SCR1_HDU_DBGCSR_OFFS_DCSR", false,-1, 1,0);
    tracep->declBus(c+1406,"SCR1_HDU_DBGCSR_OFFS_DPC", false,-1, 1,0);
    tracep->declBus(c+1326,"SCR1_HDU_DBGCSR_OFFS_DSCRATCH0", false,-1, 1,0);
    tracep->declBus(c+1407,"SCR1_HDU_DBGCSR_OFFS_DSCRATCH1", false,-1, 1,0);
    tracep->declBus(c+1408,"SCR1_HDU_DBGCSR_ADDR_DCSR", false,-1, 11,0);
    tracep->declBus(c+1409,"SCR1_HDU_DBGCSR_ADDR_DPC", false,-1, 11,0);
    tracep->declBus(c+1410,"SCR1_HDU_DBGCSR_ADDR_DSCRATCH0", false,-1, 11,0);
    tracep->declBus(c+1411,"SCR1_HDU_DBGCSR_ADDR_DSCRATCH1", false,-1, 11,0);
    tracep->declBus(c+1412,"SCR1_CSR_ADDR_MVENDORID", false,-1, 11,0);
    tracep->declBus(c+1413,"SCR1_CSR_ADDR_MARCHID", false,-1, 11,0);
    tracep->declBus(c+1414,"SCR1_CSR_ADDR_MIMPID", false,-1, 11,0);
    tracep->declBus(c+1415,"SCR1_CSR_ADDR_MHARTID", false,-1, 11,0);
    tracep->declBus(c+1416,"SCR1_CSR_ADDR_MSTATUS", false,-1, 11,0);
    tracep->declBus(c+1417,"SCR1_CSR_ADDR_MISA", false,-1, 11,0);
    tracep->declBus(c+1418,"SCR1_CSR_ADDR_MIE", false,-1, 11,0);
    tracep->declBus(c+1419,"SCR1_CSR_ADDR_MTVEC", false,-1, 11,0);
    tracep->declBus(c+1420,"SCR1_CSR_ADDR_MSCRATCH", false,-1, 11,0);
    tracep->declBus(c+1421,"SCR1_CSR_ADDR_MEPC", false,-1, 11,0);
    tracep->declBus(c+1422,"SCR1_CSR_ADDR_MCAUSE", false,-1, 11,0);
    tracep->declBus(c+1423,"SCR1_CSR_ADDR_MTVAL", false,-1, 11,0);
    tracep->declBus(c+1424,"SCR1_CSR_ADDR_MIP", false,-1, 11,0);
    tracep->declBus(c+1425,"SCR1_CSR_ADDR_MCYCLE", false,-1, 11,0);
    tracep->declBus(c+1426,"SCR1_CSR_ADDR_MINSTRET", false,-1, 11,0);
    tracep->declBus(c+1427,"SCR1_CSR_ADDR_MCYCLEH", false,-1, 11,0);
    tracep->declBus(c+1428,"SCR1_CSR_ADDR_MINSTRETH", false,-1, 11,0);
    tracep->declBus(c+1429,"SCR1_CSR_ADDR_TIME", false,-1, 11,0);
    tracep->declBus(c+1430,"SCR1_CSR_ADDR_CYCLE", false,-1, 11,0);
    tracep->declBus(c+1431,"SCR1_CSR_ADDR_INSTRET", false,-1, 11,0);
    tracep->declBus(c+1432,"SCR1_CSR_ADDR_TIMEH", false,-1, 11,0);
    tracep->declBus(c+1433,"SCR1_CSR_ADDR_CYCLEH", false,-1, 11,0);
    tracep->declBus(c+1434,"SCR1_CSR_ADDR_INSTRETH", false,-1, 11,0);
    tracep->declBus(c+1408,"SCR1_CSR_ADDR_HDU_MBASE", false,-1, 11,0);
    tracep->declBus(c+1435,"SCR1_CSR_ADDR_HDU_MSPAN", false,-1, 11,0);
    tracep->declBus(c+1436,"SCR1_CSR_ADDR_MCOUNTEN", false,-1, 11,0);
    tracep->declBus(c+1437,"SCR1_CSR_ADDR_TDU_MBASE", false,-1, 11,0);
    tracep->declBus(c+1438,"SCR1_CSR_ADDR_TDU_MSPAN", false,-1, 11,0);
    tracep->declBus(c+1439,"SCR1_CSR_ADDR_IPIC_BASE", false,-1, 11,0);
    tracep->declBus(c+1439,"SCR1_CSR_ADDR_IPIC_CISV", false,-1, 11,0);
    tracep->declBus(c+1440,"SCR1_CSR_ADDR_IPIC_CICSR", false,-1, 11,0);
    tracep->declBus(c+1441,"SCR1_CSR_ADDR_IPIC_IPR", false,-1, 11,0);
    tracep->declBus(c+1442,"SCR1_CSR_ADDR_IPIC_ISVR", false,-1, 11,0);
    tracep->declBus(c+1443,"SCR1_CSR_ADDR_IPIC_EOI", false,-1, 11,0);
    tracep->declBus(c+1444,"SCR1_CSR_ADDR_IPIC_SOI", false,-1, 11,0);
    tracep->declBus(c+1445,"SCR1_CSR_ADDR_IPIC_IDX", false,-1, 11,0);
    tracep->declBus(c+1446,"SCR1_CSR_ADDR_IPIC_ICSR", false,-1, 11,0);
    tracep->declBus(c+1383,"SCR1_RST_VECTOR", false,-1, 31,0);
    tracep->declBit(c+1447,"SCR1_CSR_MIE_MSIE_RST_VAL", false,-1);
    tracep->declBit(c+1447,"SCR1_CSR_MIE_MTIE_RST_VAL", false,-1);
    tracep->declBit(c+1447,"SCR1_CSR_MIE_MEIE_RST_VAL", false,-1);
    tracep->declBit(c+1447,"SCR1_CSR_MIP_MSIP_RST_VAL", false,-1);
    tracep->declBit(c+1447,"SCR1_CSR_MIP_MTIP_RST_VAL", false,-1);
    tracep->declBit(c+1447,"SCR1_CSR_MIP_MEIP_RST_VAL", false,-1);
    tracep->declBit(c+1447,"SCR1_CSR_MSTATUS_MIE_RST_VAL", false,-1);
    tracep->declBit(c+1448,"SCR1_CSR_MSTATUS_MPIE_RST_VAL", false,-1);
    tracep->declBus(c+1449,"SCR1_MISA_MXL_32", false,-1, 1,0);
    tracep->declBus(c+1450,"SCR1_CSR_MISA", false,-1, 31,0);
    tracep->declBus(c+1451,"SCR1_CSR_MVENDORID", false,-1, 31,0);
    tracep->declBus(c+1452,"SCR1_CSR_MARCHID", false,-1, 31,0);
    tracep->declBus(c+1453,"SCR1_CSR_MIMPID", false,-1, 31,0);
    tracep->declBus(c+1454,"SCR1_CSR_MSTATUS_MPP", false,-1, 1,0);
    tracep->declBus(c+1366,"SCR1_CSR_MSTATUS_MIE_OFFSET", false,-1, 31,0);
    tracep->declBus(c+1455,"SCR1_CSR_MSTATUS_MPIE_OFFSET", false,-1, 31,0);
    tracep->declBus(c+1456,"SCR1_CSR_MSTATUS_MPP_OFFSET", false,-1, 31,0);
    tracep->declBus(c+1394,"SCR1_CSR_MTVEC_BASE_RST_VAL", false,-1, 31,6);
    tracep->declBit(c+1447,"SCR1_CSR_MTVEC_MODE_DIRECT", false,-1);
    tracep->declBit(c+1448,"SCR1_CSR_MTVEC_MODE_VECTORED", false,-1);
    tracep->declBus(c+1366,"SCR1_CSR_MIE_MSIE_OFFSET", false,-1, 31,0);
    tracep->declBus(c+1455,"SCR1_CSR_MIE_MTIE_OFFSET", false,-1, 31,0);
    tracep->declBus(c+1456,"SCR1_CSR_MIE_MEIE_OFFSET", false,-1, 31,0);
    tracep->declBus(c+1379,"SCR1_CSR_MCOUNTEN_CY_OFFSET", false,-1, 31,0);
    tracep->declBus(c+1313,"SCR1_CSR_MCOUNTEN_IR_OFFSET", false,-1, 31,0);
    tracep->declBus(c+1356,"SCR1_CSR_COUNTERS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1457,"SCR1_CSR_ADDR_HPMCOUNTER_MASK", false,-1, 6,0);
    tracep->declBus(c+1458,"SCR1_CSR_ADDR_HPMCOUNTERH_MASK", false,-1, 6,0);
    tracep->declBus(c+1459,"SCR1_CSR_ADDR_MHPMCOUNTER_MASK", false,-1, 6,0);
    tracep->declBus(c+1460,"SCR1_CSR_ADDR_MHPMCOUNTERH_MASK", false,-1, 6,0);
    tracep->declBus(c+1461,"SCR1_CSR_ADDR_MHPMEVENT_MASK", false,-1, 6,0);
    tracep->declBus(c+1462,"SCR1_IRQ_VECT_NUM", false,-1, 31,0);
    tracep->declBus(c+1400,"SCR1_IRQ_VECT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1462,"SCR1_IRQ_LINES_NUM", false,-1, 31,0);
    tracep->declBus(c+1361,"SCR1_IRQ_LINES_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1338,"SCR1_IRQ_VOID_VECT_NUM", false,-1, 4,0);
    tracep->declBus(c+1361,"SCR1_IRQ_IDX_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1302,"SCR1_IPIC_CISV", false,-1, 2,0);
    tracep->declBus(c+1321,"SCR1_IPIC_CICSR", false,-1, 2,0);
    tracep->declBus(c+1303,"SCR1_IPIC_IPR", false,-1, 2,0);
    tracep->declBus(c+1463,"SCR1_IPIC_ISVR", false,-1, 2,0);
    tracep->declBus(c+1322,"SCR1_IPIC_EOI", false,-1, 2,0);
    tracep->declBus(c+1323,"SCR1_IPIC_SOI", false,-1, 2,0);
    tracep->declBus(c+1464,"SCR1_IPIC_IDX", false,-1, 2,0);
    tracep->declBus(c+1465,"SCR1_IPIC_ICSR", false,-1, 2,0);
    tracep->declBus(c+1369,"SCR1_IPIC_ICSR_IP", false,-1, 31,0);
    tracep->declBus(c+1295,"SCR1_IPIC_ICSR_IE", false,-1, 31,0);
    tracep->declBus(c+1296,"SCR1_IPIC_ICSR_IM", false,-1, 31,0);
    tracep->declBus(c+1362,"SCR1_IPIC_ICSR_INV", false,-1, 31,0);
    tracep->declBus(c+1361,"SCR1_IPIC_ICSR_IS", false,-1, 31,0);
    tracep->declBus(c+1466,"SCR1_IPIC_ICSR_PRV_LSB", false,-1, 31,0);
    tracep->declBus(c+1401,"SCR1_IPIC_ICSR_PRV_MSB", false,-1, 31,0);
    tracep->declBus(c+1467,"SCR1_IPIC_ICSR_LN_LSB", false,-1, 31,0);
    tracep->declBus(c+1462,"SCR1_IPIC_ICSR_LN_MSB", false,-1, 31,0);
    tracep->declBus(c+1407,"SCR1_IPIC_PRV_M", false,-1, 1,0);
    tracep->declBus(c+1364,"SCR1_TDU_MTRIG_NUM", false,-1, 31,0);
    tracep->declBus(c+1365,"SCR1_TDU_ALLTRIG_NUM", false,-1, 31,0);
    tracep->declBus(c+1368,"SCR1_TDU_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1368,"SCR1_TDU_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1362,"SCR1_CSR_ADDR_TDU_OFFS_W", false,-1, 31,0);
    tracep->declBus(c+1468,"SCR1_CSR_ADDR_TDU_OFFS_TSELECT", false,-1, 2,0);
    tracep->declBus(c+1469,"SCR1_CSR_ADDR_TDU_OFFS_TDATA1", false,-1, 2,0);
    tracep->declBus(c+1470,"SCR1_CSR_ADDR_TDU_OFFS_TDATA2", false,-1, 2,0);
    tracep->declBus(c+1471,"SCR1_CSR_ADDR_TDU_OFFS_TINFO", false,-1, 2,0);
    tracep->declBus(c+1437,"SCR1_CSR_ADDR_TDU_TSELECT", false,-1, 11,0);
    tracep->declBus(c+1472,"SCR1_CSR_ADDR_TDU_TDATA1", false,-1, 11,0);
    tracep->declBus(c+1473,"SCR1_CSR_ADDR_TDU_TDATA2", false,-1, 11,0);
    tracep->declBus(c+1474,"SCR1_CSR_ADDR_TDU_TINFO", false,-1, 11,0);
    tracep->declBus(c+1475,"SCR1_TDU_TDATA1_TYPE_HI", false,-1, 31,0);
    tracep->declBus(c+1476,"SCR1_TDU_TDATA1_TYPE_LO", false,-1, 31,0);
    tracep->declBus(c+1477,"SCR1_TDU_TDATA1_DMODE", false,-1, 31,0);
    tracep->declBit(c+1447,"SCR1_TDU_TDATA1_DMODE_VAL", false,-1);
    tracep->declBus(c+1382,"SCR1_TDU_MCONTROL_MASKMAX_HI", false,-1, 31,0);
    tracep->declBus(c+1478,"SCR1_TDU_MCONTROL_MASKMAX_LO", false,-1, 31,0);
    tracep->declBus(c+1479,"SCR1_TDU_MCONTROL_RESERVEDB_HI", false,-1, 31,0);
    tracep->declBus(c+1478,"SCR1_TDU_MCONTROL_RESERVEDB_LO", false,-1, 31,0);
    tracep->declBus(c+1479,"SCR1_TDU_MCONTROL_HIT", false,-1, 31,0);
    tracep->declBus(c+1480,"SCR1_TDU_MCONTROL_SELECT", false,-1, 31,0);
    tracep->declBus(c+1481,"SCR1_TDU_MCONTROL_TIMING", false,-1, 31,0);
    tracep->declBus(c+1482,"SCR1_TDU_MCONTROL_ACTION_HI", false,-1, 31,0);
    tracep->declBus(c+1393,"SCR1_TDU_MCONTROL_ACTION_LO", false,-1, 31,0);
    tracep->declBus(c+1456,"SCR1_TDU_MCONTROL_CHAIN", false,-1, 31,0);
    tracep->declBus(c+1380,"SCR1_TDU_MCONTROL_MATCH_HI", false,-1, 31,0);
    tracep->declBus(c+1455,"SCR1_TDU_MCONTROL_MATCH_LO", false,-1, 31,0);
    tracep->declBus(c+1357,"SCR1_TDU_MCONTROL_M", false,-1, 31,0);
    tracep->declBus(c+1365,"SCR1_TDU_MCONTROL_RESERVEDA", false,-1, 31,0);
    tracep->declBus(c+1364,"SCR1_TDU_MCONTROL_S", false,-1, 31,0);
    tracep->declBus(c+1366,"SCR1_TDU_MCONTROL_U", false,-1, 31,0);
    tracep->declBus(c+1313,"SCR1_TDU_MCONTROL_EXECUTE", false,-1, 31,0);
    tracep->declBus(c+1367,"SCR1_TDU_MCONTROL_STORE", false,-1, 31,0);
    tracep->declBus(c+1379,"SCR1_TDU_MCONTROL_LOAD", false,-1, 31,0);
    tracep->declBus(c+1483,"SCR1_TDU_MCONTROL_TYPE_VAL", false,-1, 3,0);
    tracep->declBit(c+1447,"SCR1_TDU_MCONTROL_SELECT_VAL", false,-1);
    tracep->declBit(c+1447,"SCR1_TDU_MCONTROL_TIMING_VAL", false,-1);
    tracep->declBus(c+1484,"SCR1_TDU_MCONTROL_MASKMAX_VAL", false,-1, 5,0);
    tracep->declBit(c+1447,"SCR1_TDU_MCONTROL_RESERVEDA_VAL", false,-1);
    tracep->declBus(c+1477,"SCR1_TDU_ICOUNT_DMODE", false,-1, 31,0);
    tracep->declBus(c+1382,"SCR1_TDU_ICOUNT_RESERVEDB_HI", false,-1, 31,0);
    tracep->declBus(c+1485,"SCR1_TDU_ICOUNT_RESERVEDB_LO", false,-1, 31,0);
    tracep->declBus(c+1486,"SCR1_TDU_ICOUNT_HIT", false,-1, 31,0);
    tracep->declBus(c+1487,"SCR1_TDU_ICOUNT_COUNT_HI", false,-1, 31,0);
    tracep->declBus(c+1380,"SCR1_TDU_ICOUNT_COUNT_LO", false,-1, 31,0);
    tracep->declBus(c+1488,"SCR1_TDU_ICOUNT_M", false,-1, 31,0);
    tracep->declBus(c+1404,"SCR1_TDU_ICOUNT_RESERVEDA", false,-1, 31,0);
    tracep->declBus(c+1455,"SCR1_TDU_ICOUNT_S", false,-1, 31,0);
    tracep->declBus(c+1357,"SCR1_TDU_ICOUNT_U", false,-1, 31,0);
    tracep->declBus(c+1365,"SCR1_TDU_ICOUNT_ACTION_HI", false,-1, 31,0);
    tracep->declBus(c+1379,"SCR1_TDU_ICOUNT_ACTION_LO", false,-1, 31,0);
    tracep->declBus(c+1395,"SCR1_TDU_ICOUNT_TYPE_VAL", false,-1, 3,0);
    tracep->declBus(c+1489,"SCR1_TDU_ICOUNT_RESERVEDB_VAL", false,-1, 1,0);
    tracep->declBit(c+1447,"SCR1_TDU_ICOUNT_RESERVEDA_VAL", false,-1);
    tracep->declBus(c+1364,"SCR1_TAP_STATE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1365,"SCR1_TAP_INSTRUCTION_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1368,"SCR1_TAP_DR_IDCODE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1368,"SCR1_TAP_DR_BLD_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1367,"SCR1_TAP_DR_BYPASS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1453,"SCR1_TAP_BLD_ID_VALUE", false,-1, 31,0);
    tracep->declBus(c+1490,"SCR1_DBG_DMI_ADDR_WIDTH", false,-1, 5,0);
    tracep->declBus(c+1491,"SCR1_DBG_DMI_DATA_WIDTH", false,-1, 5,0);
    tracep->declBus(c+1326,"SCR1_DBG_DMI_OP_WIDTH", false,-1, 1,0);
    tracep->declBus(c+1326,"SCR1_DBG_DMI_CH_ID_WIDTH", false,-1, 1,0);
    tracep->declBus(c+1491,"SCR1_DBG_DMI_DR_DTMCS_WIDTH", false,-1, 5,0);
    tracep->declBus(c+1492,"SCR1_DBG_DMI_DR_DMI_ACCESS_WIDTH", false,-1, 5,0);
    tracep->declBus(c+1493,"SCR1_DBG_DATA0", false,-1, 6,0);
    tracep->declBus(c+1494,"SCR1_DBG_DATA1", false,-1, 6,0);
    tracep->declBus(c+1495,"SCR1_DBG_DMCONTROL", false,-1, 6,0);
    tracep->declBus(c+1496,"SCR1_DBG_DMSTATUS", false,-1, 6,0);
    tracep->declBus(c+1497,"SCR1_DBG_HARTINFO", false,-1, 6,0);
    tracep->declBus(c+1498,"SCR1_DBG_ABSTRACTCS", false,-1, 6,0);
    tracep->declBus(c+1499,"SCR1_DBG_COMMAND", false,-1, 6,0);
    tracep->declBus(c+1500,"SCR1_DBG_ABSTRACTAUTO", false,-1, 6,0);
    tracep->declBus(c+1501,"SCR1_DBG_PROGBUF0", false,-1, 6,0);
    tracep->declBus(c+1502,"SCR1_DBG_PROGBUF1", false,-1, 6,0);
    tracep->declBus(c+1503,"SCR1_DBG_PROGBUF2", false,-1, 6,0);
    tracep->declBus(c+1320,"SCR1_DBG_PROGBUF3", false,-1, 6,0);
    tracep->declBus(c+1504,"SCR1_DBG_PROGBUF4", false,-1, 6,0);
    tracep->declBus(c+1505,"SCR1_DBG_PROGBUF5", false,-1, 6,0);
    tracep->declBus(c+1506,"SCR1_DBG_HALTSUM0", false,-1, 6,0);
    tracep->declBus(c+1335,"SCR1_DBG_DMCONTROL_HALTREQ", false,-1, 4,0);
    tracep->declBus(c+1507,"SCR1_DBG_DMCONTROL_RESUMEREQ", false,-1, 4,0);
    tracep->declBus(c+1508,"SCR1_DBG_DMCONTROL_HARTRESET", false,-1, 4,0);
    tracep->declBus(c+1509,"SCR1_DBG_DMCONTROL_ACKHAVERESET", false,-1, 4,0);
    tracep->declBus(c+1510,"SCR1_DBG_DMCONTROL_RESERVEDB", false,-1, 4,0);
    tracep->declBus(c+1511,"SCR1_DBG_DMCONTROL_HASEL", false,-1, 4,0);
    tracep->declBus(c+1512,"SCR1_DBG_DMCONTROL_HARTSELLO_HI", false,-1, 4,0);
    tracep->declBus(c+1338,"SCR1_DBG_DMCONTROL_HARTSELLO_LO", false,-1, 4,0);
    tracep->declBus(c+1339,"SCR1_DBG_DMCONTROL_HARTSELHI_HI", false,-1, 4,0);
    tracep->declBus(c+1328,"SCR1_DBG_DMCONTROL_HARTSELHI_LO", false,-1, 4,0);
    tracep->declBus(c+1334,"SCR1_DBG_DMCONTROL_RESERVEDA_HI", false,-1, 4,0);
    tracep->declBus(c+1360,"SCR1_DBG_DMCONTROL_RESERVEDA_LO", false,-1, 4,0);
    tracep->declBus(c+1359,"SCR1_DBG_DMCONTROL_NDMRESET", false,-1, 4,0);
    tracep->declBus(c+1347,"SCR1_DBG_DMCONTROL_DMACTIVE", false,-1, 4,0);
    tracep->declBus(c+1335,"SCR1_DBG_DMSTATUS_RESERVEDC_HI", false,-1, 4,0);
    tracep->declBus(c+1513,"SCR1_DBG_DMSTATUS_RESERVEDC_LO", false,-1, 4,0);
    tracep->declBus(c+1514,"SCR1_DBG_DMSTATUS_IMPEBREAK", false,-1, 4,0);
    tracep->declBus(c+1515,"SCR1_DBG_DMSTATUS_RESERVEDB_HI", false,-1, 4,0);
    tracep->declBus(c+1378,"SCR1_DBG_DMSTATUS_RESERVEDB_LO", false,-1, 4,0);
    tracep->declBus(c+1516,"SCR1_DBG_DMSTATUS_ALLHAVERESET", false,-1, 4,0);
    tracep->declBus(c+1336,"SCR1_DBG_DMSTATUS_ANYHAVERESET", false,-1, 4,0);
    tracep->declBus(c+1337,"SCR1_DBG_DMSTATUS_ALLRESUMEACK", false,-1, 4,0);
    tracep->declBus(c+1338,"SCR1_DBG_DMSTATUS_ANYRESUMEACK", false,-1, 4,0);
    tracep->declBus(c+1339,"SCR1_DBG_DMSTATUS_ALLNONEXISTENT", false,-1, 4,0);
    tracep->declBus(c+1340,"SCR1_DBG_DMSTATUS_ANYNONEXISTENT", false,-1, 4,0);
    tracep->declBus(c+1517,"SCR1_DBG_DMSTATUS_ALLUNAVAIL", false,-1, 4,0);
    tracep->declBus(c+1341,"SCR1_DBG_DMSTATUS_ANYUNAVAIL", false,-1, 4,0);
    tracep->declBus(c+1342,"SCR1_DBG_DMSTATUS_ALLRUNNING", false,-1, 4,0);
    tracep->declBus(c+1343,"SCR1_DBG_DMSTATUS_ANYRUNNING", false,-1, 4,0);
    tracep->declBus(c+1344,"SCR1_DBG_DMSTATUS_ALLHALTED", false,-1, 4,0);
    tracep->declBus(c+1377,"SCR1_DBG_DMSTATUS_ANYHALTED", false,-1, 4,0);
    tracep->declBus(c+1518,"SCR1_DBG_DMSTATUS_AUTHENTICATED", false,-1, 4,0);
    tracep->declBus(c+1328,"SCR1_DBG_DMSTATUS_AUTHBUSY", false,-1, 4,0);
    tracep->declBus(c+1334,"SCR1_DBG_DMSTATUS_RESERVEDA", false,-1, 4,0);
    tracep->declBus(c+1345,"SCR1_DBG_DMSTATUS_DEVTREEVALID", false,-1, 4,0);
    tracep->declBus(c+1346,"SCR1_DBG_DMSTATUS_VERSION_HI", false,-1, 4,0);
    tracep->declBus(c+1347,"SCR1_DBG_DMSTATUS_VERSION_LO", false,-1, 4,0);
    tracep->declBus(c+1335,"SCR1_DBG_COMMAND_TYPE_HI", false,-1, 4,0);
    tracep->declBus(c+1519,"SCR1_DBG_COMMAND_TYPE_LO", false,-1, 4,0);
    tracep->declBus(c+1518,"SCR1_DBG_COMMAND_TYPE_WDTH", false,-1, 4,0);
    tracep->declBus(c+1513,"SCR1_DBG_COMMAND_ACCESSREG_RESERVEDB", false,-1, 4,0);
    tracep->declBus(c+1514,"SCR1_DBG_COMMAND_ACCESSREG_SIZE_HI", false,-1, 4,0);
    tracep->declBus(c+1378,"SCR1_DBG_COMMAND_ACCESSREG_SIZE_LO", false,-1, 4,0);
    tracep->declBus(c+1360,"SCR1_DBG_COMMAND_ACCESSREG_SIZE_WDTH", false,-1, 4,0);
    tracep->declBus(c+1516,"SCR1_DBG_COMMAND_ACCESSREG_RESERVEDA", false,-1, 4,0);
    tracep->declBus(c+1336,"SCR1_DBG_COMMAND_ACCESSREG_POSTEXEC", false,-1, 4,0);
    tracep->declBus(c+1337,"SCR1_DBG_COMMAND_ACCESSREG_TRANSFER", false,-1, 4,0);
    tracep->declBus(c+1338,"SCR1_DBG_COMMAND_ACCESSREG_WRITE", false,-1, 4,0);
    tracep->declBus(c+1339,"SCR1_DBG_COMMAND_ACCESSREG_REGNO_HI", false,-1, 4,0);
    tracep->declBus(c+1347,"SCR1_DBG_COMMAND_ACCESSREG_REGNO_LO", false,-1, 4,0);
    tracep->declBus(c+1513,"SCR1_DBG_COMMAND_ACCESSMEM_AAMVIRTUAL", false,-1, 4,0);
    tracep->declBus(c+1514,"SCR1_DBG_COMMAND_ACCESSMEM_AAMSIZE_HI", false,-1, 4,0);
    tracep->declBus(c+1378,"SCR1_DBG_COMMAND_ACCESSMEM_AAMSIZE_LO", false,-1, 4,0);
    tracep->declBus(c+1516,"SCR1_DBG_COMMAND_ACCESSMEM_AAMPOSTINC", false,-1, 4,0);
    tracep->declBus(c+1336,"SCR1_DBG_COMMAND_ACCESSMEM_RESERVEDB_HI", false,-1, 4,0);
    tracep->declBus(c+1337,"SCR1_DBG_COMMAND_ACCESSMEM_RESERVEDB_LO", false,-1, 4,0);
    tracep->declBus(c+1338,"SCR1_DBG_COMMAND_ACCESSMEM_WRITE", false,-1, 4,0);
    tracep->declBus(c+1517,"SCR1_DBG_COMMAND_ACCESSMEM_RESERVEDA_HI", false,-1, 4,0);
    tracep->declBus(c+1347,"SCR1_DBG_COMMAND_ACCESSMEM_RESERVEDA_LO", false,-1, 4,0);
    tracep->declBus(c+1335,"SCR1_DBG_ABSTRACTCS_RESERVEDD_HI", false,-1, 4,0);
    tracep->declBus(c+1508,"SCR1_DBG_ABSTRACTCS_RESERVEDD_LO", false,-1, 4,0);
    tracep->declBus(c+1509,"SCR1_DBG_ABSTRACTCS_PROGBUFSIZE_HI", false,-1, 4,0);
    tracep->declBus(c+1519,"SCR1_DBG_ABSTRACTCS_PROGBUFSIZE_LO", false,-1, 4,0);
    tracep->declBus(c+1513,"SCR1_DBG_ABSTRACTCS_RESERVEDC_HI", false,-1, 4,0);
    tracep->declBus(c+1517,"SCR1_DBG_ABSTRACTCS_RESERVEDC_LO", false,-1, 4,0);
    tracep->declBus(c+1341,"SCR1_DBG_ABSTRACTCS_BUSY", false,-1, 4,0);
    tracep->declBus(c+1342,"SCR1_DBG_ABSTRACTCS_RESERVEDB", false,-1, 4,0);
    tracep->declBus(c+1343,"SCR1_DBG_ABSTRACTCS_CMDERR_HI", false,-1, 4,0);
    tracep->declBus(c+1377,"SCR1_DBG_ABSTRACTCS_CMDERR_LO", false,-1, 4,0);
    tracep->declBus(c+1360,"SCR1_DBG_ABSTRACTCS_CMDERR_WDTH", false,-1, 4,0);
    tracep->declBus(c+1518,"SCR1_DBG_ABSTRACTCS_RESERVEDA_HI", false,-1, 4,0);
    tracep->declBus(c+1345,"SCR1_DBG_ABSTRACTCS_RESERVEDA_LO", false,-1, 4,0);
    tracep->declBus(c+1346,"SCR1_DBG_ABSTRACTCS_DATACOUNT_HI", false,-1, 4,0);
    tracep->declBus(c+1347,"SCR1_DBG_ABSTRACTCS_DATACOUNT_LO", false,-1, 4,0);
    tracep->declBus(c+1335,"SCR1_DBG_HARTINFO_RESERVEDB_HI", false,-1, 4,0);
    tracep->declBus(c+1519,"SCR1_DBG_HARTINFO_RESERVEDB_LO", false,-1, 4,0);
    tracep->declBus(c+1513,"SCR1_DBG_HARTINFO_NSCRATCH_HI", false,-1, 4,0);
    tracep->declBus(c+1378,"SCR1_DBG_HARTINFO_NSCRATCH_LO", false,-1, 4,0);
    tracep->declBus(c+1516,"SCR1_DBG_HARTINFO_RESERVEDA_HI", false,-1, 4,0);
    tracep->declBus(c+1337,"SCR1_DBG_HARTINFO_RESERVEDA_LO", false,-1, 4,0);
    tracep->declBus(c+1338,"SCR1_DBG_HARTINFO_DATAACCESS", false,-1, 4,0);
    tracep->declBus(c+1339,"SCR1_DBG_HARTINFO_DATASIZE_HI", false,-1, 4,0);
    tracep->declBus(c+1341,"SCR1_DBG_HARTINFO_DATASIZE_LO", false,-1, 4,0);
    tracep->declBus(c+1342,"SCR1_DBG_HARTINFO_DATAADDR_HI", false,-1, 4,0);
    tracep->declBus(c+1347,"SCR1_DBG_HARTINFO_DATAADDR_LO", false,-1, 4,0);
    tracep->declBus(c+1313,"SCR1_SCU_DR_SYSCTRL_OP_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1313,"SCR1_SCU_DR_SYSCTRL_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1364,"SCR1_SCU_DR_SYSCTRL_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1353,"SCR1_AHB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1405,"SCR1_HTRANS_IDLE", false,-1, 1,0);
    tracep->declBus(c+1326,"SCR1_HTRANS_NONSEQ", false,-1, 1,0);
    tracep->declBus(c+1405,"SCR1_HTRANS_ERR", false,-1, 1,0);
    tracep->declBus(c+1302,"SCR1_HBURST_SINGLE", false,-1, 2,0);
    tracep->declBus(c+1405,"SCR1_HBURST_ERR", false,-1, 1,0);
    tracep->declBus(c+1302,"SCR1_HSIZE_8B", false,-1, 2,0);
    tracep->declBus(c+1321,"SCR1_HSIZE_16B", false,-1, 2,0);
    tracep->declBus(c+1303,"SCR1_HSIZE_32B", false,-1, 2,0);
    tracep->declBus(c+1302,"SCR1_HSIZE_ERR", false,-1, 2,0);
    tracep->declBus(c+1369,"SCR1_HPROT_DATA", false,-1, 31,0);
    tracep->declBus(c+1295,"SCR1_HPROT_PRV", false,-1, 31,0);
    tracep->declBus(c+1296,"SCR1_HPROT_BUF", false,-1, 31,0);
    tracep->declBus(c+1362,"SCR1_HPROT_CACHE", false,-1, 31,0);
    tracep->declBit(c+1300,"SCR1_HRESP_OKAY", false,-1);
    tracep->declBit(c+1311,"SCR1_HRESP_ERROR", false,-1);
    tracep->declBit(c+1300,"SCR1_HRESP_ERR", false,-1);
}

VL_ATTR_COLD void Vscr1_top_tb_ahb___024root__trace_init_top(Vscr1_top_tb_ahb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root__trace_init_top\n"); );
    // Body
    Vscr1_top_tb_ahb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("$unit ");
    Vscr1_top_tb_ahb___024root__trace_init_sub__TOP____024unit__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vscr1_top_tb_ahb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vscr1_top_tb_ahb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vscr1_top_tb_ahb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vscr1_top_tb_ahb___024root__trace_register(Vscr1_top_tb_ahb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vscr1_top_tb_ahb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vscr1_top_tb_ahb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vscr1_top_tb_ahb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vscr1_top_tb_ahb___024root__trace_full_sub_0(Vscr1_top_tb_ahb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vscr1_top_tb_ahb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root__trace_full_top_0\n"); );
    // Init
    Vscr1_top_tb_ahb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vscr1_top_tb_ahb___024root*>(voidSelf);
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vscr1_top_tb_ahb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vscr1_top_tb_ahb___024root__trace_full_sub_0(Vscr1_top_tb_ahb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_top_tb_ahb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->scr1_top_tb_ahb__DOT__rtc_clk));
    bufp->fullIData(oldp+2,(vlSelf->scr1_top_tb_ahb__DOT__fuse_mhartid),32);
    bufp->fullIData(oldp+3,(vlSelf->scr1_top_tb_ahb__DOT__imem_req_ack_stall),32);
    bufp->fullIData(oldp+4,(vlSelf->scr1_top_tb_ahb__DOT__dmem_req_ack_stall),32);
    bufp->fullIData(oldp+5,(vlSelf->scr1_top_tb_ahb__DOT__f_results),32);
    bufp->fullIData(oldp+6,(vlSelf->scr1_top_tb_ahb__DOT__f_info),32);
    bufp->fullCData(oldp+7,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_be),4);
    bufp->fullIData(oldp+8,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                            .__PVT__INT_00_ZERO),32);
    bufp->fullIData(oldp+9,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                            .__PVT__INT_01_RA),32);
    bufp->fullIData(oldp+10,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                             .__PVT__INT_02_SP),32);
    bufp->fullIData(oldp+11,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                             .__PVT__INT_03_GP),32);
    bufp->fullIData(oldp+12,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                             .__PVT__INT_04_TP),32);
    bufp->fullIData(oldp+13,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                             .__PVT__INT_05_T0),32);
    bufp->fullIData(oldp+14,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                             .__PVT__INT_06_T1),32);
    bufp->fullIData(oldp+15,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                             .__PVT__INT_07_T2),32);
    bufp->fullIData(oldp+16,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                             .__PVT__INT_08_S0),32);
    bufp->fullIData(oldp+17,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                             .__PVT__INT_09_S1),32);
    bufp->fullIData(oldp+18,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                             .__PVT__INT_10_A0),32);
    bufp->fullIData(oldp+19,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                             .__PVT__INT_11_A1),32);
    bufp->fullIData(oldp+20,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                             .__PVT__INT_12_A2),32);
    bufp->fullIData(oldp+21,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                             .__PVT__INT_13_A3),32);
    bufp->fullIData(oldp+22,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                             .__PVT__INT_14_A4),32);
    bufp->fullIData(oldp+23,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                             .__PVT__INT_15_A5),32);
    bufp->fullIData(oldp+24,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                             .__PVT__INT_16_A6),32);
    bufp->fullIData(oldp+25,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                             .__PVT__INT_17_A7),32);
    bufp->fullIData(oldp+26,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                             .__PVT__INT_18_S2),32);
    bufp->fullIData(oldp+27,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                             .__PVT__INT_19_S3),32);
    bufp->fullIData(oldp+28,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                             .__PVT__INT_20_S4),32);
    bufp->fullIData(oldp+29,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                             .__PVT__INT_21_S5),32);
    bufp->fullIData(oldp+30,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                             .__PVT__INT_22_S6),32);
    bufp->fullIData(oldp+31,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                             .__PVT__INT_23_S7),32);
    bufp->fullIData(oldp+32,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                             .__PVT__INT_24_S8),32);
    bufp->fullIData(oldp+33,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                             .__PVT__INT_25_S9),32);
    bufp->fullIData(oldp+34,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                             .__PVT__INT_26_S10),32);
    bufp->fullIData(oldp+35,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                             .__PVT__INT_27_S11),32);
    bufp->fullIData(oldp+36,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                             .__PVT__INT_28_T3),32);
    bufp->fullIData(oldp+37,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                             .__PVT__INT_29_T4),32);
    bufp->fullIData(oldp+38,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                             .__PVT__INT_30_T5),32);
    bufp->fullIData(oldp+39,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_int_alias
                             .__PVT__INT_31_T6),32);
    bufp->fullCData(oldp+40,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_next),4);
    bufp->fullBit(oldp+41,((0xbU == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_next))));
    bufp->fullBit(oldp+42,((3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_next))));
    bufp->fullBit(oldp+43,((4U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_next))));
    bufp->fullBit(oldp+44,((8U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_next))));
    bufp->fullIData(oldp+45,(vlSelf->scr1_top_tb_ahb__DOT__watchdogs_cnt),32);
    bufp->fullWData(oldp+46,(vlSelf->scr1_top_tb_ahb__DOT__test_file),256);
    bufp->fullBit(oldp+54,(vlSelf->scr1_top_tb_ahb__DOT__test_running));
    bufp->fullIData(oldp+55,(vlSelf->scr1_top_tb_ahb__DOT__tests_passed),32);
    bufp->fullIData(oldp+56,(vlSelf->scr1_top_tb_ahb__DOT__tests_total),32);
    bufp->fullCData(oldp+57,(vlSelf->scr1_top_tb_ahb__DOT__rst_cnt),2);
    bufp->fullBit(oldp+58,(vlSelf->scr1_top_tb_ahb__DOT__rst_init));
    bufp->fullBit(oldp+59,(vlSelf->scr1_top_tb_ahb__DOT__identify_test__Vstatic__res));
    bufp->fullWData(oldp+60,(vlSelf->scr1_top_tb_ahb__DOT__identify_test__Vstatic__pattern_compliance),80);
    bufp->fullIData(oldp+63,(vlSelf->scr1_top_tb_ahb__DOT__identify_test__Vstatic__pattern_arch),23);
    bufp->fullWData(oldp+64,(vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__res),256);
    bufp->fullIData(oldp+72,(vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__i),32);
    bufp->fullIData(oldp+73,(vlSelf->scr1_top_tb_ahb__DOT__get_filename__Vstatic__j),32);
    bufp->fullWData(oldp+74,(vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__res),256);
    bufp->fullIData(oldp+82,(vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__i),32);
    bufp->fullIData(oldp+83,(vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__j),32);
    bufp->fullWData(oldp+84,(vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__pattern_compliance),80);
    bufp->fullIData(oldp+87,(vlSelf->scr1_top_tb_ahb__DOT__get_ref_filename__Vstatic__pattern_arch),23);
    bufp->fullIData(oldp+88,(vlSelf->scr1_top_tb_ahb__DOT__remove_trailing_whitespaces__Vstatic__i),32);
    bufp->fullWData(oldp+89,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__test_file),256);
    bufp->fullBit(oldp+97,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__test_file_init));
    bufp->fullIData(oldp+98,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_imem_rdata),32);
    bufp->fullIData(oldp+99,(((0x1fU >= ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_rdata_shift_reg) 
                                         << 3U)) ? 
                              (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_rdata_local 
                               >> ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_rdata_shift_reg) 
                                   << 3U)) : 0U)),32);
    bufp->fullIData(oldp+100,((((5U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
                                | (8U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)))
                                ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data1_ff
                                : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data0_ff)),32);
    bufp->fullBit(oldp+101,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_wr_ff));
    bufp->fullBit(oldp+102,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_postexec_ff));
    bufp->fullSData(oldp+103,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regno_ff),12);
    bufp->fullCData(oldp+104,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_size_ff),2);
    bufp->fullCData(oldp+105,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff),4);
    bufp->fullBit(oldp+106,((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))));
    bufp->fullBit(oldp+107,((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))));
    bufp->fullBit(oldp+108,((9U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))));
    bufp->fullBit(oldp+109,((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff))));
    bufp->fullBit(oldp+110,(((5U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
                             | (8U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)))));
    bufp->fullBit(oldp+111,(((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
                             & (1U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)))));
    bufp->fullIData(oldp+112,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_command_ff),32);
    bufp->fullBit(oldp+113,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_autoexec_ff));
    bufp->fullIData(oldp+114,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf0_ff),32);
    bufp->fullIData(oldp+115,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf1_ff),32);
    bufp->fullIData(oldp+116,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf2_ff),32);
    bufp->fullIData(oldp+117,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf3_ff),32);
    bufp->fullIData(oldp+118,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf4_ff),32);
    bufp->fullIData(oldp+119,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_progbuf5_ff),32);
    bufp->fullIData(oldp+120,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data0_ff),32);
    bufp->fullIData(oldp+121,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data1_ff),32);
    bufp->fullBit(oldp+122,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_err_exc_ff));
    bufp->fullBit(oldp+123,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_err_acc_busy_ff));
    bufp->fullCData(oldp+124,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abstractcs_cmderr_ff),3);
    bufp->fullBit(oldp+125,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_req_ff));
    bufp->fullCData(oldp+126,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rd),5);
    bufp->fullCData(oldp+127,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_rs1),5);
    bufp->fullCData(oldp+128,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_instr_mem_funct3),3);
    bufp->fullIData(oldp+129,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_instr_next),32);
    bufp->fullIData(oldp+130,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_instr_ff),32);
    bufp->fullBit(oldp+131,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_pbuf_ebreak_ff));
    bufp->fullIData(oldp+132,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__hdu2ifu_pbuf_instr),32);
    bufp->fullBit(oldp+133,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__idu2exu_use_rs1_ff));
    bufp->fullBit(oldp+134,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__idu2exu_use_rs2_ff));
    bufp->fullBit(oldp+135,((1U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_iter_cnt)));
    bufp->fullIData(oldp+136,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_dvdnd_lo_ff),32);
    bufp->fullIData(oldp+137,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_iter_cnt),32);
    bufp->fullBit(oldp+138,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_c_ff));
    bufp->fullIData(oldp+139,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_hi_ff),32);
    bufp->fullIData(oldp+140,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_lo_ff),32);
    bufp->fullIData(oldp+141,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tdata2_ff[0U]),32);
    bufp->fullIData(oldp+142,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tdata2_ff[1U]),32);
    bufp->fullIData(oldp+143,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tdata2_ff[2U]),32);
    bufp->fullIData(oldp+144,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tdata2_ff[3U]),32);
    bufp->fullBit(oldp+145,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_r[2U] 
                                   >> 3U))));
    bufp->fullCData(oldp+146,((7U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_r[2U])),3);
    bufp->fullIData(oldp+147,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_r[1U]),32);
    bufp->fullIData(oldp+148,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_r[0U]),32);
    bufp->fullIData(oldp+149,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_r),32);
    bufp->fullIData(oldp+150,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_rdata_local),32);
    bufp->fullCData(oldp+151,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_rdata_shift_reg),2);
    bufp->fullIData(oldp+152,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__i_dp_memory__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+153,(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__test_pass));
    bufp->fullBit(oldp+154,(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__test_error));
    bufp->fullIData(oldp+155,(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__f_test),32);
    bufp->fullWData(oldp+156,(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__full_filename),256);
    bufp->fullIData(oldp+164,(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmpv),32);
    bufp->fullIData(oldp+165,(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__start),32);
    bufp->fullIData(oldp+166,(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__stop),32);
    bufp->fullIData(oldp+167,(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__ref_data),32);
    bufp->fullIData(oldp+168,(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__test_data),32);
    bufp->fullIData(oldp+169,(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__start_addr),32);
    bufp->fullIData(oldp+170,(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__trap_addr),32);
    bufp->fullIData(oldp+171,(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__fd),32);
    bufp->fullWData(oldp+172,(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__tmpstr),2048);
    bufp->fullBit(oldp+236,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_ir_shift_ff));
    bufp->fullCData(oldp+237,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_shift_ff),5);
    bufp->fullBit(oldp+238,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_bypass_reg__DOT__shift_reg));
    bufp->fullBit(oldp+239,((1U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_idcode_reg__DOT__shift_reg)));
    bufp->fullBit(oldp+240,((1U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_dr_bld_id_reg__DOT__shift_reg)));
    bufp->fullIData(oldp+241,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_dr_bld_id_reg__DOT__shift_reg),32);
    bufp->fullIData(oldp+242,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__i_tap_idcode_reg__DOT__shift_reg),32);
    bufp->fullIData(oldp+243,(vlSelf->scr1_top_tb_ahb__DOT__imem_hrdata),32);
    bufp->fullIData(oldp+244,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__tmp),32);
    bufp->fullIData(oldp+245,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_read_mem__Vstatic__addr_mirage),20);
    bufp->fullBit(oldp+246,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_ahb_state));
    bufp->fullIData(oldp+247,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_ahb_addr),32);
    bufp->fullIData(oldp+248,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_req_ack_stall),32);
    bufp->fullBit(oldp+249,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_req_ack_rnd));
    bufp->fullBit(oldp+250,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_req_ack));
    bufp->fullIData(oldp+251,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_hrdata_l),32);
    bufp->fullIData(oldp+252,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack_stall),32);
    bufp->fullBit(oldp+253,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack_rnd));
    bufp->fullCData(oldp+254,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_size),3);
    bufp->fullIData(oldp+255,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_hrdata_l),32);
    bufp->fullBit(oldp+256,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_rstn_reset_sync__DOT__rst_n_dff) 
                                   >> 1U))));
    bufp->fullBit(oldp+257,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_cpu_rstn_reset_sync__DOT__rst_n_dff) 
                                   >> 1U))));
    bufp->fullCData(oldp+258,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_cpu_rstn_reset_sync__DOT__rst_n_dff),2);
    bufp->fullCData(oldp+259,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_pwrup_rstn_reset_sync__DOT__rst_n_dff),2);
    bufp->fullCData(oldp+260,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_rstn_reset_sync__DOT__rst_n_dff),2);
    bufp->fullBit(oldp+261,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff));
    bufp->fullBit(oldp+262,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff));
    bufp->fullBit(oldp+263,((1U & (~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_status_sync__DOT__data_dff) 
                                      >> 1U)))));
    bufp->fullBit(oldp+264,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_update));
    bufp->fullBit(oldp+265,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_tdi));
    bufp->fullBit(oldp+266,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_scu_ch_sel));
    bufp->fullBit(oldp+267,((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_ff))));
    bufp->fullBit(oldp+268,((1U & (~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_status_sync__DOT__data_dff) 
                                      >> 1U)))));
    bufp->fullBit(oldp+269,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_dr_upd_req));
    bufp->fullCData(oldp+270,((0xfU & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_ff) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+271,((3U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_ff) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+272,((3U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_ff))),2);
    bufp->fullCData(oldp+273,((0xfU & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shadow_ff) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+274,((3U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shadow_ff) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+275,((3U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shadow_ff))),2);
    bufp->fullCData(oldp+276,((3U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_control_ff) 
                                     >> 2U))),2);
    bufp->fullBit(oldp+277,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_control_ff) 
                                   >> 1U))));
    bufp->fullBit(oldp+278,((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_control_ff))));
    bufp->fullBit(oldp+279,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_status_ff_dly) 
                                   >> 3U))));
    bufp->fullBit(oldp+280,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_status_ff_dly) 
                                   >> 2U))));
    bufp->fullBit(oldp+281,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_status_ff_dly) 
                                   >> 1U))));
    bufp->fullBit(oldp+282,((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_status_ff_dly))));
    bufp->fullBit(oldp+283,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_sticky_sts_ff) 
                                   >> 3U))));
    bufp->fullBit(oldp+284,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_sticky_sts_ff) 
                                   >> 2U))));
    bufp->fullBit(oldp+285,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_sticky_sts_ff) 
                                   >> 1U))));
    bufp->fullBit(oldp+286,((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_sticky_sts_ff))));
    bufp->fullBit(oldp+287,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_status_ff));
    bufp->fullBit(oldp+288,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_status_sync__DOT__data_dff) 
                                   >> 1U))));
    bufp->fullBit(oldp+289,((1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_control_ff)))));
    bufp->fullBit(oldp+290,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_status_ff));
    bufp->fullBit(oldp+291,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_status_sync__DOT__data_dff) 
                                   >> 1U))));
    bufp->fullBit(oldp+292,((1U & (~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_control_ff) 
                                      >> 1U)))));
    bufp->fullBit(oldp+293,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_status_ff));
    bufp->fullBit(oldp+294,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_status_sync__DOT__data_dff) 
                                   >> 1U))));
    bufp->fullCData(oldp+295,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_status_sync__DOT__data_dff),2);
    bufp->fullCData(oldp+296,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_status_sync__DOT__data_dff),2);
    bufp->fullCData(oldp+297,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_sys_rstn_status_sync__DOT__data_dff),2);
    bufp->fullIData(oldp+298,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+299,((1U & VL_REDXOR_4((6U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg_sync))))));
    bufp->fullBit(oldp+300,((1U & VL_REDXOR_4((0xcU 
                                               & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg_sync))))));
    bufp->fullCData(oldp+301,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divpos_sync),4);
    bufp->fullCData(oldp+302,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg_sync),4);
    bufp->fullCData(oldp+303,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_tdi_sync),3);
    bufp->fullBit(oldp+304,((1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_full)))));
    bufp->fullBit(oldp+305,((1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_full)))));
    bufp->fullCData(oldp+306,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_imem_resp),2);
    bufp->fullCData(oldp+307,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_resp),2);
    bufp->fullIData(oldp+308,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_rdata),32);
    bufp->fullCData(oldp+309,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_resp),2);
    bufp->fullBit(oldp+310,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__timer_irq));
    bufp->fullQData(oldp+311,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtime_reg),64);
    bufp->fullIData(oldp+313,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_ff),32);
    bufp->fullBit(oldp+314,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__init_pc));
    bufp->fullBit(oldp+315,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mip_meip));
    bufp->fullBit(oldp+316,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_err_rvi_hi));
    bufp->fullBit(oldp+317,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd_ff));
    bufp->fullIData(oldp+318,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus),32);
    bufp->fullBit(oldp+319,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_mie_ff));
    bufp->fullBit(oldp+320,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_mpie_ff));
    bufp->fullIData(oldp+321,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie),32);
    bufp->fullBit(oldp+322,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_mtie_ff));
    bufp->fullBit(oldp+323,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_meie_ff));
    bufp->fullBit(oldp+324,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_msie_ff));
    bufp->fullIData(oldp+325,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtvec_base),26);
    bufp->fullBit(oldp+326,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtvec_mode_ff));
    bufp->fullIData(oldp+327,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mscratch_ff),32);
    bufp->fullIData(oldp+328,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mepc_ff),31);
    bufp->fullIData(oldp+329,((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mepc_ff 
                               << 1U)),32);
    bufp->fullBit(oldp+330,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_i_ff));
    bufp->fullCData(oldp+331,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_ec_ff),4);
    bufp->fullIData(oldp+332,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtval_ff),32);
    bufp->fullQData(oldp+333,(((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_hi_ff 
                                << 8U) | (QData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_lo_ff)))),64);
    bufp->fullCData(oldp+335,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_lo_ff),8);
    bufp->fullQData(oldp+336,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_hi_ff),56);
    bufp->fullQData(oldp+338,((0xffffffffffffffULL 
                               & (1ULL + vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_hi_ff))),56);
    bufp->fullQData(oldp+340,(((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_hi_ff 
                                << 8U) | (QData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_lo_ff)))),64);
    bufp->fullBit(oldp+342,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten_cy_ff));
    bufp->fullCData(oldp+343,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_lo_ff),8);
    bufp->fullBit(oldp+344,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_hi_inc));
    bufp->fullQData(oldp+345,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_hi_ff),56);
    bufp->fullQData(oldp+347,((0xffffffffffffffULL 
                               & (1ULL + vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_hi_ff))),56);
    bufp->fullIData(oldp+349,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten),32);
    bufp->fullBit(oldp+350,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten_ir_ff));
    bufp->fullBit(oldp+351,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_eirq_pnd_en));
    bufp->fullBit(oldp+352,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_tirq_pnd_en));
    bufp->fullBit(oldp+353,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_exc_req_ff));
    bufp->fullBit(oldp+354,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_run_start_ff));
    bufp->fullBit(oldp+355,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_halted_ff));
    bufp->fullCData(oldp+356,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__init_pc_v),4);
    bufp->fullBit(oldp+357,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__csr_access_ff));
    bufp->fullBit(oldp+358,((1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__csr_access_ff)))));
    bufp->fullCData(oldp+359,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_ff),2);
    bufp->fullBit(oldp+360,((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_ff))));
    bufp->fullBit(oldp+361,((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_ff))));
    bufp->fullBit(oldp+362,((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_ff))));
    bufp->fullBit(oldp+363,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_fsm_curr));
    bufp->fullBit(oldp+364,((1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_fsm_curr)))));
    bufp->fullCData(oldp+365,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff),4);
    bufp->fullBit(oldp+366,(((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff)) 
                             | ((4U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff)) 
                                | ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff)) 
                                   | ((5U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff)) 
                                      | (3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff))))))));
    bufp->fullBit(oldp+367,(((6U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff)) 
                             | ((7U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff)) 
                                | (8U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff))))));
    bufp->fullBit(oldp+368,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__new_pc_unaligned_ff));
    bufp->fullBit(oldp+369,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__instr_hi_rvi_lo_ff));
    bufp->fullBit(oldp+370,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rd_hword));
    bufp->fullCData(oldp+371,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr),3);
    bufp->fullCData(oldp+372,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr),3);
    bufp->fullSData(oldp+373,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data[0]),16);
    bufp->fullSData(oldp+374,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data[1]),16);
    bufp->fullSData(oldp+375,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data[2]),16);
    bufp->fullSData(oldp+376,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data[3]),16);
    bufp->fullSData(oldp+377,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data_head),16);
    bufp->fullSData(oldp+378,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data
                              [(3U & ((IData)(1U) + (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr)))]),16);
    bufp->fullBit(oldp+379,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err[0]));
    bufp->fullBit(oldp+380,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err[1]));
    bufp->fullBit(oldp+381,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err[2]));
    bufp->fullBit(oldp+382,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err[3]));
    bufp->fullBit(oldp+383,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err_head));
    bufp->fullBit(oldp+384,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_err
                            [(3U & ((IData)(1U) + (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr)))]));
    bufp->fullBit(oldp+385,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_is_empty));
    bufp->fullBit(oldp+386,((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_ocpd_h))));
    bufp->fullBit(oldp+387,((1U & (~ (IData)((3U == 
                                              (3U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data_head))))))));
    bufp->fullBit(oldp+388,((3U == (3U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_data_head)))));
    bufp->fullCData(oldp+389,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_ocpd_h),3);
    bufp->fullBit(oldp+390,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__ifu_fsm_curr));
    bufp->fullBit(oldp+391,((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_discard_cnt))));
    bufp->fullIData(oldp+392,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_addr_ff),30);
    bufp->fullCData(oldp+393,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_pnd_txns_cnt),3);
    bufp->fullCData(oldp+394,((7U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_pnd_txns_cnt) 
                                     - (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_discard_cnt)))),3);
    bufp->fullBit(oldp+395,((7U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_pnd_txns_cnt))));
    bufp->fullCData(oldp+396,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_discard_cnt),3);
    bufp->fullSData(oldp+397,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lines),16);
    bufp->fullSData(oldp+398,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lines_sync),16);
    bufp->fullSData(oldp+399,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lines_dly),16);
    bufp->fullCData(oldp+400,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_cisv_ff),5);
    bufp->fullBit(oldp+401,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT____VdfgExtracted_h169dacea__0));
    bufp->fullBit(oldp+402,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT____VdfgExtracted_h1692cb19__0));
    bufp->fullCData(oldp+403,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_idxr_ff),4);
    bufp->fullSData(oldp+404,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_ff),16);
    bufp->fullSData(oldp+405,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_isvr_ff),16);
    bufp->fullSData(oldp+406,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ier_ff),16);
    bufp->fullSData(oldp+407,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_imr_ff),16);
    bufp->fullSData(oldp+408,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_iinvr_ff),16);
    bufp->fullBit(oldp+409,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_icsr) 
                                   >> 8U))));
    bufp->fullBit(oldp+410,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_icsr) 
                                   >> 7U))));
    bufp->fullBit(oldp+411,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_icsr) 
                                   >> 6U))));
    bufp->fullBit(oldp+412,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_icsr) 
                                   >> 5U))));
    bufp->fullBit(oldp+413,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_icsr) 
                                   >> 4U))));
    bufp->fullCData(oldp+414,((0xfU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_icsr))),4);
    bufp->fullBit(oldp+415,((1U & (~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_cisv_ff) 
                                      >> 4U)))));
    bufp->fullCData(oldp+416,((0xfU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_cisv_ff))),4);
    bufp->fullBit(oldp+417,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irr_priority
                            .__PVT__vd));
    bufp->fullCData(oldp+418,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irr_priority
                              .__PVT__idx),4);
    bufp->fullBit(oldp+419,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__isvr_priority_eoi
                            .__PVT__vd));
    bufp->fullCData(oldp+420,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__isvr_priority_eoi
                              .__PVT__idx),4);
    bufp->fullSData(oldp+421,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ier_ff) 
                               & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_ff))),16);
    bufp->fullBit(oldp+422,((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irr_priority
                             .__PVT__idx < (0xfU & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_cisv_ff)))));
    bufp->fullSData(oldp+423,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_isvr_eoi),16);
    bufp->fullIData(oldp+424,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0U]),32);
    bufp->fullIData(oldp+425,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[1U]),32);
    bufp->fullIData(oldp+426,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[2U]),32);
    bufp->fullIData(oldp+427,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[3U]),32);
    bufp->fullIData(oldp+428,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[4U]),32);
    bufp->fullIData(oldp+429,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[5U]),32);
    bufp->fullIData(oldp+430,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[6U]),32);
    bufp->fullIData(oldp+431,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[7U]),32);
    bufp->fullIData(oldp+432,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[8U]),32);
    bufp->fullIData(oldp+433,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[9U]),32);
    bufp->fullIData(oldp+434,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xaU]),32);
    bufp->fullIData(oldp+435,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xbU]),32);
    bufp->fullIData(oldp+436,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xcU]),32);
    bufp->fullIData(oldp+437,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xdU]),32);
    bufp->fullIData(oldp+438,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xeU]),32);
    bufp->fullIData(oldp+439,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0xfU]),32);
    bufp->fullIData(oldp+440,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x10U]),32);
    bufp->fullIData(oldp+441,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x11U]),32);
    bufp->fullIData(oldp+442,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x12U]),32);
    bufp->fullIData(oldp+443,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x13U]),32);
    bufp->fullIData(oldp+444,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x14U]),32);
    bufp->fullIData(oldp+445,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x15U]),32);
    bufp->fullIData(oldp+446,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x16U]),32);
    bufp->fullIData(oldp+447,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x17U]),32);
    bufp->fullIData(oldp+448,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x18U]),32);
    bufp->fullIData(oldp+449,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x19U]),32);
    bufp->fullIData(oldp+450,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x1aU]),32);
    bufp->fullIData(oldp+451,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x1bU]),32);
    bufp->fullIData(oldp+452,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x1cU]),32);
    bufp->fullIData(oldp+453,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x1dU]),32);
    bufp->fullIData(oldp+454,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_mprf__DOT__mprf_int[0x1eU]),32);
    bufp->fullBit(oldp+455,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_full));
    bufp->fullBit(oldp+456,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__fsm));
    bufp->fullCData(oldp+457,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__port_sel_r),2);
    bufp->fullBit(oldp+458,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__fsm));
    bufp->fullBit(oldp+459,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_full));
    bufp->fullBit(oldp+460,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__fsm));
    bufp->fullBit(oldp+461,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__port_sel_r));
    bufp->fullQData(oldp+462,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmp_reg),64);
    bufp->fullBit(oldp+464,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timer_en));
    bufp->fullSData(oldp+465,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timer_div),10);
    bufp->fullSData(oldp+466,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timeclk_cnt),10);
    bufp->fullBit(oldp+467,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten_cy_ff) 
                                   | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_upd)))));
    bufp->fullBit(oldp+468,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_hi_inc) 
                             | (0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_upd)))));
    bufp->fullCData(oldp+469,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_start_vd)
                                ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irr_priority
                               .__PVT__idx : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_eoi_req)
                                               ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__isvr_priority_eoi
                                                  .__PVT__vd
                                                   ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__isvr_priority_eoi
                                                  .__PVT__idx
                                                   : 0x10U)
                                               : 0U))),5);
    bufp->fullBit(oldp+470,((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irr_priority
                             .__PVT__vd & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__soi_wr_req))));
    bufp->fullBit(oldp+471,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_next) 
                             != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_ff))));
    bufp->fullBit(oldp+472,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd_ff)
                              ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_exc_req)
                              : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_exc_req_ff))));
    bufp->fullBit(oldp+473,(((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_fsm_curr)) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__dmem_req_vd))));
    bufp->fullBit(oldp+474,(((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_full)) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_req))));
    bufp->fullBit(oldp+475,(((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_rd)) 
                             & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_full)) 
                                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_req)))));
    bufp->fullBit(oldp+476,(((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_resp)) 
                             ^ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_req))));
    bufp->fullBit(oldp+477,(((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_is_empty)) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_en))));
    bufp->fullBit(oldp+478,(((3U & (((IData)(4U) - 
                                     ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr) 
                                      - (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr_next))) 
                                    >> 1U)) > (7U & 
                                               ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_pnd_txns_cnt) 
                                                - (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_discard_cnt))))));
    bufp->fullCData(oldp+479,((7U & ((IData)(4U) - 
                                     ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr) 
                                      - (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr_next))))),3);
    bufp->fullCData(oldp+480,((3U & (((IData)(4U) - 
                                      ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr) 
                                       - (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr_next))) 
                                     >> 1U))),2);
    bufp->fullIData(oldp+481,((0x3fffffffU & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req)
                                               ? ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc 
                                                   >> 2U) 
                                                  + (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_handshake_done))
                                               : ((0xfU 
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
    bufp->fullBit(oldp+482,(((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_full)) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_imem_req))));
    bufp->fullBit(oldp+483,(((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_rd)) 
                             & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_full)) 
                                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_imem_req)))));
    bufp->fullBit(oldp+484,(((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_imem_resp)) 
                             ^ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_imem_req))));
    bufp->fullBit(oldp+485,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_sel));
    bufp->fullCData(oldp+486,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_id),2);
    bufp->fullBit(oldp+487,((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_ff))));
    bufp->fullBit(oldp+488,((1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ndmreset_ff)))));
    bufp->fullBit(oldp+489,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_req_ff));
    bufp->fullBit(oldp+490,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_haltreq_ff));
    bufp->fullBit(oldp+491,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_resumereq_ff));
    bufp->fullBit(oldp+492,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ackhavereset_ff));
    bufp->fullBit(oldp+493,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ndmreset_ff));
    bufp->fullBit(oldp+494,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__havereset_skip_pwrup_ff));
    bufp->fullBit(oldp+495,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_havereset_ff));
    bufp->fullBit(oldp+496,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_resumeack_ff));
    bufp->fullBit(oldp+497,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_halted_ff));
    bufp->fullCData(oldp+498,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff),3);
    bufp->fullBit(oldp+499,((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff))));
    bufp->fullBit(oldp+500,((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff))));
    bufp->fullBit(oldp+501,((3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff))));
    bufp->fullBit(oldp+502,((4U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff))));
    bufp->fullBit(oldp+503,((5U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff))));
    bufp->fullQData(oldp+504,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_ff),41);
    bufp->fullQData(oldp+506,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_rdata),41);
    bufp->fullIData(oldp+508,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__dm_rdata_ff),32);
    bufp->fullBit(oldp+509,((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_id))));
    bufp->fullBit(oldp+510,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_event));
    bufp->fullBit(oldp+511,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_hart_status) 
                                   >> 3U))));
    bufp->fullBit(oldp+512,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_hart_status) 
                                   >> 2U))));
    bufp->fullCData(oldp+513,((3U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_hart_status))),2);
    bufp->fullCData(oldp+514,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_addr_ff),3);
    bufp->fullBit(oldp+515,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                                   >> 4U))));
    bufp->fullBit(oldp+516,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                                   >> 2U))));
    bufp->fullBit(oldp+517,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                                   >> 5U))));
    bufp->fullBit(oldp+518,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                                   >> 3U))));
    bufp->fullBit(oldp+519,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                                   >> 1U))));
    bufp->fullIData(oldp+520,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_ff),32);
    bufp->fullBit(oldp+521,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__hdu2ifu_pbuf_vd));
    bufp->fullBit(oldp+522,((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_fsm_curr))));
    bufp->fullCData(oldp+523,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state),2);
    bufp->fullBit(oldp+524,((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state))));
    bufp->fullBit(oldp+525,((3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state))));
    bufp->fullBit(oldp+526,((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state))));
    bufp->fullBit(oldp+527,((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state))));
    bufp->fullBit(oldp+528,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_trans));
    bufp->fullBit(oldp+529,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_update));
    bufp->fullBit(oldp+530,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                                   >> 4U))));
    bufp->fullBit(oldp+531,((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl))));
    bufp->fullCData(oldp+532,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__halt_req_timeout_cnt),6);
    bufp->fullBit(oldp+533,((1U & (~ (IData)((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__halt_req_timeout_cnt)))))));
    bufp->fullBit(oldp+534,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_haltstatus) 
                                   >> 3U))));
    bufp->fullCData(oldp+535,((7U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_haltstatus))),3);
    bufp->fullCData(oldp+536,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_fsm_curr),2);
    bufp->fullBit(oldp+537,((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_fsm_curr))));
    bufp->fullBit(oldp+538,((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_fsm_curr))));
    bufp->fullBit(oldp+539,((7U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_addr_ff))));
    bufp->fullBit(oldp+540,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_instr_wait_latching));
    bufp->fullBit(oldp+541,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_ebreakm));
    bufp->fullBit(oldp+542,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_stepie));
    bufp->fullBit(oldp+543,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_step));
    bufp->fullCData(oldp+544,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_cause),3);
    bufp->fullCData(oldp+545,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tselect_ff),3);
    bufp->fullCData(oldp+546,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_ff),4);
    bufp->fullCData(oldp+547,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_ff),4);
    bufp->fullCData(oldp+548,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_ff),4);
    bufp->fullCData(oldp+549,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_ff),4);
    bufp->fullCData(oldp+550,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_ff),4);
    bufp->fullCData(oldp+551,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_ff),4);
    bufp->fullCData(oldp+552,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_ff),4);
    bufp->fullBit(oldp+553,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_dmode_ff));
    bufp->fullBit(oldp+554,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_m_ff));
    bufp->fullBit(oldp+555,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_action_ff));
    bufp->fullBit(oldp+556,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_hit_ff));
    bufp->fullSData(oldp+557,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_count_ff),14);
    bufp->fullBit(oldp+558,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_skip_ff));
    bufp->fullBit(oldp+559,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_sel_tapout));
    bufp->fullCData(oldp+560,(((0x10U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_ff))
                                ? 1U : ((0x11U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_ff))
                                         ? 2U : 0U))),2);
    bufp->fullBit(oldp+561,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_scu_ch_sel_tapout));
    bufp->fullCData(oldp+562,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_ff),5);
    bufp->fullBit(oldp+563,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__dr_bypass_sel));
    bufp->fullBit(oldp+564,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__dr_idcode_sel));
    bufp->fullBit(oldp+565,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__dr_bld_id_sel));
    bufp->fullBit(oldp+566,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divneg));
    bufp->fullBit(oldp+567,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_dr_capture_ff));
    bufp->fullBit(oldp+568,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_dr_shift_ff));
    bufp->fullBit(oldp+569,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_dr_update_ff));
    bufp->fullBit(oldp+570,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_divpos));
    bufp->fullBit(oldp+571,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_capture));
    bufp->fullBit(oldp+572,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_shift));
    bufp->fullBit(oldp+573,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff));
    bufp->fullBit(oldp+574,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff));
    bufp->fullBit(oldp+575,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_capture) 
                             | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_shift))));
    bufp->fullBit(oldp+576,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_dr_cap_req));
    bufp->fullBit(oldp+577,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_dr_shft_req));
    bufp->fullBit(oldp+578,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_dr_cap_req) 
                             | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_dr_shft_req))));
    bufp->fullBit(oldp+579,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_control_wr_req));
    bufp->fullCData(oldp+580,((3U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_mode_ff) 
                                     >> 2U))),2);
    bufp->fullBit(oldp+581,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_mode_ff) 
                                   >> 1U))));
    bufp->fullBit(oldp+582,((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_mode_ff))));
    bufp->fullBit(oldp+583,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_mode_wr_req));
    bufp->fullBit(oldp+584,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_sticky_sts_wr_req));
    bufp->fullBit(oldp+585,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_rise_load));
    bufp->fullBit(oldp+586,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__tck_rise_reset));
    bufp->fullBit(oldp+587,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h2097eaa3__0));
    bufp->fullCData(oldp+588,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_dmem_width),2);
    bufp->fullCData(oldp+589,((0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                        >> 5U))),5);
    bufp->fullSData(oldp+590,((0xfffU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                         >> 5U))),12);
    bufp->fullCData(oldp+591,((3U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                     >> 0x1cU))),2);
    bufp->fullCData(oldp+592,((7U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                     >> 5U))),3);
    bufp->fullBit(oldp+593,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h2158131e__0));
    bufp->fullBit(oldp+594,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h2097eaa3__0));
    bufp->fullCData(oldp+595,((3U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                     >> 5U))),2);
    bufp->fullBit(oldp+596,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_hdu_req));
    bufp->fullBit(oldp+597,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_brkm_req));
    bufp->fullBit(oldp+598,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                   >> 0xaU))));
    bufp->fullBit(oldp+599,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                   >> 9U))));
    bufp->fullCData(oldp+600,((0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                        >> 4U))),5);
    bufp->fullBit(oldp+601,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                   >> 3U))));
    bufp->fullCData(oldp+602,((0xfU & ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                        << 1U) | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                                  >> 0x1fU)))),4);
    bufp->fullBit(oldp+603,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                   >> 0x1eU))));
    bufp->fullCData(oldp+604,((3U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                     >> 0x1cU))),2);
    bufp->fullCData(oldp+605,((7U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                     >> 0x19U))),3);
    bufp->fullBit(oldp+606,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                   >> 0x18U))));
    bufp->fullBit(oldp+607,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                   >> 0x17U))));
    bufp->fullBit(oldp+608,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                   >> 0x16U))));
    bufp->fullBit(oldp+609,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                   >> 0x15U))));
    bufp->fullBit(oldp+610,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                   >> 0x14U))));
    bufp->fullCData(oldp+611,((0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+612,((0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                        >> 0xaU))),5);
    bufp->fullIData(oldp+613,(((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                << 0x1bU) | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                             >> 5U))),32);
    bufp->fullBit(oldp+614,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                   >> 4U))));
    bufp->fullCData(oldp+615,((0xfU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])),4);
    bufp->fullIData(oldp+616,((0x73U | ((0xfff00000U 
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
    bufp->fullIData(oldp+617,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_addr_op2),32);
    bufp->fullCData(oldp+618,((0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                        >> 4U))),5);
    bufp->fullBit(oldp+619,(((0xcU == (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                                >> 4U))) 
                             | ((0xdU == (0x1fU & (
                                                   vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                                   >> 4U))) 
                                | (0xeU == (0x1fU & 
                                            (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                             >> 4U)))))));
    bufp->fullCData(oldp+620,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__shft_cmd),2);
    bufp->fullBit(oldp+621,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_cmd_is_iter));
    bufp->fullCData(oldp+622,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_cmd_is_iter)
                                ? 2U : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_cmd_mul)
                                         ? 1U : 0U))),2);
    bufp->fullBit(oldp+623,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_cmd_mul));
    bufp->fullCData(oldp+624,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mul_cmd),2);
    bufp->fullBit(oldp+625,((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mul_cmd))));
    bufp->fullCData(oldp+626,((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_cmd_rem) 
                                << 1U) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgTmp_h8ffc7cb8__0))),2);
    bufp->fullBit(oldp+627,((0U == (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_cmd_rem) 
                                     << 1U) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgTmp_h8ffc7cb8__0)))));
    bufp->fullBit(oldp+628,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_cmd_rem));
    bufp->fullBit(oldp+629,((1U & (~ (IData)((3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mul_cmd)))))));
    bufp->fullBit(oldp+630,((1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgTmp_hf046458b__0)))));
    bufp->fullBit(oldp+631,((1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgTmp_h8ffc7cb8__0)))));
    bufp->fullCData(oldp+632,((0xfU & ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                        << 1U) | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                                  >> 0x1fU)))),4);
    bufp->fullBit(oldp+633,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h2158131e__0));
    bufp->fullBit(oldp+634,(((3U == (0xfU & ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                              << 1U) 
                                             | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                                >> 0x1fU)))) 
                             | (8U == (0xfU & ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                                << 1U) 
                                               | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                                  >> 0x1fU)))))));
    bufp->fullBit(oldp+635,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__dmem_wdth_hword));
    bufp->fullBit(oldp+636,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT____VdfgTmp_hbf509d11__0) 
                             | (6U == (0xfU & ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[2U] 
                                                << 1U) 
                                               | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                                  >> 0x1fU)))))));
    bufp->fullBit(oldp+637,((2U == (3U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                          >> 5U)))));
    bufp->fullQData(oldp+638,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__current_time),64);
    bufp->fullBit(oldp+640,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_update_r));
    bufp->fullCData(oldp+641,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__event_type),8);
    bufp->fullIData(oldp+642,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_pc),32);
    bufp->fullIData(oldp+643,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_npc),32);
    bufp->fullIData(oldp+644,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_instr),32);
    bufp->fullBit(oldp+645,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_up));
    bufp->fullCData(oldp+646,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_addr),5);
    bufp->fullIData(oldp+647,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__mprf_wdata),32);
    bufp->fullBit(oldp+648,(((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                              >> 0x17U) & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_cmp))));
    bufp->fullBit(oldp+649,(((0U == (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_cmd_rem) 
                                      << 1U) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgTmp_h8ffc7cb8__0))) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_ops_diff_sgn))));
    bufp->fullBit(oldp+650,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_cmd_rem) 
                             & ((0U != vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_res_rem) 
                                & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_op1_is_neg) 
                                   ^ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_res_rem_c))))));
    bufp->fullBit(oldp+651,(((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op1 
                              >> 0x1fU) & (~ (IData)(
                                                     (3U 
                                                      == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mul_cmd)))))));
    bufp->fullBit(oldp+652,(((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgTmp_hf046458b__0)) 
                             & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op2 
                                >> 0x1fU))));
    bufp->fullQData(oldp+653,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_cmd_mul)
                                ? (((QData)((IData)(
                                                    ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op1 
                                                      >> 0x1fU) 
                                                     & (~ (IData)(
                                                                  (3U 
                                                                   == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mul_cmd))))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op1)))
                                : 0ULL)),33);
    bufp->fullQData(oldp+655,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_cmd_mul)
                                ? (((QData)((IData)(
                                                    ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgTmp_hf046458b__0)) 
                                                     & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op2 
                                                        >> 0x1fU)))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op2)))
                                : 0ULL)),33);
    bufp->fullQData(oldp+657,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_cmd_mul)
                                ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgTmp_h202d6225__0
                                : 0ULL)),64);
    bufp->fullBit(oldp+659,(((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT____VdfgTmp_h8ffc7cb8__0)) 
                             & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op2 
                                >> 0x1fU))));
    bufp->fullSData(oldp+660,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__irq_lines_reg),16);
    bufp->fullBit(oldp+661,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__soft_irq_reg));
    bufp->fullBit(oldp+662,(vlSelf->scr1_top_tb_ahb__DOT__imem_hready));
    bufp->fullBit(oldp+663,(vlSelf->scr1_top_tb_ahb__DOT__imem_hresp));
    bufp->fullIData(oldp+664,(vlSelf->scr1_top_tb_ahb__DOT__dmem_hrdata),32);
    bufp->fullIData(oldp+665,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_write_mem__Vstatic__addr_mirage),20);
    bufp->fullBit(oldp+666,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack));
    bufp->fullBit(oldp+667,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_state));
    bufp->fullIData(oldp+668,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_addr),32);
    bufp->fullBit(oldp+669,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_wr));
    bufp->fullCData(oldp+670,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_ahb_be),4);
    bufp->fullIData(oldp+671,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_rdata),32);
    bufp->fullBit(oldp+672,((3U == (3U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_rdata 
                                          >> 0x10U)))));
    bufp->fullBit(oldp+673,((3U == (3U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_rdata))));
    bufp->fullSData(oldp+674,((0xffffU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_rdata)),16);
    bufp->fullSData(oldp+675,((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_rdata 
                               >> 0x10U)),16);
    bufp->fullIData(oldp+676,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0),32);
    bufp->fullIData(oldp+677,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__mprf2exu_rs1_data),32);
    bufp->fullIData(oldp+678,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_w_data),32);
    bufp->fullIData(oldp+679,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0),32);
    bufp->fullIData(oldp+680,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_addr_op1),32);
    bufp->fullIData(oldp+681,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__inc_pc),32);
    bufp->fullIData(oldp+682,((0xfffffffeU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0)),32);
    bufp->fullBit(oldp+683,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__lsu_req));
    bufp->fullBit(oldp+684,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__mprf_rs1_req));
    bufp->fullBit(oldp+685,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__mprf_rs2_req));
    bufp->fullBit(oldp+686,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__dmem_addr_mslgn));
    bufp->fullBit(oldp+687,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__dmem_addr_mslgn_l));
    bufp->fullBit(oldp+688,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__dmem_addr_mslgn_s));
    bufp->fullBit(oldp+689,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_req));
    bufp->fullCData(oldp+690,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__port_sel),2);
    bufp->fullCData(oldp+691,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_byteen),4);
    bufp->fullSData(oldp+692,((0x3fffU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0 
                                          >> 2U))),14);
    bufp->fullBit(oldp+693,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__dmem_req_valid));
    bufp->fullBit(oldp+694,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_req));
    bufp->fullBit(oldp+695,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr));
    bufp->fullCData(oldp+696,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr),7);
    bufp->fullIData(oldp+697,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wdata),32);
    bufp->fullBit(oldp+698,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_req) 
                             & (0x10U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_addr)))));
    bufp->fullBit(oldp+699,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_abstractcs));
    bufp->fullBit(oldp+700,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_abstractauto));
    bufp->fullBit(oldp+701,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_command));
    bufp->fullBit(oldp+702,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_data1));
    bufp->fullBit(oldp+703,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf0));
    bufp->fullBit(oldp+704,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf1));
    bufp->fullBit(oldp+705,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf2));
    bufp->fullBit(oldp+706,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf3));
    bufp->fullBit(oldp+707,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf4));
    bufp->fullBit(oldp+708,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf5));
    bufp->fullBit(oldp+709,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_wr_req));
    bufp->fullBit(oldp+710,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_abstractcs))));
    bufp->fullBit(oldp+711,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_data1))));
    bufp->fullBit(oldp+712,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__command_wr_req));
    bufp->fullBit(oldp+713,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_abstractauto))));
    bufp->fullBit(oldp+714,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf0))));
    bufp->fullBit(oldp+715,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf1))));
    bufp->fullBit(oldp+716,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf2))));
    bufp->fullBit(oldp+717,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf3))));
    bufp->fullBit(oldp+718,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf4))));
    bufp->fullBit(oldp+719,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_progbuf5))));
    bufp->fullBit(oldp+720,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_req) 
                             & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr)))));
    bufp->fullBit(oldp+721,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tapc_dmi_access_req));
    bufp->fullBit(oldp+722,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__clk_en_dm_ff));
    bufp->fullCData(oldp+723,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_ff),2);
    bufp->fullBit(oldp+724,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_ff));
    bufp->fullCData(oldp+725,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_next),2);
    bufp->fullBit(oldp+726,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dm_dhalt_req));
    bufp->fullBit(oldp+727,((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_ff))));
    bufp->fullBit(oldp+728,((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_ff))));
    bufp->fullBit(oldp+729,((3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_ff))));
    bufp->fullCData(oldp+730,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0),2);
    bufp->fullCData(oldp+731,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_pbuf_addr_qlfy),3);
    bufp->fullBit(oldp+732,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_resp_exc));
    bufp->fullBit(oldp+733,((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0))));
    bufp->fullBit(oldp+734,((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0))));
    bufp->fullBit(oldp+735,((3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0))));
    bufp->fullBit(oldp+736,((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0))));
    bufp->fullIData(oldp+737,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr),32);
    bufp->fullBit(oldp+738,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                   >> 0xaU))));
    bufp->fullBit(oldp+739,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                   >> 9U))));
    bufp->fullCData(oldp+740,((0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                        >> 4U))),5);
    bufp->fullBit(oldp+741,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                   >> 3U))));
    bufp->fullCData(oldp+742,((0xfU & ((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[2U] 
                                        << 1U) | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                                  >> 0x1fU)))),4);
    bufp->fullBit(oldp+743,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                   >> 0x1eU))));
    bufp->fullCData(oldp+744,((3U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                     >> 0x1cU))),2);
    bufp->fullCData(oldp+745,((7U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                     >> 0x19U))),3);
    bufp->fullBit(oldp+746,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                   >> 0x18U))));
    bufp->fullBit(oldp+747,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                   >> 0x17U))));
    bufp->fullBit(oldp+748,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                   >> 0x16U))));
    bufp->fullBit(oldp+749,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                   >> 0x15U))));
    bufp->fullBit(oldp+750,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                   >> 0x14U))));
    bufp->fullCData(oldp+751,((0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+752,((0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                        >> 0xaU))),5);
    bufp->fullCData(oldp+753,((0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                        >> 5U))),5);
    bufp->fullIData(oldp+754,(((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[1U] 
                                << 0x1bU) | (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                                             >> 5U))),32);
    bufp->fullBit(oldp+755,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U] 
                                   >> 4U))));
    bufp->fullCData(oldp+756,((0xfU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_cmd[0U])),4);
    bufp->fullBit(oldp+757,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs1));
    bufp->fullBit(oldp+758,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rs2));
    bufp->fullBit(oldp+759,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_rd));
    bufp->fullBit(oldp+760,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2exu_use_imm));
    bufp->fullCData(oldp+761,((3U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr)),2);
    bufp->fullCData(oldp+762,((0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                        >> 2U))),5);
    bufp->fullBit(oldp+763,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvi_illegal));
    bufp->fullCData(oldp+764,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__funct3),3);
    bufp->fullCData(oldp+765,((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                               >> 0x19U)),7);
    bufp->fullSData(oldp+766,((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                               >> 0x14U)),12);
    bufp->fullCData(oldp+767,((0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_instr 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+768,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_idu__DOT__rvc_illegal));
    bufp->fullCData(oldp+769,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_resp),2);
    bufp->fullBit(oldp+770,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_ip_ie));
    bufp->fullIData(oldp+771,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mip),32);
    bufp->fullBit(oldp+772,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_sirq_pnd_en));
    bufp->fullBit(oldp+773,((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_resp))));
    bufp->fullBit(oldp+774,((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_resp))));
    bufp->fullBit(oldp+775,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_er_discard_pnd));
    bufp->fullBit(oldp+776,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_received));
    bufp->fullBit(oldp+777,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_vd));
    bufp->fullIData(oldp+778,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[6U]),32);
    bufp->fullIData(oldp+779,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[5U]),32);
    bufp->fullIData(oldp+780,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[4U]),32);
    bufp->fullIData(oldp+781,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[3U]),32);
    bufp->fullIData(oldp+782,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[2U]),32);
    bufp->fullIData(oldp+783,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[1U]),32);
    bufp->fullIData(oldp+784,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__csr_trace1[0U]),32);
    bufp->fullBit(oldp+785,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_cpu_rstn_reset_sync__DOT__local_rst_n_in));
    bufp->fullIData(oldp+786,((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__data_fifo)),32);
    bufp->fullCData(oldp+787,((7U & (IData)((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__data_fifo 
                                             >> 0x22U)))),3);
    bufp->fullCData(oldp+788,((3U & (IData)((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__data_fifo 
                                             >> 0x20U)))),2);
    bufp->fullIData(oldp+789,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_rdata),32);
    bufp->fullBit(oldp+790,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_rpt_command));
    bufp->fullBit(oldp+791,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_data0));
    bufp->fullBit(oldp+792,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_any));
    bufp->fullIData(oldp+793,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd),32);
    bufp->fullBit(oldp+794,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_csr_ro));
    bufp->fullCData(oldp+795,((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd 
                               >> 0x18U)),8);
    bufp->fullBit(oldp+796,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd 
                                   >> 0x11U))));
    bufp->fullCData(oldp+797,((0xfU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+798,((0x7fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd 
                                        >> 5U))),7);
    bufp->fullBit(oldp+799,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd 
                                   >> 0x10U))));
    bufp->fullCData(oldp+800,((7U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd 
                                     >> 0x14U))),3);
    bufp->fullBit(oldp+801,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd 
                                   >> 0x12U))));
    bufp->fullBit(oldp+802,((1U & (~ (IData)((0U != 
                                              (0x880000U 
                                               & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd)))))));
    bufp->fullBit(oldp+803,((1U & (~ (IData)((0U != 
                                              (0x8c2000U 
                                               & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd)))))));
    bufp->fullBit(oldp+804,((2U == (7U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd 
                                          >> 0x14U)))));
    bufp->fullBit(oldp+805,((3U > (7U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd 
                                         >> 0x14U)))));
    bufp->fullSData(oldp+806,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_regno),12);
    bufp->fullBit(oldp+807,((0U == (0xfU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd 
                                            >> 0xcU)))));
    bufp->fullBit(oldp+808,((IData)((0x1000U == (0xffe0U 
                                                 & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd)))));
    bufp->fullBit(oldp+809,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_hartreg_vd));
    bufp->fullBit(oldp+810,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_hartmem_vd));
    bufp->fullBit(oldp+811,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_reg_access_req));
    bufp->fullBit(oldp+812,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_reg_access_req) 
                             & (0U == (0xf000U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd)))));
    bufp->fullBit(oldp+813,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_reg_access_req) 
                             & (IData)((0x1000U == 
                                        (0xffe0U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd))))));
    bufp->fullBit(oldp+814,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_execprogbuf_req));
    bufp->fullBit(oldp+815,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_mprf_access_vd));
    bufp->fullBit(oldp+816,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_mem_access_vd));
    bufp->fullBit(oldp+817,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__reset_n_ff));
    bufp->fullBit(oldp+818,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff));
    bufp->fullBit(oldp+819,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_dm_rstn_buf_cell__DOT__reset_n_status_ff));
    bufp->fullCData(oldp+820,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_csr_wdata),4);
    bufp->fullCData(oldp+821,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_csr_rdata),4);
    bufp->fullBit(oldp+822,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_status_ff) 
                                   >> 3U))));
    bufp->fullBit(oldp+823,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_status_ff) 
                                   >> 2U))));
    bufp->fullBit(oldp+824,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_status_ff) 
                                   >> 1U))));
    bufp->fullBit(oldp+825,((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_status_ff))));
    bufp->fullBit(oldp+826,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_status_ff_posedge) 
                                   >> 3U))));
    bufp->fullBit(oldp+827,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_status_ff_posedge) 
                                   >> 2U))));
    bufp->fullBit(oldp+828,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_status_ff_posedge) 
                                   >> 1U))));
    bufp->fullBit(oldp+829,((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_status_ff_posedge))));
    bufp->fullBit(oldp+830,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__dm_rst_n_in));
    bufp->fullBit(oldp+831,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__clk_en_dm));
    bufp->fullBit(oldp+832,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_haltreq_next));
    bufp->fullBit(oldp+833,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_resumereq_next));
    bufp->fullBit(oldp+834,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ackhavereset_next));
    bufp->fullBit(oldp+835,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ndmreset_next));
    bufp->fullBit(oldp+836,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__clk_en_abs));
    bufp->fullCData(oldp+837,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_ff),4);
    bufp->fullBit(oldp+838,((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_ff))));
    bufp->fullBit(oldp+839,((0xfU == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_ff))));
    bufp->fullBit(oldp+840,((0xaU == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_ff))));
    bufp->fullBit(oldp+841,((0xbU == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_ff))));
    bufp->fullBit(oldp+842,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_resp));
    bufp->fullBit(oldp+843,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_halt_req));
    bufp->fullBit(oldp+844,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_cmd_req));
    bufp->fullCData(oldp+845,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__instr_type),3);
    bufp->fullBit(oldp+846,(((7U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__instr_type)) 
                             | ((5U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__instr_type)) 
                                | (3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__instr_type))))));
    bufp->fullCData(oldp+847,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wr_size),2);
    bufp->fullBit(oldp+848,((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wr_size))));
    bufp->fullBit(oldp+849,((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wr_size))));
    bufp->fullBit(oldp+850,(vlSelf->scr1_top_tb_ahb__DOT__dmem_hready));
    bufp->fullBit(oldp+851,(vlSelf->scr1_top_tb_ahb__DOT__dmem_hresp));
    bufp->fullBit(oldp+852,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__i_reset_output_buf__DOT__rst_n_mux));
    bufp->fullBit(oldp+853,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_wr_next));
    bufp->fullBit(oldp+854,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_postexec_next));
    bufp->fullCData(oldp+855,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_size_next),2);
    bufp->fullBit(oldp+856,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_csr_ro_access_vd));
    bufp->fullBit(oldp+857,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_csr_rw_access_vd));
    bufp->fullCData(oldp+858,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_next),4);
    bufp->fullCData(oldp+859,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abstractcs_cmderr_next),3);
    bufp->fullIData(oldp+860,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_rdata),32);
    bufp->fullBit(oldp+861,((1U & (IData)((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__resp_fifo 
                                           >> 0x25U)))));
    bufp->fullCData(oldp+862,((7U & (IData)((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__resp_fifo 
                                             >> 0x22U)))),3);
    bufp->fullCData(oldp+863,((3U & (IData)((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__resp_fifo 
                                             >> 0x20U)))),2);
    bufp->fullIData(oldp+864,((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__resp_fifo)),32);
    bufp->fullCData(oldp+865,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_resp),2);
    bufp->fullBit(oldp+866,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__lsu_rdy));
    bufp->fullBit(oldp+867,((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_resp))));
    bufp->fullBit(oldp+868,((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_resp))));
    bufp->fullBit(oldp+869,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_cmd_resp));
    bufp->fullBit(oldp+870,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__cmd_resp_ok));
    bufp->fullBit(oldp+871,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__dbg_halted));
    bufp->fullBit(oldp+872,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__dbg_halt2run));
    bufp->fullCData(oldp+873,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state_next),2);
    bufp->fullBit(oldp+874,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_event_next));
    bufp->fullBit(oldp+875,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_upd_on_halt));
    bufp->fullBit(oldp+876,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_dmem_req));
    bufp->fullBit(oldp+877,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dscratch0_sel));
    bufp->fullBit(oldp+878,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dscratch0_sel))));
    bufp->fullIData(oldp+879,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data),32);
    bufp->fullBit(oldp+880,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dreg_wr_req));
    bufp->fullBit(oldp+881,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__brkpt_hw));
    bufp->fullBit(oldp+882,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_r_req));
    bufp->fullBit(oldp+883,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_w_req));
    bufp->fullBit(oldp+884,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_rw_exc));
    bufp->fullBit(oldp+885,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_r_req));
    bufp->fullBit(oldp+886,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_w_req));
    bufp->fullCData(oldp+887,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_addr),3);
    bufp->fullIData(oldp+888,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_wdata),32);
    bufp->fullIData(oldp+889,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ipic2csr_rdata),32);
    bufp->fullBit(oldp+890,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2tdu_req));
    bufp->fullIData(oldp+891,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2csr_rdata),32);
    bufp->fullBit(oldp+892,((1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2tdu_req_qlfy)))));
    bufp->fullBit(oldp+893,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2tdu_req_qlfy));
    bufp->fullCData(oldp+894,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_ldst_hit),4);
    bufp->fullBit(oldp+895,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2exu_i_x_req));
    bufp->fullBit(oldp+896,((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_ldst_hit))));
    bufp->fullCData(oldp+897,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_bp_retire),5);
    bufp->fullBit(oldp+898,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h215ccd09__0));
    bufp->fullCData(oldp+899,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2tdu_bp_retire_qlfy),5);
    bufp->fullBit(oldp+900,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2hdu_req));
    bufp->fullIData(oldp+901,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_rd_data),32);
    bufp->fullBit(oldp+902,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr));
    bufp->fullBit(oldp+903,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2hdu_dmode_req));
    bufp->fullBit(oldp+904,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_no_commit));
    bufp->fullBit(oldp+905,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_upd));
    bufp->fullBit(oldp+906,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mie_upd));
    bufp->fullBit(oldp+907,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtvec_upd));
    bufp->fullBit(oldp+908,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mscratch_upd));
    bufp->fullBit(oldp+909,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mepc_upd));
    bufp->fullBit(oldp+910,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_upd));
    bufp->fullBit(oldp+911,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mtval_upd));
    bufp->fullCData(oldp+912,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_upd),2);
    bufp->fullCData(oldp+913,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_upd),2);
    bufp->fullBit(oldp+914,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten_upd));
    bufp->fullBit(oldp+915,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_exc));
    bufp->fullBit(oldp+916,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_exc));
    bufp->fullBit(oldp+917,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__exu_req_no_exc));
    bufp->fullBit(oldp+918,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_r_req) 
                             | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2ipic_w_req))));
    bufp->fullBit(oldp+919,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_rdy));
    bufp->fullBit(oldp+920,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_vd));
    bufp->fullIData(oldp+921,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op1),32);
    bufp->fullIData(oldp+922,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op2),32);
    bufp->fullIData(oldp+923,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_res),32);
    bufp->fullBit(oldp+924,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_cmp));
    bufp->fullBit(oldp+925,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__jb_taken));
    bufp->fullQData(oldp+926,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_res),33);
    bufp->fullBit(oldp+928,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_flags) 
                                   >> 3U))));
    bufp->fullBit(oldp+929,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_flags) 
                                   >> 2U))));
    bufp->fullBit(oldp+930,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_flags) 
                                   >> 1U))));
    bufp->fullBit(oldp+931,((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_flags))));
    bufp->fullBit(oldp+932,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_pos_ovflw));
    bufp->fullBit(oldp+933,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_sum_neg_ovflw));
    bufp->fullBit(oldp+934,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__main_ops_diff_sgn));
    bufp->fullBit(oldp+935,(((0U != vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op1) 
                             & (0U != vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__ialu_main_op2))));
    bufp->fullIData(oldp+936,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__shft_op1),32);
    bufp->fullCData(oldp+937,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__shft_op2),5);
    bufp->fullIData(oldp+938,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__shft_res),32);
    bufp->fullBit(oldp+939,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_iter_req));
    bufp->fullBit(oldp+940,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_corr_req));
    bufp->fullCData(oldp+941,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_next),2);
    bufp->fullBit(oldp+942,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_op1_is_neg));
    bufp->fullBit(oldp+943,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_res_rem_c));
    bufp->fullIData(oldp+944,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_res_rem),32);
    bufp->fullIData(oldp+945,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_res_quo),32);
    bufp->fullBit(oldp+946,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_quo_bit));
    bufp->fullBit(oldp+947,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_dvdnd_lo_upd));
    bufp->fullIData(oldp+948,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_dvdnd_lo_next),32);
    bufp->fullBit(oldp+949,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_sum_sub));
    bufp->fullQData(oldp+950,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_sum_op1),33);
    bufp->fullQData(oldp+952,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_sum_op2),33);
    bufp->fullQData(oldp+954,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_sum_res),33);
    bufp->fullBit(oldp+956,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__unnamedblk1__DOT__sgn));
    bufp->fullBit(oldp+957,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__unnamedblk1__DOT__inv));
    bufp->fullBit(oldp+958,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_exc_req));
    bufp->fullBit(oldp+959,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_exc_hwbrk));
    bufp->fullBit(oldp+960,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_tmreq));
    bufp->fullBit(oldp+961,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_sel));
    bufp->fullBit(oldp+962,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_wr));
    bufp->fullCData(oldp+963,((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
                               >> 0x1cU)),4);
    bufp->fullSData(oldp+964,((0xfffU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
                                         >> 0x10U))),12);
    bufp->fullBit(oldp+965,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
                                   >> 0xfU))));
    bufp->fullCData(oldp+966,((7U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
                                     >> 0xcU))),3);
    bufp->fullBit(oldp+967,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
                                   >> 0xbU))));
    bufp->fullCData(oldp+968,((3U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
                                     >> 9U))),2);
    bufp->fullCData(oldp+969,((7U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
                                     >> 6U))),3);
    bufp->fullCData(oldp+970,((7U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
                                     >> 3U))),3);
    bufp->fullBit(oldp+971,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data 
                                   >> 2U))));
    bufp->fullCData(oldp+972,((3U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data)),2);
    bufp->fullCData(oldp+973,((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
                               >> 0x1cU)),4);
    bufp->fullSData(oldp+974,((0xfffU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
                                         >> 0x10U))),12);
    bufp->fullBit(oldp+975,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
                                   >> 0xfU))));
    bufp->fullCData(oldp+976,((7U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
                                     >> 0xcU))),3);
    bufp->fullBit(oldp+977,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
                                   >> 0xbU))));
    bufp->fullCData(oldp+978,((3U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
                                     >> 9U))),2);
    bufp->fullCData(oldp+979,((7U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
                                     >> 6U))),3);
    bufp->fullCData(oldp+980,((7U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
                                     >> 3U))),3);
    bufp->fullBit(oldp+981,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out 
                                   >> 2U))));
    bufp->fullCData(oldp+982,((3U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dcsr_out)),2);
    bufp->fullBit(oldp+983,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_sel));
    bufp->fullBit(oldp+984,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr) 
                             & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_sel))));
    bufp->fullSData(oldp+985,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_edge_detected),16);
    bufp->fullSData(oldp+986,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lvl),16);
    bufp->fullBit(oldp+987,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_cisv_upd));
    bufp->fullBit(oldp+988,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__cicsr_wr_req));
    bufp->fullBit(oldp+989,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__eoi_wr_req));
    bufp->fullBit(oldp+990,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_eoi_req));
    bufp->fullBit(oldp+991,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__soi_wr_req));
    bufp->fullBit(oldp+992,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__idxr_wr_req));
    bufp->fullSData(oldp+993,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_next),16);
    bufp->fullSData(oldp+994,((0xffffU & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_lvl)) 
                                          | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_imr_next)))),16);
    bufp->fullSData(oldp+995,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_clr_req),16);
    bufp->fullSData(oldp+996,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ipr_clr),16);
    bufp->fullSData(oldp+997,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_isvr_next),16);
    bufp->fullBit(oldp+998,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__cicsr_wr_req) 
                             | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__icsr_wr_req))));
    bufp->fullSData(oldp+999,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_ier_next),16);
    bufp->fullSData(oldp+1000,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_imr_next),16);
    bufp->fullSData(oldp+1001,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__ipic_iinvr_next),16);
    bufp->fullBit(oldp+1002,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__icsr_wr_req));
    bufp->fullBit(oldp+1003,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ipic__DOT__irq_start_vd));
    bufp->fullIData(oldp+1004,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data),32);
    bufp->fullBit(oldp+1005,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_tselect));
    bufp->fullCData(oldp+1006,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_mcontrol),4);
    bufp->fullCData(oldp+1007,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_tdata2),4);
    bufp->fullBit(oldp+1008,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_icount));
    bufp->fullCData(oldp+1009,((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h8108b176__0) 
                                 << 3U) | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h803908b6__0) 
                                            << 2U) 
                                           | (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h4ea400bb__0) 
                                               << 1U) 
                                              | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h6472391d__0))))),4);
    bufp->fullCData(oldp+1010,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_clk_en),4);
    bufp->fullCData(oldp+1011,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_upd),4);
    bufp->fullCData(oldp+1012,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_dmode_next),4);
    bufp->fullCData(oldp+1013,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_m_next),4);
    bufp->fullCData(oldp+1014,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_next),4);
    bufp->fullCData(oldp+1015,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_load_next),4);
    bufp->fullCData(oldp+1016,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_store_next),4);
    bufp->fullCData(oldp+1017,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_action_next),4);
    bufp->fullCData(oldp+1018,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_hit_next),4);
    bufp->fullBit(oldp+1019,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_wr_req));
    bufp->fullBit(oldp+1020,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_clk_en));
    bufp->fullBit(oldp+1021,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_upd));
    bufp->fullBit(oldp+1022,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_dmode_next));
    bufp->fullBit(oldp+1023,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_m_next));
    bufp->fullBit(oldp+1024,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_action_next));
    bufp->fullBit(oldp+1025,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_hit_next));
    bufp->fullCData(oldp+1026,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_tdata2_upd),4);
    bufp->fullIData(oldp+1027,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+1028,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+1029,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+1030,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+1031,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+1032,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data0_next),32);
    bufp->fullIData(oldp+1033,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data1_next),32);
    bufp->fullBit(oldp+1034,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_mret_instr));
    bufp->fullBit(oldp+1035,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_mstatus_mie_up));
    bufp->fullBit(oldp+1036,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_mret));
    bufp->fullCData(oldp+1037,((7U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[2U])),3);
    bufp->fullCData(oldp+1038,(vlSelf->scr1_top_tb_ahb__DOT__dmem_htrans),2);
    bufp->fullIData(oldp+1039,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[1U]),32);
    bufp->fullBit(oldp+1040,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[2U] 
                                    >> 3U))));
    bufp->fullCData(oldp+1041,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_be),4);
    bufp->fullCData(oldp+1042,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_wr_hazard),4);
    bufp->fullBit(oldp+1043,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_dmem_req));
    bufp->fullBit(oldp+1044,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_dmem_req));
    bufp->fullBit(oldp+1045,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__timer_dmem_req));
    bufp->fullIData(oldp+1046,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2mprf_rd_data),32);
    bufp->fullIData(oldp+1047,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_r_data),32);
    bufp->fullCData(oldp+1048,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_code),4);
    bufp->fullBit(oldp+1049,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_exc_req_qlfy));
    bufp->fullIData(oldp+1050,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_data),32);
    bufp->fullBit(oldp+1051,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_exc_req));
    bufp->fullBit(oldp+1052,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__lsu_exc_req));
    bufp->fullBit(oldp+1053,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_fsm_next));
    bufp->fullBit(oldp+1054,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__dmem_req_vd));
    bufp->fullBit(oldp+1055,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_except));
    bufp->fullBit(oldp+1056,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_rd));
    bufp->fullBit(oldp+1057,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_new[2U] 
                                    >> 3U))));
    bufp->fullCData(oldp+1058,((7U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_new[2U])),3);
    bufp->fullIData(oldp+1059,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_new[1U]),32);
    bufp->fullIData(oldp+1060,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo_new[0U]),32);
    bufp->fullBit(oldp+1061,((1U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[2U] 
                                    >> 3U))));
    bufp->fullCData(oldp+1062,((7U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[2U])),3);
    bufp->fullIData(oldp+1063,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[1U]),32);
    bufp->fullIData(oldp+1064,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__req_fifo[0U]),32);
    bufp->fullBit(oldp+1065,((1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT____VdfgExtracted_h136b417e__0)))));
    bufp->fullBit(oldp+1066,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_rd));
    bufp->fullBit(oldp+1067,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_wr));
    bufp->fullQData(oldp+1068,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmp_new),64);
    bufp->fullBit(oldp+1070,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__control_up));
    bufp->fullBit(oldp+1071,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__divider_up));
    bufp->fullBit(oldp+1072,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimelo_up));
    bufp->fullBit(oldp+1073,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimehi_up));
    bufp->fullBit(oldp+1074,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmplo_up));
    bufp->fullBit(oldp+1075,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtimecmphi_up));
    bufp->fullBit(oldp+1076,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__time_cmp_flag));
    bufp->fullCData(oldp+1077,(vlSelf->scr1_top_tb_ahb__DOT__imem_htrans),2);
    bufp->fullIData(oldp+1078,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo),32);
    bufp->fullCData(oldp+1079,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_wr_hazard),4);
    bufp->fullBit(oldp+1080,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_req_ack));
    bufp->fullBit(oldp+1081,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_req));
    bufp->fullIData(oldp+1082,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_addr),32);
    bufp->fullBit(oldp+1083,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__ahb_imem_req));
    bufp->fullBit(oldp+1084,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tcm_imem_req));
    bufp->fullBit(oldp+1085,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req));
    bufp->fullIData(oldp+1086,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc),32);
    bufp->fullBit(oldp+1087,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__stop_fetch));
    bufp->fullBit(oldp+1088,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_halt_req));
    bufp->fullBit(oldp+1089,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__instret));
    bufp->fullBit(oldp+1090,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2ifu_rdy));
    bufp->fullBit(oldp+1091,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2mprf_w_req));
    bufp->fullBit(oldp+1092,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_take_irq));
    bufp->fullBit(oldp+1093,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_take_exc));
    bufp->fullBit(oldp+1094,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_halt_ack));
    bufp->fullBit(oldp+1095,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_busy));
    bufp->fullBit(oldp+1096,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_mie_next));
    bufp->fullBit(oldp+1097,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_mpie_next));
    bufp->fullBit(oldp+1098,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_i_next));
    bufp->fullBit(oldp+1099,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_lo_inc));
    bufp->fullBit(oldp+1100,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_hi_inc));
    bufp->fullBit(oldp+1101,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_exc));
    bufp->fullBit(oldp+1102,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_irq));
    bufp->fullBit(oldp+1103,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_barrier));
    bufp->fullBit(oldp+1104,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_en));
    bufp->fullBit(oldp+1105,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_barrier) 
                              | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_rdy))));
    bufp->fullBit(oldp+1106,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_rdy));
    bufp->fullBit(oldp+1107,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_trans_next));
    bufp->fullBit(oldp+1108,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_update_next));
    bufp->fullBit(oldp+1109,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_halt_pnd));
    bufp->fullBit(oldp+1110,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_sstep));
    bufp->fullBit(oldp+1111,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__ifu_handshake_done));
    bufp->fullCData(oldp+1112,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_fsm_next),2);
    bufp->fullCData(oldp+1113,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rd_size),2);
    bufp->fullBit(oldp+1114,((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rd_size))));
    bufp->fullCData(oldp+1115,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rptr_next),3);
    bufp->fullBit(oldp+1116,(((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_rd_size)) 
                              | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_flush_req))));
    bufp->fullBit(oldp+1117,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wr_en));
    bufp->fullBit(oldp+1118,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_flush_req));
    bufp->fullBit(oldp+1119,(((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__stop_fetch)) 
                              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req))));
    bufp->fullBit(oldp+1120,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__ifu_fsm_next));
    bufp->fullBit(oldp+1121,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_handshake_done));
    bufp->fullBit(oldp+1122,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_handshake_done) 
                              | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req))));
    bufp->fullCData(oldp+1123,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_pnd_txns_cnt_next),3);
    bufp->fullSData(oldp+1124,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_count_next),14);
    bufp->fullBit(oldp+1125,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_update));
    bufp->fullBit(oldp+1126,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo_rd));
    bufp->fullIData(oldp+1127,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__req_fifo),32);
    bufp->fullBit(oldp+1128,((1U & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT____VdfgExtracted_h136b417e__3)))));
    bufp->fullBit(oldp+1129,((0x480000U == (0xffff0000U 
                                            & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_addr))));
    bufp->fullSData(oldp+1130,((0x3fffU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__core_imem_addr 
                                           >> 2U))),14);
    bufp->fullBit(oldp+1131,(vlSelf->clk));
    bufp->fullBit(oldp+1132,(vlSelf->scr1_top_tb_ahb__DOT__trst_n));
    bufp->fullBit(oldp+1133,(vlSelf->scr1_top_tb_ahb__DOT__tck));
    bufp->fullBit(oldp+1134,(vlSelf->scr1_top_tb_ahb__DOT__tms));
    bufp->fullBit(oldp+1135,(vlSelf->scr1_top_tb_ahb__DOT__tdi));
    bufp->fullBit(oldp+1136,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tdo_out_ff));
    bufp->fullBit(oldp+1137,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tdo_en_ff));
    bufp->fullCData(oldp+1138,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__scr1_be_form__Vstatic__tmp),4);
    bufp->fullBit(oldp+1139,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__tapc_trst_n));
    bufp->fullBit(oldp+1140,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_req_ack));
    bufp->fullIData(oldp+1141,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__mprf2exu_rs2_data),32);
    bufp->fullIData(oldp+1142,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_rdata),32);
    bufp->fullCData(oldp+1143,((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__fsm) 
                                 & (IData)(vlSelf->scr1_top_tb_ahb__DOT__imem_hready))
                                 ? ((IData)(vlSelf->scr1_top_tb_ahb__DOT__imem_hresp)
                                     ? 2U : 1U) : 0U)),2);
    bufp->fullCData(oldp+1144,((((IData)(vlSelf->scr1_top_tb_ahb__DOT__dmem_hready) 
                                 & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__fsm))
                                 ? ((IData)(vlSelf->scr1_top_tb_ahb__DOT__dmem_hresp)
                                     ? 2U : 1U) : 0U)),2);
    bufp->fullBit(oldp+1145,((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_scu_ch_sel) 
                               & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_ff)) 
                              | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_sel) 
                                 & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_ff)))));
    bufp->fullBit(oldp+1146,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_cmd_resp) 
                              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff))));
    bufp->fullBit(oldp+1147,((1U & ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state))
                                     ? ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff)) 
                                        | (~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_req_ff) 
                                              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_init_pc_qlfy))))
                                     : ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff)) 
                                        | (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_update)))))));
    bufp->fullBit(oldp+1148,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_event) 
                              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff))));
    bufp->fullIData(oldp+1149,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_pbuf_instr),32);
    bufp->fullBit(oldp+1150,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dscratch0_sel) 
                              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_hdu_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff))));
    bufp->fullIData(oldp+1151,((vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_ff 
                                & (- (IData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff))))),32);
    bufp->fullBit(oldp+1152,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr) 
                              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_data0))));
    bufp->fullBit(oldp+1153,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_wr_req)
                                     ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wdata
                                     : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_ff)))));
    bufp->fullBit(oldp+1154,((1U & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_ff)) 
                                    | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__havereset_skip_pwrup_ff)
                                        ? ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0)) 
                                           & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ndmreset_ff)))
                                        : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__havereset_skip_pwrup_ff))))));
    bufp->fullBit(oldp+1155,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_ff) 
                              & (((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__havereset_skip_pwrup_ff)) 
                                  & (0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0))) 
                                 | ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_ackhavereset_ff)) 
                                    & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_havereset_ff))))));
    bufp->fullBit(oldp+1156,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_ff) 
                              & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_resumereq_ff) 
                                 & ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0)) 
                                    | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_resumeack_ff))))));
    bufp->fullBit(oldp+1157,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_ff) 
                              & ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0)) 
                                 | ((1U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0)) 
                                    & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_halted_ff))))));
    bufp->fullIData(oldp+1158,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_ff)
                                 ? (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__command_wr_req) 
                                     & (0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)))
                                     ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wdata
                                     : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_command_ff)
                                 : 0U)),32);
    bufp->fullBit(oldp+1159,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_ff) 
                              & ((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wr) 
                                   & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_abstractauto)) 
                                  & (0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)))
                                  ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dmi_wdata
                                  : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_autoexec_ff)))));
    bufp->fullBit(oldp+1160,(((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_cmd_wr_ff)) 
                              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dreg_wr_req))));
    bufp->fullBit(oldp+1161,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__clk_en_abs) 
                              & ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
                                 | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h65cca704__0)))));
    bufp->fullBit(oldp+1162,(((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
                              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h65cca704__0))));
    bufp->fullBit(oldp+1163,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__clk_en_abs) 
                              & ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
                                 | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_any)))));
    bufp->fullBit(oldp+1164,(((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
                              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmi_req_any))));
    bufp->fullBit(oldp+1165,((1U & (~ ((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
                                       | ((9U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
                                          | ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
                                             | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_resp))))))));
    bufp->fullCData(oldp+1166,((((~ ((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff)) 
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
                                                 : 
                                                (((2U 
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
    bufp->fullCData(oldp+1167,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_exec_req_ff)
                                 ? 1U : (((2U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0)) 
                                          & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_haltreq_ff))
                                          ? 4U : (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_resumereq_ff) 
                                                   & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_resumeack_ff)) 
                                                      & (2U 
                                                         == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0))))
                                                   ? 5U
                                                   : 0U)))),3);
    bufp->fullBit(oldp+1168,(((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff)) 
                              & ((4U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff)) 
                                 & (0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0))))));
    bufp->fullBit(oldp+1169,(((2U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0)) 
                              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_haltreq_ff))));
    bufp->fullBit(oldp+1170,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_resumereq_ff) 
                              & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmstatus_allany_resumeack_ff)) 
                                 & (2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT____VdfgTmp_h4995de25__0))))));
    bufp->fullBit(oldp+1171,(((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
                              & (0x100073U == vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__dm_pbuf_instr))));
    bufp->fullBit(oldp+1172,((((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff)) 
                               | ((4U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff)) 
                                  | (5U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dhi_fsm_ff)))) 
                              & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__cmd_resp_ok)) 
                                 & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__dmcontrol_dmactive_ff)))));
    bufp->fullQData(oldp+1173,(((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_id))
                                 ? (QData)((IData)(
                                                   (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_tdi) 
                                                     << 0x1fU) 
                                                    | (0x7fffffffU 
                                                       & (IData)(
                                                                 (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_ff 
                                                                  >> 1U))))))
                                 : (((QData)((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_tdi)) 
                                     << 0x28U) | (0xffffffffffULL 
                                                  & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dmi__DOT__tap_dr_ff 
                                                     >> 1U))))),41);
    bufp->fullQData(oldp+1175,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_capture)
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
    bufp->fullIData(oldp+1177,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd_ff)
                                 ? ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__jb_taken)
                                     ? (0xfffffffeU 
                                        & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h20198cf3__0)
                                     : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__inc_pc)
                                 : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_ff)),32);
    bufp->fullBit(oldp+1178,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd_ff) 
                              & (3U == (0xfU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U])))));
    bufp->fullBit(oldp+1179,(((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_exc_req)) 
                              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__instret))));
    bufp->fullBit(oldp+1180,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_vd));
    bufp->fullBit(oldp+1181,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_imem_err));
    bufp->fullCData(oldp+1182,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__mprf_rs1_req)
                                 ? (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                             >> 0xfU))
                                 : 0U)),5);
    bufp->fullCData(oldp+1183,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__mprf_rs2_req)
                                 ? (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                             >> 0xaU))
                                 : 0U)),5);
    bufp->fullBit(oldp+1184,(((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__csr_access_ff)) 
                              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_mret_instr))));
    bufp->fullIData(oldp+1185,(((8U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_code))
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
    bufp->fullIData(oldp+1186,((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_mret_instr) 
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
    bufp->fullBit(oldp+1187,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_ip_ie) 
                              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mstatus_mie_ff))));
    bufp->fullBit(oldp+1188,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__lsu_req) 
                              & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_fsm_curr)) 
                                 & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__tdu2exu_i_x_req))))));
    bufp->fullCData(oldp+1189,((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_hit) 
                                 << 4U) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_hit))),5);
    bufp->fullBit(oldp+1190,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_haa489fa9__0));
    bufp->fullBit(oldp+1191,(((3U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state)) 
                              | ((2U != (3U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[0U] 
                                               >> 5U))) 
                                 & (~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr))))));
    bufp->fullBit(oldp+1192,(((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state)) 
                              & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_update) 
                                 & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff)))));
    bufp->fullBit(oldp+1193,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__idu2ifu_rdy) 
                              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff))));
    bufp->fullBit(oldp+1194,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_busy) 
                              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff))));
    bufp->fullBit(oldp+1195,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__instret) 
                              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__i_core_rstn_qlfy_adapter_cell_sync__DOT__reset_n_front_ff))));
    bufp->fullBit(oldp+1196,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_init_pc_qlfy));
    bufp->fullBit(oldp+1197,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__brkpt_qlfy));
    bufp->fullIData(oldp+1198,((0x7fffffffU & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_exc)
                                                ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_ff 
                                                   >> 1U)
                                                : (
                                                   ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_mret_instr)) 
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
    bufp->fullCData(oldp+1199,((0xfU & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_exc)
                                         ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exc_code)
                                         : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_irq)
                                             ? ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_eirq_pnd_en)
                                                 ? 0xbU
                                                 : 
                                                ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_sirq_pnd_en)
                                                  ? 3U
                                                  : 
                                                 ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_tirq_pnd_en)
                                                   ? 7U
                                                   : 0xbU)))
                                             : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_upd)
                                                 ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_data
                                                 : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcause_ec_ff)))))),4);
    bufp->fullCData(oldp+1200,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_eirq_pnd_en)
                                 ? 0xbU : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_sirq_pnd_en)
                                            ? 3U : 
                                           ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_tirq_pnd_en)
                                             ? 7U : 0xbU)))),4);
    bufp->fullIData(oldp+1201,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_exc)
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
    bufp->fullBit(oldp+1202,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_lo_inc) 
                                    | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_upd)))));
    bufp->fullCData(oldp+1203,((0xffU & ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_upd))
                                          ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_data
                                          : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_lo_ff) 
                                             + (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_lo_inc))))),8);
    bufp->fullBit(oldp+1204,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_hi_inc) 
                              | (0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_minstret_upd)))));
    bufp->fullQData(oldp+1205,((0xffffffffffffffULL 
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
    bufp->fullCData(oldp+1207,((0xffU & ((1U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_upd))
                                          ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_w_data
                                          : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcycle_lo_ff) 
                                             + (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__csr_mcounten_cy_ff))))),8);
    bufp->fullQData(oldp+1208,((0xffffffffffffffULL 
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
    bufp->fullBit(oldp+1210,(((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_mret_instr)) 
                              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_csr__DOT__e_irq))));
    bufp->fullBit(oldp+1211,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__dbg_run_start_npbuf));
    bufp->fullBit(oldp+1212,(((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_barrier)) 
                              & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req)) 
                                 & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__ifu2idu_vd)))));
    bufp->fullBit(oldp+1213,(((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__dbg_halt2run)) 
                              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_exc_req))));
    bufp->fullBit(oldp+1214,(((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_ip_ie)) 
                              & ((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue_vd_ff) 
                                   & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                      >> 0x14U)) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_run_start_ff)) 
                                 & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_no_commit)) 
                                    & (~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_halt_ack) 
                                          | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_runctrl) 
                                             >> 1U))))))));
    bufp->fullBit(oldp+1215,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_run_req));
    bufp->fullBit(oldp+1216,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_halted_ff) 
                              & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_take_irq)) 
                                 & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_ip_ie)))));
    bufp->fullBit(oldp+1217,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_halt_req) 
                              | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_run_req))));
    bufp->fullBit(oldp+1218,((1U & ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_run_req)) 
                                    | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__wfi_halt_req)))));
    bufp->fullBit(oldp+1219,((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__instret) 
                               | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_take_irq) 
                                  | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__dbg_run_start_npbuf))) 
                              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT____VdfgTmp_h76e0b655__0))));
    bufp->fullIData(oldp+1220,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req)
                                 ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc
                                 : ((0x40U & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__inc_pc 
                                              ^ vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_ff))
                                     ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__inc_pc
                                     : ((0xffffffc0U 
                                         & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_ff) 
                                        | (0x3fU & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__inc_pc))))),32);
    bufp->fullIData(oldp+1221,(((8U & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_lsu__DOT__lsu_cmd_ff))
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
    bufp->fullCData(oldp+1222,(((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_router__DOT__sel_resp))
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
                                               ? 6U
                                               : 0U))))),4);
    bufp->fullBit(oldp+1223,(((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__csr_access_ff)) 
                              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__csr2exu_mstatus_mie_up))));
    bufp->fullIData(oldp+1224,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req)
                                 ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc
                                 : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__inc_pc)),32);
    bufp->fullBit(oldp+1225,((((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__init_pc) 
                               | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__instret) 
                                  | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2csr_take_irq))) 
                              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT____VdfgTmp_h76e0b655__0))));
    bufp->fullIData(oldp+1226,(((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_fsm_ff))
                                 ? ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_cmd_is_iter)
                                     ? 0x40000000U : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_iter_cnt)
                                 : (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_iter_cnt 
                                    >> 1U))),32);
    bufp->fullBit(oldp+1227,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_cmd_is_iter)
                               ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_res_rem_c)
                               : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_c_ff))));
    bufp->fullIData(oldp+1228,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_cmd_is_iter)
                                 ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_res_rem
                                 : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_hi_ff)),32);
    bufp->fullIData(oldp+1229,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_cmd_is_iter)
                                 ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__div_res_quo
                                 : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__i_ialu__DOT__mdu_res_lo_ff)),32);
    bufp->fullBit(oldp+1230,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__hart_cmd_req_ff) 
                              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT____VdfgTmp_h9a92a6aa__0))));
    bufp->fullBit(oldp+1231,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT____VdfgTmp_h9a92a6aa__0) 
                              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_cmd_req))));
    bufp->fullBit(oldp+1232,(((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state)) 
                              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dfsm_trans_next))));
    bufp->fullBit(oldp+1233,((((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state)) 
                               | (3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state))) 
                              & (2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state_next)))));
    bufp->fullCData(oldp+1234,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__dbg_halt2run)
                                 ? 0x3fU : (0x3fU & 
                                            ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__halt_req_timeout_cnt) 
                                             - (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT____VdfgTmp_he3db9a6d__0))))),6);
    bufp->fullBit(oldp+1235,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__dbg_halt2run) 
                              | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT____VdfgTmp_he3db9a6d__0))));
    bufp->fullCData(oldp+1236,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_tmreq)
                                 ? 2U : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_ebreak)
                                          ? 1U : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_halt_req)
                                                   ? 3U
                                                   : 
                                                  ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_sstep)
                                                    ? 4U
                                                    : 0U))))),3);
    bufp->fullBit(oldp+1237,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_ebreak));
    bufp->fullBit(oldp+1238,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_sstep) 
                              | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_ebreak) 
                                 | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_except) 
                                    | ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__hart_halt_req) 
                                       | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dmode_cause_tmreq)))))));
    bufp->fullBit(oldp+1239,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__ifu_handshake_done) 
                              & (7U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_addr_ff)))));
    bufp->fullBit(oldp+1240,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_exc_req_qlfy) 
                              | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__ifu_handshake_done))));
    bufp->fullBit(oldp+1241,(((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state)) 
                              & (3U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__dbg_state_next)))));
    bufp->fullCData(oldp+1242,(((0U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_fsm_curr))
                                 ? 0U : (7U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_addr_ff) 
                                               + ((1U 
                                                   == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_fsm_curr)) 
                                                  & ((~ 
                                                      ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_exc_req_qlfy) 
                                                       | (7U 
                                                          == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_addr_ff)))) 
                                                     & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__ifu_handshake_done))))))),3);
    bufp->fullBit(oldp+1243,(((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_fsm_curr)) 
                              & ((~ ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu_exc_req_qlfy) 
                                     | (7U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__pbuf_addr_ff)))) 
                                 & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__ifu_handshake_done)))));
    bufp->fullIData(oldp+1244,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_upd_on_halt)
                                 ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__pc_curr_ff
                                 : (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr) 
                                     & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_sel))
                                     ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_wr_data
                                     : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_ff))),32);
    bufp->fullIData(oldp+1245,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_sel)
                                 ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dpc_ff
                                 : 0U)),32);
    bufp->fullIData(oldp+1246,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dscratch0_sel)
                                 ? (((5U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)) 
                                     | (8U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_fsm_ff)))
                                     ? vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data1_ff
                                     : vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abs_data0_ff)
                                 : 0U)),32);
    bufp->fullBit(oldp+1247,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req)
                                     ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc 
                                        >> 1U) : ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_vd)) 
                                                  & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__new_pc_unaligned_ff))))));
    bufp->fullBit(oldp+1248,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req) 
                              | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_vd))));
    bufp->fullCData(oldp+1249,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_flush_req)
                                 ? 0U : (7U & ((0U 
                                                == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wr_size))
                                                ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr)
                                                : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wptr) 
                                                   + 
                                                   ((1U 
                                                     == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wr_size))
                                                     ? 2U
                                                     : 1U)))))),3);
    bufp->fullBit(oldp+1250,(((0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_wr_size)) 
                              | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__q_flush_req))));
    bufp->fullBit(oldp+1251,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__stop_fetch) 
                              | ((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req)) 
                                 & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_er_discard_pnd)))));
    bufp->fullBit(oldp+1252,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_handshake_done) 
                              ^ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_received))));
    bufp->fullBit(oldp+1253,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req) 
                              | ((2U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_resp)) 
                                 | ((1U == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_router__DOT__sel_resp)) 
                                    & (0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_discard_cnt)))))));
    bufp->fullCData(oldp+1254,((7U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__new_pc_req)
                                       ? ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_pnd_txns_cnt_next) 
                                          - (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_handshake_done))
                                       : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_er_discard_pnd)
                                           ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_pnd_txns_cnt_next)
                                           : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_ifu__DOT__imem_resp_discard_cnt) 
                                              - (IData)(1U)))))),3);
    bufp->fullBit(oldp+1255,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__exu2mprf_w_req) 
                              & (0U != (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                                 >> 5U))))));
    bufp->fullBit(oldp+1256,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__mprf_rs1_req) 
                              & (0U != (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                                 >> 0xfU))))));
    bufp->fullBit(oldp+1257,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__mprf_rs2_req) 
                              & (0U != (0x1fU & (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_exu__DOT__exu_queue[1U] 
                                                 >> 0xaU))))));
    bufp->fullBit(oldp+1258,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_addr_tselect) 
                              & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_req) 
                                 & (5U > (7U & vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data))))));
    bufp->fullCData(oldp+1259,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_mcontrol_exec_hit),4);
    bufp->fullBit(oldp+1260,((1U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_wr_req)
                                     ? (vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_wr_data 
                                        >> 9U) : ((~ 
                                                   ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h136f2fbe__0) 
                                                    & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_skip_ff))) 
                                                  & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_skip_ff))))));
    bufp->fullBit(oldp+1261,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h1024b93b__0) 
                              & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_haa489fa9__0) 
                                 & (0U != (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_count_ff))))));
    bufp->fullBit(oldp+1262,(((~ (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_skip_ff)) 
                              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h136f2fbe__0))));
    bufp->fullBit(oldp+1263,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT____VdfgTmp_h136f2fbe__0) 
                              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_skip_ff))));
    bufp->fullBit(oldp+1264,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_tdu__DOT__csr_icount_hit));
    bufp->fullIData(oldp+1265,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__trace_fhandler_core),32);
    bufp->fullIData(oldp+1266,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_tracelog__DOT__time_cnt),32);
    bufp->fullCData(oldp+1267,((0xfU & (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_dr_cap_req)
                                          ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shadow_ff)
                                          : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_dr_shft_req)
                                              ? (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_tdi) 
                                                  << 7U) 
                                                 | (0x7fU 
                                                    & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_ff) 
                                                       >> 1U)))
                                              : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_ff))) 
                                        >> 4U))),4);
    bufp->fullCData(oldp+1268,((3U & (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_dr_cap_req)
                                        ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shadow_ff)
                                        : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_dr_shft_req)
                                            ? (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_tdi) 
                                                << 7U) 
                                               | (0x7fU 
                                                  & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_ff) 
                                                     >> 1U)))
                                            : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_ff))) 
                                      >> 2U))),2);
    bufp->fullCData(oldp+1269,((3U & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_dr_cap_req)
                                       ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shadow_ff)
                                       : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_dr_shft_req)
                                           ? (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__tapc_dmi_ch_tdi) 
                                               << 7U) 
                                              | (0x7fU 
                                                 & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_ff) 
                                                    >> 1U)))
                                           : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__tapc_shift_ff))))),2);
    bufp->fullBit(oldp+1270,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__sys_rst_n_in));
    bufp->fullBit(oldp+1271,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__core_rst_n_in_sync));
    bufp->fullBit(oldp+1272,((1U & (((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__scu_mode_ff) 
                                     >> 1U) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_scu__DOT__core_rst_n_in_sync)))));
    bufp->fullBit(oldp+1273,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__trst_n_int));
    bufp->fullCData(oldp+1274,(((0xaU == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_ff))
                                 ? 1U : ((0xbU == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_ff))
                                          ? (((IData)(vlSelf->scr1_top_tb_ahb__DOT__tdi) 
                                              << 4U) 
                                             | (0xfU 
                                                & ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_shift_ff) 
                                                   >> 1U)))
                                          : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_shift_ff)))),5);
    bufp->fullCData(oldp+1275,(((0xfU == (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_ff))
                                 ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_shift_ff)
                                 : (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_ff))),5);
    bufp->fullBit(oldp+1276,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__dr_out));
    bufp->fullBit(oldp+1277,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_dr_shift_ff) 
                              | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_ir_shift_ff))));
    bufp->fullBit(oldp+1278,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_dr_shift_ff)
                               ? (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__dr_out)
                               : ((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_fsm_ir_shift_ff) 
                                  & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc__DOT__tap_ir_shift_ff)))));
    bufp->fullCData(oldp+1279,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_capture_sync),3);
    bufp->fullCData(oldp+1280,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_tapc_synchronizer__DOT__dmi_ch_shift_sync),3);
    bufp->fullBit(oldp+1281,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__fsm));
    bufp->fullBit(oldp+1282,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__dmem_hready) 
                              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_dmem_ahb__DOT__fsm))));
    bufp->fullBit(oldp+1283,(((IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_imem_ahb__DOT__fsm) 
                              & (IData)(vlSelf->scr1_top_tb_ahb__DOT__imem_hready))));
    bufp->fullCData(oldp+1284,((((IData)(vlSelf->scr1_top_tb_ahb__DOT__trst_n) 
                                 << 1U) | (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_cpu_rstn_reset_sync__DOT__local_rst_n_in))),2);
    bufp->fullIData(oldp+1285,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_tcm__DOT__dmem_writedata),32);
    bufp->fullQData(oldp+1286,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__mtime_new),64);
    bufp->fullBit(oldp+1288,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timer_clksrc_rtc));
    bufp->fullCData(oldp+1289,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__rtc_sync),4);
    bufp->fullBit(oldp+1290,((1U & VL_REDXOR_4((0xcU 
                                                & (IData)(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__rtc_sync))))));
    bufp->fullBit(oldp+1291,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__timeclk_cnt_en));
    bufp->fullBit(oldp+1292,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_timer__DOT__time_posedge));
    bufp->fullIData(oldp+1293,(0x100000U),32);
    bufp->fullIData(oldp+1294,(0x1e8480U),32);
    bufp->fullIData(oldp+1295,(1U),32);
    bufp->fullIData(oldp+1296,(2U),32);
    bufp->fullIData(oldp+1297,(0x200U),32);
    bufp->fullIData(oldp+1298,(0x240U),32);
    bufp->fullIData(oldp+1299,(0x1c0U),32);
    bufp->fullBit(oldp+1300,(0U));
    bufp->fullCData(oldp+1301,(0U),4);
    bufp->fullCData(oldp+1302,(0U),3);
    bufp->fullCData(oldp+1303,(2U),3);
    bufp->fullCData(oldp+1304,(1U),4);
    bufp->fullIData(oldp+1305,(0x14U),32);
    bufp->fullBit(oldp+1306,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage_en));
    bufp->fullBit(oldp+1307,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__mirage_rangeen));
    bufp->fullIData(oldp+1308,(0xffffffffU),32);
    bufp->fullBit(oldp+1309,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__imem_req_ack_nc));
    bufp->fullBit(oldp+1310,(vlSelf->scr1_top_tb_ahb__DOT__i_memory_tb__DOT__dmem_req_ack_nc));
    bufp->fullBit(oldp+1311,(1U));
    bufp->fullIData(oldp+1312,(0xdeb11001U),32);
    bufp->fullIData(oldp+1313,(2U),32);
    bufp->fullBit(oldp+1314,(0U));
    bufp->fullBit(oldp+1315,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__core_rst_n_status_sync));
    bufp->fullBit(oldp+1316,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__rst_n_sync));
    bufp->fullBit(oldp+1317,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__cpu_rst_n_sync));
    bufp->fullCData(oldp+1318,(0x73U),7);
    bufp->fullCData(oldp+1319,(3U),7);
    bufp->fullCData(oldp+1320,(0x23U),7);
    bufp->fullCData(oldp+1321,(1U),3);
    bufp->fullCData(oldp+1322,(4U),3);
    bufp->fullCData(oldp+1323,(5U),3);
    bufp->fullBit(oldp+1324,(0U));
    bufp->fullBit(oldp+1325,(1U));
    bufp->fullCData(oldp+1326,(2U),2);
    bufp->fullSData(oldp+1327,(0x7b2U),12);
    bufp->fullCData(oldp+1328,(6U),5);
    bufp->fullCData(oldp+1329,(2U),4);
    bufp->fullCData(oldp+1330,(0U),7);
    bufp->fullCData(oldp+1331,(1U),7);
    bufp->fullIData(oldp+1332,(0x100073U),32);
    bufp->fullBit(oldp+1333,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_dm__DOT__abstractcs_ro_en));
    bufp->fullCData(oldp+1334,(5U),5);
    bufp->fullCData(oldp+1335,(0x1fU),5);
    bufp->fullCData(oldp+1336,(0x12U),5);
    bufp->fullCData(oldp+1337,(0x11U),5);
    bufp->fullCData(oldp+1338,(0x10U),5);
    bufp->fullCData(oldp+1339,(0xfU),5);
    bufp->fullCData(oldp+1340,(0xeU),5);
    bufp->fullCData(oldp+1341,(0xcU),5);
    bufp->fullCData(oldp+1342,(0xbU),5);
    bufp->fullCData(oldp+1343,(0xaU),5);
    bufp->fullCData(oldp+1344,(9U),5);
    bufp->fullCData(oldp+1345,(4U),5);
    bufp->fullCData(oldp+1346,(3U),5);
    bufp->fullCData(oldp+1347,(0U),5);
    bufp->fullIData(oldp+1348,(0x21U),32);
    bufp->fullIData(oldp+1349,(0x22U),32);
    bufp->fullIData(oldp+1350,(0x28U),32);
    bufp->fullBit(oldp+1351,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__pipe2clkctl_wake_req_o));
    bufp->fullIData(oldp+1352,(0xfffffffeU),32);
    bufp->fullIData(oldp+1353,(0x20U),32);
    bufp->fullIData(oldp+1354,(0x40U),32);
    bufp->fullIData(oldp+1355,(0x40000000U),32);
    bufp->fullIData(oldp+1356,(0x40U),32);
    bufp->fullIData(oldp+1357,(6U),32);
    bufp->fullBit(oldp+1358,(vlSelf->scr1_top_tb_ahb__DOT__i_top__DOT__i_core_top__DOT__i_pipe_top__DOT__i_pipe_hdu__DOT__csr_dscratch0_wr));
    bufp->fullCData(oldp+1359,(1U),5);
    bufp->fullCData(oldp+1360,(2U),5);
    bufp->fullIData(oldp+1361,(4U),32);
    bufp->fullIData(oldp+1362,(3U),32);
    bufp->fullIData(oldp+1363,(0x10U),32);
    bufp->fullIData(oldp+1364,(4U),32);
    bufp->fullIData(oldp+1365,(5U),32);
    bufp->fullIData(oldp+1366,(3U),32);
    bufp->fullIData(oldp+1367,(1U),32);
    bufp->fullIData(oldp+1368,(0x20U),32);
    bufp->fullIData(oldp+1369,(0U),32);
    bufp->fullIData(oldp+1370,(0x22011200U),32);
    bufp->fullIData(oldp+1371,(0xffff0000U),32);
    bufp->fullIData(oldp+1372,(0x480000U),32);
    bufp->fullIData(oldp+1373,(0xffffffe0U),32);
    bufp->fullIData(oldp+1374,(0x490000U),32);
    bufp->fullIData(oldp+1375,(0x10000U),32);
    bufp->fullIData(oldp+1376,(0x4000U),32);
    bufp->fullCData(oldp+1377,(8U),5);
    bufp->fullCData(oldp+1378,(0x14U),5);
    bufp->fullIData(oldp+1379,(0U),32);
    bufp->fullIData(oldp+1380,(0xaU),32);
    bufp->fullIData(oldp+1381,(vlSelf->scr1_top_tb_ahb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__code),32);
    bufp->fullIData(oldp+1382,(0x1aU),32);
    bufp->fullIData(oldp+1383,(0xb000U),32);
    bufp->fullIData(oldp+1384,(0x800U),32);
    bufp->fullIData(oldp+1385,(0xffff0000U),32);
    bufp->fullIData(oldp+1386,(0x480000U),32);
    bufp->fullIData(oldp+1387,(0xffffffe0U),32);
    bufp->fullIData(oldp+1388,(0x490000U),32);
    bufp->fullIData(oldp+1389,(0xf8U),32);
    bufp->fullIData(oldp+1390,(0xf0000000U),32);
    bufp->fullIData(oldp+1391,(0xf0000100U),32);
    bufp->fullIData(oldp+1392,(0xf0000200U),32);
    bufp->fullIData(oldp+1393,(0xcU),32);
    bufp->fullIData(oldp+1394,(0x20U),26);
    bufp->fullCData(oldp+1395,(3U),4);
    bufp->fullCData(oldp+1396,(7U),4);
    bufp->fullCData(oldp+1397,(0xbU),4);
    bufp->fullCData(oldp+1398,(0U),4);
    bufp->fullIData(oldp+1399,(0x17U),32);
    bufp->fullIData(oldp+1400,(5U),32);
    bufp->fullIData(oldp+1401,(9U),32);
    bufp->fullIData(oldp+1402,(7U),32);
    bufp->fullCData(oldp+1403,(4U),4);
    bufp->fullIData(oldp+1404,(8U),32);
    bufp->fullCData(oldp+1405,(0U),2);
    bufp->fullCData(oldp+1406,(1U),2);
    bufp->fullCData(oldp+1407,(3U),2);
    bufp->fullSData(oldp+1408,(0x7b0U),12);
    bufp->fullSData(oldp+1409,(0x7b1U),12);
    bufp->fullSData(oldp+1410,(0x7b2U),12);
    bufp->fullSData(oldp+1411,(0x7b3U),12);
    bufp->fullSData(oldp+1412,(0xf11U),12);
    bufp->fullSData(oldp+1413,(0xf12U),12);
    bufp->fullSData(oldp+1414,(0xf13U),12);
    bufp->fullSData(oldp+1415,(0xf14U),12);
    bufp->fullSData(oldp+1416,(0x300U),12);
    bufp->fullSData(oldp+1417,(0x301U),12);
    bufp->fullSData(oldp+1418,(0x304U),12);
    bufp->fullSData(oldp+1419,(0x305U),12);
    bufp->fullSData(oldp+1420,(0x340U),12);
    bufp->fullSData(oldp+1421,(0x341U),12);
    bufp->fullSData(oldp+1422,(0x342U),12);
    bufp->fullSData(oldp+1423,(0x343U),12);
    bufp->fullSData(oldp+1424,(0x344U),12);
    bufp->fullSData(oldp+1425,(0xb00U),12);
    bufp->fullSData(oldp+1426,(0xb02U),12);
    bufp->fullSData(oldp+1427,(0xb80U),12);
    bufp->fullSData(oldp+1428,(0xb82U),12);
    bufp->fullSData(oldp+1429,(0xc01U),12);
    bufp->fullSData(oldp+1430,(0xc00U),12);
    bufp->fullSData(oldp+1431,(0xc02U),12);
    bufp->fullSData(oldp+1432,(0xc81U),12);
    bufp->fullSData(oldp+1433,(0xc80U),12);
    bufp->fullSData(oldp+1434,(0xc82U),12);
    bufp->fullSData(oldp+1435,(4U),12);
    bufp->fullSData(oldp+1436,(0x7e0U),12);
    bufp->fullSData(oldp+1437,(0x7a0U),12);
    bufp->fullSData(oldp+1438,(8U),12);
    bufp->fullSData(oldp+1439,(0xbf0U),12);
    bufp->fullSData(oldp+1440,(0xbf1U),12);
    bufp->fullSData(oldp+1441,(0xbf2U),12);
    bufp->fullSData(oldp+1442,(0xbf3U),12);
    bufp->fullSData(oldp+1443,(0xbf4U),12);
    bufp->fullSData(oldp+1444,(0xbf5U),12);
    bufp->fullSData(oldp+1445,(0xbf6U),12);
    bufp->fullSData(oldp+1446,(0xbf7U),12);
    bufp->fullBit(oldp+1447,(0U));
    bufp->fullBit(oldp+1448,(1U));
    bufp->fullCData(oldp+1449,(1U),2);
    bufp->fullIData(oldp+1450,(0x40001104U),32);
    bufp->fullIData(oldp+1451,(0U),32);
    bufp->fullIData(oldp+1452,(8U),32);
    bufp->fullIData(oldp+1453,(0x22011200U),32);
    bufp->fullCData(oldp+1454,(3U),2);
    bufp->fullIData(oldp+1455,(7U),32);
    bufp->fullIData(oldp+1456,(0xbU),32);
    bufp->fullCData(oldp+1457,(0x60U),7);
    bufp->fullCData(oldp+1458,(0x64U),7);
    bufp->fullCData(oldp+1459,(0x58U),7);
    bufp->fullCData(oldp+1460,(0x5cU),7);
    bufp->fullCData(oldp+1461,(0x19U),7);
    bufp->fullIData(oldp+1462,(0x10U),32);
    bufp->fullCData(oldp+1463,(3U),3);
    bufp->fullCData(oldp+1464,(6U),3);
    bufp->fullCData(oldp+1465,(7U),3);
    bufp->fullIData(oldp+1466,(8U),32);
    bufp->fullIData(oldp+1467,(0xcU),32);
    bufp->fullCData(oldp+1468,(0U),3);
    bufp->fullCData(oldp+1469,(1U),3);
    bufp->fullCData(oldp+1470,(2U),3);
    bufp->fullCData(oldp+1471,(4U),3);
    bufp->fullSData(oldp+1472,(0x7a1U),12);
    bufp->fullSData(oldp+1473,(0x7a2U),12);
    bufp->fullSData(oldp+1474,(0x7a4U),12);
    bufp->fullIData(oldp+1475,(0x1fU),32);
    bufp->fullIData(oldp+1476,(0x1cU),32);
    bufp->fullIData(oldp+1477,(0x1bU),32);
    bufp->fullIData(oldp+1478,(0x15U),32);
    bufp->fullIData(oldp+1479,(0x14U),32);
    bufp->fullIData(oldp+1480,(0x13U),32);
    bufp->fullIData(oldp+1481,(0x12U),32);
    bufp->fullIData(oldp+1482,(0x11U),32);
    bufp->fullCData(oldp+1483,(2U),4);
    bufp->fullCData(oldp+1484,(0U),6);
    bufp->fullIData(oldp+1485,(0x19U),32);
    bufp->fullIData(oldp+1486,(0x18U),32);
    bufp->fullIData(oldp+1487,(0x17U),32);
    bufp->fullIData(oldp+1488,(9U),32);
    bufp->fullCData(oldp+1489,(0U),2);
    bufp->fullCData(oldp+1490,(7U),6);
    bufp->fullCData(oldp+1491,(0x20U),6);
    bufp->fullCData(oldp+1492,(0x29U),6);
    bufp->fullCData(oldp+1493,(4U),7);
    bufp->fullCData(oldp+1494,(5U),7);
    bufp->fullCData(oldp+1495,(0x10U),7);
    bufp->fullCData(oldp+1496,(0x11U),7);
    bufp->fullCData(oldp+1497,(0x12U),7);
    bufp->fullCData(oldp+1498,(0x16U),7);
    bufp->fullCData(oldp+1499,(0x17U),7);
    bufp->fullCData(oldp+1500,(0x18U),7);
    bufp->fullCData(oldp+1501,(0x20U),7);
    bufp->fullCData(oldp+1502,(0x21U),7);
    bufp->fullCData(oldp+1503,(0x22U),7);
    bufp->fullCData(oldp+1504,(0x24U),7);
    bufp->fullCData(oldp+1505,(0x25U),7);
    bufp->fullCData(oldp+1506,(0x40U),7);
    bufp->fullCData(oldp+1507,(0x1eU),5);
    bufp->fullCData(oldp+1508,(0x1dU),5);
    bufp->fullCData(oldp+1509,(0x1cU),5);
    bufp->fullCData(oldp+1510,(0x1bU),5);
    bufp->fullCData(oldp+1511,(0x1aU),5);
    bufp->fullCData(oldp+1512,(0x19U),5);
    bufp->fullCData(oldp+1513,(0x17U),5);
    bufp->fullCData(oldp+1514,(0x16U),5);
    bufp->fullCData(oldp+1515,(0x15U),5);
    bufp->fullCData(oldp+1516,(0x13U),5);
    bufp->fullCData(oldp+1517,(0xdU),5);
    bufp->fullCData(oldp+1518,(7U),5);
    bufp->fullCData(oldp+1519,(0x18U),5);
}

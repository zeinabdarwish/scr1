// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vscr1_top_tb_ahb.h"
#include "Vscr1_top_tb_ahb__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vscr1_top_tb_ahb::Vscr1_top_tb_ahb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vscr1_top_tb_ahb__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vscr1_top_tb_ahb::Vscr1_top_tb_ahb(const char* _vcname__)
    : Vscr1_top_tb_ahb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vscr1_top_tb_ahb::~Vscr1_top_tb_ahb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vscr1_top_tb_ahb___024root___eval_debug_assertions(Vscr1_top_tb_ahb___024root* vlSelf);
#endif  // VL_DEBUG
void Vscr1_top_tb_ahb___024root___eval_static(Vscr1_top_tb_ahb___024root* vlSelf);
void Vscr1_top_tb_ahb___024root___eval_initial(Vscr1_top_tb_ahb___024root* vlSelf);
void Vscr1_top_tb_ahb___024root___eval_settle(Vscr1_top_tb_ahb___024root* vlSelf);
void Vscr1_top_tb_ahb___024root___eval(Vscr1_top_tb_ahb___024root* vlSelf);

void Vscr1_top_tb_ahb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vscr1_top_tb_ahb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vscr1_top_tb_ahb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vscr1_top_tb_ahb___024root___eval_static(&(vlSymsp->TOP));
        Vscr1_top_tb_ahb___024root___eval_initial(&(vlSymsp->TOP));
        Vscr1_top_tb_ahb___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vscr1_top_tb_ahb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vscr1_top_tb_ahb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vscr1_top_tb_ahb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vscr1_top_tb_ahb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vscr1_top_tb_ahb___024root___eval_final(Vscr1_top_tb_ahb___024root* vlSelf);

VL_ATTR_COLD void Vscr1_top_tb_ahb::final() {
    Vscr1_top_tb_ahb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vscr1_top_tb_ahb::hierName() const { return vlSymsp->name(); }
const char* Vscr1_top_tb_ahb::modelName() const { return "Vscr1_top_tb_ahb"; }
unsigned Vscr1_top_tb_ahb::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vscr1_top_tb_ahb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vscr1_top_tb_ahb___024root__trace_init_top(Vscr1_top_tb_ahb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vscr1_top_tb_ahb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vscr1_top_tb_ahb___024root*>(voidSelf);
    Vscr1_top_tb_ahb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vscr1_top_tb_ahb___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vscr1_top_tb_ahb___024root__trace_register(Vscr1_top_tb_ahb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vscr1_top_tb_ahb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vscr1_top_tb_ahb::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vscr1_top_tb_ahb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}

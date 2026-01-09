// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VsCPU__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VsCPU::VsCPU(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VsCPU__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , segH{vlSymsp->TOP.segH}
    , segL{vlSymsp->TOP.segL}
    , segnum{vlSymsp->TOP.segnum}
    , PC{vlSymsp->TOP.PC}
    , temp{vlSymsp->TOP.temp}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VsCPU::VsCPU(const char* _vcname__)
    : VsCPU(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VsCPU::~VsCPU() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VsCPU___024root___eval_debug_assertions(VsCPU___024root* vlSelf);
#endif  // VL_DEBUG
void VsCPU___024root___eval_static(VsCPU___024root* vlSelf);
void VsCPU___024root___eval_initial(VsCPU___024root* vlSelf);
void VsCPU___024root___eval_settle(VsCPU___024root* vlSelf);
void VsCPU___024root___eval(VsCPU___024root* vlSelf);

void VsCPU::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VsCPU::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VsCPU___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VsCPU___024root___eval_static(&(vlSymsp->TOP));
        VsCPU___024root___eval_initial(&(vlSymsp->TOP));
        VsCPU___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VsCPU___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VsCPU::eventsPending() { return false; }

uint64_t VsCPU::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VsCPU::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VsCPU___024root___eval_final(VsCPU___024root* vlSelf);

VL_ATTR_COLD void VsCPU::final() {
    VsCPU___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VsCPU::hierName() const { return vlSymsp->name(); }
const char* VsCPU::modelName() const { return "VsCPU"; }
unsigned VsCPU::threads() const { return 1; }
void VsCPU::prepareClone() const { contextp()->prepareClone(); }
void VsCPU::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VsCPU::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VsCPU___024root__trace_decl_types(VerilatedVcd* tracep);

void VsCPU___024root__trace_init_top(VsCPU___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VsCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsCPU___024root*>(voidSelf);
    VsCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VsCPU___024root__trace_decl_types(tracep);
    VsCPU___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VsCPU___024root__trace_register(VsCPU___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VsCPU::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VsCPU::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VsCPU___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}

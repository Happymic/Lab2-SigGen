// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdual_sinegen__Syms.h"


void Vdual_sinegen___024root__trace_chg_0_sub_0(Vdual_sinegen___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdual_sinegen___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_sinegen___024root__trace_chg_0\n"); );
    // Init
    Vdual_sinegen___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdual_sinegen___024root*>(voidSelf);
    Vdual_sinegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdual_sinegen___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vdual_sinegen___024root__trace_chg_0_sub_0(Vdual_sinegen___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdual_sinegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_sinegen___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.rst));
    bufp->chgBit(oldp+2,(vlSelfRef.en));
    bufp->chgCData(oldp+3,(vlSelfRef.incr),8);
    bufp->chgCData(oldp+4,(vlSelfRef.phase),8);
    bufp->chgCData(oldp+5,(vlSelfRef.dout1),8);
    bufp->chgCData(oldp+6,(vlSelfRef.dout2),8);
    bufp->chgCData(oldp+7,(vlSelfRef.dual_sinegen__DOT__count),8);
    bufp->chgCData(oldp+8,((0xffU & ((IData)(vlSelfRef.dual_sinegen__DOT__count) 
                                     + (IData)(vlSelfRef.phase)))),8);
}

void Vdual_sinegen___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_sinegen___024root__trace_cleanup\n"); );
    // Init
    Vdual_sinegen___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdual_sinegen___024root*>(voidSelf);
    Vdual_sinegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}

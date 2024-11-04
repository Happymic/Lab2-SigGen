// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdual_sinegen.h for the primary calling header

#ifndef VERILATED_VDUAL_SINEGEN___024ROOT_H_
#define VERILATED_VDUAL_SINEGEN___024ROOT_H_  // guard

#include "verilated.h"


class Vdual_sinegen__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdual_sinegen___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_IN8(incr,7,0);
    VL_IN8(phase,7,0);
    VL_OUT8(dout1,7,0);
    VL_OUT8(dout2,7,0);
    CData/*7:0*/ dual_sinegen__DOT__count;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 256> dual_sinegen__DOT__u_rom__DOT__memory;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdual_sinegen__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdual_sinegen___024root(Vdual_sinegen__Syms* symsp, const char* v__name);
    ~Vdual_sinegen___024root();
    VL_UNCOPYABLE(Vdual_sinegen___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdual_sinegen.h for the primary calling header

#include "Vdual_sinegen__pch.h"
#include "Vdual_sinegen___024root.h"

VL_ATTR_COLD void Vdual_sinegen___024root___eval_static(Vdual_sinegen___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdual_sinegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_sinegen___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vdual_sinegen___024root___eval_initial__TOP(Vdual_sinegen___024root* vlSelf);

VL_ATTR_COLD void Vdual_sinegen___024root___eval_initial(Vdual_sinegen___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdual_sinegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_sinegen___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdual_sinegen___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vdual_sinegen___024root___eval_initial__TOP(Vdual_sinegen___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdual_sinegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_sinegen___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e6d656dU;
    __Vtemp_1[1U] = 0x65726f6dU;
    __Vtemp_1[2U] = 0x73696eU;
    VL_READMEM_N(true, 8, 256, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelfRef.dual_sinegen__DOT__u_rom__DOT__memory)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vdual_sinegen___024root___eval_final(Vdual_sinegen___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdual_sinegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_sinegen___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdual_sinegen___024root___dump_triggers__stl(Vdual_sinegen___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vdual_sinegen___024root___eval_phase__stl(Vdual_sinegen___024root* vlSelf);

VL_ATTR_COLD void Vdual_sinegen___024root___eval_settle(Vdual_sinegen___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdual_sinegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_sinegen___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vdual_sinegen___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("dual_sinegen.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vdual_sinegen___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdual_sinegen___024root___dump_triggers__stl(Vdual_sinegen___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdual_sinegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_sinegen___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdual_sinegen___024root___stl_sequent__TOP__0(Vdual_sinegen___024root* vlSelf);

VL_ATTR_COLD void Vdual_sinegen___024root___eval_stl(Vdual_sinegen___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdual_sinegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_sinegen___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vdual_sinegen___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vdual_sinegen___024root___stl_sequent__TOP__0(Vdual_sinegen___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdual_sinegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_sinegen___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dout1 = vlSelfRef.dual_sinegen__DOT__u_rom__DOT__memory
        [vlSelfRef.dual_sinegen__DOT__count];
    vlSelfRef.dout2 = vlSelfRef.dual_sinegen__DOT__u_rom__DOT__memory
        [(0xffU & ((IData)(vlSelfRef.dual_sinegen__DOT__count) 
                   + (IData)(vlSelfRef.phase)))];
}

VL_ATTR_COLD void Vdual_sinegen___024root___eval_triggers__stl(Vdual_sinegen___024root* vlSelf);

VL_ATTR_COLD bool Vdual_sinegen___024root___eval_phase__stl(Vdual_sinegen___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdual_sinegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_sinegen___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vdual_sinegen___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vdual_sinegen___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdual_sinegen___024root___dump_triggers__ico(Vdual_sinegen___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdual_sinegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_sinegen___024root___dump_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdual_sinegen___024root___dump_triggers__act(Vdual_sinegen___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdual_sinegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_sinegen___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdual_sinegen___024root___dump_triggers__nba(Vdual_sinegen___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdual_sinegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_sinegen___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdual_sinegen___024root___ctor_var_reset(Vdual_sinegen___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdual_sinegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_sinegen___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->incr = VL_RAND_RESET_I(8);
    vlSelf->phase = VL_RAND_RESET_I(8);
    vlSelf->dout1 = VL_RAND_RESET_I(8);
    vlSelf->dout2 = VL_RAND_RESET_I(8);
    vlSelf->dual_sinegen__DOT__count = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->dual_sinegen__DOT__u_rom__DOT__memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}

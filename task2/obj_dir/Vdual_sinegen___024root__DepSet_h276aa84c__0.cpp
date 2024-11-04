// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdual_sinegen.h for the primary calling header

#include "Vdual_sinegen__pch.h"
#include "Vdual_sinegen___024root.h"

void Vdual_sinegen___024root___ico_sequent__TOP__0(Vdual_sinegen___024root* vlSelf);

void Vdual_sinegen___024root___eval_ico(Vdual_sinegen___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdual_sinegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_sinegen___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vdual_sinegen___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vdual_sinegen___024root___ico_sequent__TOP__0(Vdual_sinegen___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdual_sinegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_sinegen___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dout2 = vlSelfRef.dual_sinegen__DOT__u_rom__DOT__memory
        [(0xffU & ((IData)(vlSelfRef.dual_sinegen__DOT__count) 
                   + (IData)(vlSelfRef.phase)))];
}

void Vdual_sinegen___024root___eval_triggers__ico(Vdual_sinegen___024root* vlSelf);

bool Vdual_sinegen___024root___eval_phase__ico(Vdual_sinegen___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdual_sinegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_sinegen___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vdual_sinegen___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vdual_sinegen___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vdual_sinegen___024root___eval_act(Vdual_sinegen___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdual_sinegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_sinegen___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vdual_sinegen___024root___nba_sequent__TOP__0(Vdual_sinegen___024root* vlSelf);

void Vdual_sinegen___024root___eval_nba(Vdual_sinegen___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdual_sinegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_sinegen___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vdual_sinegen___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vdual_sinegen___024root___nba_sequent__TOP__0(Vdual_sinegen___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdual_sinegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_sinegen___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vdly__dual_sinegen__DOT__count;
    __Vdly__dual_sinegen__DOT__count = 0;
    // Body
    __Vdly__dual_sinegen__DOT__count = vlSelfRef.dual_sinegen__DOT__count;
    if (vlSelfRef.rst) {
        __Vdly__dual_sinegen__DOT__count = 0U;
    } else if (vlSelfRef.en) {
        __Vdly__dual_sinegen__DOT__count = (0xffU & 
                                            ((IData)(vlSelfRef.dual_sinegen__DOT__count) 
                                             + (IData)(vlSelfRef.incr)));
    }
    vlSelfRef.dual_sinegen__DOT__count = __Vdly__dual_sinegen__DOT__count;
    vlSelfRef.dout1 = vlSelfRef.dual_sinegen__DOT__u_rom__DOT__memory
        [vlSelfRef.dual_sinegen__DOT__count];
    vlSelfRef.dout2 = vlSelfRef.dual_sinegen__DOT__u_rom__DOT__memory
        [(0xffU & ((IData)(vlSelfRef.dual_sinegen__DOT__count) 
                   + (IData)(vlSelfRef.phase)))];
}

void Vdual_sinegen___024root___eval_triggers__act(Vdual_sinegen___024root* vlSelf);

bool Vdual_sinegen___024root___eval_phase__act(Vdual_sinegen___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdual_sinegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_sinegen___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdual_sinegen___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vdual_sinegen___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdual_sinegen___024root___eval_phase__nba(Vdual_sinegen___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdual_sinegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_sinegen___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdual_sinegen___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdual_sinegen___024root___dump_triggers__ico(Vdual_sinegen___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdual_sinegen___024root___dump_triggers__nba(Vdual_sinegen___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdual_sinegen___024root___dump_triggers__act(Vdual_sinegen___024root* vlSelf);
#endif  // VL_DEBUG

void Vdual_sinegen___024root___eval(Vdual_sinegen___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdual_sinegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_sinegen___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vdual_sinegen___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("dual_sinegen.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vdual_sinegen___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vdual_sinegen___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("dual_sinegen.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vdual_sinegen___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("dual_sinegen.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vdual_sinegen___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vdual_sinegen___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdual_sinegen___024root___eval_debug_assertions(Vdual_sinegen___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdual_sinegen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdual_sinegen___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelfRef.en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG

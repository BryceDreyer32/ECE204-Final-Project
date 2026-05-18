// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_array_tb.h for the primary calling header

#include "Vsystolic_array_tb__pch.h"

VL_ATTR_COLD void Vsystolic_array_tb___024root___eval_static__TOP(Vsystolic_array_tb___024root* vlSelf);
void Vsystolic_array_tb___024root___timing_ready(Vsystolic_array_tb___024root* vlSelf);

VL_ATTR_COLD void Vsystolic_array_tb___024root___eval_static(Vsystolic_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___eval_static\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsystolic_array_tb___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__systolic_array_tb__DOT__clk__0 
        = vlSelfRef.systolic_array_tb__DOT__clk;
    Vsystolic_array_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vsystolic_array_tb___024root___eval_static__TOP(Vsystolic_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___eval_static__TOP\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__i = 0U;
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 0U;
}

VL_ATTR_COLD void Vsystolic_array_tb___024root___eval_initial__TOP(Vsystolic_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___eval_initial__TOP\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.systolic_array_tb__DOT__clk = 0U;
}

VL_ATTR_COLD void Vsystolic_array_tb___024root___eval_final(Vsystolic_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___eval_final\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_array_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsystolic_array_tb___024root___eval_phase__stl(Vsystolic_array_tb___024root* vlSelf);

VL_ATTR_COLD void Vsystolic_array_tb___024root___eval_settle(Vsystolic_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___eval_settle\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vsystolic_array_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb/systolic_array_tb.sv", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vsystolic_array_tb___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vsystolic_array_tb___024root___eval_triggers_vec__stl(Vsystolic_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___eval_triggers_vec__stl\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vsystolic_array_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_array_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vsystolic_array_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vsystolic_array_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

VL_ATTR_COLD void Vsystolic_array_tb___024root___stl_sequent__TOP__0(Vsystolic_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___stl_sequent__TOP__0\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.systolic_array_tb__DOT__c_out[0U] = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out;
    vlSelfRef.systolic_array_tb__DOT__c_out[1U] = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out;
    vlSelfRef.systolic_array_tb__DOT__c_out[2U] = (IData)(
                                                          (((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out)) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out))));
    vlSelfRef.systolic_array_tb__DOT__c_out[3U] = (IData)(
                                                          ((((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out)) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out))) 
                                                           >> 0x00000020U));
    vlSelfRef.systolic_array_tb__DOT__c_out[4U] = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out;
    vlSelfRef.systolic_array_tb__DOT__c_out[5U] = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out;
    vlSelfRef.systolic_array_tb__DOT__c_out[6U] = (IData)(
                                                          (((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out)) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out))));
    vlSelfRef.systolic_array_tb__DOT__c_out[7U] = (IData)(
                                                          ((((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out)) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out))) 
                                                           >> 0x00000020U));
    vlSelfRef.systolic_array_tb__DOT__c_out[8U] = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out;
    vlSelfRef.systolic_array_tb__DOT__c_out[9U] = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out;
    vlSelfRef.systolic_array_tb__DOT__c_out[10U] = (IData)(
                                                           (((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out)) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out))));
    vlSelfRef.systolic_array_tb__DOT__c_out[11U] = (IData)(
                                                           ((((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out)) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out))) 
                                                            >> 0x00000020U));
    vlSelfRef.systolic_array_tb__DOT__c_out[12U] = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out;
    vlSelfRef.systolic_array_tb__DOT__c_out[13U] = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out;
    vlSelfRef.systolic_array_tb__DOT__c_out[14U] = (IData)(
                                                           (((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out)) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out))));
    vlSelfRef.systolic_array_tb__DOT__c_out[15U] = (IData)(
                                                           ((((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out)) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out))) 
                                                            >> 0x00000020U));
    vlSelfRef.systolic_array_tb__DOT__c_out[16U] = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out;
    vlSelfRef.systolic_array_tb__DOT__c_out[17U] = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out;
    vlSelfRef.systolic_array_tb__DOT__c_out[18U] = (IData)(
                                                           (((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out)) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out))));
    vlSelfRef.systolic_array_tb__DOT__c_out[19U] = (IData)(
                                                           ((((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out)) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out))) 
                                                            >> 0x00000020U));
    vlSelfRef.systolic_array_tb__DOT__c_out[20U] = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out;
    vlSelfRef.systolic_array_tb__DOT__c_out[21U] = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out;
    vlSelfRef.systolic_array_tb__DOT__c_out[22U] = (IData)(
                                                           (((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out)) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out))));
    vlSelfRef.systolic_array_tb__DOT__c_out[23U] = (IData)(
                                                           ((((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out)) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out))) 
                                                            >> 0x00000020U));
    vlSelfRef.systolic_array_tb__DOT__c_out[24U] = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out;
    vlSelfRef.systolic_array_tb__DOT__c_out[25U] = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out;
    vlSelfRef.systolic_array_tb__DOT__c_out[26U] = (IData)(
                                                           (((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out)) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out))));
    vlSelfRef.systolic_array_tb__DOT__c_out[27U] = (IData)(
                                                           ((((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out)) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out))) 
                                                            >> 0x00000020U));
    vlSelfRef.systolic_array_tb__DOT__c_out[28U] = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out;
    vlSelfRef.systolic_array_tb__DOT__c_out[29U] = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out;
    vlSelfRef.systolic_array_tb__DOT__c_out[30U] = (IData)(
                                                           (((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out)) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out))));
    vlSelfRef.systolic_array_tb__DOT__c_out[31U] = (IData)(
                                                           ((((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out)) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out))) 
                                                            >> 0x00000020U));
    vlSelfRef.systolic_array_tb__DOT__c_out[32U] = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out;
    vlSelfRef.systolic_array_tb__DOT__c_out[33U] = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out;
    vlSelfRef.systolic_array_tb__DOT__c_out[34U] = (IData)(
                                                           (((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out)) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out))));
    vlSelfRef.systolic_array_tb__DOT__c_out[35U] = (IData)(
                                                           ((((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out)) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out))) 
                                                            >> 0x00000020U));
    vlSelfRef.systolic_array_tb__DOT__c_out[36U] = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out;
    vlSelfRef.systolic_array_tb__DOT__c_out[37U] = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out;
    vlSelfRef.systolic_array_tb__DOT__c_out[38U] = (IData)(
                                                           (((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out)) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out))));
    vlSelfRef.systolic_array_tb__DOT__c_out[39U] = (IData)(
                                                           ((((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out)) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out))) 
                                                            >> 0x00000020U));
    vlSelfRef.systolic_array_tb__DOT__c_out[40U] = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out;
    vlSelfRef.systolic_array_tb__DOT__c_out[41U] = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out;
    vlSelfRef.systolic_array_tb__DOT__c_out[42U] = (IData)(
                                                           (((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out)) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out))));
    vlSelfRef.systolic_array_tb__DOT__c_out[43U] = (IData)(
                                                           ((((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out)) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out))) 
                                                            >> 0x00000020U));
    vlSelfRef.systolic_array_tb__DOT__c_out[44U] = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out;
    vlSelfRef.systolic_array_tb__DOT__c_out[45U] = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out;
    vlSelfRef.systolic_array_tb__DOT__c_out[46U] = (IData)(
                                                           (((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out)) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out))));
    vlSelfRef.systolic_array_tb__DOT__c_out[47U] = (IData)(
                                                           ((((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out)) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out))) 
                                                            >> 0x00000020U));
    vlSelfRef.systolic_array_tb__DOT__c_out[48U] = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out;
    vlSelfRef.systolic_array_tb__DOT__c_out[49U] = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out;
    vlSelfRef.systolic_array_tb__DOT__c_out[50U] = (IData)(
                                                           (((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out)) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out))));
    vlSelfRef.systolic_array_tb__DOT__c_out[51U] = (IData)(
                                                           ((((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out)) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out))) 
                                                            >> 0x00000020U));
    vlSelfRef.systolic_array_tb__DOT__c_out[52U] = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out;
    vlSelfRef.systolic_array_tb__DOT__c_out[53U] = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out;
    vlSelfRef.systolic_array_tb__DOT__c_out[54U] = (IData)(
                                                           (((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out)) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out))));
    vlSelfRef.systolic_array_tb__DOT__c_out[55U] = (IData)(
                                                           ((((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out)) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out))) 
                                                            >> 0x00000020U));
    vlSelfRef.systolic_array_tb__DOT__c_out[56U] = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out;
    vlSelfRef.systolic_array_tb__DOT__c_out[57U] = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out;
    vlSelfRef.systolic_array_tb__DOT__c_out[58U] = (IData)(
                                                           (((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out)) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out))));
    vlSelfRef.systolic_array_tb__DOT__c_out[59U] = (IData)(
                                                           ((((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out)) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out))) 
                                                            >> 0x00000020U));
    vlSelfRef.systolic_array_tb__DOT__c_out[60U] = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out;
    vlSelfRef.systolic_array_tb__DOT__c_out[61U] = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out;
    vlSelfRef.systolic_array_tb__DOT__c_out[62U] = (IData)(
                                                           (((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out)) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out))));
    vlSelfRef.systolic_array_tb__DOT__c_out[63U] = (IData)(
                                                           ((((QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out)) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out))) 
                                                            >> 0x00000020U));
}

VL_ATTR_COLD void Vsystolic_array_tb___024root____Vm_traceActivitySetAll(Vsystolic_array_tb___024root* vlSelf);

VL_ATTR_COLD void Vsystolic_array_tb___024root___eval_stl(Vsystolic_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___eval_stl\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vsystolic_array_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vsystolic_array_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vsystolic_array_tb___024root___eval_phase__stl(Vsystolic_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___eval_phase__stl\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsystolic_array_tb___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsystolic_array_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vsystolic_array_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vsystolic_array_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vsystolic_array_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_array_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vsystolic_array_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge systolic_array_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsystolic_array_tb___024root____Vm_traceActivitySetAll(Vsystolic_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root____Vm_traceActivitySetAll\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vsystolic_array_tb___024root___ctor_var_reset(Vsystolic_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___ctor_var_reset\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->systolic_array_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 437242560004322324ull);
    vlSelf->systolic_array_tb__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6845846810757216081ull);
    vlSelf->systolic_array_tb__DOT__a_in = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4893769863841999285ull);
    vlSelf->systolic_array_tb__DOT__b_in = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1934719890609184342ull);
    VL_SCOPED_RAND_RESET_W(2048, vlSelf->systolic_array_tb__DOT__c_out, __VscopeHash, 15663559392368850173ull);
    vlSelf->systolic_array_tb__DOT__dut__DOT__a_hori__BRA__7__03a0__KET__ = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17380817044858501520ull);
    vlSelf->systolic_array_tb__DOT__dut__DOT__b_vert__BRA__7__03a0__KET__ = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16869505230023481133ull);
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out = 0;
    vlSelf->systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__systolic_array_tb__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

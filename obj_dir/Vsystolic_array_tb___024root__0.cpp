// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_array_tb.h for the primary calling header

#include "Vsystolic_array_tb__pch.h"

VL_ATTR_COLD void Vsystolic_array_tb___024root___eval_initial__TOP(Vsystolic_array_tb___024root* vlSelf);
VlCoroutine Vsystolic_array_tb___024root___eval_initial__TOP__Vtiming__0(Vsystolic_array_tb___024root* vlSelf);
VlCoroutine Vsystolic_array_tb___024root___eval_initial__TOP__Vtiming__1(Vsystolic_array_tb___024root* vlSelf);

void Vsystolic_array_tb___024root___eval_initial(Vsystolic_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___eval_initial\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsystolic_array_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vsystolic_array_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vsystolic_array_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vsystolic_array_tb___024root____VbeforeTrig_hd3aa6387__0(Vsystolic_array_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vsystolic_array_tb___024root___eval_initial__TOP__Vtiming__0(Vsystolic_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ systolic_array_tb__DOT__unnamedblk1__DOT__unnamedblk1_1__DOT____Vrepeat0;
    systolic_array_tb__DOT__unnamedblk1__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    vlSymsp->_vm_contextp__->dumpfile("/tmp/systolic.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.systolic_array_tb__DOT__rst = 1U;
    vlSelfRef.systolic_array_tb__DOT__a_in = 0ULL;
    vlSelfRef.systolic_array_tb__DOT__b_in = 0ULL;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "tb/systolic_array_tb.sv", 
                                         70);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    Vsystolic_array_tb___024root____VbeforeTrig_hd3aa6387__0(vlSelf, 
                                                             "@(posedge systolic_array_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hd3aa6387__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.clk)", 
                                                         "tb/systolic_array_tb.sv", 
                                                         72);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.systolic_array_tb__DOT__rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "tb/systolic_array_tb.sv", 
                                         75);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    Vsystolic_array_tb___024root____VbeforeTrig_hd3aa6387__0(vlSelf, 
                                                             "@(posedge systolic_array_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hd3aa6387__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.clk)", 
                                                         "tb/systolic_array_tb.sv", 
                                                         77);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.systolic_array_tb__DOT__a_in = (1ULL 
                                              | (0xffffffffffffff00ULL 
                                                 & vlSelfRef.systolic_array_tb__DOT__a_in));
    vlSelfRef.systolic_array_tb__DOT__b_in = (1ULL 
                                              | (0xffffffffffffff00ULL 
                                                 & vlSelfRef.systolic_array_tb__DOT__b_in));
    vlSelfRef.systolic_array_tb__DOT__a_in = (0x0000000000000100ULL 
                                              | (0xffffffffffff00ffULL 
                                                 & vlSelfRef.systolic_array_tb__DOT__a_in));
    vlSelfRef.systolic_array_tb__DOT__b_in = (0x0000000000000100ULL 
                                              | (0xffffffffffff00ffULL 
                                                 & vlSelfRef.systolic_array_tb__DOT__b_in));
    vlSelfRef.systolic_array_tb__DOT__a_in = (0x0000000000010000ULL 
                                              | (0xffffffffff00ffffULL 
                                                 & vlSelfRef.systolic_array_tb__DOT__a_in));
    vlSelfRef.systolic_array_tb__DOT__b_in = (0x0000000000010000ULL 
                                              | (0xffffffffff00ffffULL 
                                                 & vlSelfRef.systolic_array_tb__DOT__b_in));
    vlSelfRef.systolic_array_tb__DOT__a_in = (0x0000000001000000ULL 
                                              | (0xffffffff00ffffffULL 
                                                 & vlSelfRef.systolic_array_tb__DOT__a_in));
    vlSelfRef.systolic_array_tb__DOT__b_in = (0x0000000001000000ULL 
                                              | (0xffffffff00ffffffULL 
                                                 & vlSelfRef.systolic_array_tb__DOT__b_in));
    vlSelfRef.systolic_array_tb__DOT__a_in = (0x0000000100000000ULL 
                                              | (0xffffff00ffffffffULL 
                                                 & vlSelfRef.systolic_array_tb__DOT__a_in));
    vlSelfRef.systolic_array_tb__DOT__b_in = (0x0000000100000000ULL 
                                              | (0xffffff00ffffffffULL 
                                                 & vlSelfRef.systolic_array_tb__DOT__b_in));
    vlSelfRef.systolic_array_tb__DOT__a_in = (0x0000010000000000ULL 
                                              | (0xffff00ffffffffffULL 
                                                 & vlSelfRef.systolic_array_tb__DOT__a_in));
    vlSelfRef.systolic_array_tb__DOT__b_in = (0x0000010000000000ULL 
                                              | (0xffff00ffffffffffULL 
                                                 & vlSelfRef.systolic_array_tb__DOT__b_in));
    vlSelfRef.systolic_array_tb__DOT__a_in = (0x0001000000000000ULL 
                                              | (0xff00ffffffffffffULL 
                                                 & vlSelfRef.systolic_array_tb__DOT__a_in));
    vlSelfRef.systolic_array_tb__DOT__b_in = (0x0001000000000000ULL 
                                              | (0xff00ffffffffffffULL 
                                                 & vlSelfRef.systolic_array_tb__DOT__b_in));
    vlSelfRef.systolic_array_tb__DOT__a_in = (0x0100000000000000ULL 
                                              | (0x00ffffffffffffffULL 
                                                 & vlSelfRef.systolic_array_tb__DOT__a_in));
    vlSelfRef.systolic_array_tb__DOT__b_in = (0x0100000000000000ULL 
                                              | (0x00ffffffffffffffULL 
                                                 & vlSelfRef.systolic_array_tb__DOT__b_in));
    Vsystolic_array_tb___024root____VbeforeTrig_hd3aa6387__0(vlSelf, 
                                                             "@(posedge systolic_array_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hd3aa6387__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge systolic_array_tb.clk)", 
                                                         "tb/systolic_array_tb.sv", 
                                                         83);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.systolic_array_tb__DOT__a_in = 0ULL;
    vlSelfRef.systolic_array_tb__DOT__b_in = 0ULL;
    systolic_array_tb__DOT__unnamedblk1__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0x0000000fU;
    while (VL_LTS_III(32, 0U, systolic_array_tb__DOT__unnamedblk1__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vsystolic_array_tb___024root____VbeforeTrig_hd3aa6387__0(vlSelf, 
                                                                 "@(posedge systolic_array_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hd3aa6387__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge systolic_array_tb.clk)", 
                                                             "tb/systolic_array_tb.sv", 
                                                             88);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        systolic_array_tb__DOT__unnamedblk1__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (systolic_array_tb__DOT__unnamedblk1__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__i = 0U;
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 0U;
    if (VL_UNLIKELY(((1U != vlSelfRef.systolic_array_tb__DOT__c_out[0U])))) {
        VL_WRITEF_NX("Error: c_out[0][0] expected 1, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[0U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 1U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[1U])))) {
        VL_WRITEF_NX("Error: c_out[0][1] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[1U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 2U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[2U])))) {
        VL_WRITEF_NX("Error: c_out[0][2] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[2U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 3U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[3U])))) {
        VL_WRITEF_NX("Error: c_out[0][3] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[3U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 4U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[4U])))) {
        VL_WRITEF_NX("Error: c_out[0][4] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[4U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 5U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[5U])))) {
        VL_WRITEF_NX("Error: c_out[0][5] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[5U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 6U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[6U])))) {
        VL_WRITEF_NX("Error: c_out[0][6] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[6U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 7U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[7U])))) {
        VL_WRITEF_NX("Error: c_out[0][7] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[7U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 8U;
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__i = 1U;
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 0U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[8U])))) {
        VL_WRITEF_NX("Error: c_out[1][0] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[8U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 1U;
    if (VL_UNLIKELY(((1U != vlSelfRef.systolic_array_tb__DOT__c_out[9U])))) {
        VL_WRITEF_NX("Error: c_out[1][1] expected 1, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[9U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 2U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[10U])))) {
        VL_WRITEF_NX("Error: c_out[1][2] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[10U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 3U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[11U])))) {
        VL_WRITEF_NX("Error: c_out[1][3] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[11U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 4U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[12U])))) {
        VL_WRITEF_NX("Error: c_out[1][4] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[12U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 5U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[13U])))) {
        VL_WRITEF_NX("Error: c_out[1][5] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[13U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 6U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[14U])))) {
        VL_WRITEF_NX("Error: c_out[1][6] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[14U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 7U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[15U])))) {
        VL_WRITEF_NX("Error: c_out[1][7] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[15U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 8U;
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__i = 2U;
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 0U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[16U])))) {
        VL_WRITEF_NX("Error: c_out[2][0] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[16U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 1U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[17U])))) {
        VL_WRITEF_NX("Error: c_out[2][1] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[17U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 2U;
    if (VL_UNLIKELY(((1U != vlSelfRef.systolic_array_tb__DOT__c_out[18U])))) {
        VL_WRITEF_NX("Error: c_out[2][2] expected 1, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[18U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 3U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[19U])))) {
        VL_WRITEF_NX("Error: c_out[2][3] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[19U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 4U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[20U])))) {
        VL_WRITEF_NX("Error: c_out[2][4] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[20U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 5U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[21U])))) {
        VL_WRITEF_NX("Error: c_out[2][5] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[21U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 6U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[22U])))) {
        VL_WRITEF_NX("Error: c_out[2][6] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[22U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 7U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[23U])))) {
        VL_WRITEF_NX("Error: c_out[2][7] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[23U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 8U;
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__i = 3U;
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 0U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[24U])))) {
        VL_WRITEF_NX("Error: c_out[3][0] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[24U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 1U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[25U])))) {
        VL_WRITEF_NX("Error: c_out[3][1] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[25U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 2U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[26U])))) {
        VL_WRITEF_NX("Error: c_out[3][2] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[26U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 3U;
    if (VL_UNLIKELY(((1U != vlSelfRef.systolic_array_tb__DOT__c_out[27U])))) {
        VL_WRITEF_NX("Error: c_out[3][3] expected 1, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[27U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 4U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[28U])))) {
        VL_WRITEF_NX("Error: c_out[3][4] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[28U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 5U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[29U])))) {
        VL_WRITEF_NX("Error: c_out[3][5] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[29U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 6U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[30U])))) {
        VL_WRITEF_NX("Error: c_out[3][6] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[30U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 7U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[31U])))) {
        VL_WRITEF_NX("Error: c_out[3][7] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[31U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 8U;
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__i = 4U;
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 0U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[32U])))) {
        VL_WRITEF_NX("Error: c_out[4][0] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[32U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 1U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[33U])))) {
        VL_WRITEF_NX("Error: c_out[4][1] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[33U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 2U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[34U])))) {
        VL_WRITEF_NX("Error: c_out[4][2] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[34U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 3U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[35U])))) {
        VL_WRITEF_NX("Error: c_out[4][3] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[35U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 4U;
    if (VL_UNLIKELY(((1U != vlSelfRef.systolic_array_tb__DOT__c_out[36U])))) {
        VL_WRITEF_NX("Error: c_out[4][4] expected 1, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[36U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 5U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[37U])))) {
        VL_WRITEF_NX("Error: c_out[4][5] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[37U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 6U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[38U])))) {
        VL_WRITEF_NX("Error: c_out[4][6] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[38U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 7U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[39U])))) {
        VL_WRITEF_NX("Error: c_out[4][7] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[39U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 8U;
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__i = 5U;
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 0U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[40U])))) {
        VL_WRITEF_NX("Error: c_out[5][0] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[40U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 1U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[41U])))) {
        VL_WRITEF_NX("Error: c_out[5][1] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[41U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 2U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[42U])))) {
        VL_WRITEF_NX("Error: c_out[5][2] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[42U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 3U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[43U])))) {
        VL_WRITEF_NX("Error: c_out[5][3] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[43U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 4U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[44U])))) {
        VL_WRITEF_NX("Error: c_out[5][4] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[44U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 5U;
    if (VL_UNLIKELY(((1U != vlSelfRef.systolic_array_tb__DOT__c_out[45U])))) {
        VL_WRITEF_NX("Error: c_out[5][5] expected 1, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[45U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 6U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[46U])))) {
        VL_WRITEF_NX("Error: c_out[5][6] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[46U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 7U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[47U])))) {
        VL_WRITEF_NX("Error: c_out[5][7] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[47U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 8U;
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__i = 6U;
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 0U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[48U])))) {
        VL_WRITEF_NX("Error: c_out[6][0] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[48U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 1U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[49U])))) {
        VL_WRITEF_NX("Error: c_out[6][1] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[49U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 2U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[50U])))) {
        VL_WRITEF_NX("Error: c_out[6][2] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[50U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 3U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[51U])))) {
        VL_WRITEF_NX("Error: c_out[6][3] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[51U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 4U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[52U])))) {
        VL_WRITEF_NX("Error: c_out[6][4] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[52U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 5U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[53U])))) {
        VL_WRITEF_NX("Error: c_out[6][5] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[53U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 6U;
    if (VL_UNLIKELY(((1U != vlSelfRef.systolic_array_tb__DOT__c_out[54U])))) {
        VL_WRITEF_NX("Error: c_out[6][6] expected 1, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[54U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 7U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[55U])))) {
        VL_WRITEF_NX("Error: c_out[6][7] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[55U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 8U;
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__i = 7U;
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 0U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[56U])))) {
        VL_WRITEF_NX("Error: c_out[7][0] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[56U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 1U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[57U])))) {
        VL_WRITEF_NX("Error: c_out[7][1] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[57U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 2U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[58U])))) {
        VL_WRITEF_NX("Error: c_out[7][2] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[58U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 3U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[59U])))) {
        VL_WRITEF_NX("Error: c_out[7][3] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[59U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 4U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[60U])))) {
        VL_WRITEF_NX("Error: c_out[7][4] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[60U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 5U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[61U])))) {
        VL_WRITEF_NX("Error: c_out[7][5] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[61U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 6U;
    if (VL_UNLIKELY(((0U != vlSelfRef.systolic_array_tb__DOT__c_out[62U])))) {
        VL_WRITEF_NX("Error: c_out[7][6] expected 0, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[62U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 7U;
    if (VL_UNLIKELY(((1U != vlSelfRef.systolic_array_tb__DOT__c_out[63U])))) {
        VL_WRITEF_NX("Error: c_out[7][7] expected 1, got %0d\n",1
                     , '#',32,vlSelfRef.systolic_array_tb__DOT__c_out[63U]);
    }
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j = 8U;
    vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__i = 8U;
    VL_FINISH_MT("tb/systolic_array_tb.sv", 100, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

VlCoroutine Vsystolic_array_tb___024root___eval_initial__TOP__Vtiming__1(Vsystolic_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/systolic_array_tb.sv", 
                                             57);
        vlSelfRef.systolic_array_tb__DOT__clk = (1U 
                                                 & (~ (IData)(vlSelfRef.systolic_array_tb__DOT__clk)));
    }
    co_return;
}

void Vsystolic_array_tb___024root___eval_triggers_vec__act(Vsystolic_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___eval_triggers_vec__act\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.systolic_array_tb__DOT__clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__systolic_array_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__systolic_array_tb__DOT__clk__0 
        = vlSelfRef.systolic_array_tb__DOT__clk;
}

bool Vsystolic_array_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___trigger_anySet__act\n"); );
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

void Vsystolic_array_tb___024root___nba_sequent__TOP__0(Vsystolic_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___nba_sequent__TOP__0\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.systolic_array_tb__DOT__rst) {
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT__a_hori__BRA__7__03a0__KET__ = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT__b_vert__BRA__7__03a0__KET__ = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out = 0U;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out = 0U;
    } else {
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, 
                                                                      (0x000000ffU 
                                                                       & (IData)(vlSelfRef.systolic_array_tb__DOT__a_in)))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, 
                                                                      (0x000000ffU 
                                                                       & (IData)(vlSelfRef.systolic_array_tb__DOT__b_in))))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT__a_hori__BRA__7__03a0__KET__))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, 
                                                                      (0x000000ffU 
                                                                       & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                                                >> 8U)))))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, 
                                                                      (0x000000ffU 
                                                                       & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                                                >> 8U))))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT__b_vert__BRA__7__03a0__KET__)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, 
                                                                      (0x000000ffU 
                                                                       & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                                                >> 0x00000010U)))))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, 
                                                                      (0x000000ffU 
                                                                       & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                                                >> 0x00000010U))))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, 
                                                                      (0x000000ffU 
                                                                       & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                                                >> 0x00000018U)))))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, 
                                                                      (0x000000ffU 
                                                                       & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                                                >> 0x00000018U))))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, 
                                                                      (0x000000ffU 
                                                                       & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                                                >> 0x00000020U)))))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, 
                                                                      (0x000000ffU 
                                                                       & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                                                >> 0x00000020U))))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, 
                                                                      (0x000000ffU 
                                                                       & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                                                >> 0x00000028U)))))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, 
                                                                      (0x000000ffU 
                                                                       & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                                                >> 0x00000028U))))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, 
                                                                      (0x000000ffU 
                                                                       & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                                                >> 0x00000030U)))))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, 
                                                                      (0x000000ffU 
                                                                       & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                                                >> 0x00000030U))))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, 
                                                                      (0x000000ffU 
                                                                       & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                                                >> 0x00000038U)))))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, 
                                                                      (0x000000ffU 
                                                                       & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                                                >> 0x00000038U))))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out 
            = (vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out 
               + VL_EXTENDS_II(32,16, (0x0000ffffU 
                                       & VL_MULS_III(16, 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out))), 
                                                     (0x0000ffffU 
                                                      & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out)))))));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT__a_hori__BRA__7__03a0__KET__;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT__b_vert__BRA__7__03a0__KET__;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out 
            = vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out;
        vlSelfRef.systolic_array_tb__DOT__dut__DOT__a_hori__BRA__7__03a0__KET__ 
            = (0x000000ffU & (IData)(vlSelfRef.systolic_array_tb__DOT__a_in));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out 
            = (0x000000ffU & (IData)((vlSelfRef.systolic_array_tb__DOT__a_in 
                                      >> 8U)));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out 
            = (0x000000ffU & (IData)((vlSelfRef.systolic_array_tb__DOT__a_in 
                                      >> 0x00000010U)));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out 
            = (0x000000ffU & (IData)((vlSelfRef.systolic_array_tb__DOT__a_in 
                                      >> 0x00000018U)));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out 
            = (0x000000ffU & (IData)((vlSelfRef.systolic_array_tb__DOT__a_in 
                                      >> 0x00000020U)));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out 
            = (0x000000ffU & (IData)((vlSelfRef.systolic_array_tb__DOT__a_in 
                                      >> 0x00000028U)));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out 
            = (0x000000ffU & (IData)((vlSelfRef.systolic_array_tb__DOT__a_in 
                                      >> 0x00000030U)));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT__b_vert__BRA__7__03a0__KET__ 
            = (0x000000ffU & (IData)(vlSelfRef.systolic_array_tb__DOT__b_in));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out 
            = (0x000000ffU & (IData)((vlSelfRef.systolic_array_tb__DOT__b_in 
                                      >> 8U)));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out 
            = (0x000000ffU & (IData)((vlSelfRef.systolic_array_tb__DOT__b_in 
                                      >> 0x00000010U)));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out 
            = (0x000000ffU & (IData)((vlSelfRef.systolic_array_tb__DOT__b_in 
                                      >> 0x00000018U)));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out 
            = (0x000000ffU & (IData)((vlSelfRef.systolic_array_tb__DOT__b_in 
                                      >> 0x00000020U)));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out 
            = (0x000000ffU & (IData)((vlSelfRef.systolic_array_tb__DOT__b_in 
                                      >> 0x00000028U)));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out 
            = (0x000000ffU & (IData)((vlSelfRef.systolic_array_tb__DOT__b_in 
                                      >> 0x00000030U)));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out 
            = (0x000000ffU & (IData)((vlSelfRef.systolic_array_tb__DOT__a_in 
                                      >> 0x00000038U)));
        vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out 
            = (0x000000ffU & (IData)((vlSelfRef.systolic_array_tb__DOT__b_in 
                                      >> 0x00000038U)));
    }
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

void Vsystolic_array_tb___024root___eval_nba(Vsystolic_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___eval_nba\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsystolic_array_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

void Vsystolic_array_tb___024root___timing_ready(Vsystolic_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___timing_ready\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hd3aa6387__0.ready("@(posedge systolic_array_tb.clk)");
    }
}

void Vsystolic_array_tb___024root___timing_resume(Vsystolic_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___timing_resume\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hd3aa6387__0.moveToResumeQueue(
                                                          "@(posedge systolic_array_tb.clk)");
    vlSelfRef.__VtrigSched_hd3aa6387__0.resume("@(posedge systolic_array_tb.clk)");
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vsystolic_array_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_array_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vsystolic_array_tb___024root___eval_phase__act(Vsystolic_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___eval_phase__act\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vsystolic_array_tb___024root___eval_triggers_vec__act(vlSelf);
    Vsystolic_array_tb___024root___timing_ready(vlSelf);
    Vsystolic_array_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsystolic_array_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vsystolic_array_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vsystolic_array_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vsystolic_array_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vsystolic_array_tb___024root___eval_phase__inact(Vsystolic_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___eval_phase__inact\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/systolic_array_tb.sv", 1, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vsystolic_array_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vsystolic_array_tb___024root___eval_phase__nba(Vsystolic_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___eval_phase__nba\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vsystolic_array_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vsystolic_array_tb___024root___eval_nba(vlSelf);
        Vsystolic_array_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vsystolic_array_tb___024root___eval(Vsystolic_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___eval\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vsystolic_array_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb/systolic_array_tb.sv", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb/systolic_array_tb.sv", 1, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vsystolic_array_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb/systolic_array_tb.sv", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vsystolic_array_tb___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vsystolic_array_tb___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vsystolic_array_tb___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vsystolic_array_tb___024root____VbeforeTrig_hd3aa6387__0(Vsystolic_array_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root____VbeforeTrig_hd3aa6387__0\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.systolic_array_tb__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__systolic_array_tb__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__systolic_array_tb__DOT__clk__0 
        = vlSelfRef.systolic_array_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hd3aa6387__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd3aa6387__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd3aa6387__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hd3aa6387__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vsystolic_array_tb___024root___eval_debug_assertions(Vsystolic_array_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root___eval_debug_assertions\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG

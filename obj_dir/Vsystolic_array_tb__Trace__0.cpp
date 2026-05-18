// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vsystolic_array_tb__Syms.h"


void Vsystolic_array_tb___024root__trace_chg_0_sub_0(Vsystolic_array_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsystolic_array_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root__trace_chg_0\n"); );
    // Body
    Vsystolic_array_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsystolic_array_tb___024root*>(voidSelf);
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vsystolic_array_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vsystolic_array_tb___024root__trace_chg_0_sub_0(Vsystolic_array_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root__trace_chg_0_sub_0\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<16>/*511:0*/ __Vtemp_14;
    VlWide<16>/*511:0*/ __Vtemp_28;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.systolic_array_tb__DOT__rst));
        bufp->chgQData(oldp+1,(vlSelfRef.systolic_array_tb__DOT__a_in),64);
        bufp->chgQData(oldp+3,(vlSelfRef.systolic_array_tb__DOT__b_in),64);
        bufp->chgCData(oldp+5,((0x000000ffU & (IData)(vlSelfRef.systolic_array_tb__DOT__a_in))),8);
        bufp->chgCData(oldp+6,((0x000000ffU & (IData)(
                                                      (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                       >> 8U)))),8);
        bufp->chgCData(oldp+7,((0x000000ffU & (IData)(
                                                      (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                       >> 0x00000010U)))),8);
        bufp->chgCData(oldp+8,((0x000000ffU & (IData)(
                                                      (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                       >> 0x00000018U)))),8);
        bufp->chgCData(oldp+9,((0x000000ffU & (IData)(
                                                      (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                       >> 0x00000020U)))),8);
        bufp->chgCData(oldp+10,((0x000000ffU & (IData)(
                                                       (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                        >> 0x00000028U)))),8);
        bufp->chgCData(oldp+11,((0x000000ffU & (IData)(
                                                       (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                        >> 0x00000030U)))),8);
        bufp->chgCData(oldp+12,((0x000000ffU & (IData)(
                                                       (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                        >> 0x00000038U)))),8);
        bufp->chgCData(oldp+13,((0x000000ffU & (IData)(vlSelfRef.systolic_array_tb__DOT__b_in))),8);
        bufp->chgCData(oldp+14,((0x000000ffU & (IData)(
                                                       (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                        >> 8U)))),8);
        bufp->chgCData(oldp+15,((0x000000ffU & (IData)(
                                                       (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                        >> 0x00000010U)))),8);
        bufp->chgCData(oldp+16,((0x000000ffU & (IData)(
                                                       (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                        >> 0x00000018U)))),8);
        bufp->chgCData(oldp+17,((0x000000ffU & (IData)(
                                                       (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                        >> 0x00000020U)))),8);
        bufp->chgCData(oldp+18,((0x000000ffU & (IData)(
                                                       (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                        >> 0x00000028U)))),8);
        bufp->chgCData(oldp+19,((0x000000ffU & (IData)(
                                                       (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                        >> 0x00000030U)))),8);
        bufp->chgCData(oldp+20,((0x000000ffU & (IData)(
                                                       (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                        >> 0x00000038U)))),8);
        bufp->chgCData(oldp+21,((0x000000ffU & (IData)(vlSelfRef.systolic_array_tb__DOT__a_in))),8);
        bufp->chgCData(oldp+22,((0x000000ffU & (IData)(vlSelfRef.systolic_array_tb__DOT__b_in))),8);
        bufp->chgSData(oldp+23,((0x0000ffffU & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, 
                                                                            (0x000000ffU 
                                                                             & (IData)(vlSelfRef.systolic_array_tb__DOT__a_in)))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, 
                                                                            (0x000000ffU 
                                                                             & (IData)(vlSelfRef.systolic_array_tb__DOT__b_in))))))),16);
        bufp->chgIData(oldp+24,(VL_EXTENDS_II(32,16, 
                                              (0x0000ffffU 
                                               & VL_MULS_III(16, 
                                                             (0x0000ffffU 
                                                              & VL_EXTENDS_II(16,8, 
                                                                              (0x000000ffU 
                                                                               & (IData)(vlSelfRef.systolic_array_tb__DOT__a_in)))), 
                                                             (0x0000ffffU 
                                                              & VL_EXTENDS_II(16,8, 
                                                                              (0x000000ffU 
                                                                               & (IData)(vlSelfRef.systolic_array_tb__DOT__b_in)))))))),32);
        bufp->chgCData(oldp+25,((0x000000ffU & (IData)(
                                                       (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                        >> 8U)))),8);
        bufp->chgCData(oldp+26,((0x000000ffU & (IData)(
                                                       (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                        >> 0x00000010U)))),8);
        bufp->chgCData(oldp+27,((0x000000ffU & (IData)(
                                                       (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                        >> 0x00000018U)))),8);
        bufp->chgCData(oldp+28,((0x000000ffU & (IData)(
                                                       (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                        >> 0x00000020U)))),8);
        bufp->chgCData(oldp+29,((0x000000ffU & (IData)(
                                                       (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                        >> 0x00000028U)))),8);
        bufp->chgCData(oldp+30,((0x000000ffU & (IData)(
                                                       (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                        >> 0x00000030U)))),8);
        bufp->chgCData(oldp+31,((0x000000ffU & (IData)(
                                                       (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                        >> 0x00000038U)))),8);
        bufp->chgCData(oldp+32,((0x000000ffU & (IData)(
                                                       (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                        >> 8U)))),8);
        bufp->chgCData(oldp+33,((0x000000ffU & (IData)(
                                                       (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                        >> 0x00000010U)))),8);
        bufp->chgCData(oldp+34,((0x000000ffU & (IData)(
                                                       (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                        >> 0x00000018U)))),8);
        bufp->chgCData(oldp+35,((0x000000ffU & (IData)(
                                                       (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                        >> 0x00000020U)))),8);
        bufp->chgCData(oldp+36,((0x000000ffU & (IData)(
                                                       (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                        >> 0x00000028U)))),8);
        bufp->chgCData(oldp+37,((0x000000ffU & (IData)(
                                                       (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                        >> 0x00000030U)))),8);
        bufp->chgCData(oldp+38,((0x000000ffU & (IData)(
                                                       (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                        >> 0x00000038U)))),8);
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity[1U] 
                       | vlSelfRef.__Vm_traceActivity[2U]) 
                      | vlSelfRef.__Vm_traceActivity[3U])))) {
        bufp->chgSData(oldp+39,((0x0000ffffU & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT__a_hori__BRA__7__03a0__KET__))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, 
                                                                            (0x000000ffU 
                                                                             & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                                                >> 8U)))))))),16);
        bufp->chgIData(oldp+40,(VL_EXTENDS_II(32,16, 
                                              (0x0000ffffU 
                                               & VL_MULS_III(16, 
                                                             (0x0000ffffU 
                                                              & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT__a_hori__BRA__7__03a0__KET__))), 
                                                             (0x0000ffffU 
                                                              & VL_EXTENDS_II(16,8, 
                                                                              (0x000000ffU 
                                                                               & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                                                >> 8U))))))))),32);
        bufp->chgSData(oldp+41,((0x0000ffffU & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, 
                                                                            (0x000000ffU 
                                                                             & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                                                >> 0x00000010U)))))))),16);
        bufp->chgIData(oldp+42,(VL_EXTENDS_II(32,16, 
                                              (0x0000ffffU 
                                               & VL_MULS_III(16, 
                                                             (0x0000ffffU 
                                                              & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out))), 
                                                             (0x0000ffffU 
                                                              & VL_EXTENDS_II(16,8, 
                                                                              (0x000000ffU 
                                                                               & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                                                >> 0x00000010U))))))))),32);
        bufp->chgSData(oldp+43,((0x0000ffffU & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, 
                                                                            (0x000000ffU 
                                                                             & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                                                >> 0x00000018U)))))))),16);
        bufp->chgIData(oldp+44,(VL_EXTENDS_II(32,16, 
                                              (0x0000ffffU 
                                               & VL_MULS_III(16, 
                                                             (0x0000ffffU 
                                                              & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out))), 
                                                             (0x0000ffffU 
                                                              & VL_EXTENDS_II(16,8, 
                                                                              (0x000000ffU 
                                                                               & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                                                >> 0x00000018U))))))))),32);
        bufp->chgSData(oldp+45,((0x0000ffffU & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, 
                                                                            (0x000000ffU 
                                                                             & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                                                >> 0x00000020U)))))))),16);
        bufp->chgIData(oldp+46,(VL_EXTENDS_II(32,16, 
                                              (0x0000ffffU 
                                               & VL_MULS_III(16, 
                                                             (0x0000ffffU 
                                                              & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out))), 
                                                             (0x0000ffffU 
                                                              & VL_EXTENDS_II(16,8, 
                                                                              (0x000000ffU 
                                                                               & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                                                >> 0x00000020U))))))))),32);
        bufp->chgSData(oldp+47,((0x0000ffffU & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, 
                                                                            (0x000000ffU 
                                                                             & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                                                >> 0x00000028U)))))))),16);
        bufp->chgIData(oldp+48,(VL_EXTENDS_II(32,16, 
                                              (0x0000ffffU 
                                               & VL_MULS_III(16, 
                                                             (0x0000ffffU 
                                                              & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))), 
                                                             (0x0000ffffU 
                                                              & VL_EXTENDS_II(16,8, 
                                                                              (0x000000ffU 
                                                                               & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                                                >> 0x00000028U))))))))),32);
        bufp->chgSData(oldp+49,((0x0000ffffU & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, 
                                                                            (0x000000ffU 
                                                                             & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                                                >> 0x00000030U)))))))),16);
        bufp->chgIData(oldp+50,(VL_EXTENDS_II(32,16, 
                                              (0x0000ffffU 
                                               & VL_MULS_III(16, 
                                                             (0x0000ffffU 
                                                              & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out))), 
                                                             (0x0000ffffU 
                                                              & VL_EXTENDS_II(16,8, 
                                                                              (0x000000ffU 
                                                                               & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                                                >> 0x00000030U))))))))),32);
        bufp->chgSData(oldp+51,((0x0000ffffU & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, 
                                                                            (0x000000ffU 
                                                                             & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                                                >> 0x00000038U)))))))),16);
        bufp->chgIData(oldp+52,(VL_EXTENDS_II(32,16, 
                                              (0x0000ffffU 
                                               & VL_MULS_III(16, 
                                                             (0x0000ffffU 
                                                              & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out))), 
                                                             (0x0000ffffU 
                                                              & VL_EXTENDS_II(16,8, 
                                                                              (0x000000ffU 
                                                                               & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                                                >> 0x00000038U))))))))),32);
        bufp->chgSData(oldp+53,((0x0000ffffU & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, 
                                                                            (0x000000ffU 
                                                                             & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                                                >> 8U))))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT__b_vert__BRA__7__03a0__KET__)))))),16);
        bufp->chgIData(oldp+54,(VL_EXTENDS_II(32,16, 
                                              (0x0000ffffU 
                                               & VL_MULS_III(16, 
                                                             (0x0000ffffU 
                                                              & VL_EXTENDS_II(16,8, 
                                                                              (0x000000ffU 
                                                                               & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                                                >> 8U))))), 
                                                             (0x0000ffffU 
                                                              & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT__b_vert__BRA__7__03a0__KET__))))))),32);
        bufp->chgSData(oldp+55,((0x0000ffffU & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, 
                                                                            (0x000000ffU 
                                                                             & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                                                >> 0x00000010U))))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+56,(VL_EXTENDS_II(32,16, 
                                              (0x0000ffffU 
                                               & VL_MULS_III(16, 
                                                             (0x0000ffffU 
                                                              & VL_EXTENDS_II(16,8, 
                                                                              (0x000000ffU 
                                                                               & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                                                >> 0x00000010U))))), 
                                                             (0x0000ffffU 
                                                              & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgSData(oldp+57,((0x0000ffffU & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, 
                                                                            (0x000000ffU 
                                                                             & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                                                >> 0x00000018U))))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+58,(VL_EXTENDS_II(32,16, 
                                              (0x0000ffffU 
                                               & VL_MULS_III(16, 
                                                             (0x0000ffffU 
                                                              & VL_EXTENDS_II(16,8, 
                                                                              (0x000000ffU 
                                                                               & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                                                >> 0x00000018U))))), 
                                                             (0x0000ffffU 
                                                              & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgSData(oldp+59,((0x0000ffffU & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, 
                                                                            (0x000000ffU 
                                                                             & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                                                >> 0x00000020U))))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+60,(VL_EXTENDS_II(32,16, 
                                              (0x0000ffffU 
                                               & VL_MULS_III(16, 
                                                             (0x0000ffffU 
                                                              & VL_EXTENDS_II(16,8, 
                                                                              (0x000000ffU 
                                                                               & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                                                >> 0x00000020U))))), 
                                                             (0x0000ffffU 
                                                              & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgSData(oldp+61,((0x0000ffffU & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, 
                                                                            (0x000000ffU 
                                                                             & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                                                >> 0x00000028U))))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+62,(VL_EXTENDS_II(32,16, 
                                              (0x0000ffffU 
                                               & VL_MULS_III(16, 
                                                             (0x0000ffffU 
                                                              & VL_EXTENDS_II(16,8, 
                                                                              (0x000000ffU 
                                                                               & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                                                >> 0x00000028U))))), 
                                                             (0x0000ffffU 
                                                              & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgSData(oldp+63,((0x0000ffffU & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, 
                                                                            (0x000000ffU 
                                                                             & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                                                >> 0x00000030U))))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+64,(VL_EXTENDS_II(32,16, 
                                              (0x0000ffffU 
                                               & VL_MULS_III(16, 
                                                             (0x0000ffffU 
                                                              & VL_EXTENDS_II(16,8, 
                                                                              (0x000000ffU 
                                                                               & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                                                >> 0x00000030U))))), 
                                                             (0x0000ffffU 
                                                              & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgSData(oldp+65,((0x0000ffffU & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, 
                                                                            (0x000000ffU 
                                                                             & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                                                >> 0x00000038U))))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+66,(VL_EXTENDS_II(32,16, 
                                              (0x0000ffffU 
                                               & VL_MULS_III(16, 
                                                             (0x0000ffffU 
                                                              & VL_EXTENDS_II(16,8, 
                                                                              (0x000000ffU 
                                                                               & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                                                >> 0x00000038U))))), 
                                                             (0x0000ffffU 
                                                              & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out))))))),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgWData(oldp+67,(vlSelfRef.systolic_array_tb__DOT__c_out),2048);
        bufp->chgIData(oldp+131,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out),32);
        bufp->chgIData(oldp+132,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out),32);
        bufp->chgIData(oldp+133,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out),32);
        bufp->chgIData(oldp+134,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out),32);
        bufp->chgIData(oldp+135,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out),32);
        bufp->chgIData(oldp+136,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out),32);
        bufp->chgIData(oldp+137,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out),32);
        bufp->chgIData(oldp+138,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out),32);
        __Vtemp_14[0U] = ((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out) 
                            << 0x00000018U) | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out) 
                                               << 0x00000010U)) 
                          | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out) 
                              << 8U) | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT__a_hori__BRA__7__03a0__KET__)));
        __Vtemp_14[1U] = ((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out) 
                            << 0x00000018U) | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out) 
                                               << 0x00000010U)) 
                          | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out) 
                              << 8U) | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out)));
        __Vtemp_14[2U] = ((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out) 
                            << 0x00000018U) | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out) 
                                               << 0x00000010U)) 
                          | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out) 
                              << 8U) | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out)));
        __Vtemp_14[3U] = ((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out) 
                            << 0x00000018U) | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out) 
                                               << 0x00000010U)) 
                          | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out) 
                              << 8U) | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out)));
        __Vtemp_14[4U] = ((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out) 
                            << 0x00000018U) | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out) 
                                               << 0x00000010U)) 
                          | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out) 
                              << 8U) | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out)));
        __Vtemp_14[5U] = ((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out) 
                            << 0x00000018U) | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out) 
                                               << 0x00000010U)) 
                          | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out) 
                              << 8U) | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out)));
        __Vtemp_14[6U] = ((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out) 
                            << 0x00000018U) | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out) 
                                               << 0x00000010U)) 
                          | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out) 
                              << 8U) | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out)));
        __Vtemp_14[7U] = ((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out) 
                            << 0x00000018U) | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out) 
                                               << 0x00000010U)) 
                          | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out) 
                              << 8U) | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out)));
        __Vtemp_14[8U] = ((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out) 
                            << 0x00000018U) | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out) 
                                               << 0x00000010U)) 
                          | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out) 
                              << 8U) | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out)));
        __Vtemp_14[9U] = ((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out) 
                            << 0x00000018U) | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out) 
                                               << 0x00000010U)) 
                          | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out) 
                              << 8U) | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out)));
        __Vtemp_14[10U] = ((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out) 
                             << 0x00000018U) | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out) 
                                                << 0x00000010U)) 
                           | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out) 
                               << 8U) | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out)));
        __Vtemp_14[11U] = ((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out) 
                             << 0x00000018U) | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out) 
                                                << 0x00000010U)) 
                           | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out) 
                               << 8U) | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out)));
        __Vtemp_14[12U] = ((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out) 
                             << 0x00000018U) | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out) 
                                                << 0x00000010U)) 
                           | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out) 
                               << 8U) | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out)));
        __Vtemp_14[13U] = ((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out) 
                             << 0x00000018U) | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out) 
                                                << 0x00000010U)) 
                           | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out) 
                               << 8U) | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out)));
        __Vtemp_14[14U] = (IData)((((QData)((IData)(
                                                    ((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out) 
                                                       << 0x00000018U) 
                                                      | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out) 
                                                         << 0x00000010U)) 
                                                     | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out) 
                                                         << 8U) 
                                                        | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     ((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out) 
                                                        << 0x00000018U) 
                                                       | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out) 
                                                          << 0x00000010U)) 
                                                      | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out) 
                                                          << 8U) 
                                                         | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out)))))));
        __Vtemp_14[15U] = (IData)(((((QData)((IData)(
                                                     ((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out) 
                                                        << 0x00000018U) 
                                                       | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out) 
                                                          << 0x00000010U)) 
                                                      | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out) 
                                                          << 8U) 
                                                         | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))))) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      ((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out) 
                                                         << 0x00000018U) 
                                                        | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out) 
                                                           << 0x00000010U)) 
                                                       | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out) 
                                                           << 8U) 
                                                          | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out)))))) 
                                   >> 0x00000020U));
        bufp->chgWData(oldp+139,(__Vtemp_14),512);
        __Vtemp_28[0U] = ((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out) 
                            << 0x00000018U) | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out) 
                                               << 0x00000010U)) 
                          | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out) 
                              << 8U) | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT__b_vert__BRA__7__03a0__KET__)));
        __Vtemp_28[1U] = ((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out) 
                            << 0x00000018U) | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out) 
                                               << 0x00000010U)) 
                          | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out) 
                              << 8U) | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out)));
        __Vtemp_28[2U] = ((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out) 
                            << 0x00000018U) | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out) 
                                               << 0x00000010U)) 
                          | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out) 
                              << 8U) | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out)));
        __Vtemp_28[3U] = ((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out) 
                            << 0x00000018U) | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out) 
                                               << 0x00000010U)) 
                          | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out) 
                              << 8U) | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out)));
        __Vtemp_28[4U] = ((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out) 
                            << 0x00000018U) | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out) 
                                               << 0x00000010U)) 
                          | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out) 
                              << 8U) | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out)));
        __Vtemp_28[5U] = ((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out) 
                            << 0x00000018U) | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out) 
                                               << 0x00000010U)) 
                          | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out) 
                              << 8U) | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out)));
        __Vtemp_28[6U] = ((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out) 
                            << 0x00000018U) | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out) 
                                               << 0x00000010U)) 
                          | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out) 
                              << 8U) | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out)));
        __Vtemp_28[7U] = ((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out) 
                            << 0x00000018U) | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out) 
                                               << 0x00000010U)) 
                          | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out) 
                              << 8U) | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out)));
        __Vtemp_28[8U] = ((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out) 
                            << 0x00000018U) | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out) 
                                               << 0x00000010U)) 
                          | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out) 
                              << 8U) | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out)));
        __Vtemp_28[9U] = ((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out) 
                            << 0x00000018U) | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out) 
                                               << 0x00000010U)) 
                          | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out) 
                              << 8U) | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out)));
        __Vtemp_28[10U] = ((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out) 
                             << 0x00000018U) | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out) 
                                                << 0x00000010U)) 
                           | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out) 
                               << 8U) | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out)));
        __Vtemp_28[11U] = ((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out) 
                             << 0x00000018U) | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out) 
                                                << 0x00000010U)) 
                           | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out) 
                               << 8U) | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out)));
        __Vtemp_28[12U] = ((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out) 
                             << 0x00000018U) | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out) 
                                                << 0x00000010U)) 
                           | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out) 
                               << 8U) | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out)));
        __Vtemp_28[13U] = ((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out) 
                             << 0x00000018U) | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out) 
                                                << 0x00000010U)) 
                           | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out) 
                               << 8U) | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out)));
        __Vtemp_28[14U] = (IData)((((QData)((IData)(
                                                    ((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out) 
                                                       << 0x00000018U) 
                                                      | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out) 
                                                         << 0x00000010U)) 
                                                     | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out) 
                                                         << 8U) 
                                                        | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out))))) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     ((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out) 
                                                        << 0x00000018U) 
                                                       | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out) 
                                                          << 0x00000010U)) 
                                                      | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out) 
                                                          << 8U) 
                                                         | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out)))))));
        __Vtemp_28[15U] = (IData)(((((QData)((IData)(
                                                     ((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out) 
                                                        << 0x00000018U) 
                                                       | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out) 
                                                          << 0x00000010U)) 
                                                      | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out) 
                                                          << 8U) 
                                                         | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out))))) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      ((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out) 
                                                         << 0x00000018U) 
                                                        | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out) 
                                                           << 0x00000010U)) 
                                                       | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out) 
                                                           << 8U) 
                                                          | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out)))))) 
                                   >> 0x00000020U));
        bufp->chgWData(oldp+155,(__Vtemp_28),512);
        bufp->chgCData(oldp+171,(vlSelfRef.systolic_array_tb__DOT__dut__DOT__a_hori__BRA__7__03a0__KET__),8);
        bufp->chgCData(oldp+172,(vlSelfRef.systolic_array_tb__DOT__dut__DOT__b_vert__BRA__7__03a0__KET__),8);
        bufp->chgIData(oldp+173,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out),32);
        bufp->chgCData(oldp+174,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+175,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+176,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out),32);
        bufp->chgCData(oldp+177,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+178,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+179,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out),32);
        bufp->chgCData(oldp+180,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+181,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+182,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out),32);
        bufp->chgCData(oldp+183,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+184,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+185,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out),32);
        bufp->chgCData(oldp+186,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+187,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+188,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out),32);
        bufp->chgCData(oldp+189,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+190,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+191,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out),32);
        bufp->chgCData(oldp+192,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+193,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+194,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out),32);
        bufp->chgCData(oldp+195,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+196,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+197,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out),32);
        bufp->chgCData(oldp+198,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+199,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+200,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+201,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+202,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+203,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+204,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+205,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+206,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+207,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+208,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+209,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+210,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+211,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+212,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+213,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+214,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+215,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+216,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+217,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+218,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+219,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+220,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+221,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+222,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+223,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+224,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+225,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+226,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+227,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+228,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+229,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+230,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+231,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+232,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+233,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+234,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+235,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out),32);
        bufp->chgCData(oldp+236,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+237,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+238,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+239,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+240,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+241,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+242,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+243,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+244,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+245,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+246,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+247,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+248,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+249,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+250,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+251,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+252,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+253,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+254,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+255,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+256,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+257,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+258,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+259,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+260,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+261,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+262,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+263,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+264,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+265,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+266,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+267,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+268,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+269,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+270,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+271,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+272,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+273,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out),32);
        bufp->chgCData(oldp+274,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+275,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+276,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+277,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+278,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+279,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+280,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+281,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+282,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+283,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+284,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+285,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+286,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+287,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+288,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+289,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+290,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+291,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+292,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+293,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+294,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+295,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+296,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+297,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+298,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+299,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+300,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+301,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+302,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+303,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+304,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+305,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+306,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+307,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+308,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+309,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+310,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+311,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out),32);
        bufp->chgCData(oldp+312,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+313,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+314,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+315,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+316,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+317,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+318,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+319,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+320,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+321,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+322,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+323,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+324,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+325,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+326,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+327,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+328,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+329,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+330,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+331,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+332,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+333,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+334,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+335,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+336,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+337,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+338,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+339,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+340,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+341,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+342,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+343,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+344,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+345,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+346,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+347,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+348,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+349,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out),32);
        bufp->chgCData(oldp+350,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+351,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+352,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+353,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+354,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+355,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+356,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+357,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+358,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+359,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+360,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+361,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+362,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+363,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+364,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+365,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+366,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+367,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+368,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+369,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+370,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+371,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+372,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+373,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+374,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+375,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+376,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+377,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+378,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+379,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+380,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+381,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+382,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+383,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+384,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+385,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+386,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+387,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out),32);
        bufp->chgCData(oldp+388,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+389,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+390,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+391,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+392,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+393,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+394,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+395,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+396,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+397,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+398,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+399,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+400,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+401,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+402,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+403,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+404,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+405,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+406,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+407,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+408,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+409,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+410,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+411,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+412,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+413,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+414,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+415,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+416,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+417,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+418,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+419,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+420,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+421,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+422,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+423,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+424,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+425,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out),32);
        bufp->chgCData(oldp+426,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+427,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+428,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+429,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+430,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+431,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+432,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+433,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+434,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+435,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+436,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+437,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+438,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+439,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+440,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+441,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+442,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+443,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+444,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+445,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+446,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+447,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+448,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+449,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+450,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+451,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+452,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+453,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+454,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+455,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out))))))),32);
        bufp->chgCData(oldp+456,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out),8);
        bufp->chgCData(oldp+457,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out),8);
        bufp->chgIData(oldp+458,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out),32);
        bufp->chgSData(oldp+459,((0x0000ffffU & VL_MULS_III(16, 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out))), 
                                                            (0x0000ffffU 
                                                             & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out)))))),16);
        bufp->chgIData(oldp+460,(VL_EXTENDS_II(32,16, 
                                               (0x0000ffffU 
                                                & VL_MULS_III(16, 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out))), 
                                                              (0x0000ffffU 
                                                               & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out))))))),32);
    }
    bufp->chgBit(oldp+461,(vlSelfRef.systolic_array_tb__DOT__clk));
    bufp->chgIData(oldp+462,(vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+463,(vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j),32);
}

void Vsystolic_array_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root__trace_cleanup\n"); );
    // Body
    Vsystolic_array_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsystolic_array_tb___024root*>(voidSelf);
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}

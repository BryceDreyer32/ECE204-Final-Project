// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsystolic_array_tb.h for the primary calling header

#ifndef VERILATED_VSYSTOLIC_ARRAY_TB___024ROOT_H_
#define VERILATED_VSYSTOLIC_ARRAY_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsystolic_array_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsystolic_array_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ systolic_array_tb__DOT__clk;
        CData/*0:0*/ systolic_array_tb__DOT__rst;
        QData/*63:0*/ systolic_array_tb__DOT__a_in;
        QData/*63:0*/ systolic_array_tb__DOT__b_in;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT__a_hori__BRA__7__03a0__KET__;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT__b_vert__BRA__7__03a0__KET__;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out;
    };
    struct {
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out;
    };
    struct {
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out;
        CData/*7:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__systolic_array_tb__DOT__clk__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VinactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        VlWide<64>/*2047:0*/ systolic_array_tb__DOT__c_out;
        IData/*31:0*/ systolic_array_tb__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ systolic_array_tb__DOT__unnamedblk1__DOT__j;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out;
    };
    struct {
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out;
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VinactIterCount;
        IData/*31:0*/ __Vi;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hd3aa6387__0;

    // INTERNAL VARIABLES
    Vsystolic_array_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vsystolic_array_tb___024root(Vsystolic_array_tb__Syms* symsp, const char* namep);
    ~Vsystolic_array_tb___024root();
    VL_UNCOPYABLE(Vsystolic_array_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

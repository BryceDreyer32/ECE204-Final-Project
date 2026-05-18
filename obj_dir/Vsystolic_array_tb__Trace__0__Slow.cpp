// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vsystolic_array_tb__Syms.h"


VL_ATTR_COLD void Vsystolic_array_tb___024root__trace_init_sub__TOP__0(Vsystolic_array_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root__trace_init_sub__TOP__0\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "systolic_array_tb", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+465,0,"ACC_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+1,0,"a_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+3,0,"b_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_WIDE(tracep,c+67,0,"c_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2047,0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"a_in_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"a_in_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+7,0,"a_in_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"a_in_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"a_in_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"a_in_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+11,0,"a_in_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+12,0,"a_in_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+13,0,"b_in_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+14,0,"b_in_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"b_in_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+16,0,"b_in_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+17,0,"b_in_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+18,0,"b_in_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+19,0,"b_in_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+20,0,"b_in_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+131,0,"c_out_00",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+132,0,"c_out_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+133,0,"c_out_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+134,0,"c_out_33",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+135,0,"c_out_44",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+136,0,"c_out_55",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+137,0,"c_out_66",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+138,0,"c_out_77",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "dut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+465,0,"ACC_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+1,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_QUAD(tracep,c+3,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 63,0);
    VL_TRACE_DECL_WIDE(tracep,c+67,0,"c_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2047,0);
    VL_TRACE_DECL_WIDE(tracep,c+139,0,"a_hori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 511,0);
    VL_TRACE_DECL_WIDE(tracep,c+155,0,"b_vert",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 511,0);
    VL_TRACE_PUSH_PREFIX(tracep, "row[0]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "col[0]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+21,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+22,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+171,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+172,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+173,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+23,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[1]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+171,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+25,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+174,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+175,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+176,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+39,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[2]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+174,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+26,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+177,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+178,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+179,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+42,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[3]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+177,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+27,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+180,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+181,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+182,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+43,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+44,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[4]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+180,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+28,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+183,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+184,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+185,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+45,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+46,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[5]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+183,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+29,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+186,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+187,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+188,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+47,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[6]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+186,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+30,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+189,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+190,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+191,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+49,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+50,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[7]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+189,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+31,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+192,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+193,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+194,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+51,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+52,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "row[1]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "col[0]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+32,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+172,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+195,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+196,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+197,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+53,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+54,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[1]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+195,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+175,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+198,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+199,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+200,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+201,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+202,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[2]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+198,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+178,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+203,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+204,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+205,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+206,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+207,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[3]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+203,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+181,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+208,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+209,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+210,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+211,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+212,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[4]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+208,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+184,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+213,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+214,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+215,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+216,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+217,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[5]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+213,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+187,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+218,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+219,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+220,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+221,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+222,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[6]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+218,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+190,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+223,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+224,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+225,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+226,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+227,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[7]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+223,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+193,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+228,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+229,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+230,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+231,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+232,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "row[2]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "col[0]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+33,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+196,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+233,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+234,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+235,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+55,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+56,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[1]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+233,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+199,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+236,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+237,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+238,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+239,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+240,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[2]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+236,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+204,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+241,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+242,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+243,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+244,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+245,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[3]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+241,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+209,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+246,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+247,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+248,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+249,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+250,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[4]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+246,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+214,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+251,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+252,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+253,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+254,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+255,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[5]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+251,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+219,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+256,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+257,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+258,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+259,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+260,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[6]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+256,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+224,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+261,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+262,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+263,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+264,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+265,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[7]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+261,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+229,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+266,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+267,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+268,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+269,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+270,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "row[3]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "col[0]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+34,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+234,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+271,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+272,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+273,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+57,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+58,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[1]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+271,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+237,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+274,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+275,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+276,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+277,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+278,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[2]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+274,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+242,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+279,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+280,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+281,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+282,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+283,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[3]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+279,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+247,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+284,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+285,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+286,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+287,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+288,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[4]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+284,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+252,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+289,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+290,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+291,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+292,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+293,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[5]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+289,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+257,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+294,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+295,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+296,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+297,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+298,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[6]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+294,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+262,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+299,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+300,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+301,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+302,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+303,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[7]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+299,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+267,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+304,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+305,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+306,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+307,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+308,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "row[4]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "col[0]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+35,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+272,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+309,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+310,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+311,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+60,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[1]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+309,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+275,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+312,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+313,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+314,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+315,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+316,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[2]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+312,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+280,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+317,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+318,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+319,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+320,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+321,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[3]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+317,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+285,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+322,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+323,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+324,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+325,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+326,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[4]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+322,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+290,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+327,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+328,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+329,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+330,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+331,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[5]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+327,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+295,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+332,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+333,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+334,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+335,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+336,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[6]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+332,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+300,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+337,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+338,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+339,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+340,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+341,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[7]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+337,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+305,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+342,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+343,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+344,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+345,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+346,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "row[5]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "col[0]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+36,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+310,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+347,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+348,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+349,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+61,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+62,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[1]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+347,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+313,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+350,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+351,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+352,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+353,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+354,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[2]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+350,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+318,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+355,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+356,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+357,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+358,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+359,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[3]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+355,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+323,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+360,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+361,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+362,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+363,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+364,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[4]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+360,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+328,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+365,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+366,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+367,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+368,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+369,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[5]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+365,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+333,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+370,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+371,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+372,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+373,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+374,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[6]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+370,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+338,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+375,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+376,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+377,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+378,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+379,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[7]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+375,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+343,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+380,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+381,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+382,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+383,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+384,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "row[6]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "col[0]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+37,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+348,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+385,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+386,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+387,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+63,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+64,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[1]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+385,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+351,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+388,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+389,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+390,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+391,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+392,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[2]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+388,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+356,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+393,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+394,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+395,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+396,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+397,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[3]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+393,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+361,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+398,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+399,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+400,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+401,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+402,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[4]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+398,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+366,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+403,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+404,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+405,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+406,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+407,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[5]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+403,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+371,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+408,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+409,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+410,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+411,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+412,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[6]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+408,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+376,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+413,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+414,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+415,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+416,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+417,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[7]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+413,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+381,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+418,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+419,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+420,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+421,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+422,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "row[7]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "col[0]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+38,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+386,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+423,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+424,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+425,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+65,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+66,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[1]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+423,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+389,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+426,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+427,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+428,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+429,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+430,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[2]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+426,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+394,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+431,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+432,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+433,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+434,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+435,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[3]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+431,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+399,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+436,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+437,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+438,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+439,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+440,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[4]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+436,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+404,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+441,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+442,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+443,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+444,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+445,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[5]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+441,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+409,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+446,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+447,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+448,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+449,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+450,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[6]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+446,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+414,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+451,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+452,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+453,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+454,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+455,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "col[7]", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_PUSH_PREFIX(tracep, "pe_inst", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+464,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+451,0,"a_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+419,0,"b_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+461,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+0,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+456,0,"a_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+457,0,"b_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+458,0,"acc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+459,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+460,0,"product_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+462,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+463,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vsystolic_array_tb___024root__trace_init_top(Vsystolic_array_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root__trace_init_top\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsystolic_array_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsystolic_array_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vsystolic_array_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsystolic_array_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsystolic_array_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsystolic_array_tb___024root__trace_register(Vsystolic_array_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root__trace_register\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vsystolic_array_tb___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vsystolic_array_tb___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vsystolic_array_tb___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vsystolic_array_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsystolic_array_tb___024root__trace_const_0_sub_0(Vsystolic_array_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsystolic_array_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root__trace_const_0\n"); );
    // Body
    Vsystolic_array_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsystolic_array_tb___024root*>(voidSelf);
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vsystolic_array_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsystolic_array_tb___024root__trace_const_0_sub_0(Vsystolic_array_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root__trace_const_0_sub_0\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+464,(8U),32);
    bufp->fullIData(oldp+465,(0x00000020U),32);
}

VL_ATTR_COLD void Vsystolic_array_tb___024root__trace_full_0_sub_0(Vsystolic_array_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsystolic_array_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root__trace_full_0\n"); );
    // Body
    Vsystolic_array_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsystolic_array_tb___024root*>(voidSelf);
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vsystolic_array_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsystolic_array_tb___024root__trace_full_0_sub_0(Vsystolic_array_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array_tb___024root__trace_full_0_sub_0\n"); );
    Vsystolic_array_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<16>/*511:0*/ __Vtemp_14;
    VlWide<16>/*511:0*/ __Vtemp_28;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.systolic_array_tb__DOT__rst));
    bufp->fullQData(oldp+1,(vlSelfRef.systolic_array_tb__DOT__a_in),64);
    bufp->fullQData(oldp+3,(vlSelfRef.systolic_array_tb__DOT__b_in),64);
    bufp->fullCData(oldp+5,((0x000000ffU & (IData)(vlSelfRef.systolic_array_tb__DOT__a_in))),8);
    bufp->fullCData(oldp+6,((0x000000ffU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                    >> 8U)))),8);
    bufp->fullCData(oldp+7,((0x000000ffU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                    >> 0x00000010U)))),8);
    bufp->fullCData(oldp+8,((0x000000ffU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                    >> 0x00000018U)))),8);
    bufp->fullCData(oldp+9,((0x000000ffU & (IData)(
                                                   (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                    >> 0x00000020U)))),8);
    bufp->fullCData(oldp+10,((0x000000ffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                     >> 0x00000028U)))),8);
    bufp->fullCData(oldp+11,((0x000000ffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                     >> 0x00000030U)))),8);
    bufp->fullCData(oldp+12,((0x000000ffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                     >> 0x00000038U)))),8);
    bufp->fullCData(oldp+13,((0x000000ffU & (IData)(vlSelfRef.systolic_array_tb__DOT__b_in))),8);
    bufp->fullCData(oldp+14,((0x000000ffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                     >> 8U)))),8);
    bufp->fullCData(oldp+15,((0x000000ffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                     >> 0x00000010U)))),8);
    bufp->fullCData(oldp+16,((0x000000ffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                     >> 0x00000018U)))),8);
    bufp->fullCData(oldp+17,((0x000000ffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                     >> 0x00000020U)))),8);
    bufp->fullCData(oldp+18,((0x000000ffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                     >> 0x00000028U)))),8);
    bufp->fullCData(oldp+19,((0x000000ffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                     >> 0x00000030U)))),8);
    bufp->fullCData(oldp+20,((0x000000ffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                     >> 0x00000038U)))),8);
    bufp->fullCData(oldp+21,((0x000000ffU & (IData)(vlSelfRef.systolic_array_tb__DOT__a_in))),8);
    bufp->fullCData(oldp+22,((0x000000ffU & (IData)(vlSelfRef.systolic_array_tb__DOT__b_in))),8);
    bufp->fullSData(oldp+23,((0x0000ffffU & VL_MULS_III(16, 
                                                        (0x0000ffffU 
                                                         & VL_EXTENDS_II(16,8, 
                                                                         (0x000000ffU 
                                                                          & (IData)(vlSelfRef.systolic_array_tb__DOT__a_in)))), 
                                                        (0x0000ffffU 
                                                         & VL_EXTENDS_II(16,8, 
                                                                         (0x000000ffU 
                                                                          & (IData)(vlSelfRef.systolic_array_tb__DOT__b_in))))))),16);
    bufp->fullIData(oldp+24,(VL_EXTENDS_II(32,16, (0x0000ffffU 
                                                   & VL_MULS_III(16, 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, 
                                                                                (0x000000ffU 
                                                                                & (IData)(vlSelfRef.systolic_array_tb__DOT__a_in)))), 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, 
                                                                                (0x000000ffU 
                                                                                & (IData)(vlSelfRef.systolic_array_tb__DOT__b_in)))))))),32);
    bufp->fullCData(oldp+25,((0x000000ffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                     >> 8U)))),8);
    bufp->fullCData(oldp+26,((0x000000ffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                     >> 0x00000010U)))),8);
    bufp->fullCData(oldp+27,((0x000000ffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                     >> 0x00000018U)))),8);
    bufp->fullCData(oldp+28,((0x000000ffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                     >> 0x00000020U)))),8);
    bufp->fullCData(oldp+29,((0x000000ffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                     >> 0x00000028U)))),8);
    bufp->fullCData(oldp+30,((0x000000ffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                     >> 0x00000030U)))),8);
    bufp->fullCData(oldp+31,((0x000000ffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                     >> 0x00000038U)))),8);
    bufp->fullCData(oldp+32,((0x000000ffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                     >> 8U)))),8);
    bufp->fullCData(oldp+33,((0x000000ffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                     >> 0x00000010U)))),8);
    bufp->fullCData(oldp+34,((0x000000ffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                     >> 0x00000018U)))),8);
    bufp->fullCData(oldp+35,((0x000000ffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                     >> 0x00000020U)))),8);
    bufp->fullCData(oldp+36,((0x000000ffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                     >> 0x00000028U)))),8);
    bufp->fullCData(oldp+37,((0x000000ffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                     >> 0x00000030U)))),8);
    bufp->fullCData(oldp+38,((0x000000ffU & (IData)(
                                                    (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                     >> 0x00000038U)))),8);
    bufp->fullSData(oldp+39,((0x0000ffffU & VL_MULS_III(16, 
                                                        (0x0000ffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT__a_hori__BRA__7__03a0__KET__))), 
                                                        (0x0000ffffU 
                                                         & VL_EXTENDS_II(16,8, 
                                                                         (0x000000ffU 
                                                                          & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                                                >> 8U)))))))),16);
    bufp->fullIData(oldp+40,(VL_EXTENDS_II(32,16, (0x0000ffffU 
                                                   & VL_MULS_III(16, 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT__a_hori__BRA__7__03a0__KET__))), 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, 
                                                                                (0x000000ffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                                                >> 8U))))))))),32);
    bufp->fullSData(oldp+41,((0x0000ffffU & VL_MULS_III(16, 
                                                        (0x0000ffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out))), 
                                                        (0x0000ffffU 
                                                         & VL_EXTENDS_II(16,8, 
                                                                         (0x000000ffU 
                                                                          & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                                                >> 0x00000010U)))))))),16);
    bufp->fullIData(oldp+42,(VL_EXTENDS_II(32,16, (0x0000ffffU 
                                                   & VL_MULS_III(16, 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out))), 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, 
                                                                                (0x000000ffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                                                >> 0x00000010U))))))))),32);
    bufp->fullSData(oldp+43,((0x0000ffffU & VL_MULS_III(16, 
                                                        (0x0000ffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out))), 
                                                        (0x0000ffffU 
                                                         & VL_EXTENDS_II(16,8, 
                                                                         (0x000000ffU 
                                                                          & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                                                >> 0x00000018U)))))))),16);
    bufp->fullIData(oldp+44,(VL_EXTENDS_II(32,16, (0x0000ffffU 
                                                   & VL_MULS_III(16, 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out))), 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, 
                                                                                (0x000000ffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                                                >> 0x00000018U))))))))),32);
    bufp->fullSData(oldp+45,((0x0000ffffU & VL_MULS_III(16, 
                                                        (0x0000ffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out))), 
                                                        (0x0000ffffU 
                                                         & VL_EXTENDS_II(16,8, 
                                                                         (0x000000ffU 
                                                                          & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                                                >> 0x00000020U)))))))),16);
    bufp->fullIData(oldp+46,(VL_EXTENDS_II(32,16, (0x0000ffffU 
                                                   & VL_MULS_III(16, 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out))), 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, 
                                                                                (0x000000ffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                                                >> 0x00000020U))))))))),32);
    bufp->fullSData(oldp+47,((0x0000ffffU & VL_MULS_III(16, 
                                                        (0x0000ffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))), 
                                                        (0x0000ffffU 
                                                         & VL_EXTENDS_II(16,8, 
                                                                         (0x000000ffU 
                                                                          & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                                                >> 0x00000028U)))))))),16);
    bufp->fullIData(oldp+48,(VL_EXTENDS_II(32,16, (0x0000ffffU 
                                                   & VL_MULS_III(16, 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))), 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, 
                                                                                (0x000000ffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                                                >> 0x00000028U))))))))),32);
    bufp->fullSData(oldp+49,((0x0000ffffU & VL_MULS_III(16, 
                                                        (0x0000ffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out))), 
                                                        (0x0000ffffU 
                                                         & VL_EXTENDS_II(16,8, 
                                                                         (0x000000ffU 
                                                                          & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                                                >> 0x00000030U)))))))),16);
    bufp->fullIData(oldp+50,(VL_EXTENDS_II(32,16, (0x0000ffffU 
                                                   & VL_MULS_III(16, 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out))), 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, 
                                                                                (0x000000ffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                                                >> 0x00000030U))))))))),32);
    bufp->fullSData(oldp+51,((0x0000ffffU & VL_MULS_III(16, 
                                                        (0x0000ffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out))), 
                                                        (0x0000ffffU 
                                                         & VL_EXTENDS_II(16,8, 
                                                                         (0x000000ffU 
                                                                          & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                                                >> 0x00000038U)))))))),16);
    bufp->fullIData(oldp+52,(VL_EXTENDS_II(32,16, (0x0000ffffU 
                                                   & VL_MULS_III(16, 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out))), 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, 
                                                                                (0x000000ffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__b_in 
                                                                                >> 0x00000038U))))))))),32);
    bufp->fullSData(oldp+53,((0x0000ffffU & VL_MULS_III(16, 
                                                        (0x0000ffffU 
                                                         & VL_EXTENDS_II(16,8, 
                                                                         (0x000000ffU 
                                                                          & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                                                >> 8U))))), 
                                                        (0x0000ffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT__b_vert__BRA__7__03a0__KET__)))))),16);
    bufp->fullIData(oldp+54,(VL_EXTENDS_II(32,16, (0x0000ffffU 
                                                   & VL_MULS_III(16, 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, 
                                                                                (0x000000ffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                                                >> 8U))))), 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT__b_vert__BRA__7__03a0__KET__))))))),32);
    bufp->fullSData(oldp+55,((0x0000ffffU & VL_MULS_III(16, 
                                                        (0x0000ffffU 
                                                         & VL_EXTENDS_II(16,8, 
                                                                         (0x000000ffU 
                                                                          & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                                                >> 0x00000010U))))), 
                                                        (0x0000ffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+56,(VL_EXTENDS_II(32,16, (0x0000ffffU 
                                                   & VL_MULS_III(16, 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, 
                                                                                (0x000000ffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                                                >> 0x00000010U))))), 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullSData(oldp+57,((0x0000ffffU & VL_MULS_III(16, 
                                                        (0x0000ffffU 
                                                         & VL_EXTENDS_II(16,8, 
                                                                         (0x000000ffU 
                                                                          & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                                                >> 0x00000018U))))), 
                                                        (0x0000ffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+58,(VL_EXTENDS_II(32,16, (0x0000ffffU 
                                                   & VL_MULS_III(16, 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, 
                                                                                (0x000000ffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                                                >> 0x00000018U))))), 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullSData(oldp+59,((0x0000ffffU & VL_MULS_III(16, 
                                                        (0x0000ffffU 
                                                         & VL_EXTENDS_II(16,8, 
                                                                         (0x000000ffU 
                                                                          & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                                                >> 0x00000020U))))), 
                                                        (0x0000ffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+60,(VL_EXTENDS_II(32,16, (0x0000ffffU 
                                                   & VL_MULS_III(16, 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, 
                                                                                (0x000000ffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                                                >> 0x00000020U))))), 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullSData(oldp+61,((0x0000ffffU & VL_MULS_III(16, 
                                                        (0x0000ffffU 
                                                         & VL_EXTENDS_II(16,8, 
                                                                         (0x000000ffU 
                                                                          & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                                                >> 0x00000028U))))), 
                                                        (0x0000ffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+62,(VL_EXTENDS_II(32,16, (0x0000ffffU 
                                                   & VL_MULS_III(16, 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, 
                                                                                (0x000000ffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                                                >> 0x00000028U))))), 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullSData(oldp+63,((0x0000ffffU & VL_MULS_III(16, 
                                                        (0x0000ffffU 
                                                         & VL_EXTENDS_II(16,8, 
                                                                         (0x000000ffU 
                                                                          & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                                                >> 0x00000030U))))), 
                                                        (0x0000ffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+64,(VL_EXTENDS_II(32,16, (0x0000ffffU 
                                                   & VL_MULS_III(16, 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, 
                                                                                (0x000000ffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                                                >> 0x00000030U))))), 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullSData(oldp+65,((0x0000ffffU & VL_MULS_III(16, 
                                                        (0x0000ffffU 
                                                         & VL_EXTENDS_II(16,8, 
                                                                         (0x000000ffU 
                                                                          & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                                                >> 0x00000038U))))), 
                                                        (0x0000ffffU 
                                                         & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+66,(VL_EXTENDS_II(32,16, (0x0000ffffU 
                                                   & VL_MULS_III(16, 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, 
                                                                                (0x000000ffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.systolic_array_tb__DOT__a_in 
                                                                                >> 0x00000038U))))), 
                                                                 (0x0000ffffU 
                                                                  & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullWData(oldp+67,(vlSelfRef.systolic_array_tb__DOT__c_out),2048);
    bufp->fullIData(oldp+131,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out),32);
    bufp->fullIData(oldp+132,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out),32);
    bufp->fullIData(oldp+133,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out),32);
    bufp->fullIData(oldp+134,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out),32);
    bufp->fullIData(oldp+135,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out),32);
    bufp->fullIData(oldp+136,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out),32);
    bufp->fullIData(oldp+137,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out),32);
    bufp->fullIData(oldp+138,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out),32);
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
    __Vtemp_14[14U] = (IData)((((QData)((IData)(((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out) 
                                                   << 0x00000018U) 
                                                  | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out) 
                                                     << 0x00000010U)) 
                                                 | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))))) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  ((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out) 
                                                                     << 0x00000018U) 
                                                                    | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out) 
                                                                       << 0x00000010U)) 
                                                                   | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out) 
                                                                       << 8U) 
                                                                      | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out)))))));
    __Vtemp_14[15U] = (IData)(((((QData)((IData)(((
                                                   ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out) 
                                                    << 0x00000018U) 
                                                   | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out) 
                                                      << 0x00000010U)) 
                                                  | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out) 
                                                      << 8U) 
                                                     | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))))) 
                                 << 0x00000020U) | (QData)((IData)(
                                                                   ((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out) 
                                                                      << 0x00000018U) 
                                                                     | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out) 
                                                                        << 0x00000010U)) 
                                                                    | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out) 
                                                                        << 8U) 
                                                                       | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out)))))) 
                               >> 0x00000020U));
    bufp->fullWData(oldp+139,(__Vtemp_14),512);
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
    __Vtemp_28[14U] = (IData)((((QData)((IData)(((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out) 
                                                   << 0x00000018U) 
                                                  | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out) 
                                                     << 0x00000010U)) 
                                                 | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out) 
                                                     << 8U) 
                                                    | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out))))) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  ((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out) 
                                                                     << 0x00000018U) 
                                                                    | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out) 
                                                                       << 0x00000010U)) 
                                                                   | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out) 
                                                                       << 8U) 
                                                                      | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out)))))));
    __Vtemp_28[15U] = (IData)(((((QData)((IData)(((
                                                   ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out) 
                                                    << 0x00000018U) 
                                                   | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out) 
                                                      << 0x00000010U)) 
                                                  | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out) 
                                                      << 8U) 
                                                     | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out))))) 
                                 << 0x00000020U) | (QData)((IData)(
                                                                   ((((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out) 
                                                                      << 0x00000018U) 
                                                                     | ((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out) 
                                                                        << 0x00000010U)) 
                                                                    | (((IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out) 
                                                                        << 8U) 
                                                                       | (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out)))))) 
                               >> 0x00000020U));
    bufp->fullWData(oldp+155,(__Vtemp_28),512);
    bufp->fullCData(oldp+171,(vlSelfRef.systolic_array_tb__DOT__dut__DOT__a_hori__BRA__7__03a0__KET__),8);
    bufp->fullCData(oldp+172,(vlSelfRef.systolic_array_tb__DOT__dut__DOT__b_vert__BRA__7__03a0__KET__),8);
    bufp->fullIData(oldp+173,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out),32);
    bufp->fullCData(oldp+174,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+175,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+176,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out),32);
    bufp->fullCData(oldp+177,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+178,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+179,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out),32);
    bufp->fullCData(oldp+180,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+181,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+182,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out),32);
    bufp->fullCData(oldp+183,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+184,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+185,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out),32);
    bufp->fullCData(oldp+186,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+187,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+188,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out),32);
    bufp->fullCData(oldp+189,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+190,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+191,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out),32);
    bufp->fullCData(oldp+192,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+193,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+194,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out),32);
    bufp->fullCData(oldp+195,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+196,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+197,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out),32);
    bufp->fullCData(oldp+198,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+199,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+200,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+201,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+202,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+203,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+204,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+205,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+206,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+207,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+208,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+209,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+210,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+211,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+212,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+213,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+214,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+215,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+216,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+217,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+218,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+219,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+220,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+221,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+222,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+223,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+224,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+225,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+226,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+227,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+228,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+229,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+230,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+231,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+232,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+233,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+234,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+235,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out),32);
    bufp->fullCData(oldp+236,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+237,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+238,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+239,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+240,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+241,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+242,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+243,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+244,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+245,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+246,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+247,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+248,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+249,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+250,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+251,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+252,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+253,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+254,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+255,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+256,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+257,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+258,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+259,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+260,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+261,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+262,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+263,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+264,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+265,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+266,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+267,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+268,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+269,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+270,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+271,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+272,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+273,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out),32);
    bufp->fullCData(oldp+274,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+275,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+276,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+277,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+278,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+279,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+280,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+281,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+282,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+283,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+284,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+285,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+286,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+287,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+288,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+289,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+290,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+291,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+292,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+293,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+294,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+295,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+296,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+297,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+298,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+299,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+300,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+301,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+302,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+303,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+304,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+305,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+306,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+307,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+308,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__2__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+309,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+310,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+311,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out),32);
    bufp->fullCData(oldp+312,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+313,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+314,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+315,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+316,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+317,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+318,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+319,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+320,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+321,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+322,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+323,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+324,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+325,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+326,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+327,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+328,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+329,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+330,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+331,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+332,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+333,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+334,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+335,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+336,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+337,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+338,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+339,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+340,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+341,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+342,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+343,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+344,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+345,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+346,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__3__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+347,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+348,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+349,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out),32);
    bufp->fullCData(oldp+350,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+351,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+352,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+353,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+354,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+355,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+356,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+357,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+358,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+359,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+360,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+361,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+362,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+363,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+364,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+365,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+366,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+367,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+368,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+369,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+370,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+371,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+372,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+373,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+374,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+375,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+376,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+377,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+378,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+379,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+380,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+381,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+382,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+383,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+384,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__4__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+385,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+386,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+387,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out),32);
    bufp->fullCData(oldp+388,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+389,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+390,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+391,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+392,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+393,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+394,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+395,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+396,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+397,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+398,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+399,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+400,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+401,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+402,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+403,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+404,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+405,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+406,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+407,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+408,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+409,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+410,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+411,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+412,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+413,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+414,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+415,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+416,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+417,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+418,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+419,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+420,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+421,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+422,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__5__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+423,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+424,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__0__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+425,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__0__KET____DOT__pe_inst__acc_out),32);
    bufp->fullCData(oldp+426,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+427,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+428,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__1__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+429,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+430,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__0__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__1__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+431,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+432,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+433,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+434,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+435,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__1__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__2__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+436,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+437,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+438,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+439,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+440,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__2__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__3__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+441,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+442,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+443,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+444,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+445,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__3__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__4__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+446,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+447,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+448,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+449,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+450,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__4__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__5__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+451,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+452,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+453,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+454,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+455,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__5__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__6__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullCData(oldp+456,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__7__KET____DOT__pe_inst__a_out),8);
    bufp->fullCData(oldp+457,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out),8);
    bufp->fullIData(oldp+458,(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__7__KET____DOT__pe_inst__acc_out),32);
    bufp->fullSData(oldp+459,((0x0000ffffU & VL_MULS_III(16, 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out))), 
                                                         (0x0000ffffU 
                                                          & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out)))))),16);
    bufp->fullIData(oldp+460,(VL_EXTENDS_II(32,16, 
                                            (0x0000ffffU 
                                             & VL_MULS_III(16, 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__7__KET____DOT__col__BRA__6__KET____DOT__pe_inst__a_out))), 
                                                           (0x0000ffffU 
                                                            & VL_EXTENDS_II(16,8, (IData)(vlSelfRef.systolic_array_tb__DOT__dut__DOT____Vcellout__row__BRA__6__KET____DOT__col__BRA__7__KET____DOT__pe_inst__b_out))))))),32);
    bufp->fullBit(oldp+461,(vlSelfRef.systolic_array_tb__DOT__clk));
    bufp->fullIData(oldp+462,(vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+463,(vlSelfRef.systolic_array_tb__DOT__unnamedblk1__DOT__j),32);
}

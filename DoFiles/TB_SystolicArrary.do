quit -sim

transcript on
if ![file isdirectory verilog_libs] {
	file mkdir verilog_libs
}

vlib verilog_libs/altera_ver
vmap altera_ver ./verilog_libs/altera_ver
vlog -vlog01compat -work altera_ver {c:/intelfpga_lite/22.1std/quartus/eda/sim_lib/altera_primitives.v}

vlib verilog_libs/lpm_ver
vmap lpm_ver ./verilog_libs/lpm_ver
vlog -vlog01compat -work lpm_ver {c:/intelfpga_lite/22.1std/quartus/eda/sim_lib/220model.v}

vlib verilog_libs/sgate_ver
vmap sgate_ver ./verilog_libs/sgate_ver
vlog -vlog01compat -work sgate_ver {c:/intelfpga_lite/22.1std/quartus/eda/sim_lib/sgate.v}

vlib verilog_libs/altera_mf_ver
vmap altera_mf_ver ./verilog_libs/altera_mf_ver
vlog -vlog01compat -work altera_mf_ver {c:/intelfpga_lite/22.1std/quartus/eda/sim_lib/altera_mf.v}

vlib verilog_libs/altera_lnsim_ver
vmap altera_lnsim_ver ./verilog_libs/altera_lnsim_ver
vlog -sv -work altera_lnsim_ver {c:/intelfpga_lite/22.1std/quartus/eda/sim_lib/altera_lnsim.sv}

vlib verilog_libs/fiftyfivenm_ver
vmap fiftyfivenm_ver ./verilog_libs/fiftyfivenm_ver
vlog -vlog01compat -work fiftyfivenm_ver {c:/intelfpga_lite/22.1std/quartus/eda/sim_lib/fiftyfivenm_atoms.v}
vlog -vlog01compat -work fiftyfivenm_ver {c:/intelfpga_lite/22.1std/quartus/eda/sim_lib/mentor/fiftyfivenm_atoms_ncrypt.v}

if {[file exists rtl_work]} {
	vdel -lib rtl_work -all
}
vlib rtl_work
vmap work rtl_work

vlog -sv -work work +incdir+../../rtl {../../rtl/systolic_ctrl.sv}

vlog -sv -work work +incdir+../../rtl {../../rtl/pe.sv}

vlog -sv -work work +incdir+../../rtl {../../rtl/reg_file.sv}

vlog -sv -work work +incdir+../../rtl {../../rtl/systolic_array.sv}

vlog -sv -work work +incdir+../../rtl {../../tb/tb_systolic_array.sv}

vsim -gui work.tb_systolic_array

add wave -group TopLogic -position end -radix decimal sim:/tb_systolic_array/a 
add wave -group TopLogic -position end -radix decimal sim:/tb_systolic_array/b
add wave -group TopLogic -position end  sim:/tb_systolic_array/clk
add wave -group TopLogic -position end -radix decimal sim:/tb_systolic_array/result
add wave -group TopLogic -position end  sim:/tb_systolic_array/rst_n
add wave -group TopLogic -position end  sim:/tb_systolic_array/sys_en

add wave -group Control -position end -radix decimal sim:/tb_systolic_array/dut/i_ctrl/col_val
add wave -group Control -position end -radix decimal sim:/tb_systolic_array/dut/i_ctrl/col_val_reg
add wave -group Control -position end -radix decimal sim:/tb_systolic_array/dut/i_ctrl/counter
add wave -group Control -position end  sim:/tb_systolic_array/dut/i_ctrl/pe_en
add wave -group Control -position end  sim:/tb_systolic_array/dut/i_ctrl/pe_en_reg
add wave -group Control -position end -radix decimal sim:/tb_systolic_array/dut/i_ctrl/row_val
add wave -group Control -position end -radix decimal sim:/tb_systolic_array/dut/i_ctrl/row_val_reg
add wave -group Control -position end  sim:/tb_systolic_array/dut/i_ctrl/state
run -all
# Testbench completed.
# ** Note: $finish    : D:/ECE204FinalProject/ECE204-Final-Project/tb/tb_systolic_array.sv(55)
#    Time: 185 ns  Iteration: 1  Instance: /tb_systolic_array
# 1
# Break in Module tb_systolic_array at D:/ECE204FinalProject/ECE204-Final-Project/tb/tb_systolic_array.sv line 55

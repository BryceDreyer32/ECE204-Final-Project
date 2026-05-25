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

vlog -sv -work work +incdir+D:/ECE204FinalProject/ECE204-Final-Project/rtl {D:/ECE204FinalProject/ECE204-Final-Project/rtl/systolic_ctrl.sv}

vlog -sv -work work +incdir+D:/ECE204FinalProject/ECE204-Final-Project/tb {D:/ECE204FinalProject/ECE204-Final-Project/tb/tb_systolic_ctrl.sv}

vsim -t 1ps -L altera_ver -L lpm_ver -L sgate_ver -L altera_mf_ver -L altera_lnsim_ver -L fiftyfivenm_ver -L rtl_work -L work -voptargs="+acc"  tb_systolic_ctrl

add wave -group SystolicCtrl_internals -position end  sim:/tb_systolic_ctrl/dut/a
add wave -group SystolicCtrl_internals -position end  sim:/tb_systolic_ctrl/dut/b
add wave -group SystolicCtrl_internals -position end  sim:/tb_systolic_ctrl/dut/clk
add wave -group SystolicCtrl_internals -position end  sim:/tb_systolic_ctrl/dut/col_val_reg
add wave -group SystolicCtrl_internals -position end  sim:/tb_systolic_ctrl/dut/counter
add wave -group SystolicCtrl_internals -position end  sim:/tb_systolic_ctrl/dut/pe_en_reg
add wave -group SystolicCtrl_internals -position end  sim:/tb_systolic_ctrl/dut/row_val_reg
add wave -group SystolicCtrl_internals -position end  sim:/tb_systolic_ctrl/dut/rst_n
add wave -group SystolicCtrl_internals -position end  sim:/tb_systolic_ctrl/dut/state
add wave -group SystolicCtrl_internals -position end  sim:/tb_systolic_ctrl/dut/sys_en

add wave -group SystolicCtrl -position end  sim:/tb_systolic_ctrl/dut/pe_en
add wave -group SystolicCtrl -position end  sim:/tb_systolic_ctrl/dut/row_val
add wave -group SystolicCtrl -position end  sim:/tb_systolic_ctrl/dut/col_val
run -all
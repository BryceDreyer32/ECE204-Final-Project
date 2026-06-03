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

add wave -group Systolic Array -position end  sim:/tb_systolic_array/rst_n
add wave -group Systolic Array -position end  sim:/tb_systolic_array/clk
add wave -group Systolic Array -position end -radix decimal sim:/tb_systolic_array/result
add wave -group Systolic Array -position end  sim:/tb_systolic_array/dut/sys_en

add wave -group Avalon_Interface -position end -radix decimal sim:/tb_systolic_array/avs_s0_address
add wave -group Avalon_Interface -position end -radix decimal sim:/tb_systolic_array/avs_s0_write
add wave -group Avalon_Interface -position end -radix decimal sim:/tb_systolic_array/avs_s0_writedata

add wave -group Systolic_Ctrl -position end  sim:/tb_systolic_array/dut/en
add wave -group Systolic_Ctrl -position end  sim:/tb_systolic_array/dut/pe_en
add wave -group Systolic_Ctrl -position end -radix decimal sim:/tb_systolic_array/dut/a
add wave -group Systolic_Ctrl -position end -radix decimal sim:/tb_systolic_array/dut/b
add wave -group Systolic_Ctrl -position 12 	-radix decimal sim:/tb_systolic_array/dut/a_in
add wave -group Systolic_Ctrl -position end -radix decimal sim:/tb_systolic_array/dut/b_in
add wave -group Systolic_Ctrl -position end -radix decimal sim:/tb_systolic_array/dut/calc_out
add wave -group Systolic_Ctrl -position 15  -radix decimalsim:/tb_systolic_array/dut/col_val
add wave -group Systolic_Ctrl -position 13  -radix decimalsim:/tb_systolic_array/dut/row_val
add wave -group Systolic_Ctrl -position end  sim:/tb_systolic_array/dut/i_ctrl/state
add wave -group Systolic_Ctrl -position end  -radix decimal sim:/tb_systolic_array/dut/i_ctrl/row_val_reg
add wave -group Systolic_Ctrl -position end  -radix decimal sim:/tb_systolic_array/dut/i_ctrl/row_val
add wave -group Systolic_Ctrl -position 10  sim:/tb_systolic_array/dut/i_ctrl/pe_en_reg
add wave -group Systolic_Ctrl -position 12  sim:/tb_systolic_array/dut/i_ctrl/pe_en
add wave -group Systolic_Ctrl -position end  -radix decimal sim:/tb_systolic_array/dut/i_ctrl/col_val_reg
add wave -group Systolic_Ctrl -position end  -radix decimal sim:/tb_systolic_array/dut/i_ctrl/col_val
add wave -group Systolic_Ctrl -position end  -radix decimal sim:/tb_systolic_array/dut/i_ctrl/b
add wave -group Systolic_Ctrl -position 17  -radix decimal sim:/tb_systolic_array/dut/i_ctrl/a


add wave -group PE[0][0] -radix decmial -position end  sim:/tb_systolic_array/dut/row_loop[0]/col_loop[0]/i_pe/en
add wave -group PE[0][0] -radix decmial -position end  sim:/tb_systolic_array/dut/row_loop[0]/col_loop[0]/i_pe/en_out
add wave -group PE[0][0] -radix decmial -position end  sim:/tb_systolic_array/dut/row_loop[0]/col_loop[0]/i_pe/a_in
add wave -group PE[0][0] -radix decmial -position end  sim:/tb_systolic_array/dut/row_loop[0]/col_loop[0]/i_pe/a_out
add wave -group PE[0][0] -radix decmial -position end  sim:/tb_systolic_array/dut/row_loop[0]/col_loop[0]/i_pe/b_in
add wave -group PE[0][0] -radix decmial -position end  sim:/tb_systolic_array/dut/row_loop[0]/col_loop[0]/i_pe/b_out
add wave -group PE[0][0] -radix decmial -position end  sim:/tb_systolic_array/dut/row_loop[0]/col_loop[0]/i_pe/acc
add wave -group PE[0][0] -radix decmial -position 25  sim:/tb_systolic_array/dut/row_loop[0]/col_loop[0]/i_pe/acc_in
add wave -group PE[0][0] -radix decmial -position end  sim:/tb_systolic_array/dut/row_loop[0]/col_loop[0]/i_pe/a_out

add wave -group PE[0][1] -radix decmial -position end  sim:/tb_systolic_array/dut/row_loop[0]/col_loop[1]/i_pe/en_out
add wave -group PE[0][1] -radix decmial -position end  sim:/tb_systolic_array/dut/row_loop[0]/col_loop[1]/i_pe/en
add wave -group PE[0][1] -radix decmial -position end  sim:/tb_systolic_array/dut/row_loop[0]/col_loop[1]/i_pe/b_out
add wave -group PE[0][1] -radix decmial -position end  sim:/tb_systolic_array/dut/row_loop[0]/col_loop[1]/i_pe/b_in
add wave -group PE[0][1] -radix decmial -position end  sim:/tb_systolic_array/dut/row_loop[0]/col_loop[1]/i_pe/acc_out
add wave -group PE[0][1] -radix decmial -position end  sim:/tb_systolic_array/dut/row_loop[0]/col_loop[1]/i_pe/acc_in
add wave -group PE[0][1] -radix decmial -position end  sim:/tb_systolic_array/dut/row_loop[0]/col_loop[1]/i_pe/acc
add wave -group PE[0][1] -radix decmial -position end  sim:/tb_systolic_array/dut/row_loop[0]/col_loop[1]/i_pe/a_out
add wave -group PE[0][1] -radix decmial -position end  sim:/tb_systolic_array/dut/row_loop[0]/col_loop[1]/i_pe/a_in

add wave -group PE[0][1] -radix decmial -position 38  sim:/tb_systolic_array/dut/row_loop[0]/col_loop[2]/i_pe/en_out
add wave -group PE[0][1] -radix decmial -position 38  sim:/tb_systolic_array/dut/row_loop[0]/col_loop[2]/i_pe/en
add wave -group PE[0][1] -radix decmial -position 38  sim:/tb_systolic_array/dut/row_loop[0]/col_loop[2]/i_pe/b_out
add wave -group PE[0][1] -radix decmial -position 38  sim:/tb_systolic_array/dut/row_loop[0]/col_loop[2]/i_pe/b_in
add wave -group PE[0][1] -radix decmial -position 38  sim:/tb_systolic_array/dut/row_loop[0]/col_loop[2]/i_pe/acc_out
add wave -group PE[0][1] -radix decmial -position 38  sim:/tb_systolic_array/dut/row_loop[0]/col_loop[2]/i_pe/acc_in
add wave -group PE[0][1] -radix decmial -position 38  sim:/tb_systolic_array/dut/row_loop[0]/col_loop[2]/i_pe/acc
add wave -group PE[0][1] -radix decmial -position 38  sim:/tb_systolic_array/dut/row_loop[0]/col_loop[2]/i_pe/a_out
add wave -group PE[0][1] -radix decmial -position 38  sim:/tb_systolic_array/dut/row_loop[0]/col_loop[2]/i_pe/a_ine



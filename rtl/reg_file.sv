// Copyright 2026 Oregon State University, All rights reserved
// Authors      : Bryce Dreyer, Lucas Wilson
// Description  : Systolic array register file. Interfaces with USB blaster via the 
//				  Memory Mapped Avalon Interace. 

`include "reg_address_map.svh"

module reg_file (
	input  logic        clk,          		//  clock.clk
	input  logic        rst_n,         		//  reset.reset_n
	input  logic [7:0]  avs_s0_address,     // avs_s0.address
	input  logic        avs_s0_read,        //       .read
	output logic [31:0] avs_s0_readdata,    //       .readdata
	input  logic        avs_s0_write,       //       .write
	input  logic [31:0] avs_s0_writedata,   //       .writedata
	output logic        avs_s0_waitrequest, //       .waitrequest

	output logic        sys_en,
	input  logic 		calc_out,
	input  logic signed [31:0] result [2:0], 
	output logic [7:0] 	a [2:0][2:0], 
	output logic [7:0] 	b [2:0][2:0]       	// 3x3 input matrices
);

logic [3:0] counter; // Counter to track the current cycle of the computation

// 16 32-bit registers
// Needed for reg_address_map
logic [31:0] register [15:0];

// ------------- 	Reset Register	-------------
always @(posedge clk or negedge rst_n) begin
	if(!rst_n) begin
		counter <= 4'b0;
		register <= '{default:32'd0};
		avs_s0_waitrequest <= 1'b1;
	end
	else begin
		sys_en <= 1'b0; // Default to not enabling the systolic array

		if(avs_s0_write) begin
			// ------------- 	Systolic Ctrl Register	-------------
			if(avs_s0_address == `SYSTOLIC_CTRL) begin
				if(avs_s0_writedata[0]) 
					sys_en <= 1'b1;
			end
				
			// ------------- 	Matrix Input Register A	-------------
			else if(avs_s0_address == `A_IN1)
				register[`A_IN1]	<=  avs_s0_writedata[31:0];
			else if(avs_s0_address == `A_IN2)
				register[`A_IN2]	<=  avs_s0_writedata[31:0];
			else if(avs_s0_address == `A_IN3)
				register[`A_IN3]	<=  avs_s0_writedata[31:0];

			// ------------- 	Matrix Input Register B	-------------
			else if(avs_s0_address == `B_IN1)
				register[`B_IN1]	<=  avs_s0_writedata[31:0];
			else if(avs_s0_address == `B_IN2)
				register[`B_IN2]	<=  avs_s0_writedata[31:0];
			else if(avs_s0_address == `B_IN3)
				register[`B_IN3]	<=  avs_s0_writedata[31:0];
		end

		else if(avs_s0_read) begin

			// ------------- 	Matrix Output Register 	-------------
			if(avs_s0_address == `RESULTS_OUT_0)
				avs_s0_readdata	<= register[`RESULTS_OUT_0];

			else if(avs_s0_address == `RESULTS_OUT_1)
				avs_s0_readdata	<= register[`RESULTS_OUT_1];

			else if(avs_s0_address == `RESULTS_OUT_2)
				avs_s0_readdata	<= register[`RESULTS_OUT_2];

			else if(avs_s0_address == `RESULTS_OUT_3)
				avs_s0_readdata	<= register[`RESULTS_OUT_3];

			else if(avs_s0_address == `RESULTS_OUT_4)
				avs_s0_readdata	<= register[`RESULTS_OUT_4];

			else if(avs_s0_address == `RESULTS_OUT_5)
				avs_s0_readdata	<= register[`RESULTS_OUT_5];

			else if(avs_s0_address == `RESULTS_OUT_6)
				avs_s0_readdata	<= register[`RESULTS_OUT_6];

			else if(avs_s0_address == `RESULTS_OUT_7)
				avs_s0_readdata	<= register[`RESULTS_OUT_7];

			else if(avs_s0_address == `RESULTS_OUT_8)
				avs_s0_readdata	<= register[`RESULTS_OUT_8];
		end

		if(calc_out) begin
			case(counter) 
				4'h0:
					register[`RESULTS_OUT_0] <= result[0];

				4'h1: begin
					register[`RESULTS_OUT_1] <= result[0];
					register[`RESULTS_OUT_3] <= result[1];
				end
				4'h2: begin 
					register[`RESULTS_OUT_2] <= result[0];
					register[`RESULTS_OUT_4] <= result[1];
					register[`RESULTS_OUT_6] <= result[2];
				end

				4'h3: begin 
					register[`RESULTS_OUT_5] <= result[1];
					register[`RESULTS_OUT_7] <= result[2];
				end

				4'h4: begin 
					register[`RESULTS_OUT_8] <= result[2];
				end

				default: begin
				end
			endcase
			counter <= counter + 1;
		end

		else
			counter <= 4'b0;
	end
end


always_comb begin
	// Systolic Array control logic 'a' input
	a[0][0]  = register[`A_IN1][31:24];
	a[0][1]  = register[`A_IN1][23:16];
	a[0][2]  = register[`A_IN1][15:8];

	a[1][0]  = register[`A_IN2][31:24];
	a[1][1]  = register[`A_IN2][23:16];
	a[1][2]  = register[`A_IN2][15:8];

	a[2][0]  = register[`A_IN3][31:24];
	a[2][1]  = register[`A_IN3][23:16];
	a[2][2]  = register[`A_IN3][15:8];

	// Systolic Array control logic 'b' input
	b[0][0]  = register[`B_IN1][31:24];
	b[0][1]  = register[`B_IN1][23:16];
	b[0][2]  = register[`B_IN1][15:8];

	b[1][0]  = register[`B_IN2][31:24];
	b[1][1]  = register[`B_IN2][23:16];	
	b[1][2]  = register[`B_IN2][15:8];

	b[2][0]  = register[`B_IN3][31:24];
	b[2][1]  = register[`B_IN3][23:16];
	b[2][2]  = register[`B_IN3][15:8];
end
endmodule

// Copyright 2026 Oregon State University, All rights reserved
// Authors      : Bryce Dreyer, Lucas Wilson
// Description  : Systolic array register file. Interfaces with USB blaster via the 
//				  Memory Mapped Avalon Interace. 
`timescale 1 ps / 1 ps

`define A_IN 	8'h0
`define B_IN 	8'h1

`define A_OUT_0 8'h2
`define A_OUT_1 8'h3
`define A_OUT_2 8'h4

`define B_OUT_0 8'h5
`define B_OUT_1 8'h6
`define B_OUT_2 8'h7

module reg_file (
		input  logic        clk,          		//  clock.clk
		input  logic        rst_n,         		//  reset.reset_n
		input  logic [7:0]  avs_s0_address,     // avs_s0.address
		input  logic        avs_s0_read,        //       .read
		output logic [31:0] avs_s0_readdata,    //       .readdata
		input  logic        avs_s0_write,       //       .write
		input  logic [31:0] avs_s0_writedata,   //       .writedata
		output logic        avs_s0_waitrequest, //       .waitrequest

		input  logic 		calc_out,
		output logic [7:0] 	a [2:0][2:0], 
    	output logic [7:0] 	b [2:0][2:0]       	// 3x3 input matrices
	);

// 16 32-bit registers
logic [31:0] register [15:0];
logic reg_done = 1'b0;

// ------------- 	Reset Register	-------------
always @(negedge rst_n) begin
	register <= '{default:32'd0};
	avs_s0_waitrequest <= 1'b1;
	reg_done <= 1'b0;
end


// ------------- 	Matrix Input Register A	-------------
always @(posedge clk) begin
	if(avs_s0_write && (avs_s0_address == `A_IN))
		register[`A_IN]	<=  avs_s0_writedata[31:0];
end

// ------------- 	Matrix Input Register B	-------------
always @(posedge clk) begin
	if(avs_s0_write && (avs_s0_address == `B_IN))
		register[`B_IN]	<=  avs_s0_writedata[31:0];
end


// ------------- 	Matrix Output Register A	-------------
always @(posedge clk) begin
	if(avs_s0_read) begin
		if(~reg_done)
			avs_s0_waitrequest <= 1'b1;

		else begin
			if(avs_s0_address == `A_OUT_0)
				avs_s0_readdata	<= register[`A_OUT_0];

			else if(avs_s0_address == `A_OUT_1)
				avs_s0_readdata	<= register[`A_OUT_1];

			else if(avs_s0_address == `A_OUT_2)
				avs_s0_readdata	<= register[`A_OUT_2];
			avs_s0_waitrequest <= 1'b0;
		end
	end
end

// ------------- 	Matrix Output Register B	-------------
always @(posedge clk) begin
	if(avs_s0_read) begin
		if(~reg_done)
			avs_s0_waitrequest <= 1'b1;

		else begin
			if(avs_s0_address == `B_OUT_0)
				avs_s0_readdata	<= register[`B_OUT_0];

			else if(avs_s0_address == `B_OUT_1)
				avs_s0_readdata	<= register[`B_OUT_1];

			else if(avs_s0_address == `B_OUT_2)
				avs_s0_readdata	<= register[`B_OUT_2];
			avs_s0_waitrequest <= 1'b0;
		end
	end
end


always_comb begin
	// Systolic Array control logic 'a' input
	a[0][0]  = register[`A_IN][31:24];
	a[0][1]  = register[`A_IN][23:16];
	a[0][2]  = register[`A_IN][15:8];

	// Systolic Array control logic 'b' input
	b[0][0]  = register[`B_IN][31:24];
	b[0][1]  = register[`B_IN][23:16];
	b[0][2]  = register[`B_IN][15:8];
end
endmodule

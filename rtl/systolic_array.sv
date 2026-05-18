// Copyright 2026 Oregon State University, All rights reserved
// Authors      : Bryce Dreyer, Lucas Wilson
// Description  : Top-level module for the systolic array. Instantiates the
//                processing elements and the control logic, and connects them together.

module systolic_array #(
    parameter SIZE = 8,
    parameter WIDTH = 8,
    parameter ACC_WIDTH = 32
    ) (
    input   logic clk, rst_n, sys_en,
    input logic [7:0] a [2:0][2:0], 
    input logic [7:0] b [2:0][2:0],       // 3x3 input matrices
    output  logic signed [31:0] result [2:0] 
);

logic [7:0]     row_val     [2:0];
logic [7:0]     col_val     [2:0];
logic [3:0]     en          [3:0];
logic           pe_en       [2:0];
logic [7:0]     a_in        [2:0][3:0];
logic [7:0]     b_in        [3:0][3:0];
logic [31:0]    acc_out     [2:0][3:0];

genvar row, col;

systolic_ctrl i_ctrl(
    .clk,
    .rst_n,
    .sys_en,
    .a, 
    .b,             
    .row_val,       
    .col_val,       
    .pe_en         
);

generate
    for (row = 0; row < 3; row++) begin : row_loop
        assign a_in[row][0] = row_val[row];
        assign en[row][0]   = pe_en[row];

        for (col = 0; col < 3; col++) begin : col_loop
            if (row == 0) begin : first_row 
                assign b_in[row][col] = col_val[col];
            end
            
            pe i_pe(
                .clk    (clk),
                .rst_n  (rst_n),

                .a_in   (a_in[row][col]),
                .b_in   (b_in[row][col]),
                .a_out  (a_in[row][col + 1]), 
                .b_out  (b_in[row + 1][col]),

                .en     (en[row][col]),
                .en_out (en[row][col + 1]),

                .acc_in (acc_out[row][col]),
                .acc_out(acc_out[row][col + 1])
            );
        end
    end
    
endgenerate

// Output the final results from the last column of processing elements
assign result[0] = acc_out[0][3];
assign result[1] = acc_out[1][3];
assign result[2] = acc_out[2][3];

endmodule

module systolic_array (
    input  logic               clk, rst_n, sys_en,
    input logic a [2:0][2:0], 
    input logic b [2:0][2:0], 
    output logic signed [31:0] c00, c01, c10, c11
);
/*
logic [2:0] row_val;
logic [2:0] col_val;
logic [2:0] pe_en;
logic [2:0] a_in [2:0];
logic [2:0] b_in [2:0];
logic [2:0] en_in [2:0];
logic [2:0] acc_out [2:0];

genvar row, col;

systolic_ctrl i_ctrl(
    .clk,
    .rst_n,
    .sys_en,
    .a, 
    .b,             
    .row_val,       
    .col_val,       
    .pe_en,         
);

generate
    for (row = 0; row < 3; row++) begin : row_loop
        assign a_in[row][0] = row_val[row];
        assign en_in[row][0] = pe_en[row];

        for (col = 0; col < 3; col++) begin : col_loop
            assign b_in[0][col] = col_val[col];

            pe i_pe(
                .clk    (clk),
                .rst_n  (rst_n),

                .a_in   (a_in[row][col]),
                .b_in   (b_in[row][col]),
                .a_out  (a_in[row + 1][col + 1]), 
                .b_out  (b_in[row + 1][col + 1]),

                .en     (pe_en[row]),
                .en_out (pe_en[row + 1]),

                .acc_in (acc_out[row][col]),
                .acc_out(acc_out[row + 1][col + 1])
            );
        end
    end
    
endgenerate

pe i_pe(
    input  logic signed [7:0] a_in, b_in,
    input  logic clk, rst_n, 
    input  logic en, 
    output logic en_out,
    input  logic signed [31:0] acc_in,
    output logic signed [7:0] a_out, b_out,
    output logic signed [31:0] acc_out
);
*/
endmodule

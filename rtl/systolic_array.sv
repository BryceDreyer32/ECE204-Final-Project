/*module systolic_array (
    input  logic               clk, rst_n, sys_en,
    input logic a [2:0][2:0], 
    input logic b [2:0][2:0], 
    output logic signed [31:0] c00, c01, c10, c11 
    */
module systolic_array #(
    parameter SIZE = 8,
    parameter WIDTH = 8,
    parameter ACC_WIDTH = 32
    ) (
    input  logic clk, rst,
    input  logic signed [SIZE - 1:0][WIDTH - 1:0]  a_in,
    input  logic signed [SIZE - 1:0][WIDTH - 1:0]  b_in,
    output logic [SIZE - 1:0][SIZE - 1:0][ACC_WIDTH - 1:0] c_out
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
// 3D packed array: [which column/row you're in, a = row, b = column][Which gap between PEs][Width of intermediate wire]

logic signed [SIZE - 1:0][SIZE - 1:0][WIDTH - 1:0] a_hori;    // The rightmost index is treated as width for all packed arrays
logic signed [SIZE - 1:0][SIZE - 1:0][WIDTH - 1:0] b_vert;

genvar i, j;
generate
    for (i = 0; i < SIZE; i++) begin : row
        for (j = 0; j < SIZE; j++) begin : col

            pe #(.WIDTH(WIDTH)) pe_inst (
                .clk(clk),
                .rst(rst),
                .a_in(j == 0 ? $signed(a_in[i]) : $signed(a_hori[i][j-1])),
                .b_in(i == 0 ? $signed(b_in[j]) : $signed(b_vert[i-1][j])),
                .a_out(a_hori[i][j]),    // Slang-server is particularly strict about signedness, but this warning can be ignored since the IO connections here are declaraed as signed values
                .b_out(b_vert[i][j]),
                .acc_out(c_out[i][j])    // ^
            );

        end
    end
endgenerate

endmodule

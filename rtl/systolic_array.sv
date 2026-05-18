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

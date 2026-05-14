module systolic_array (
    input  logic               clk, rst,
    input  logic signed [7:0]  a00, a10,
    input  logic signed [7:0]  b00, b01,
    output logic signed [31:0] c00, c01, c10, c11
);

logic signed [7:0] a_h00;    // a flows right: PE(0,0) -> PE(0,1)
logic signed [7:0] a_h10;    // a flows right: PE(1,0) -> PE(1,1)
logic signed [7:0] b_v00;    // b flows down:  PE(0,0) -> PE(1,0)
logic signed [7:0] b_v01;    // b flows down:  PE(0,1) -> PE(1,1)

pe instance_00 (.clk(clk), .rst(rst),
    .a_in(a00), .b_in(b00),
    .a_out(a_h00), .b_out(b_v00),
    .acc_out(c00)

);

pe instance_01 (.clk(clk), .rst(rst),
    .a_in(a_h00), .b_in(b01),
    .a_out(), .b_out(b_v01),            // a_out is an edge of the 2x2 array. There are no pe modules "below it, so the output is a don't care"
    .acc_out(c01)

);

pe instance_10 (.clk(clk), .rst(rst),
    .a_in(a10), .b_in(b_v00),
    .a_out(a_h10), .b_out(),            // b_out is an edge of the 2x2 array. There are no pe modules "below it, so the output is a don't care"
    .acc_out(c10)

);

pe instance_11 (.clk(clk), .rst(rst),
    .a_in(a_h10), .b_in(b_v01),
    .a_out(), .b_out(),                 // Both a_out and_b_out are don't cares. This is the last pe in the array to receive the input matrices
    .acc_out(c11)

);

endmodule

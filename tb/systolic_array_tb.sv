module systolic_array_tb;

    localparam SIZE = 8;
    localparam WIDTH = 8;
    localparam ACC_WIDTH = 32;
    
    logic clk, rst;
    logic signed [SIZE-1:0][WIDTH-1:0] a_in, b_in;
    logic [SIZE-1:0][SIZE-1:0][ACC_WIDTH-1:0] c_out;

    // Surfer compresses 2D packed arrays into single bit buses. This makes waveform analysis difficult, so segmenttation helps fix this

    logic [WIDTH-1:0] a_in_0, a_in_1, a_in_2, a_in_3, a_in_4, a_in_5, a_in_6, a_in_7;

    assign a_in_0 = a_in[0]; 
    assign a_in_1 = a_in[1];
    assign a_in_2 = a_in[2]; 
    assign a_in_3 = a_in[3];
    assign a_in_4 = a_in[4]; 
    assign a_in_5 = a_in[5];
    assign a_in_6 = a_in[6];
    assign a_in_7 = a_in[7];

    logic [WIDTH-1:0] b_in_0, b_in_1, b_in_2, b_in_3, b_in_4, b_in_5, b_in_6, b_in_7;

    assign b_in_0 = b_in[0]; 
    assign b_in_1 = b_in[1];
    assign b_in_2 = b_in[2]; 
    assign b_in_3 = b_in[3];
    assign b_in_4 = b_in[4]; 
    assign b_in_5 = b_in[5];
    assign b_in_6 = b_in[6];
    assign b_in_7 = b_in[7];

    logic [ACC_WIDTH-1:0] c_out_00, c_out_11, c_out_22, c_out_33, c_out_44, c_out_55, c_out_66, c_out_77;

    assign c_out_00 = c_out[0][0];
    assign c_out_11 = c_out[1][1];
    assign c_out_22 = c_out[2][2];
    assign c_out_33 = c_out[3][3];
    assign c_out_44 = c_out[4][4];
    assign c_out_55 = c_out[5][5];
    assign c_out_66 = c_out[6][6];
    assign c_out_77 = c_out[7][7];

    // Device under test instantiation

    systolic_array #(
        .SIZE(SIZE),
        .WIDTH(WIDTH),
        .ACC_WIDTH(ACC_WIDTH)
    ) dut (
        .clk(clk),
        .rst(rst),
        .a_in(a_in),
        .b_in(b_in),
        .c_out(c_out)
    );

    // Initializing the clock

    initial clk = 0;
    always #5 clk = ~clk;

    initial begin

        int i, j;

        $dumpfile("/tmp/systolic.vcd");     // Creates .vcd file for Surfer to read
        $dumpvars(0, systolic_array_tb);

        // Reset the inputs to 1

        rst = 1'b1;
        a_in = '0;
        b_in = '0;
        
        // Wait 1 cycle

        #5;

        // Wait for next rising edge

        @(posedge clk)

        rst = 1'b0;
        #5;

        // Wait 1 cycle, wait for rising clock edge

        @(posedge clk);

        // Feed all edge PEs (lanes) with 1 simultaneously for 1 cycle
        
        for (int lane = 0; lane < SIZE; lane++) begin
            a_in[lane] = 8'd1;
            b_in[lane] = 8'd1;
        end
        @(posedge clk);

        // Zero the outputs

        a_in = '0;
        b_in = '0;
        
        // Wait for values to propagate
        // SIZE * 2 - 1 = 15. 14 cycles for propagation, and 1 cycle for the accumulator to register the final product_ext addition (see pe.sv)
        // Generalized formula applies even if parameter SIZE changes

        repeat(SIZE * 2 - 1) @(posedge clk);
        
        // Checks all of the values, checking each column entry per row
        // Prints error messages for any value mismatches

        for (i = 0; i < SIZE; i++) begin
            for (j = 0; j < SIZE; j++) begin
                if (i == j && c_out[i][j] != 32'd1) begin
                    $display("Error: c_out[%0d][%0d] expected 1, got %0d", i, j, c_out[i][j]);
                end else if (i != j && c_out[i][j] != 32'd0) begin
                    $display("Error: c_out[%0d][%0d] expected 0, got %0d", i, j, c_out[i][j]);
                end  
            end
        end

        $finish;
    end

endmodule

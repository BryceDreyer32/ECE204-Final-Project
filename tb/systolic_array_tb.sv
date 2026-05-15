module systolic_array_tb;

    logic clk, rst;
    logic signed [7:0] a00, a10;
    logic signed [7:0] b00, b01;
    logic signed [31:0] c00, c01, c10, c11;

    systolic_array dut (
        .clk(clk), .rst(rst),
        .a00(a00), .a10(a10),
        .b00(b00), .b01(b01),
        .c00(c00), .c01(c01), .c10(c10), .c11(c11)
    );

    initial clk = 0;
    always #5 clk = ~clk;

    initial begin
        $dumpfile("/tmp/systolic.vcd");
        $dumpvars(0, systolic_array_tb);
        
        rst = 1'b1;
        #5;

        rst = 1'b0;
        #5;

        a00 = 8'b00000001;
        a10 = 8'b00000000;
        b00 = 8'b00000001;
        b01 = 8'b00000000;
        #50;
        
        if (c00 != 32'sd1) begin
            $display("Error: c00 expected 1");
        end
        if (c01 != 0) begin
            $display("Error: c01 expected 0");
        end
        if (c10 != 0) begin
            $display("Error: c10 expected 0");
        end
        if (c11 != 32'sd1) begin
            $display("Error: c11 expected 1");
        end
        $finish;
    end

endmodule

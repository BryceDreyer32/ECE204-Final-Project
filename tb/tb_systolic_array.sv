module tb_systolic_array;
    logic clk; 
    logic rst_n;
    logic sys_en;

    logic [7:0] a [2:0][2:0];
    logic [7:0] b [2:0][2:0];

    logic signed [31:0] result [2:0];

    localparam SIZE = 8;
    localparam WIDTH = 8;
    localparam ACC_WIDTH = 32;

// Device under test instantiation
systolic_array #(
    .SIZE       (SIZE),
    .WIDTH      (WIDTH),
    .ACC_WIDTH  (ACC_WIDTH)
    ) 
    dut(
    .clk, 
    .rst_n, 
    .sys_en,
    .a, 
    .b,       // 3x3 input matrices
    .result
);

    // Running clock
    initial clk = 0;
    always #5 clk = ~clk;

    initial begin
        $dumpfile("systolic_array.vcd");
        $dumpvars(0, tb_systolic_array);

        // Reset sequence for two cycles
        rst_n   = 1'b0;
        sys_en  = 1'b0;
        a       = '{default:8'd0};
        b       = '{default:8'd0};

        repeat(2) @(posedge clk);

        // Deassert reset, load data
        rst_n   = 1'b1;
        sys_en  = 1'b1;
        a       = '{{8'd3, 8'd5, 8'd12}, {8'd2, 8'd17, 8'd11}, {8'd25, 8'd6, 8'd3}};
        b       = '{{8'd4, 8'd19, 8'd1}, {8'd30, 8'd7, 8'd17}, {8'd22, 8'd12, 8'd4}};

        repeat(17) @(posedge clk);

        $display("Testbench completed.");
        $finish;
    end

endmodule

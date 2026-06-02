`define A_IN1 	8'h0
`define A_IN2 	8'h1
`define A_IN3 	8'h2


`define B_IN1 	8'h3
`define B_IN2 	8'h4
`define B_IN3 	8'h5

`define RESULTS_OUT_0 8'h6
`define RESULTS_OUT_1 8'h7
`define RESULTS_OUT_2 8'h8
`define RESULTS_OUT_3 8'h9
`define RESULTS_OUT_4 8'h10
`define RESULTS_OUT_5 8'h11
`define RESULTS_OUT_6 8'h12
`define RESULTS_OUT_7 8'h13
`define RESULTS_OUT_8 8'h14

module tb_reg_file;
    logic clk; 
    logic rst_n;

    logic           [7:0]   a [2:0][2:0];
    logic           [7:0]   b [2:0][2:0];

    logic           [7:0]   avs_s0_address;  
    logic                   avs_s0_read;     
    logic                   avs_s0_write;     
    logic           [31:0]  avs_s0_writedata; 
    logic signed    [31:0]  result [2:0];
    logic                   calc_out;

   

    localparam SIZE = 8;
    localparam WIDTH = 8;
    localparam ACC_WIDTH = 32;


// Device under test instantiation
reg_file dut(
	.clk,          		//  clock.clk
	.rst_n,         		//  reset.reset_n
	.avs_s0_address,     // avs_s0.address
	.avs_s0_read,        //       .read
	.avs_s0_readdata(),    //       .readdata
	.avs_s0_write,       //       .write
	.avs_s0_writedata,   //       .writedata
	.avs_s0_waitrequest(), //       .waitrequest

	.calc_out,
	.result, 
	.a, 
	.b       	// 3x3 input matrices
);

    // Running clock
    initial clk = 0;
    always #5 clk = ~clk;

    initial begin
        $dumpfile("reg_file.vcd");
        $dumpvars(0, tb_reg_file);

        // Hard set
        avs_s0_read = 1'b0;
        calc_out = 1'b0;
        result = '{default:32'd0};
        

        // Reset sequence for two cycles
        rst_n   = 1'b0;
        avs_s0_write = 1'b0;
        //a       = '{default:8'd0};
        //b       = '{default:8'd0};

        // Deassert reset, load data
        rst_n   = 1'b1;
        avs_s0_write = 1'b1;
        // Load A matrix
        @(posedge clk);
        avs_s0_address = `A_IN1;
        avs_s0_writedata[31:24] = 8'd3;
        avs_s0_writedata[23:16] = 8'd5;
        avs_s0_writedata[15:8] = 8'd12;
        avs_s0_writedata[7:0] = 8'd0;

        @(posedge clk);
        avs_s0_address = `A_IN2;
        avs_s0_writedata[31:24] = 8'd2;
        avs_s0_writedata[23:16] = 8'd17;
        avs_s0_writedata[15:8] = 8'd11;
        avs_s0_writedata[7:0] = 8'd0;
        
        @(posedge clk);
        avs_s0_address = `A_IN3;
        avs_s0_writedata[31:24] = 8'd25;
        avs_s0_writedata[23:16] = 8'd6;
        avs_s0_writedata[15:8] = 8'd3;
        avs_s0_writedata[7:0] = 8'd0;
        
        // Load B matrix
        @(posedge clk);
        avs_s0_address = `B_IN1;
        avs_s0_writedata[31:24] = 8'd4;
        avs_s0_writedata[23:16] = 8'd19;
        avs_s0_writedata[15:8] = 8'd1;
        avs_s0_writedata[7:0] = 8'd0;

        @(posedge clk);
        avs_s0_address = `B_IN2;
        avs_s0_writedata[31:24] = 8'd30;
        avs_s0_writedata[23:16] = 8'd7;
        avs_s0_writedata[15:8] = 8'd17;
        avs_s0_writedata[7:0] = 8'd0;

        @(posedge clk);
        avs_s0_address = `B_IN3;
        avs_s0_writedata[31:24] = 8'd22;
        avs_s0_writedata[23:16] = 8'd12;
        avs_s0_writedata[15:8] = 8'd4;
        avs_s0_writedata[7:0] = 8'd0;

        // Deassert write and read A and B matricies back to verify correct loading
        @(posedge clk);
        avs_s0_write = 1'b0;


        //repeat(17) @(posedge clk);

        $display("Testbench completed.");
        $finish;
    end

endmodule

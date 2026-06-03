`include "reg_address_map.svh"

module tb_systolic_array;
    logic clk; 
    logic rst_n;

    logic signed [31:0] result [2:0];

    localparam SIZE = 8;
    localparam WIDTH = 8;
    localparam ACC_WIDTH = 32;

    logic           [7:0]   avs_s0_address;  
    logic                   avs_s0_read;
    logic           [31:0]  avs_s0_readdata;
    logic                   avs_s0_write;     
    logic           [31:0]  avs_s0_writedata; 
    logic                   avs_s0_waitrequest;

// Device under test instantiation
systolic_array #(
    .SIZE       (SIZE),
    .WIDTH      (WIDTH),
    .ACC_WIDTH  (ACC_WIDTH)
    ) 
    dut(
    .clk, 
    .rst_n, 
    .result,

    .avs_s0_address,     // avs_s0.address
    .avs_s0_read,        //       .read
    .avs_s0_readdata,    //       .readdata
    .avs_s0_write,       //       .write
    .avs_s0_writedata,   //       .writedata
    .avs_s0_waitrequest  //       .waitrequest
);

    // Running clock
    initial clk = 0;
    always #5 clk = ~clk;

    initial begin
        $dumpfile("systolic_array.vcd");
        $dumpvars(0, tb_systolic_array);
 
        /////////////////////////////////////
        /// Reset sequence  ///
        /////////////////////////////////////
        rst_n   = 1'b0;
        avs_s0_write = 1'b0;
        @(posedge clk);


        //////////////////////////////////////
        ///     Begin Register Writing     ///
        //////////////////////////////////////
        // Deassert reset, signal writing to the register file
        rst_n   = 1'b1;
        avs_s0_write = 1'b1;
        avs_s0_read = 1'b0;

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

        @(posedge clk);
        avs_s0_address = `SYSTOLIC_CTRL;
        avs_s0_writedata = 32'd1; // Set sys_en to 1 to start the computation

        //////////////////////////////////////
        ///  Begin Systolic Computation    ///
        //////////////////////////////////////

        // Deassert write and begin calculations
        repeat(2) @(posedge clk);
        avs_s0_write = 1'b0;

        // Wait for the systolic array to signal that it's done with calculations
        repeat(20) @(posedge clk);
        //@(negedge dut.calc_out);


        //////////////////////////////////////
        ///     Begin Reading Results      ///
        //////////////////////////////////////
        avs_s0_read = 1'b1;

        @(posedge clk);
        avs_s0_address = `RESULTS_OUT_0;

        @(posedge clk);
        avs_s0_address = `RESULTS_OUT_1;

        @(posedge clk);
        avs_s0_address = `RESULTS_OUT_2;

        @(posedge clk);
        avs_s0_address = `RESULTS_OUT_3;

        @(posedge clk);
        avs_s0_address = `RESULTS_OUT_4;

        @(posedge clk);
        avs_s0_address = `RESULTS_OUT_5;

        @(posedge clk);
        avs_s0_address = `RESULTS_OUT_6;

        @(posedge clk);
        avs_s0_address = `RESULTS_OUT_7;

        @(posedge clk);
        avs_s0_address = `RESULTS_OUT_8;

        @(posedge clk);
        avs_s0_read = 1'b0;

        repeat(3) @(posedge clk);

        $display("Testbench completed.");
        $finish;
    end
endmodule

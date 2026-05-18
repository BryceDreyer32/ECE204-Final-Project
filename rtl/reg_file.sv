// Copyright 2026 Oregon State University, All rights reserved
// Authors      : Bryce Dreyer, Lucas Wilson
// Description  : Register file for the systolic array. Stores the input matrices and the output results of the computation.

module reg_file(
    input logic clk,
    input logic rst_n,

    // Avalon-MM slave interface for the register file
	input   logic [31:0]    master_address,       
	output  logic [31:0]    master_readdata,      
	input   logic           master_read,          
	input   logic           master_write,         
	input   logic [31:0]    master_writedata,     
	output  logic           master_waitrequest,   
	output  logic           master_readdatavalid, 
	input   logic [3:0]     master_byteenable              
	);

// Internal register storage
    logic [31:0] reg_0;
    logic [31:0] reg_1;
    
    // Assign outputs
    assign my_register_0 = reg_0;
    assign my_register_1 = reg_1;
    
    // No wait states needed for simple synchronous access
    assign master_waitrequest = 1'b0;
    
    // Write logic
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            reg_0 <= 32'b0;
            reg_1 <= 32'b0;
        end else if (master_write) begin
            case (master_address[3:0])  // Decode lower 4 bits for address
                4'h0: begin
                    // Write with byte enable masking
                    if (master_byteenable[0]) reg_0[7:0]   <= master_writedata[7:0];
                    if (master_byteenable[1]) reg_0[15:8]  <= master_writedata[15:8];
                    if (master_byteenable[2]) reg_0[23:16] <= master_writedata[23:16];
                    if (master_byteenable[3]) reg_0[31:24] <= master_writedata[31:24];
                end
                4'h4: begin
                    if (master_byteenable[0]) reg_1[7:0]   <= master_writedata[7:0];
                    if (master_byteenable[1]) reg_1[15:8]  <= master_writedata[15:8];
                    if (master_byteenable[2]) reg_1[23:16] <= master_writedata[23:16];
                    if (master_byteenable[3]) reg_1[31:24] <= master_writedata[31:24];
                end
            endcase
        end
    end
    
    // Read logic - combinational
    always_comb begin
        case (master_address[3:0])
            4'h0: master_readdata = reg_0;
            4'h4: master_readdata = reg_1;
            default: master_readdata = 32'b0;
        endcase
    end
    
    // Read data valid - asserted one cycle after read
    logic read_valid;
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            read_valid <= 1'b0;
        end else begin
            read_valid <= master_read;
        end
    end
    
    assign master_readdatavalid = read_valid;


endmodule
module pe #(
    parameter WIDTH = 8    // Decided on 8 x 8 implementation to allow space for other Platform Designer Modules
    ) (
    input  logic signed [WIDTH - 1:0] a_in, b_in,
    input  logic clk, rst_n, 
    input  logic en, 
    output logic en_out,
    input  logic signed [31:0] acc_in,
    output logic signed [WIDTH - 1:0] a_out, b_out,
    output logic signed [31:0] acc_out
);

logic signed [31:0] acc; // Internal register to hold the accumulated value, separate from the output register to allow for pipelining
logic signed [WIDTH * 2 - 1:0] product;        // 16 bit wide output, since we're multiplying two 8 bit inputs
logic signed [WIDTH * 4 - 1:0] product_ext;    // MSB for signed binary is the sign bit. Replicating the sign bit left of the number doesn't change the number since it's two's complement

always_comb begin
    acc_out = en ? acc_in : acc;          
    product     = a_in * b_in;
    product_ext = 32'($signed(product));        // "$signed" tells SystemVerilog to treat a given signal as a two's complement number, the prefix dictates the bit width
end

always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin                   // Explicitly matched bit width reset signals
        acc     <= 32'sd0;
        a_out   <= '0;
        b_out   <= '0;
        en_out  <= 1'b0;
    end 
    
    else begin                          // Passes input to output in one clock cycle
        if(en) 
            acc <= acc + product_ext;   // product_ext is the full product, this is just the addition of components
        
        else 
            acc <= 32'sd0;              // Clear accumulator for next round of computation    
        
        a_out   <= a_in;
        b_out   <= b_in;
        en_out  <= en;
    end
end

endmodule
// Copyright 2026 Oregon State University, All rights reserved
// Authors      : Bryce Dreyer, Lucas Wilson
// Description  : Systolic array control logic. Generates control signals for the
//                systolic array based on the current state of the computation.

module systolic_ctrl(
    input logic clk,
    input logic rst_n,
    input logic sys_en,
    input logic [7:0] a [2:0][2:0], 
    input logic [7:0] b [2:0][2:0],       // 3x3 input matrices
    output logic [7:0] row_val [2:0],     // Row values for the systolic array
    output logic [7:0] col_val [2:0],     // Column values for the systolic array
    output logic pe_en [2:0],             // Row enable signals for the systolic array
    output logic calc_out                 // High once data starts transfering
);

logic [3:0] counter; // Counter to track the current cycle of the computation
logic [7:0] row_val_reg [4:0][2:0]; // Registers to hold the current row values
logic [7:0] col_val_reg [4:0][2:0]; // Registers to hold the current column values
logic [7:0] pe_en_reg [2:0]; // Registers to hold the current row enable 

typedef enum logic[2:0] {  
    IDLE,           // Waiting for sys_en to start the computation
    LOAD_INPUTS,    // Loading input values into the systolic array
    COMPUTE,        // Performing the matrix multiplication
    OUTPUT_RESULTS  // Outputting the final results from the systolic array
} STATE;

STATE state;

always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        counter     <= 0;
        state       <= IDLE;
        row_val_reg <= '{default:3'b0};
        col_val_reg <= '{default:3'b0};
        pe_en_reg   <= '{default:3'b0};
        row_val     <= '{default:8'b0};
        col_val     <= '{default:8'b0};
        pe_en       <= '{default:3'b0};
        calc_out    <= 1'b0;
    end
    
    else if (sys_en) begin
        case(state)
            IDLE: begin
                if (sys_en)
                    state <= LOAD_INPUTS;
            end

            LOAD_INPUTS: begin
                // Load row and column values into registers
                row_val_reg <= '{
                    '{a[0][0],     8'b0,        8'b0},
                    '{a[0][1],     a[1][0],     8'b0},
                    '{a[0][2],     a[1][1],     a[2][0]},
                    '{8'b0,        a[1][2],     a[2][1]},
                    '{8'b0,        8'b0,        a[2][2]}
                };

                col_val_reg <= '{
                    '{b[0][0],     8'b0,        8'b0},
                    '{b[1][0],     b[0][1],     8'b0},
                    '{b[2][0],     b[1][1],     b[0][2]},
                    '{8'b0,        b[2][1],     b[1][2]},
                    '{8'b0,        8'b0,        b[2][2]}
                };

                pe_en_reg[0] <= {2'b0, 3'b111};
                pe_en_reg[1] <= {1'b0, 3'b111, 1'b0};
                pe_en_reg[2] <= {3'b111, 2'b0};
                state <= COMPUTE;
            end

            COMPUTE: begin
                // Update row and column values and enable signals based on the current cycle
                row_val     <= row_val_reg[counter[2:0]];
                col_val     <= col_val_reg[counter[2:0]];
                pe_en[0]    <= pe_en_reg[0][counter[2:0]];
                pe_en[1]    <= pe_en_reg[1][counter[2:0]];
                pe_en[2]    <= pe_en_reg[2][counter[2:0]];
                counter     <= counter + 1;

                if(counter == 4'h4) // After 4 cycles, we should have the final results ready
                    state <= OUTPUT_RESULTS;
            end

            OUTPUT_RESULTS: begin
                // Output final results from the systolic array
                pe_en       <= '{default:3'b0};
                calc_out    <= 1'b1;
                if (counter <= 4'hF) 
                    counter <= counter + 1;

                else
                    state   <= IDLE; // IDLE after outputting results
            end

            default: state  <= IDLE;
        endcase
    end
end
 
endmodule
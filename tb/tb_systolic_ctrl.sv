module tb_systolic_ctrl;

    logic clk;
    logic rst_n;
    logic sys_en;

    logic [7:0] a [2:0][2:0];
    logic [7:0] b [2:0][2:0];

    logic [7:0] row_val [2:0];
    logic [7:0] col_val [2:0];
    logic       pe_en   [2:0];

    systolic_ctrl dut (
        .clk(clk),
        .rst_n(rst_n),
        .sys_en(sys_en),
        .a(a),
        .b(b),
        .row_val(row_val),
        .col_val(col_val),
        .pe_en(pe_en)
    );

    initial clk = 1'b0;
    always #5 clk = ~clk;

    task automatic print_state();
        int i;
        $write("TIME=%0t | row_val=", $time);
        for (i = 0; i < 3; i++) begin
            $write("%0d", row_val[i]);
            if (i < 2) $write(",");
        end
        $write(" | col_val=");
        for (i = 0; i < 3; i++) begin
            $write("%0d", col_val[i]);
            if (i < 2) $write(",");
        end
        $display(" | pe_en=%b", pe_en[i]);
    endtask

    initial begin
        $dumpfile("systolic_ctrl.vcd");
        $dumpvars(0, tb_systolic_ctrl);

        rst_n = 1'b0;
        sys_en = 1'b0;
        a = '{default:8'd0};
        b = '{default:8'd0};
        #20;

        rst_n = 1'b1;
        #10;

        // Load test values into the input matrices
        a[0][0] = 8'd4;  a[0][1] = 8'd2;  a[0][2] = 8'd13;
        a[1][0] = 8'd6;  a[1][1] = 8'd11; a[1][2] = 8'd6;
        a[2][0] = 8'd7;  a[2][1] = 8'd8;  a[2][2] = 8'd3;

        b[0][0] = 8'd12; b[0][1] = 8'd2;  b[0][2] = 8'd1;
        b[1][0] = 8'd20; b[1][1] = 8'd15; b[1][2] = 8'd10;
        b[2][0] = 8'd5;  b[2][1] = 8'd2;  b[2][2] = 8'd6;

        sys_en = 1'b1;
        #200;
        sys_en = 1'b0;
        #100;

        $display("Testbench completed.");
        $stop;
    end

    always @(posedge clk) begin
        if (sys_en) begin
            print_state();
        end
    end

endmodule

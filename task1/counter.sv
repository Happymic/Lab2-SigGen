module counter #(
    parameter WIDTH = 8
)(
    // interface signals
    input logic clk, //clock
    input logic rst, //reset
    input logic en, //enable signal
    input logic [WIDTH-1:0] incr, //increment value
    output logic signed [WIDTH-1:0] count //count output
);
// Original Counter Logic, Only Count Up

always_ff @ (posedge clk)
    if (rst) count <= {WIDTH{1'b0}};
    else count <= count + {{WIDTH-1{1'b0}},en};
endmodule

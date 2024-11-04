module dual_sinegen #(
    parameter WIDTH = 8
)(
    input  logic             clk,
    input  logic             rst,
    input  logic             en,
    input  logic [WIDTH-1:0] incr,      // Frequency control
    input  logic [WIDTH-1:0] phase,     // Phase offset control
    output logic [WIDTH-1:0] dout1,     // First sine output
    output logic [WIDTH-1:0] dout2      // Second sine output
);

logic [WIDTH-1:0] count;
logic [WIDTH-1:0] phase_shifted_addr;

// Counter for base address
counter #(WIDTH) u_counter (
    .clk   (clk),
    .rst   (rst),
    .en    (en),
    .incr  (incr),
    .count (count)
);

// Calculate phase-shifted address
assign phase_shifted_addr = count + phase;

// Dual-port ROM instance
dual_rom #(WIDTH, WIDTH) u_rom (
    .addr1 (count),
    .addr2 (phase_shifted_addr),
    .dout1 (dout1),
    .dout2 (dout2)
);

endmodule
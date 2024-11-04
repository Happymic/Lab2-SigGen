module sigdelay #(
    parameter AW = 9,    // Address width
    parameter DW = 8     // Data width
)(
    input  logic             clk,
    input  logic             rst,
    input  logic             en,
    input  logic [DW-1:0]    mic_in,     // Microphone input
    input  logic [AW-1:0]    delay,      // Delay amount
    output logic [DW-1:0]    original,   // Original signal
    output logic [DW-1:0]    delayed     // Delayed signal
);

// Internal signals
logic [AW-1:0] write_addr;
logic [AW-1:0] read_addr;

// Counter for write address
counter #(AW) write_counter (
    .clk    (clk),
    .rst    (rst),
    .en     (en),
    .count  (write_addr)
);

// Calculate read address with delay
assign read_addr = write_addr - delay;

// Dual port RAM instance
dual_port_ram #(AW, DW) u_ram (
    .clk        (clk),
    .write_addr (write_addr),
    .read_addr  (read_addr),
    .data_in    (mic_in),
    .write_en   (en),
    .data_out   (delayed)
);

// Output the original signal directly
assign original = mic_in;

endmodule
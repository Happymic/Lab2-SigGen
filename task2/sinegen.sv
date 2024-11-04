module sinegen#(
    parameter A_WIDTH =8,
    parameter D_WIDTH =8
)(
    input logic clk,
    input logic rst,
    input logic en,
    input logic [D_WIDTH-1:0] incr,
    input logic [D_WIDTH-1:0] phase_offset,
    output logic [D_WIDTH-1:0] dout1,
    output logic [D_WIDTH-1:0] dout2
);
    logic [A_WIDTH-1:0] address1, address2;

counter addrCounter(
    .clk (clk),
    .rst (rst),
    .en (en),
    .incr (incr),
    .count(address1)
);

assign address2 = address1 + phase_offset;

// instantiate ROM for the first wave form
rom #(
    .ADDRESS_WIDTH (A_WIDTH),
    .DATA_WIDTH (D_WIDTH)
) sineRom1 (
    .clk (clk),
    .addr (address1),
    .dout (dout1)
);

// instantiate ROM for the second wave form
rom #(
    .ADDRESS_WIDTH (A_WIDTH),
    .DATA_WIDTH (D_WIDTH)
) sineRom2 (
    .clk (clk),
    .addr (address2),
    .dout (dout2)
);
endmodule

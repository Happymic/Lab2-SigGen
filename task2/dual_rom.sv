module dual_rom #(
    parameter AW = 8,  // Address width
    parameter DW = 8   // Data width
)(
    input  logic [AW-1:0] addr1,    // First address input
    input  logic [AW-1:0] addr2,    // Second address input (phase shifted)
    output logic [DW-1:0] dout1,    // First sine output
    output logic [DW-1:0] dout2     // Second sine output (phase shifted)
);

logic [DW-1:0] memory [2**AW-1:0];

initial begin
    $readmemh("sinerom.mem", memory);
end

assign dout1 = memory[addr1];
assign dout2 = memory[addr2];

endmodule
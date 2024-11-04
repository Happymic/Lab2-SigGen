module dual_port_ram #(
    parameter AW = 9,  // Address width (512 locations = 9 bits)
    parameter DW = 8   // Data width (8 bits per sample)
)(
    input  logic             clk,
    input  logic [AW-1:0]    write_addr,
    input  logic [AW-1:0]    read_addr,
    input  logic [DW-1:0]    data_in,
    input  logic             write_en,
    output logic [DW-1:0]    data_out
);

// RAM array
logic [DW-1:0] ram [2**AW-1:0];

// Write port
always_ff @(posedge clk) begin
    if (write_en) begin
        ram[write_addr] <= data_in;
    end
end

// Read port (continuous read)
assign data_out = ram[read_addr];

endmodule
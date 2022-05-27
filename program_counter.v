module program_counter (
  input clk,
  input abs,
  input rel,
  input [15:0]alu,
  output [15:0] next,
  output reg [15:0] pc
);
assign next = pc + 1;
  always @(negedge(clk)) begin
    pc <= abs ? alu : (rel ? alu+pc : next);
  end
endmodule

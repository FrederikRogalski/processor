module register (
  input [3:0] src,
  input [3:0] dst,
  input [15:0] WD,
  input clk,
  input WE,
  output [15:0] Rsrc,
  output [15:0] Rdst
);

  reg [15:0] registers [15:0];
  assign Rsrc = registers[src];
  assign Rdst = registers[dst];

  always @(posedge(clk)) begin
    if (WE) begin
      registers[dst] <= WD;
    end
  end

endmodule
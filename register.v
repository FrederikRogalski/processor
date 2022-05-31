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

  always @(negedge(clk)) begin
    $display("%4d %4d %4d %4d %4d %4d %4d %4d %4d %4d", registers[0], registers[1], registers[2], registers[3], registers[4], registers[5], registers[6], registers[7], registers[8], registers[9]);
  end

endmodule
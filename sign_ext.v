module sign_ext (
  input [15:0] inst,
  output [15:0] S4,
  output [15:0] SD8,
  output [15:0] D4
);

assign S4 = {12'b0, inst[3:0]};
assign D4 = {12'b0, inst[7:4]};
assign SD8 = {{8{inst[7]}}, inst[7:0]};

  
endmodule
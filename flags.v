module flags (
  input store,
  input clk,
  input Ci, Ni, Zi,
  output reg Co, No, Zo
);
  always @(posedge(clk)) begin
    if (store) begin
      Co <= Ci;
      No <= Ni;
      Zo <= Zi;
    end
  end
endmodule
module im_reg (
  input en,
  input [1:0]iem,
  input [15:0]inst,
  input clk,
  output [15:0]imm
);
reg [14:0] imm_reg;
assign imm[15] = iem==0 ? imm_reg[14] : iem==1 ? 0 : iem==2 ? inst[0] : inst[4];
assign imm[14:0] = imm_reg;
always @(posedge(clk)) begin
  if (en) begin
    imm_reg <= inst[14:0];
  end
end

endmodule
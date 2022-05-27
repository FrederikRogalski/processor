module unit_pc_rom (
  input clk,
  output [15:0] out
);
  wire [15:0] next;
  wire [15:0] pc;

  program_counter inst_pc (
    .clk,
    .next,
    .pc
  );
  rom inst_rom (
    .addr (pc),
    .instr (out)
  );
endmodule

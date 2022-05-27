module rom (
  input [15:0] addr,
  output [15:0] instr
);
reg [15:0] memory [2**16-1:0];
assign instr = memory[addr];

initial begin
  $display("Loading instruction ROM");
  $readmemh("rom.mem", memory);
end
endmodule

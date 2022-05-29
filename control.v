module control (
  input  [7:0] op_code,
  output stPC,
  output WE,
  output imm,
  output [1:0] iem,
  output absJmp,
  output [2:0] muxB,
  output src2D,
  output muxA,
  output alu2D,
  output [4:0] aluOp,
  output storeFlags,
  output [2:0] branch,
  output ramSt,
  output ramLd,
  output ioW,
  output ioR,
  output Retl
);
reg [25:0] memory [2**7-1:0];
reg [25:0] control_bits;


assign control_bits = op_code[7] ? 0 : memory[op_code[6:0]];

always @(control_bits) begin
  $display("Current control bits: %b", control_bits);
end

always @(op_code) begin
  $display("Current op-code: %b", op_code);
end

assign imm = op_code[7];

assign stPC = control_bits[23];
assign WE = control_bits[9];
assign iem = control_bits[13:12];
assign absJmp = control_bits[20];
assign muxB = control_bits[2:0];
assign src2D = control_bits[3];
assign muxA = control_bits[17];
assign alu2D = control_bits[11];
assign aluOp = control_bits[8:4];
assign storeFlags = control_bits[10];
assign branch = control_bits[16:14];
assign ramSt = control_bits[19];
assign ramLd = control_bits[18];
assign ioW = control_bits[21];
assign ioR = control_bits[22];
assign Retl = control_bits[25];

always @(posedge(control_bits[24])) begin
  $finish;
end

initial begin
  $display("Loading control ROM");
  $readmemh("control.mem", memory);
end
  
endmodule
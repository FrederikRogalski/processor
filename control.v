module control (
  input [7:0] op_code,
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
reg [25:0] current_op;

assign current_op = op_code[7] ? 0 : memory[op_code[6:0]];

assign imm = op_code[7];

assign stPC = current_op[23];
assign WE = current_op[9];
assign iem = current_op[13:12];
assign absJmp = current_op[20];
assign muxB = current_op[2:0];
assign src2D = current_op[3];
assign muxA = current_op[17];
assign alu2D = current_op[11];
assign aluOp = current_op[8:4];
assign storeFlags = current_op[10];
assign branch = current_op[16:14];
assign ramSt = current_op[19];
assign ramLd = current_op[18];
assign ioW = current_op[21];
assign ioR = current_op[22];
assign Retl = current_op[25];

always @(posedge(current_op[24])) begin
  $stop;
end

initial begin
  $display("Loading control ROM");
  $readmemh("control.mem", memory);
end
  
endmodule
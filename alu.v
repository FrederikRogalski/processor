module alu (
  input [15:0] A,
  input [15:0] B,
  input [4:0] aluOp,
  input Ci,
  output reg [15:0] Y,
  output Zero,
  output Neg,
  output Carry
);
reg [16:0]result_with_carry;
assign Carry = 0;
assign Zero = Y == 0;
assign Neg = Y[15];

always @(aluOp[3:0]) begin
  case (aluOp[3:0])
  // B
  0: assign Y = B;
  // ADD
  1: 
  begin
    assign result_with_carry = A+B+{15'b0, aluOp[4] & Ci};
    assign Y = result_with_carry[15:0];
    assign Carry = result_with_carry[16];
  end
  // SUB
  2: 
  begin
    assign result_with_carry = A-B-{15'b0, aluOp[4] & Ci};
    assign Y = result_with_carry[15:0];
    assign Carry = result_with_carry[16];
  end
  // AND
  3: assign Y = A&B;
  // OR
  4: assign Y = A|B;
  // XOR
  5: assign Y = A ^ B;
  // NOT
  6: assign Y = ~A;
  // NEG
  7: assign Y = -A;
  // LSL
  8: 
  begin
    assign Y = {A[14:0], aluOp[4] & Ci};
    assign Carry = A[15];
  end
  // LSR
  9: 
  begin 
    assign Y = {aluOp[4] & Ci, A[15:1]};
    assign Carry = A[0];
  end
  // ASR
  10: assign Y = {{2{A[15]}}, A[14:1]};
  // SWAP
  11: assign Y = {A[7:0], A[15:8]};
  // SWAPN
  12: assign Y = {A[11:8], A[15:12], A[3:0], A[7:4]};
  // MUL
  13: assign Y = A*B;
  endcase
end
  
endmodule
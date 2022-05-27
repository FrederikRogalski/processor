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

always @(aluOp[3:0]) begin
  case (aluOp[3:0])
  0: assign Y = B;
  1: 
  begin
    assign result_with_carry = A+B+{15'b0, aluOp[4]};
    assign Y = result_with_carry[15:0];
    assign Carry = result_with_carry[16];
  end
  2: 
  begin
    assign result_with_carry = A-B-{15'b0, aluOp[4]};
    assign Y = result_with_carry[15:0];
    assign Carry = result_with_carry[16];
  end
  3: assign Y = A&B;
  4: assign Y = A|B;
  5: assign Y = A ^ B;
  6: assign Y = ~A;
  7: assign Y = -A;
  8: 
  begin
    assign Y = {A[14:0], aluOp[4]};
    assign Carry = A[15];
  end
  9: 
  begin 
    assign Y = {aluOp[4], A[15:1]};
    assign Carry = A[0];
  end
  10: 
  begin
    assign Y = {{2{A[15]}}, A[14:1]};
    assign Carry = A[0];
  end
  11: assign Y = {A[7:0], A[15:8]};
  12: assign Y = {A[11:8], A[15:12], A[3:0], A[7:4]};
  13: assign Y = A*B;
  endcase
end
  
endmodule
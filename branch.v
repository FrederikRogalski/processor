module branch (
  input C, N, Z,
  input [2:0] ctrl,
  output jmp
);
  reg jmp_flags;

  assign jmp = jmp_flags ^ ctrl[2];
  always @(ctrl) begin
    case (ctrl[1:0])
      0: assign jmp_flags = 0;
      1: assign jmp_flags = C;
      2: assign jmp_flags = Z;
      3: assign jmp_flags = N;
    endcase
  end
endmodule
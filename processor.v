module processor (
  input clk,
  output [15:0]Y
);

  wire [15:0] bus;

  assign bus = stPC ? next : src2D ? Rsrc : alu2D ? Y : 0;
  
  wire [15:0] A;
  reg [15:0] B;
  
  assign A = muxA ? Rsrc : Rdst;
  always @(muxB) begin
    case (muxB)
      0: assign B = Rsrc;
      2: assign B = imm_out;
      5: assign B = S4;
      6: assign B = DS8;
      7: assign B = D4;
      default: 
      assign B = 0;
    endcase
  end
  

  // program_counter wires
  wire [15:0] next;
  wire [15:0] pc;
  always @(pc) begin
    $display("Program counter: %d", pc);
  end

  // rom wires
  wire [15:0] instr;
  always @(instr) begin
    $display("Instruction: %b", instr);
  end

  // control wires
  wire stPC;
  wire WE;
  wire imm;
  wire [1:0] iem;
  wire absJmp;
  wire [2:0] muxB;
  wire src2D;
  wire muxA;
  wire alu2D;
  wire [4:0] aluOp;
  wire storeFlags;
  wire [2:0] branch_ctrl;
  wire ramSt;
  wire ramLd;
  wire ioW;
  wire ioR;
  wire Retl;

  // register wires
  wire [15:0] Rdst;
  wire [15:0] Rsrc;

  // im_reg wires
  wire [15:0] imm_out;

  // sign_ext wires
  wire [15:0] S4;
  wire [15:0] DS8;
  wire [15:0] D4;

  // alu wires
  //wire [15:0] Y;
  wire Zero;
  wire Neg;
  wire Carry;

  // flags wires
  wire Co;
  wire No;
  wire Zo;
  always @(Co or No or Zo) begin
    $display("Co: %d, No: %d, Zo: %d", Co, No, Zo);
  end

  // branch wires
  wire jmp;

  program_counter program_counter (
    .clk(clk),
    .abs(absJmp),
    .rel(jmp),
    .alu(Y),
    .next(next),
    .pc(pc)
  );

  rom rom (
    .addr(pc),
    .instr(instr)
  );

  control control (
    .op_code(instr[15:8]),
    .stPC(stPC),
    .WE(WE),
    .imm(imm),
    .iem(iem),
    .absJmp(absJmp),
    .muxB(muxB),
    .src2D(src2D),
    .muxA(muxA),
    .alu2D(alu2D),
    .aluOp(aluOp),
    .storeFlags(storeFlags),
    .branch(branch_ctrl),
    .ramSt(ramSt),
    .ramLd(ramLd),
    .ioW(ioW),
    .ioR(ioR),
    .Retl(Retl)
  );

  register register (
    .src(instr[3:0]),
    .dst(instr[7:4]),
    .WD(bus),
    .clk(clk),
    .WE(WE),
    .Rsrc(Rsrc),
    .Rdst(Rdst)
  );

  im_reg im_reg (
    .en(imm),
    .iem(iem),
    .clk(clk),
    .inst(instr),
    .imm(imm_out)
  );

  sign_ext sign_ext (
    .inst(instr),
    .S4(S4),
    .DS8(DS8),
    .D4(D4)
  );

  alu alu (
    .A(A),
    .B(B),
    .Ci(Co),
    .aluOp(aluOp),
    .Y(Y),
    .Zero(Zero),
    .Neg(Neg),
    .Carry(Carry)
  );

  flags flags (
    .store(storeFlags),
    .clk(clk),
    .Ci(Carry), 
    .Ni(Neg), 
    .Zi(Zero),
    .Co(Co), 
    .No(No), 
    .Zo(Zo)
  );

  branch branch (
    .C(Co),
    .N(No),
    .Z(Zo),
    .ctrl(branch_ctrl),
    .jmp(jmp)
  );


  
endmodule
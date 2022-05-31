stPC = 1 << 23
WE = 1 << 9
def iem(x): return x << 12


absJmp = 1 << 20
def muxB(x): return x << 0


src2D = 1 << 3
muxA = 1 << 17
alu2D = 1 << 11
def aluOp(x): return x << 4


storeFlags = 1 << 10
def branch(x): return x << 14


ramSt = 1 << 19
ramLd = 1 << 18
ioW = 1 << 21
ioR = 1 << 22
Break = 1 << 24
Retl = 1 << 25


class Instruction:
    def __init__(self, opcode, controlbits):
        self.controlbits = controlbits
        self.opcode = opcode

    @staticmethod
    def _src(x):
        return x

    @staticmethod
    def _dest(x):
        return x << 4

    @staticmethod
    def _op(x):
        if isinstance(x, Instruction):
            x = x.opcode
        return x << 8

    @staticmethod
    def immediate(lt, gt):
        def im_function(reg, x):
            if x < 16:
                return lt(reg, x)
            return [Instruction._op(1 << 7) | x, gt(reg, x >> 15)]
        return im_function

    def __call__(self, dest=0, src=0):
        return Instruction._src(src) | Instruction._dest(dest) | Instruction._op(self.opcode)


class InstructionConstant(Instruction):
    def __call__(self, constant):
        constant = int.from_bytes(constant.to_bytes(1, "big", signed=True), "big")
        print(constant)
        return constant | Instruction._op(self.opcode)

    @staticmethod
    def immediate(lt, gt):
        def im_function(x):
            if -128 <= x < 128:
                return lt(x)
            return [Instruction._op(1 << 7) | (x & 0x7fff), gt(1 if x < 0 else 0)]
        return im_function


def auto():
    i = 0
    while(True):
        yield i
        i += 1


auto = auto()


class Instructionset():
    NOP = Instruction(next(auto), 0)
    MOV = Instruction(next(auto), muxB(0) | aluOp(0) | alu2D | WE)
    _BREAK = Instruction(next(auto), Break)

    # ADD, SUB, AND, OR, XOR, NOT, NEG, LSL, LSR, ASR, SWAP, SWAPN, MUL
    ADD = Instruction(next(auto), muxB(0) | aluOp(1) | alu2D | WE)
    SUB = Instruction(next(auto), muxB(0) | aluOp(2) | alu2D | WE)
    AND = Instruction(next(auto), muxB(0) | aluOp(3) | alu2D | WE)
    OR = Instruction(next(auto), muxB(0) | aluOp(4) | alu2D | WE)
    XOR = Instruction(next(auto), muxB(0) | aluOp(5) | alu2D | WE)
    NOT = Instruction(next(auto), muxA | muxB(0) | aluOp(6) | alu2D | WE)
    NEG = Instruction(next(auto), muxA | muxB(0) | aluOp(7) | alu2D | WE)
    LSL = Instruction(next(auto), muxA | muxB(0) | aluOp(8) | alu2D | WE)
    LSR = Instruction(next(auto), muxA | muxB(0) | aluOp(9) | alu2D | WE)
    ASR = Instruction(next(auto), muxA | muxB(0) | aluOp(10) | alu2D | WE)
    SWAP = Instruction(next(auto), muxA | muxB(0) | aluOp(11) | alu2D | WE)
    SWAPN = Instruction(next(auto), muxA | muxB(0) | aluOp(12) | alu2D | WE)
    MUL = Instruction(next(auto), muxB(0) | aluOp(13) | alu2D | WE)

    # Carry Instructions
    ADC = Instruction(next(auto), muxB(0) | aluOp(1 | 1 << 4) | alu2D | WE)
    SBC = Instruction(next(auto), muxB(0) | aluOp(2 | 1 << 4) | alu2D | WE)
    ROL = Instruction(next(auto), muxA | muxB(0) | aluOp(8 | 1 << 4) | alu2D | WE)
    ROR = Instruction(next(auto), muxA | muxB(0) | aluOp(9 | 1 << 4) | alu2D | WE)

    # Branch Instructions
    CMP = Instruction(next(auto), muxB(0) | aluOp(2) | storeFlags)
    CPC = Instruction(next(auto), muxB(0) | aluOp(2 | 1 << 4) | storeFlags)
    BREQ = InstructionConstant(next(auto), branch(2) | muxB(6) | aluOp(0))

    # Immediate Instructions
    _ADDI_lt_16 = Instruction(next(auto), muxB(5) | aluOp(1) | alu2D | WE)
    _ADDI_gte_16 = Instruction(next(auto), muxB(2) | aluOp(1) | alu2D | WE | iem(2))

    _SUBI_lt_16 = Instruction(next(auto), muxB(5) | aluOp(2) | alu2D | WE)
    _SUBI_gte_16 = Instruction(next(auto), muxB(2) | aluOp(2) | alu2D | WE | iem(2))

    _ANDI_lt_16 = Instruction(next(auto), muxB(5) | aluOp(3) | alu2D | WE)
    _ANDI_gte_16 = Instruction(next(auto), muxB(2) | aluOp(3) | alu2D | WE | iem(2))

    _ORI_lt_16 = Instruction(next(auto), muxB(5) | aluOp(4) | alu2D | WE)
    _ORI_gte_16 = Instruction(next(auto), muxB(2) | aluOp(4) | alu2D | WE | iem(2))

    _XORI_lt_16 = Instruction(next(auto), muxB(5) | aluOp(5) | alu2D | WE)
    _XORI_gte_16 = Instruction(next(auto), muxB(2) | aluOp(5) | alu2D | WE | iem(2))

    _MULI_lt_16 = Instruction(next(auto), muxB(5) | aluOp(13) | alu2D | WE)
    _MULI_gte_16 = Instruction(next(auto), muxB(2) | aluOp(13) | alu2D | WE | iem(2))

    _LDI_lt_16 = Instruction(next(auto), muxB(5) | aluOp(0) | alu2D | WE)
    _LDI_gte_16 = Instruction(next(auto), muxB(2) | aluOp(0) | alu2D | WE | iem(2))

    _JMP_lt_128 = InstructionConstant(next(auto), muxB(6) | aluOp(0) | alu2D | absJmp)
    _JMP_gte_128 = InstructionConstant(next(auto), muxB(2) | aluOp(0) | alu2D | absJmp | iem(2))

    # Immediate Carry Instructions
    _ADCI_lt_16 = Instruction(next(auto), muxB(5) | aluOp(1 | 1 << 4) | alu2D | WE)
    _ADCI_gte_16 = Instruction(next(auto), muxB(2) | aluOp(1 | 1 << 4) | alu2D | WE | iem(2))

    _SBCI_lt_16 = Instruction(next(auto), muxB(5) | aluOp(2 | 1 << 4) | alu2D | WE)
    _SBCI_gte_16 = Instruction(next(auto), muxB(2) | aluOp(2 | 1 << 4) | alu2D | WE | iem(2))

    # Virtual Instrucitons (Multi cycle instructions)
    ADDI = Instruction.immediate(_ADDI_lt_16, _ADDI_gte_16)
    SUBI = Instruction.immediate(_SUBI_lt_16, _SUBI_gte_16)
    ANDI = Instruction.immediate(_ANDI_lt_16, _ANDI_gte_16)
    ORI = Instruction.immediate(_ORI_lt_16, _ORI_gte_16)
    XORI = Instruction.immediate(_XORI_lt_16, _XORI_gte_16)
    MULI = Instruction.immediate(_MULI_lt_16, _MULI_gte_16)
    LDI = Instruction.immediate(_LDI_lt_16, _LDI_gte_16)
    JMP = InstructionConstant.immediate(_JMP_lt_128, _JMP_gte_128)

    ADCI = Instruction.immediate(_ADCI_lt_16, _ADCI_gte_16)
    SBCI = Instruction.immediate(_SBCI_lt_16, _SBCI_gte_16)


real_instructions = {k: v.controlbits for k, v in Instructionset.__dict__.items(
) if isinstance(v, Instruction)}

with open("control.mem", "w") as f:
    f.write(" ".join(f"{i:x}" for i in real_instructions.values()) + "\n")

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

    def __call__(self, dest=0, src=0):
        return Instruction._src(src) | Instruction._dest(dest) | Instruction._op(self.opcode)


def auto():
    i = 0
    while(True):
        yield i
        i += 1


auto = auto()


class Instructionset():
    NOP = Instruction(next(auto), 0)
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

    _LDI_lt_16 = Instruction(next(auto), muxB(5) | aluOp(0) | alu2D | WE)
    _LDI_gt_16 = Instruction(next(auto), muxB(
        2) | aluOp(0) | alu2D | WE | iem(2))

    _ADDI_lt_16 = Instruction(next(auto), muxB(5) | aluOp(1) | alu2D | WE)
    _ADDI_gt_16 = Instruction(next(auto), muxB(
        2) | aluOp(1) | alu2D | WE | iem(2))

    def LDI(reg, x):
        if x < 16:
            return Instructionset._LDI_lt_16(reg, x)
        return [Instruction._op(1 << 7) | x,
                Instructionset._LDI_gt_16(reg, x >> 15)]

    def ADDI(reg, x):
        if x < 16:
            return Instructionset._ADDI_lt_16(reg, x)
        return [Instruction._op(1 << 7) | x,
                Instructionset._ADDI_gt_16(reg, x >> 15)]


real_instructions = {k: v.controlbits for k, v in Instructionset.__dict__.items(
) if isinstance(v, Instruction)}

with open("control.mem", "w") as f:
    f.write(" ".join(f"{i:x}" for i in real_instructions.values()) + "\n")

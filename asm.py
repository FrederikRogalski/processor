from instructions import Instructionset as i

asm = [
    i.LDI(0, 10),
    i.LDI(1, 20),
    i.ADD(0, 1),
    i.ADDI(0, 100),
]

asm.append(i._BREAK())
regular = []
for i in asm:
    if isinstance(i, list):
        for j in i:
            regular.append(j)
    else:
        regular.append(i)


with open("rom.mem", "w") as f:
    f.write(" ".join(f"{i:x}" for i in regular) + "\n")

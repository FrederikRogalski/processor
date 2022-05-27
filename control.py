with open("control.mem", "w") as rom:
    rom.write(" ".join((f"{i:x}" for i in range(2**7))))

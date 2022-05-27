#include "Vrom.h"
#include "verilated.h"

int main(int argc, char **argv, char **env)
{
  Verilated::commandArgs(argc, argv);
  Vrom *top = new Vrom{};
  for (int i = 0; i < 16; i++)
  {
    top->addr = i;
    top->eval();
    printf("Instruction @ %3d: %#06x\n", top->addr, top->instr);
  }
  delete top;
  return 0;
}
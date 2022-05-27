#include "Vsign_ext.h"
#include "verilated.h"

int main(int argc, char **argv, char **env)
{
  Verilated::commandArgs(argc, argv);
  Vsign_ext *top = new Vsign_ext;
  top->inst = 0b11111111;
  top->eval();
  printf("S4: %#06x SD8: %#06x D4: %#06x\n", top->S4, top->SD8, top->D4);
  top->inst = 0b01111111;
  top->eval();
  printf("S4: %#06x SD8: %#06x D4: %#06x\n", top->S4, top->SD8, top->D4);
  delete top;
  return (0);
}
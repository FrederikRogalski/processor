#include "Vim_reg.h"
#include "verilated.h"

int main(int argc, char **argv, char **env)
{
  Verilated::commandArgs(argc, argv);
  Vim_reg *top = new Vim_reg;
  top->inst = 0xFFEE;
  top->en = 1;
  top->iem = 0;
  top->clk = 0;
  top->eval();
  top->clk = 1;
  top->eval();
  printf("iem: %d imm: %#06x\n", top->iem, top->imm);
  top->iem = 1;
  top->clk = 0;
  top->eval();
  top->clk = 1;
  top->eval();
  printf("iem: %d imm: %#06x\n", top->iem, top->imm);
  top->iem = 2;
  top->clk = 0;
  top->eval();
  top->clk = 1;
  top->eval();
  printf("iem: %d imm: %#06x\n", top->iem, top->imm);
  top->iem = 3;
  top->clk = 0;
  top->eval();
  top->clk = 1;
  top->eval();
  printf("iem: %d imm: %#06x\n", top->iem, top->imm);
  delete top;
  return (0);
}
#include "Vprocessor.h"
#include "verilated.h"

int main(int argc, int **argv, char **env)
{
  VerilatedContext *contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);
  Vprocessor *top = new Vprocessor{contextp};
  top->clk = 0;
  top->rst = 1;
  while (top->gotFinish() == 0)
  {
    top->eval();
    top->clk = !top->clk;
  }
  delete top;
  delete contextp;
  return 0;
}
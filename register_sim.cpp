#include "Vregister.h"
#include "verilated.h"

int main(int argc, char **argv, char **env)
{
  Verilated::commandArgs(argc, argv);
  Vregister *top = new Vregister{};
  top->WD = 0xbabe;
  top->clk = 0;
  for (int i = 0; i < 6; i++)
  {
    top->src = i;
    top->dst = 5 - i;

    top->eval();

    top->WE = 0;
    if (i == 0)
    {
      top->WE = 1;
    }
    printf("Clock: %d Rsrc: %#06x Rdst: %#06x\n", top->clk, top->Rsrc, top->Rdst);

    top->clk = !top->clk;
  }
  delete top;
  return 0;
}
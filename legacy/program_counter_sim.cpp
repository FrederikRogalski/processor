#include "Vprogram_counter.h"
#include "verilated.h"

int main(int argc, char **argv, char **env)
{
  Verilated::commandArgs(argc, argv);
  Vprogram_counter *top = new Vprogram_counter{};
  top->clk = 0;
  for (int i = 0; i < 20; i++)
  {
    top->eval();
    if (i % 2)
    {
      printf("pc: %d\n", top->pc);
    }
    top->abs = 0;
    top->rel = 0;

    top->clk = !top->clk;
    if (i == 9)
    {
      printf("absolut jump to 300\n");
      top->alu = 300;
      top->abs = 1;
    }
    if (i == 15)
    {
      printf("relative jump +300\n");
      top->alu = 300;
      top->rel = 1;
    }
  }
  delete top;
  return 0;
}
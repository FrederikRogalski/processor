#include "Vunit_pc_rom.h"
#include "verilated.h"

int main(int argc, char **argv, char **env)
{
  Verilated::commandArgs(argc, argv);
  Vunit_pc_rom *top = new Vunit_pc_rom{};
  top->clk = 0;
  for (int i = 0; i < 10; i++)
  {
    top->eval();
    top->clk = !top->clk;
    printf("out: %d\n", top->out);
  }
  delete top;
  return 0;
}
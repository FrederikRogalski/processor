#include <gtest/gtest.h>
#include "Vprocessor.h"
#include "verilated.h"

TEST(VprocessorTest, HandlesCycles)
{
  Vprocessor *top = new Vprocessor;
  // TODO for loop 10
  top->clk = 0;
  top->eval();
  while (!Verilated::gotFinish())
  {
    top->clk = ~top->clk;
    top->eval();
    if (top->clk)
      continue;
    printf("%d\n", top->Y);
  }

  delete top;
}

int main(int argc, char **argv, char **env)
{
  ::testing::InitGoogleTest(&argc, argv);
  Verilated::commandArgs(argc, argv);
  return RUN_ALL_TESTS();
}
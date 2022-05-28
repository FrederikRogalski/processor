#include <gtest/gtest.h>
#include "Vbranch.h"

class VbranchTest : public ::testing::TestWithParam<std::tuple<int, bool>>
{
protected:
  Vbranch *top = new Vbranch;
  void SetUp() override
  {
    top->clk = 0;
    top->eval();
    top->clk = 1;
    top->C = 1;
    top->Z = 1;
    top->N = 1;
  }
  void TearDown() override
  {
    delete top;
  }
};

TEST_P(VbranchTest, HandlesBranch)
{
  bool expected = std::get<1>(GetParam());
  top->ctrl = std::get<0>(GetParam());
  top->eval();
  EXPECT_EQ(top->jmp, expected);
}

INSTANTIATE_TEST_SUITE_P(
    VbranchTest,
    VbranchTest,
    ::testing::Values(
        std::make_tuple(0, false),
        std::make_tuple(1, true),
        std::make_tuple(2, true),
        std::make_tuple(3, true),
        std::make_tuple(4, true),
        std::make_tuple(5, false),
        std::make_tuple(6, false),
        std::make_tuple(7, false)));

int main(int argc, char **argv, char **env)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
#include <gtest/gtest.h>
#include "Valu.h"

enum ALUOp
{
  B,
  ADD,
  SUB,
  AND,
  OR,
  XOR,
  NOT,
  NEG,
  LSL,
  LSR,
  ASR,
  SWAP,
  SWAPN,
  MUL
};
class ValuTest : public ::testing::Test
{
protected:
  Valu *top = new Valu;
  void SetUp() override
  {
    top->A = 0xBABE;
    top->B = 0xCAFE;
  }
  void TearDown() override
  {
    delete top;
  }
};

// Test B
TEST_F(ValuTest, HandlesAluB)
{
  top->aluOp = ALUOp::B;
  top->eval();
  EXPECT_EQ(top->Y, top->B);
}

// Test ADD
TEST_F(ValuTest, HandlesAluADD)
{
  top->aluOp = ALUOp::ADD;
  top->eval();
  EXPECT_EQ(top->Y, u_int16_t(top->A + top->B));
}

// Test SUB
TEST_F(ValuTest, HandlesAluSUB)
{
  top->aluOp = ALUOp::SUB;
  top->eval();
  EXPECT_EQ(top->Y, u_int16_t(top->A - top->B));
}

// Test AND
TEST_F(ValuTest, HandlesAluAND)
{
  top->aluOp = ALUOp::AND;
  top->eval();
  EXPECT_EQ(top->Y, top->A & top->B);
}

// Test OR
TEST_F(ValuTest, HandlesAluOR)
{
  top->aluOp = ALUOp::OR;
  top->eval();
  EXPECT_EQ(top->Y, top->A | top->B);
}

// Test XOR
TEST_F(ValuTest, HandlesAluXOR)
{
  top->aluOp = ALUOp::XOR;
  top->eval();
  EXPECT_EQ(top->Y, top->A ^ top->B);
}

// Test NOT
TEST_F(ValuTest, HandlesAluNOT)
{
  top->aluOp = ALUOp::NOT;
  top->eval();
  EXPECT_EQ(top->Y, u_int16_t(~top->A));
}

// Test NEG
TEST_F(ValuTest, HandlesAluNEG)
{
  top->aluOp = ALUOp::NEG;
  top->eval();
  EXPECT_EQ(top->Y, u_int16_t(-top->A));
}

// Test LSL
TEST_F(ValuTest, HandlesAluLSL)
{
  top->aluOp = ALUOp::LSL;
  top->eval();
  EXPECT_EQ(top->Y, u_int16_t(top->A << 1));
}

// Test LSR
TEST_F(ValuTest, HandlesAluLSR)
{
  top->aluOp = ALUOp::LSR;
  top->eval();
  EXPECT_EQ(top->Y, top->A >> 1);
}

// Test ASR
TEST_F(ValuTest, HandlesAluASR)
{
  top->aluOp = ALUOp::ASR;
  top->eval();
  EXPECT_EQ(top->Y, u_int16_t(int16_t(top->A) >> 1));
}

// Test SWAP
TEST_F(ValuTest, HandlesAluSWAP)
{
  top->aluOp = ALUOp::SWAP;
  top->eval();
  EXPECT_EQ(top->Y, u_int16_t((top->A << 8) | (top->A >> 8)));
}

// Test SWAPN
TEST_F(ValuTest, HandlesAluSWAPN)
{
  top->aluOp = ALUOp::SWAPN;
  top->eval();
  EXPECT_EQ(top->Y, 0xABEB);
}

// Test MUL
TEST_F(ValuTest, HandlesAluMUL)
{
  top->aluOp = ALUOp::MUL;
  top->eval();
  EXPECT_EQ(top->Y, u_int16_t(top->A * top->B));
}

// Test Carry ADD
TEST_F(ValuTest, HandlesCarryADD)
{
  top->aluOp = ALUOp::ADD | 0x10;
  top->Ci = 0;
  top->A = 0xFFFF;
  top->B = 0x1;
  top->eval();
  EXPECT_EQ(top->Carry, 1);
  top->B = 0x0;
  top->eval();
  EXPECT_EQ(top->Carry, 0);

  top->Ci = 1;
  top->eval();
  EXPECT_EQ(top->Carry, 1);
}

// Test Carry SUB
TEST_F(ValuTest, HandlesCarrySUB)
{
  top->aluOp = ALUOp::SUB | 0x10;
  top->Ci = 0;
  top->A = 0x0;
  top->B = 0x1;
  top->eval();
  EXPECT_EQ(top->Carry, 1);
  top->B = 0x0;
  top->eval();
  EXPECT_EQ(top->Carry, 0);

  top->Ci = 1;
  top->eval();
  EXPECT_EQ(top->Carry, 1);
}

// Test Carry LSL
TEST_F(ValuTest, HandlesCarryLSL)
{
  top->aluOp = ALUOp::LSL | 0x10;
  top->Ci = 0;
  top->A = 0xFFFF;
  top->eval();
  EXPECT_EQ(top->Carry, 1);
  EXPECT_EQ(top->Y & 0x1, 0);
  top->A = 0x7FFF;
  top->eval();
  EXPECT_EQ(top->Carry, 0);
  EXPECT_EQ(top->Y & 0x1, 0);

  top->Ci = 1;
  top->eval();
  EXPECT_EQ(top->Y & 0x1, 1);
}

// Test Carry LSR
TEST_F(ValuTest, HandlesCarryLSR)
{
  top->aluOp = ALUOp::LSR | 0x10;
  top->Ci = 0;
  top->A = 0x0;
  top->eval();
  EXPECT_EQ(top->Carry, 0);
  EXPECT_EQ(top->Y >> 15 & 0x1, 0);
  top->A = 0xFFFF;
  top->eval();
  EXPECT_EQ(top->Carry, 1);
  EXPECT_EQ(top->Y >> 15 & 0x1, 0);

  top->Ci = 1;
  top->eval();
  EXPECT_EQ(top->Y >> 15 & 0x1, 1);
}

// Test Zero Flag
TEST_F(ValuTest, HandlesZeroFlag)
{
  top->aluOp = ALUOp::B;
  top->B = 0x0;
  top->eval();
  EXPECT_EQ(top->Zero, 1);
  top->aluOp = ALUOp::SUB;
  top->A = 0x10;
  top->B = 0x10;
  top->eval();
  EXPECT_EQ(top->Zero, 1);
  top->B = 0x1;
  top->eval();
  EXPECT_EQ(top->Zero, 0);
}

// Test Neg Flag
TEST_F(ValuTest, HandlesNegFlag)
{
  top->aluOp = ALUOp::B;
  top->B = 0x0;
  top->eval();
  EXPECT_EQ(top->Neg, 0);
  top->B = 0xFFFF;
  top->eval();
  EXPECT_EQ(top->Neg, 1);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
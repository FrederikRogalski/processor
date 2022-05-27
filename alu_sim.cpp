#include "Valu.h"
#include "verilated.h"

int main(int argc, char **argv, char **env)
{
  Verilated::commandArgs(argc, argv);
  Valu *top = new Valu;
  top->A = 0xFFFF;
  top->B = 0xFFFF;
  std::map<int, std::string> mappings = {{0, "B"},
                                         {1, "SUM"},
                                         {2, "SUB"},
                                         {3, "AND"},
                                         {4, "OR"},
                                         {5, "XOR"},
                                         {6, "NOT"},
                                         {7, "NEG"},
                                         {8, "LSL"},
                                         {9, "LSR"},
                                         {10, "ASR"},
                                         {11, "SWAP"},
                                         {12, "SWAPN"},
                                         {13, "MUL"}};
  for (int i = 0; i < 14; i++)
  {
    top->aluOp = i;
    top->eval();
    printf("aluOp: %5s A: %d B: %d Carry: %d Y: %6d, Yhex: %#06x\n", mappings[top->aluOp].c_str(), top->A, top->B, top->Carry, (int16_t)top->Y, top->Y);
  }
  delete top;
  return (0);
}
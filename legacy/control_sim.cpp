#include "Vcontrol.h"
#include "verilated.h"

int main(int argc, char **argv, char **env)
{
  Verilated::commandArgs(argc, argv);
  Vcontrol *top = new Vcontrol;
  for (int i = 0; i < std::pow(2, 8); i++)
  {
    top->op_code = i;
    top->eval();
    printf("Control @ %3d: ", i);
    printf("%-5s", top->stPC ? "stPC" : "");
    printf("%-5s", top->WE ? "WE" : "");
    printf("%-5s", top->imm ? "imm" : "");
    printf("%-5s", top->iem ? "iem" : "");
    printf("%-5s", top->absJmp ? "absJmp" : "");
    printf("%-5s", top->muxB ? "muxB" : "");
    printf("%-5s", top->src2D ? "src2D" : "");
    printf("%-5s", top->muxA ? "muxA" : "");
    printf("%-5s", top->alu2D ? "alu2D" : "");
    printf("%-5s", top->aluOp ? "aluOp" : "");
    printf("%-11s", top->storeFlags ? "storeFlags" : "");
    printf("%-5s", top->branch ? "branch" : "");
    printf("%-5s", top->ramSt ? "ramSt" : "");
    printf("%-5s", top->ramLd ? "ramLd" : "");
    printf("%-5s", top->ioW ? "ioW" : "");
    printf("%-5s", top->ioR ? "ioR" : "");
    printf("%-5s", top->Retl ? "Retl" : "");
    printf("\n");
  }
  delete top;
  return (0);
}
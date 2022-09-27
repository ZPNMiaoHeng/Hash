#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
 
#include "Vtop.h"  // create `top.v`,so use `Vtop.h`
#include "verilated.h"
 
#include "verilated_vcd_c.h" //可选，如果要导出vcd则需要加上
 
int main(int argc, char** argv, char** env) {
 
  VerilatedContext* contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);
  Vtop* top = new Vtop{contextp};
  
 
  VerilatedVcdC* tfp = new VerilatedVcdC; //初始化VCD对象指针
  contextp->traceEverOn(true); //打开追踪功能
  top->trace(tfp, 0); //
  tfp->open("./build/wave.vcd"); //设置输出的文件wave.vcd
 
 
  while (!contextp->gotFinish()) {
    int a = rand() & 1;
    int b = rand() & 1;
    int c = rand() & 1;
    int d = rand() & 1;
    top->a = a;
    top->b = b;
    top->c = c;
    top->d = d;
    top->eval();
    printf("a = %d, b = %d, c = %d, d = %d, f = %d\n", a, b, c, d, top->f);
 
    tfp->dump(contextp->time()); //dump wave
    contextp->timeInc(1); //推动仿真时间
 
    assert(top->f == ~((a&b) | (~(c&d))));
  }
  delete top;
  tfp->close();
  delete contextp;
  return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vsha1_con.h"  // create `top.v`,so use `Vtop.h`
#include "verilated.h"
#include "verilated_vcd_c.h" //可选，如果要导出vcd则需要加上

void sim_init();

int main(int argc, char *argv[]) {
    sim_init();

    while (!contextp->gotFinish()) {
      contextp->timeInc(1);
      if (contextp->time() > 10) {
        top->rst_n = 1;   // Deassert reset
      }
      if (contextp->time() % 20 == 0) {
        top->clk = !top->clk;       // Toggle clock
      }

      if (contextp->time() >= 60) {
        top->valid = 1;
      }

      top->eval();            // Evaluate model
      printf("cpp_test!\n");

      tfp->dump(contextp->time()); //dump wave
    }
  delete top;
  tfp->close();
  delete contextp;
  return 0;
}

void sim_init(){                      // 初始化状态
    printf("sim_init\n"); 
    contextp = new VerilatedContext;
    tfp = new VerilatedVcdC;
    top = new Vsha1_con;
    contextp->traceEverOn(true);
    top->trace(tfp, 0);
    tfp->open("../build/dump.vcd");

    top->rst_n = 0;                   // 复位信号
    top->clk   = 0;
}

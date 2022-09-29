#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "Vsha1_top.h"                                          //! create `top.v`,so use `Vtop.h`
#include "verilated.h"
#include "verilated_vcd_c.h"                                     // Add vcd

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
static Vsha1_top* top;                                          //!

void sim_init();
void sim_main(int endTime);
void sim_end();

int main(int argc, char *argv[]) {
  sim_init();
  sim_main(2000);
  sim_end();
  
  return 0;
}

void sim_init(){
    printf("sim_init\n"); 
    contextp = new VerilatedContext;
    top = new Vsha1_top{contextp};                               //!
    
    tfp = new VerilatedVcdC;
    contextp->traceEverOn(true);
    top->trace(tfp, 0);
    tfp->open("./build/dump.vcd");

    top->rst_n = 0;                                                // init signals
    top->clk   = 0;
    top->valid = 0;
//    top->t = 0;
    top->din[0] = 0;
}


void data_set() {
  if (contextp->time() == 40) {                             // control signals
    top->rst_n = 1;
  }
  if (contextp->time() >= 60) {                             // control signals
    top->valid = 1;
    top->din[0] = 0x18;
    top->din[15] = 0x61626380;
//    top->din[15] = 0x31800000;
//    top->din[0] = 0x8;
  }
}

void sim_main(int endTime) {
  uint a[5]= {0,0,0,0,1};
  while (!contextp->gotFinish()) {
      if (contextp->time() > 20) { top->rst_n = 1; }            // Deassert reset
      if (contextp->time() % 10 == 0) { top->clk = !top->clk; } // Toggle clock
      data_set();

      top->eval();                                              // Evaluate model
      tfp->dump(contextp->time());                              //dump wave
      contextp->timeInc(1);

      if(contextp->time() == endTime) { break; }                  // 500 clock cycles end
    }
}

void sim_end() {
  delete top;
  tfp->close();
  delete contextp;
}


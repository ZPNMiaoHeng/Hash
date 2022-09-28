#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "Vsha1_con.h"                                          // create `top.v`,so use `Vtop.h`
#include "verilated.h"
#include "verilated_vcd_c.h"                                    // Add vcd

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
static Vsha1_con* top;

void sim_init();
void sim_main(int endTime);
void sim_end();

int main(int argc, char *argv[]) {
  sim_init();
  sim_main(10000);
  sim_end();
  
  return 0;
}

void sim_init(){
    printf("sim_init\n"); 
    contextp = new VerilatedContext;
    top = new Vsha1_con{contextp};
    
    tfp = new VerilatedVcdC;
    contextp->traceEverOn(true);
    top->trace(tfp, 0);
    tfp->open("./build/dump.vcd");

    top->rst_n = 0;                                                // init signals
    top->clk   = 0;
    top->valid = 1;
}

void sim_main(int endTime) {
  while (!contextp->gotFinish()) {
      if (contextp->time() > 20) { top->rst_n = 1; }            // Deassert reset
      if (contextp->time() % 10 == 0) { top->clk = !top->clk; } // Toggle clock
      if (contextp->time() >= 60) {                             // control signals
        top->valid = 1;
      }

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


#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"
#include "Vsinegen.h"

#define MAX_SIM_CYC 1000000
#define ADDRESS_WIDTH 8
#define ROM_SZ 256

int main(int argc, char **argv, char **env){
    int simcyc;
    int tick;
    
    Verilated::commandArgs(argc,argv);
    //init top verilog instance
    Vsinegen* top = new Vsinegen;
    //init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp,99);
    tfp->open("sinegen.vcd");

    //init Vbuddy
    if(vbdOpen()!=1) return(-1);
    vbdHeader("L2T1: Siu");
    //vbdSetMode(0);

    //initialize simulation inputs
    top->clk = 1;
    top->rst = 0;
    top->en = 1;
    top->incr = 1;

    //run simultion for MZX_SIM_CYC vlovk vyvlrd
    for(simcyc=0;simcyc<MAX_SIM_CYC; simcyc++){
        //dump variables into VCD file and toggle clock
        for(tick=0;tick<2;tick++){
            tfp->dump(2*simcyc+tick);
            if(tick==1) top->clk = !top->clk;
            top->eval();
        }
        top->incr = vbdValue()+1;
        //plot ROM output and print Cycle count
        vbdPlot(int(top->dout),0,255);
        vbdCycle(simcyc);
        //either simulation finished or q is pressed
        if ((Verilated::gotFinish()) || (vbdGetkey()=='q')) 
            exit(0);                // ... exit if finish OR 'q' pressed
  }
    vbdClose();
    tfp->close();
    exit(0);
}
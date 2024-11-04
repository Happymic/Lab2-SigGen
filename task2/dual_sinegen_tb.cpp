#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"
#include "Vdual_sinegen.h"

#define MAX_SIM_CYC 1000000

int main(int argc, char **argv, char **env) {
    int simcyc;
    int tick;
    int phase_adjust = 0;
    
    Verilated::commandArgs(argc, argv);
    Vdual_sinegen* top = new Vdual_sinegen;
    
    // Init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("dual_sinegen.vcd");
    
    // Init Vbuddy
    if (vbdOpen()!=1) return(-1);
    vbdHeader("Dual Sine");
    
    // Initialize simulation inputs
    top->clk = 1;
    top->rst = 0;
    top->en = 1;
    top->incr = 1;    // Fixed frequency for now
    top->phase = 0;   // Initial phase difference
    
    // Run simulation
    for (simcyc=0; simcyc<MAX_SIM_CYC; simcyc++) {
        // Clock toggle and evaluation
        for (tick=0; tick<2; tick++) {
            tfp->dump(2*simcyc+tick);
            top->clk = !top->clk;
            top->eval();
        }
        
        // Read phase control from Vbuddy
        phase_adjust = vbdValue();
        top->phase = phase_adjust;
        
        // Plot both waveforms
        vbdPlot(int(top->dout1), 0, 255);  // First sine wave
        vbdPlot(int(top->dout2), 0, 255);  // Second sine wave (phase shifted)
        
        vbdCycle(simcyc);
        
        // Check for quit
        if ((Verilated::gotFinish()) || (vbdGetkey()=='q')) 
            break;
    }
    
    vbdClose();
    tfp->close();
    exit(0);
}
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vsigdelay.h"
#include "vbuddy.cpp"

#define MAX_SIM_CYC 1000000
#define RAM_SZ 512

int main(int argc, char **argv, char **env) {
    int simcyc;
    int tick;
    
    Verilated::commandArgs(argc, argv);
    Vsigdelay* top = new Vsigdelay;
    
    // Init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("sigdelay.vcd");
    
    // Init Vbuddy
    if (vbdOpen()!=1) return(-1);
    vbdHeader("Audio Delay");
    
    // Initialize microphone input
    vbdInitMicIn(RAM_SZ);
    
    // Initialize simulation inputs
    top->clk = 1;
    top->rst = 0;
    top->en = 1;
    top->delay = 0;
    
    // Run simulation
    for (simcyc=0; simcyc<MAX_SIM_CYC; simcyc++) {
        // Clock toggle and evaluation
        for (tick=0; tick<2; tick++) {
            tfp->dump(2*simcyc+tick);
            top->clk = !top->clk;
            top->eval();
        }
        
        // Get next audio sample from microphone
        top->mic_in = vbdMicValue();
        
        // Read delay amount from rotary encoder
        top->delay = vbdValue();
        
        // Plot both original and delayed signals
        vbdPlot(int(top->original), 0, 255);   // Original signal in one color
        vbdPlot(int(top->delayed), 0, 255);    // Delayed signal in another color
        
        vbdCycle(simcyc);
        
        // Check for quit
        if ((Verilated::gotFinish()) || (vbdGetkey()=='q')) 
            break;
    }
    
    vbdClose();
    tfp->close();
    exit(0);
}
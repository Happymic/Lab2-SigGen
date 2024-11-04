// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vdual_sinegen__pch.h"
#include "Vdual_sinegen.h"
#include "Vdual_sinegen___024root.h"

// FUNCTIONS
Vdual_sinegen__Syms::~Vdual_sinegen__Syms()
{
}

Vdual_sinegen__Syms::Vdual_sinegen__Syms(VerilatedContext* contextp, const char* namep, Vdual_sinegen* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(39);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}

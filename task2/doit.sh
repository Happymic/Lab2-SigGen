#!/bin/sh

# cleanup
rm -rf obj_dir
rm -f sinegen.vcd

verilator -Wall --cc --trace dual_sinegen.sv counter.sv dual_rom.sv --exe dual_sinegen_tb.cpp
make -j -C obj_dir/ -f Vdual_sinegen.mk Vdual_sinegen
obj_dir/Vdual_sinegen
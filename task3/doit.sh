verilator -Wall --cc --trace sigdelay.sv counter.sv dual_port_ram.sv --exe sigdelay_tb.cpp
make -j -C obj_dir/ -f Vsigdelay.mk Vsigdelay
obj_dir/Vsigdelay
SIM_CPP=csrc/*.cpp
SIM_V=vsrc/*.v
VERILATOR_FLAGS=--cc --exe --build --trace --top top -Wall
all:
	@echo "Write this Makefile by your self."

sim:
	rm -rf obj_dir wave.vcd wave.fst
	
	verilator $(VERILATOR_FLAGS) $(SIM_CPP) $(SIM_V)
	./obj_dir/Vtop
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
wave:
	gtkwave wave.vcd
clean:
	rm -rf obj_dir wave.vcd wave.fst
include ../Makefile

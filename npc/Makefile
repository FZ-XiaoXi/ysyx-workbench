TOPNAME=ysyxSoCFull

LD_PRELOAD ?=
LD_PRELOAD += $(gcc -print-file-name=libasan.so)
C_INC_PATH ?=
C_INC_PATH += csrc/
C_INC_PATH += csrc/include
C_INC_PATH += tools/capstone/repo/include
C_INC_PATH := $(abspath $(C_INC_PATH))

V_INC_PATH ?=
V_INC_PATH += $(NPC_HOME)/../ysyxSoC/perip/uart16550/rtl/
V_INC_PATH += $(NPC_HOME)/../ysyxSoC/perip/spi/rtl/
V_INC_PATH := $(abspath $(V_INC_PATH))



SIM_C := $(wildcard csrc/*.c* csrc/monitor/*.c* csrc/devices/*.c* csrc/utils/*.c*)
SIM_V := $(shell find vsrc/ -type f \( -name "*.v" -o -name "*.sv" \))
SIM_V += $(shell find $(NPC_HOME)/../ysyxSoC/perip/ -type f  -name "*.v" )
SIM_V += $(NPC_HOME)/../ysyxSoC/build/ysyxSoCFull.v

LIBCAPSTONE = tools/capstone/repo/libcapstone.so.5
DIFF_REF_PATH = $(NEMU_HOME)
DIFF_REF_SO = $(DIFF_REF_PATH)/riscv32-nemu-interpreter-so-ysyxsoc
ARGS_DIFF = --diff=$(DIFF_REF_SO)

C_INCFLAGS=$(addprefix -I, $(C_INC_PATH))
CXXFLAGS += $(C_INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\"" -g
LDFLAGS += -lreadline

V_INCFLAGS=$(addprefix -I, $(V_INC_PATH))
VERILATOR_FLAGS=--cc --autoflush --exe --build --trace --timescale "1ns/1ns" --no-timing $(V_INCFLAGS) --top-module $(TOPNAME) 

override ARGS ?=
override ARGS += $(ARGS_DIFF)
IMG ?=
ELF ?=

all:
#	@echo "Write this Makefile by your self."

sim: $(SIM_C) $(SIM_V) 
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator $(VERILATOR_FLAGS) --top-module $(TOPNAME) $^ $(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS))
	@echo "ARGS = $(ARGS)"
	@echo "ARGS_DIFF = $(ARGS_DIFF)"
	LD_PRELOAD="$(shell gcc -print-file-name=libasan.so)" ./obj_dir/V$(TOPNAME) $(ARGS) $(IMG) $(ELF)
#	@echo "Write this Makefile by your self."
wave:
	gtkwave wave.vcd

csrc/utils/disasm.c: $(LIBCAPSTONE)
$(LIBCAPSTONE):
	$(MAKE) -C tools/capstone

clean:
	rm -rf obj_dir npc-waveform.vcd wave.fst
include ~/ysyx-workbench/Makefile

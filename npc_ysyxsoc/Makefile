TOPNAME=ysyxSoCFull

include $(NVBOARD_HOME)/scripts/nvboard.mk

LD_PRELOAD ?=
LD_PRELOAD += $(gcc -print-file-name=libasan.so)
C_INC_PATH ?=
C_INC_PATH += csrc/
C_INC_PATH += csrc/include
C_INC_PATH += tools/capstone/repo/include
C_INC_PATH := $(abspath $(C_INC_PATH))
C_INC_PATH += $(NVBOARD_USR_INC)

V_INC_PATH ?=
V_INC_PATH += $(NPC_SOC_HOME)/../ysyxSoC/perip/uart16550/rtl/
V_INC_PATH += $(NPC_SOC_HOME)/../ysyxSoC/perip/spi/rtl/
V_INC_PATH += $(NPC_SOC_HOME)/vsrc/
V_INC_PATH := $(abspath $(V_INC_PATH))



SIM_C := $(wildcard csrc/*.c* csrc/monitor/*.c* csrc/devices/*.c* csrc/utils/*.c*)
# SIM_V := $(shell find vsrc/ -type f \( -name "*.v" -o -name "*.sv" \))
SIM_V := vsrc/ysyx_26010011.v
SIM_V += $(shell find $(NPC_SOC_HOME)/../ysyxSoC/perip/ -type f  -name "*.v" )
SIM_V += $(NPC_SOC_HOME)/../ysyxSoC/build/ysyxSoCFull.v

SRC_V := vsrc/vsrc/csr_defines.v
SRC_V += vsrc/vsrc/IFU.v
SRC_V += vsrc/vsrc/IDU.v
SRC_V += vsrc/vsrc/EXU.v
SRC_V += vsrc/vsrc/LSU.v
SRC_V += vsrc/vsrc/WBU.v
SRC_V += vsrc/vsrc/pipeline.v
SRC_V += vsrc/vsrc/REG.v
SRC_V += vsrc/vsrc/CPU.v
SRC_V += vsrc/vsrc/AXI4Arbiter.v
SRC_V += vsrc/vsrc/CLINT.v
SRC_V += vsrc/vsrc/BRIDGE.v

LIBCAPSTONE = tools/capstone/repo/libcapstone.so.5
DIFF_REF_PATH = $(NEMU_HOME)
DIFF_REF_SO = $(DIFF_REF_PATH)/riscv32-nemu-interpreter-so-ysyxsoc
ARGS_DIFF = --diff=$(DIFF_REF_SO)

C_INCFLAGS=$(addprefix -I, $(C_INC_PATH))
CXXFLAGS += $(C_INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\"" -g
LDFLAGS += -lreadline

V_INCFLAGS=$(addprefix -I, $(V_INC_PATH))
VERILATOR_FLAGS=--cc --autoflush --exe --build -O3 --trace --timescale "1ns/1ns" --no-timing $(V_INCFLAGS) --top-module $(TOPNAME) +define+USE_VERILATOR=1

override ARGS ?=
override ARGS += $(ARGS_DIFF)
IMG ?=
ELF ?=
NETLIST ?= /home/seaber/ysyx-workbench/yosys-sta/result/ysyx_26010011-800MHz/ysyx_26010011.v
NETLIST_CELLS ?= /home/seaber/ysyx-workbench/yosys-sta/pdk/nangate45/sim/cells.v


all:

concat: $(SRC_V)
	cat  $(SRC_V) > vsrc/ysyx_26010011.v
	sed -i 's#`include#//`include#' vsrc/ysyx_26010011.v

# vsrc/ysyx_26010011.v: FORCE
# 	$(MAKE) concat

sim: $(SIM_C) $(SIM_V) $(NVBOARD_ARCHIVE)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	$(MAKE) concat
	verilator $(VERILATOR_FLAGS) --top-module $(TOPNAME) $^ $(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS))
	@echo "ARGS = $(ARGS)"
	@echo "ARGS_DIFF = $(ARGS_DIFF)"
	env ASAN_OPTIONS=new_delete_type_mismatch=0:detect_leaks=0 LD_PRELOAD="$(shell gcc -print-file-name=libasan.so)" ./obj_dir/V$(TOPNAME) $(ARGS) $(IMG) $(ELF)
#	@echo "Write this Makefile by your self."
wave:
	gtkwave wave.vcd

csrc/utils/disasm.c: $(LIBCAPSTONE)
$(LIBCAPSTONE):
	$(MAKE) -C tools/capstone

perf:
	@echo "[perf] start: $$(date '+%F %T')"; \
	start=$$(date +%s); \
	$(MAKE) -C $(NPC_SOC_HOME)/../am-kernels/benchmarks/microbench/ run ARCH=riscv32e-ysyxsoc mainargs=train; \
	end=$$(date +%s); \
	echo "[perf] 用时: $$((end - start)) 秒"
	@echo "ysyx git commit: $(shell git log -1 --format="%H")"
	@echo "soc git commit: $(shell cd $(NPC_SOC_HOME)/../ysyxSoC && git log -1 --format="%H")"

perf-test:
	@echo "[perf] start: $$(date '+%F %T')"; \
	start=$$(date +%s); \
	$(MAKE) -C $(NPC_SOC_HOME)/../am-kernels/benchmarks/microbench/ run ARCH=riscv32e-ysyxsoc mainargs=test; \
	end=$$(date +%s); \
	echo "[perf] 用时: $$((end - start)) 秒"
	@echo "ysyx git commit: $(shell git log -1 --format="%H")"
	@echo "soc git commit: $(shell cd $(NPC_SOC_HOME)/../ysyxSoC && git log -1 --format="%H")"

clean:
	rm -rf obj_dir npc-waveform.vcd wave.fst



iv-netlist: concat
	iverilog -Wall -g2012 -o myCPU_iv_netlist -s CPUTop_tb vsrc/ysyx_26010011_tb.v vsrc/ysyx_26010011_netlist_wrap.v $(NETLIST) $(NETLIST_CELLS)
	vvp myCPU_iv_netlist

iv: concat
	iverilog -Wall -g2012 -o myCPU_iv -s CPUTop_tb vsrc/ysyx_26010011_tb.v vsrc/ysyx_26010011_dut.v vsrc/ysyx_26010011.v
	vvp myCPU_iv


include ~/ysyx-workbench/Makefile

.PHONY: all sim wave perf perf-test clean iv iv-netlist concat
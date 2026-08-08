AM_SRCS := riscv/ysyxsoc/start.S \
           riscv/ysyxsoc/trm.c \
           riscv/ysyxsoc/ioe.c \
           riscv/ysyxsoc/timer.c \
           riscv/ysyxsoc/input.c \
           riscv/ysyxsoc/cte.c \
           riscv/ysyxsoc/trap.S \
           platform/dummy/vme.c \
           platform/dummy/mpe.c

CFLAGS    += -fdata-sections -ffunction-sections
LDSCRIPTS += $(AM_HOME)/scripts/ysyxsoc.ld
LDFLAGS   += --defsym=_pmem_start=0x0f000000 --defsym=_entry_offset=0x0
LDFLAGS   += --gc-sections -e _start

MAINARGS_MAX_LEN = 64
MAINARGS_PLACEHOLDER = the_insert-arg_rule_in_Makefile_will_insert_mainargs_here
CFLAGS += -DMAINARGS_MAX_LEN=$(MAINARGS_MAX_LEN) -DMAINARGS_PLACEHOLDER=$(MAINARGS_PLACEHOLDER)
NPC_HOME = $(AM_HOME)/../npc
NPCFLAGS += -l $(shell dirname $(IMAGE).elf)/npc-log.txt
ifndef SDB
NPCFLAGS += -b
endif

insert-arg: image
	@python $(AM_HOME)/tools/insert-arg.py $(IMAGE).bin $(MAINARGS_MAX_LEN) $(MAINARGS_PLACEHOLDER) "$(mainargs)"

image: image-dep
	@$(OBJDUMP) -d -s -h $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S -j .text -j .rodata -j .data -O binary $(IMAGE).elf $(IMAGE).bin
	@echo + OBJCOPY "->" $(IMAGE)-data.bin
	@$(OBJCOPY) -S -j .data -O binary $(IMAGE).elf $(IMAGE)-data.bin

run: insert-arg
#   echo "TODO: add command here to run simulation"
	$(MAKE) -C $(NPC_HOME) sim ARGS="$(NPCFLAGS)" IMG=$(IMAGE).bin IMG_DATA=$(IMAGE)-data.bin ELF=$(IMAGE).elf

.PHONY: insert-arg

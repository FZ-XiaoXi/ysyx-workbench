# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VysyxSoCFull.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace-fst/--trace-saif/--trace-vcd)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing output mode in SAIF format?  0/1 (from --trace-saif)
VM_TRACE_SAIF = 0
# Tracing output mode in VCD format?  0/1 (from --trace-vcd)
VM_TRACE_VCD = 1

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
  VysyxSoCFull \
  VysyxSoCFull___024root__0 \
  VysyxSoCFull_ysyxSoCFull__0 \
  VysyxSoCFull___024unit__0 \
  VysyxSoCFull_ysyxSoCASIC__0 \
  VysyxSoCFull_ysyxSoCASIC__1 \
  VysyxSoCFull_ysyx_26010011__0 \
  VysyxSoCFull_uart_top_apb__0 \
  VysyxSoCFull_ysyx_26010011_IFU__0 \
  VysyxSoCFull_ysyx_26010011_IDU__0 \
  VysyxSoCFull_ysyx_26010011_LSU__0 \
  VysyxSoCFull_ysyx_26010011_REG__0 \
  VysyxSoCFull_uart_regs__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
  VysyxSoCFull__ConstPool_0 \
  VysyxSoCFull___024root__Slow \
  VysyxSoCFull___024root__0__Slow \
  VysyxSoCFull_ysyxSoCFull__Slow \
  VysyxSoCFull_ysyxSoCFull__0__Slow \
  VysyxSoCFull___024unit__Slow \
  VysyxSoCFull___024unit__0__Slow \
  VysyxSoCFull_ysyxSoCASIC__Slow \
  VysyxSoCFull_ysyxSoCASIC__0__Slow \
  VysyxSoCFull_CPU__Slow \
  VysyxSoCFull_CPU__0__Slow \
  VysyxSoCFull_APBUart16550__Slow \
  VysyxSoCFull_APBUart16550__0__Slow \
  VysyxSoCFull_ysyx_26010011__Slow \
  VysyxSoCFull_ysyx_26010011__0__Slow \
  VysyxSoCFull_uart_top_apb__Slow \
  VysyxSoCFull_uart_top_apb__0__Slow \
  VysyxSoCFull_ysyx_26010011_IFU__Slow \
  VysyxSoCFull_ysyx_26010011_IFU__0__Slow \
  VysyxSoCFull_ysyx_26010011_IDU__Slow \
  VysyxSoCFull_ysyx_26010011_IDU__0__Slow \
  VysyxSoCFull_ysyx_26010011_LSU__Slow \
  VysyxSoCFull_ysyx_26010011_LSU__0__Slow \
  VysyxSoCFull_ysyx_26010011_REG__Slow \
  VysyxSoCFull_ysyx_26010011_REG__0__Slow \
  VysyxSoCFull_uart_regs__Slow \
  VysyxSoCFull_uart_regs__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
  VysyxSoCFull__Dpi \
  VysyxSoCFull__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
  VysyxSoCFull__Syms \
  VysyxSoCFull__Trace__0__Slow \
  VysyxSoCFull__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
  verilated \
  verilated_dpi \
  verilated_vcd_c \
  verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \

# Verilated -*- Makefile -*-

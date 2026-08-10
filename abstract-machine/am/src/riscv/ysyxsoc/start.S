.section entry, "ax"
.globl _start
.type _start, @function

_start:
  mv s0, zero
  la sp, _stack_pointer

  la a0, _data_lma_start
  la a1, _data_vma_start
  la a2, _data_lma_size

_bootloader_data_loop:
  beqz a2, _bootloader_data_loop_end
  lb t0, 0(a0)
  sb t0, 0(a1)
  addi a0, a0, 1
  addi a1, a1, 1
  addi a2, a2, -1
  j _bootloader_data_loop

_bootloader_data_loop_end:
  la a0, _bss_lma_start
  la a1, _bss_vma_start
  la a2, _bss_lma_size

_bootloader_bss_loop:
  beqz a2, _bootloader_bss_loop_end
  lb t0, 0(a0)
  sb t0, 0(a1)
  addi a0, a0, 1
  addi a1, a1, 1
  addi a2, a2, -1
  j _bootloader_bss_loop

_bootloader_bss_loop_end:
  la a0, _text_lma_start
  la a1, _text_vma_start
  la a2, _text_lma_size

_bootloader_text_loop:
  beqz a2, _bootloader_text_loop_end
  lb t0, 0(a0)
  sb t0, 0(a1)
  addi a0, a0, 1
  addi a1, a1, 1
  addi a2, a2, -1
  j _bootloader_text_loop

_bootloader_text_loop_end:
  la a0, _rodata_lma_start
  la a1, _rodata_vma_start
  la a2, _rodata_lma_size

_bootloader_rodata_loop:
  beqz a2, _bootloader_rodata_loop_end
  lb t0, 0(a0)
  sb t0, 0(a1)
  addi a0, a0, 1
  addi a1, a1, 1
  addi a2, a2, -1
  j _bootloader_rodata_loop

_bootloader_rodata_loop_end:
  call _trm_init

.size _start, . - _start

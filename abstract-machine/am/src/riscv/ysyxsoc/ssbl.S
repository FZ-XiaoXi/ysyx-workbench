.section ssbl, "ax"
.globl _ssbl
.type _ssbl, @function

_ssbl:
  mv s0, zero
  la sp, _stack_pointer

  la a0, _data_lma_start
  la a1, _data_vma_start
  la a2, _data_lma_size

_bootloader_data_loop:
  beqz a2, _bootloader_data_loop_end
  lw t0, 0(a0)
  sw t0, 0(a1)
  addi a0, a0, 4
  addi a1, a1, 4
  addi a2, a2, -4
  j _bootloader_data_loop

_bootloader_data_loop_end:
  la a1, _bss_vma_start
  la a2, _bss_lma_size

_bootloader_bss_loop:
  beqz a2, _bootloader_bss_loop_end
  sw x0, 0(a1)
  addi a1, a1, 4
  addi a2, a2, -4
  j _bootloader_bss_loop

_bootloader_bss_loop_end:
  la t0, _trm_init
  li t1, 0x00008067
  li t2, 0x00000013
  sw t2, 0(t0)
  sw t2, 4(t0)
  sw t2, 8(t0)
  sw t2, 12(t0)
  sw t1, 16(t0)
  jalr x1, 0(t0)
  fence.i
  la a0, _text_lma_start
  la a1, _text_vma_start
  la a2, _text_lma_size

_bootloader_text_loop:
  beqz a2, _bootloader_text_loop_end
  lw t0, 0(a0)
  sw t0, 0(a1)
  addi a0, a0, 4
  addi a1, a1, 4
  addi a2, a2, -4
  j _bootloader_text_loop

_bootloader_text_loop_end:
  la a0, _rodata_lma_start
  la a1, _rodata_vma_start
  la a2, _rodata_lma_size

_bootloader_rodata_loop:
  beqz a2, _bootloader_rodata_loop_end
  lw t0, 0(a0)
  sw t0, 0(a1)
  addi a0, a0, 4
  addi a1, a1, 4
  addi a2, a2, -4
  j _bootloader_rodata_loop

_bootloader_rodata_loop_end:
  call _trm_init

.size _ssbl, . - _ssbl

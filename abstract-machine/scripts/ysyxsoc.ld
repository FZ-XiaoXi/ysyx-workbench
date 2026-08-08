ENTRY(_start)

MEMORY
{
  /* 指令空间：0x20000000 ~ 0x20000FFF (4KB) */
  mrom (rx)  : ORIGIN = 0x20000000, LENGTH = 4K
  /* 数据空间：0x0f000000 ~ 0x0f001FFF (8KB) */
  sram (rw)  : ORIGIN = 0x0f000000, LENGTH = 8K
}

SECTIONS
{
  .text : {
    *(entry)
    *(.text*)
  } > mrom

  .rodata : {
    *(.rodata*)
    *(.srodata*)
  } > mrom

  .data : {
    *(.data*)
    *(.sdata*)
  } > mrom

  .bss : {
    _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
  } > mrom

  . = ORIGIN(sram);
  _heap_start = .;
  . = _heap_start + 0x1000;
  _heap_end = .;
  _stack_top = .;
  _stack_pointer = . + 0x1000;
  . = _stack_pointer;
  end = .;
  _end = .;
  
  ASSERT(. <= ORIGIN(sram) + LENGTH(sram), "Error: sram overflow!")
  _sram_start = ORIGIN(sram);
  /DISCARD/ : { *(.comment) *(.note*) *(.eh_frame) }
}

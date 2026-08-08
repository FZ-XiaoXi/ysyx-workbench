ENTRY(_start)

MEMORY
{
  /* 指令空间：0x20000000 ~ 0x20000FFF (4KB) */
  mrom : ORIGIN = 0x20000000, LENGTH = 4K
  /* 数据空间：0x0f000000 ~ 0x0f001FFF (8KB) */
  sram : ORIGIN = 0x0f000000, LENGTH = 8K
}


SECTIONS
{
  . = ORIGIN(mrom);
  .text : {
    *(entry)
    *(.text*)
  } > mrom AT> mrom


  .rodata : {
    _rodata_vma_start = .;
    *(.rodata*)
    *(.srodata*)
    . = ALIGN(4);
    _rodata_vma_end = .;
  } > mrom AT> mrom
  _rodata_lma_start = LOADADDR(.rodata);
  _rodata_lma_end = _rodata_lma_start + SIZEOF(.rodata);



  .data : {
    _data_vma_start = .;
    *(.data*)
    *(.sdata*)
    . = ALIGN(4);
    _data_vma_end = .;
  } > sram AT> mrom
  _data_lma_start = LOADADDR(.data);
  _data_lma_end = _data_lma_start + SIZEOF(.data);

  .bss : {
    _bss_vma_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
    . = ALIGN(4);
    _bss_vma_end = .;
  } > sram AT>mrom
  _bss_lma_start = LOADADDR(.bss);
  _bss_lma_end = _bss_lma_start + SIZEOF(.bss);

  . = ORIGIN(sram);
  . = ALIGN(0x0100);

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

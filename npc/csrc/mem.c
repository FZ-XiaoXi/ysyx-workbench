#include "common.h"
#include "mem.h"
#include "devices.h"
#include "trace.h"


uint32_t MEM[CONFIG_SRAMSIZE>>2];
uint32_t MROM[CONFIG_MROMSIZE>>2];
uint32_t FLASH[CONFIG_FLASHSIZE>>2];
uint8_t PSRAM[CONFIG_PSRAMSIZE];
uint16_t SDRAM[CONFIG_SDRAMSIZE>>1];
int pmem_read(int raddr){
	if(check_sram_bound(raddr)){
		// 总是读取地址为`raddr & ~0x3u`的4字节返回
		mtrace(raddr, 0x0000, 0);
		return MEM(raddr);
	}else{
		uint32_t data;
		read_devices(raddr, &data);
		//Assert(read_devices(raddr, &data), "Out of bound ["FMT_WORD"] (read pmem)", raddr);
		return data;
	}
}

void pmem_write(int waddr, int wdata, char wmask) {
	if(check_sram_bound(waddr)){
		wmask=wmask<<(waddr&0x03);
		wdata=wdata<<(waddr&0x03)*8;
		uint32_t sdata = MEM(waddr);
		// `wmask`中每比特表示`wdata`中1个字节的掩码,
		// 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
		

		MEM(waddr)=(MEM(waddr)&0x00ffffff) | ((((wmask>>3)&0x1) ? ((wdata>>24)&0xff) : ((MEM(waddr)>>24)&0xff))<<24);
		MEM(waddr)=(MEM(waddr)&0xff00ffff) | ((((wmask>>2)&0x1) ? ((wdata>>16)&0xff) : ((MEM(waddr)>>16)&0xff))<<16);
		MEM(waddr)=(MEM(waddr)&0xffff00ff) | ((((wmask>>1)&0x1) ? ((wdata>> 8)&0xff) : ((MEM(waddr)>> 8)&0xff))<< 8);
		MEM(waddr)=(MEM(waddr)&0xffffff00) | ((((wmask>>0)&0x1) ? ((wdata>> 0)&0xff) : ((MEM(waddr)>> 0)&0xff))<< 0);
		mtrace(waddr, wmask, sdata);
	}else{
		write_devices(waddr, wdata);
		//Assert(write_devices(waddr, wdata), "Out of bound ["FMT_WORD"] (write pmem)", waddr);
	}	
}

bool check_sram_bound(uint32_t addr){
	if(addr >= CONFIG_SRAMBASE && addr < CONFIG_SRAMBASE + CONFIG_SRAMSIZE){
		return true;
	}else{
		return false;
	}
}
bool check_mrom_bound(uint32_t addr){
	if(addr >= CONFIG_MROMBASE && addr < CONFIG_MROMBASE + CONFIG_MROMSIZE){
		return true;
	}else{
		return false;
	}
}
// bool check_flash_bound(uint32_t addr){
// 	if(addr >= CONFIG_FLASHBASE && addr < CONFIG_FLASHBASE + CONFIG_FLASHSIZE){
// 		return true;
// 	}else{
// 		return false;
// 	}
// }

extern "C" void flash_read(int32_t addr, int32_t *data) {
	// Log("READ FLASH: addr = " FMT_WORD " val = " FMT_WORD, addr, FLASH(addr + CONFIG_FLASHBASE));
	*data = FLASH(addr + CONFIG_FLASHBASE);
}
extern "C" void mrom_read(int32_t addr, int32_t *data) {
	*data = MROM(addr);
}
extern void psram_read(int raddr, int count, int* rdata) {
	// Log("READ FLASH: addr = " FMT_WORD " val = " FMT_WORD, addr, FLASH(addr + CONFIG_FLASHBASE));
	// *data = FLASH(addr + CONFIG_FLASHBASE);
	*rdata = (int32_t)PSRAM((((uint32_t)raddr + (uint32_t)count)%1024)+((CONFIG_PSRAMBASE + raddr)& ~0x3ff));
}
extern void psram_write(int waddr, int count, int wdata){
	// Log("WRITE PSRAM: addr = " FMT_WORD " val = " FMT_WORD " count = " FMT_WORD, waddr, wdata, count);
	PSRAM((((uint32_t)waddr + (uint32_t)count)%1024)+((CONFIG_PSRAMBASE + waddr)& ~0x3ff)) = wdata & 0xff;
	// Log("WRITE FLASH: addr = " FMT_WORD " val = " FMT_WORD, addr, data);
	// FLASH(addr + CONFIG_FLASHBASE) = data;
}
extern void sdram_read(int raddr, int count, int* rdata) {
	// Log("READ FLASH: addr = " FMT_WORD " val = " FMT_WORD, addr, FLASH(addr + CONFIG_FLASHBASE));
	// *data = FLASH(addr + CONFIG_FLASHBASE);
	*rdata = (int32_t)SDRAM((uint32_t)raddr + CONFIG_SDRAMBASE + count*2);
}
extern void sdram_write(int waddr, int count, int wdata){
	uint8_t wenH = (wdata >> 31)&0x1;
	uint8_t wenL = (wdata >> 30)&0x1;
	uint16_t wda = wdata & 0xffff;
	uint16_t source = SDRAM((uint32_t)(waddr + CONFIG_SDRAMBASE + count*2));
	// Log("WRITE SDRAM: addr = " FMT_WORD " val = " FMT_WORD " count = " FMT_WORD " WH=%d WL=%d at pc = " FMT_WORD, waddr, wdata, count, wenH,wenL, cpu.pc);
	SDRAM((uint32_t)waddr + CONFIG_SDRAMBASE + count*2) = (0xff00 & (wenH?(wda):(source))) | (0x00ff & (wenL?(wda):(source))) ;
	// Log("WRITE PSRAM: addr = " FMT_WORD " val = " FMT_WORD " count = " FMT_WORD, waddr, wdata, count);
	// PSRAM((((uint32_t)waddr + (uint32_t)count)%1024)+((CONFIG_PSRAMBASE + waddr)& ~0x3ff)) = wdata & 0xff;
	// Log("WRITE FLASH: addr = " FMT_WORD " val = " FMT_WORD, addr, data);
	// FLASH(addr + CONFIG_FLASHBASE) = data;
}

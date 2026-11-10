#include <atmega328p/Memory.h>

namespace mcu = atmega328p;

static_assert(mcu::memory::flash_size_bytes == 32768UL, "Flash");
static_assert(mcu::memory::sram_size_bytes == 2048UL, "SRAM");
static_assert(mcu::memory::eeprom_size_bytes == 1024UL, "EEPROM");
static_assert(mcu::memory::ramend == 0x08FF, "SRAM end");

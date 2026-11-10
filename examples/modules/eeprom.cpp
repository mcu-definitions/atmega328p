#include <atmega328p/EEPROM.h>

namespace mcu = atmega328p;

constexpr mcu::eeprom::ProgrammingMode mode =
    mcu::eeprom::ProgrammingMode::EraseAndWrite;

static_assert(mcu::eeprom::page_size_bytes == 4, "EEPROM page size");
static_assert(mcu::eeprom::page_count == 256, "EEPROM page count");
static_assert(mcu::eeprom::eempe_to_eepe_max_cpu_cycles == 4,
              "Timed write sequence");

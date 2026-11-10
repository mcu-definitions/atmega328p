#include <atmega328p/ATmega328P.h>

namespace mcu = atmega328p;

static_assert(mcu::memory::flash_size_bytes == 32768UL, "Flash size");
static_assert(mcu::gpio::port_count == 3, "GPIO ports");

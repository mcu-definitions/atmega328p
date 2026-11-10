#include <atmega328p/RegisterMap.h>

namespace mcu = atmega328p;

static_assert(mcu::register_map::PORTB == 0x25, "PORTB address");
static_assert(mcu::register_map::TCCR1A == 0x80, "TCCR1A address");
static_assert(mcu::register_map::UDR0 == 0xC6, "UDR0 address");

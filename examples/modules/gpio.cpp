#include <atmega328p/GPIO.h>

namespace mcu = atmega328p;

static_assert(mcu::gpio::port_count == 3, "Three GPIO ports");
static_assert(mcu::gpio::port::b_width == 8, "Port B width");
static_assert(mcu::gpio::port::c_width == 7, "Port C width");
static_assert(mcu::gpio::has_internal_pullups == 1, "Internal pull-ups");

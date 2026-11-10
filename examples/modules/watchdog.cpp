#include <atmega328p/Watchdog.h>

namespace mcu = atmega328p;

constexpr mcu::watchdog::Timeout timeout =
    mcu::watchdog::Timeout::Ms1000;

static_assert(mcu::watchdog::oscillator_nominal_hz == 128000UL,
              "Watchdog oscillator");
static_assert(mcu::watchdog::timeout_count == 10, "Timeout options");

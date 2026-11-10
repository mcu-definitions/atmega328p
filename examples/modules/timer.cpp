#include <atmega328p/Timer.h>

namespace mcu = atmega328p;

constexpr mcu::timer::Id timer = mcu::timer::Id::Timer1;
constexpr mcu::timer::Timer01Prescaler divider =
    mcu::timer::Timer01Prescaler::Divide64;

static_assert(mcu::timer::timer1::counter_bits == 16, "Timer1 width");
static_assert(mcu::timer::timer2::supports_async_clock == 1, "Timer2 async mode");

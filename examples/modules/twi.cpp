#include <atmega328p/TWI.h>

namespace mcu = atmega328p;

constexpr mcu::twi::Prescaler divider = mcu::twi::Prescaler::Divide4;
constexpr mcu::twi::StatusCode start =
    mcu::twi::StatusCode::StartTransmitted;

static_assert(mcu::twi::standard_mode_max_hz == 100000UL, "Standard mode");
static_assert(mcu::twi::fast_mode_max_hz == 400000UL, "Fast mode");

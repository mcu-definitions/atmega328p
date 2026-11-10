#include <atmega328p/Clock.h>

namespace mcu = atmega328p;

constexpr mcu::clock::Source source =
    mcu::clock::Source::InternalCalibratedRC;
constexpr mcu::clock::Prescaler divider =
    mcu::clock::Prescaler::Divide8;

static_assert(mcu::clock::internal_calibrated_rc_hz == 8000000UL,
              "Internal RC nominal frequency");

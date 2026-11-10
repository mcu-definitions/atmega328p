#include <atmega328p/Power.h>

namespace mcu = atmega328p;

constexpr mcu::power::SleepMode mode =
    mcu::power::SleepMode::PowerDown;

static_assert(mcu::power::sleep_mode_count == 6, "Sleep modes");
static_assert(mcu::power::power_reduction_module_count == 7,
              "Power-reduction modules");

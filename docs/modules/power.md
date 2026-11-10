# Power.h

**Purpose:** Sleep modes and peripheral power-reduction bits.

Namespace: `atmega328p::power`

The device supports Idle, ADC Noise Reduction, Power-down, Power-save, Standby, and Extended Standby.

```cpp
#include <atmega328p/Power.h>

namespace mcu = atmega328p;

constexpr mcu::power::SleepMode mode =
    mcu::power::SleepMode::PowerDown;

static_assert(mcu::power::sleep_mode_count == 6, "Sleep modes");
static_assert(mcu::power::power_reduction_module_count == 7,
              "Power-reduction modules");
```

The `PowerReduction` values identify the PRR bits. This header does not enter sleep or disable peripherals.

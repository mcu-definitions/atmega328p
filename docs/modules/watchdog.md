# Watchdog.h

**Purpose:** Watchdog oscillator, timeout choices, and operating modes.

Namespace: `atmega328p::watchdog`

The watchdog uses a separate nominal 128 kHz oscillator. Timeout values range from 16 ms to 8 s and are approximate.

```cpp
#include <atmega328p/Watchdog.h>

namespace mcu = atmega328p;

constexpr mcu::watchdog::Timeout timeout =
    mcu::watchdog::Timeout::Ms1000;

static_assert(mcu::watchdog::oscillator_nominal_hz == 128000UL,
              "Watchdog oscillator");
static_assert(mcu::watchdog::timeout_count == 10, "Timeout options");
```

The always-on fuse and interrupt/reset modes are described by the module. A watchdog driver must handle the timed register sequence.

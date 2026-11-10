# Clock.h

**Purpose:** Clock sources, fuse encodings, startup information, and prescalers.

Namespace: `atmega328p::clock`

The source enum describes the external clock, crystal options, internal calibrated RC, and internal 128 kHz RC. `CKSELCode` and `SUTCode` describe fuse encodings. `Prescaler` describes the system clock divisors.

```cpp
#include <atmega328p/Clock.h>

namespace mcu = atmega328p;

constexpr mcu::clock::Source source =
    mcu::clock::Source::InternalCalibratedRC;
constexpr mcu::clock::Prescaler divider =
    mcu::clock::Prescaler::Divide8;

static_assert(mcu::clock::internal_calibrated_rc_hz == 8000000UL,
              "Internal RC nominal frequency");
```

The configured CPU frequency belongs in the consuming `MCUConfig.h`. This header describes available hardware choices; it does not change the clock.

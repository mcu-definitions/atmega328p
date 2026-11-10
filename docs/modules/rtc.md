# RTC.h

**Purpose:** Timer2 characteristics for RTC-style timekeeping.

Namespace: `atmega328p::rtc`

The ATmega328P has no separate dedicated RTC peripheral. Timekeeping can use Timer2 in asynchronous mode with a 32.768 kHz crystal on TOSC1 and TOSC2.

```cpp
#include <atmega328p/RTC.h>

namespace mcu = atmega328p;

static_assert(mcu::rtc::recommended_crystal_hz == 32768UL, "Watch crystal");
static_assert(mcu::rtc::uses_timer2 == 1, "Timer2 is used");
static_assert(mcu::rtc::requires_timer2_asynchronous_mode == 1,
              "Asynchronous Timer2 mode");
```

TOSC1/TOSC2 share pins with the main oscillator. See the clock restrictions in the datasheet.

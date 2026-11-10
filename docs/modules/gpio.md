# GPIO.h

**Purpose:** GPIO port widths, masks, pull-ups, and pin limitations.

Namespace: `atmega328p::gpio`

The device has ports B, C, and D. Port C exposes seven logical pins; ports B and D expose eight each.

```cpp
#include <atmega328p/GPIO.h>

namespace mcu = atmega328p;

static_assert(mcu::gpio::port_count == 3, "Three GPIO ports");
static_assert(mcu::gpio::port::b_width == 8, "Port B width");
static_assert(mcu::gpio::port::c_width == 7, "Port C width");
static_assert(mcu::gpio::has_internal_pullups == 1, "Internal pull-ups");
```

This is hardware metadata only. A GPIO library is responsible for configuring DDRx, PORTx, and PINx.

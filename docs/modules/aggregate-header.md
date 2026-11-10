# ATmega328P.h

**Purpose:** Includes the complete public definition set.

Use this header when a library needs several parts of the device description. For a smaller dependency, include only the required module header.

```cpp
#include <atmega328p/ATmega328P.h>

namespace mcu = atmega328p;

static_assert(mcu::memory::flash_size_bytes == 32768UL, "Flash size");
static_assert(mcu::gpio::port_count == 3, "GPIO ports");
```

The aggregate header does not initialize the MCU or access its registers.

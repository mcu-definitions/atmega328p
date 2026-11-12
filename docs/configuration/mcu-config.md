# MCUConfig.h

The consuming firmware owns this configuration. Define target-specific values before including the device headers.

```cpp
#ifndef MCU_CONFIG_H
#define MCU_CONFIG_H

#define MCU_PACKAGE_PDIP28
#define MCU_GRADE_INDUSTRIAL_85C
#define MCU_CLOCK_HZ 1000000UL

#include <atmega328p/ATmega328P.h>

namespace mcu = atmega328p;

#endif
```

| Setting | Purpose |
|---|---|
| `MCU_PACKAGE_PDIP28` | Physical package selection |
| `MCU_GRADE_INDUSTRIAL_85C` | Device operating grade |
| `MCU_CLOCK_HZ` | Expected CPU clock, supplied by the board |
| `namespace mcu = atmega328p` | Short alias for this device's definitions |

Fuse values may be provided as board-specific macros, but the library does not program them.

The default example represents a nominal 1 MHz CPU clock when the factory CKDIV8 setting is in effect. Confirm the oscillator, fuse values and clock on the actual board.

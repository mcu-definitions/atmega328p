# MCUConfig.h

`MCUConfig.h` belongs to the consuming firmware or operating-system project. It records which MCU is fitted to the board and the values selected for that board.

The definitions repository provides the available hardware facts. It does not choose the board configuration for the developer.

## Example

```cpp
#ifndef MCU_CONFIG_H
#define MCU_CONFIG_H

#define MCU_PACKAGE_PDIP28
#define MCU_GRADE_INDUSTRIAL_85C

#define MCU_CLOCK_HZ 1000000UL

#define MCU_FUSE_LOW 0x62
#define MCU_FUSE_HIGH 0xD9
#define MCU_FUSE_EXT 0xFF

#include <atmega328p/ATmega328P.h>

namespace mcu = atmega328p;

#endif
```

## What each value means

| Setting | Meaning |
|---|---|
| `MCU_PACKAGE_PDIP28` | Physical package fitted to the board |
| `MCU_GRADE_INDUSTRIAL_85C` | Ordering grade of the device |
| `MCU_CLOCK_HZ` | Expected CPU frequency immediately after reset |
| `MCU_FUSE_LOW` | Intended Low Fuse byte |
| `MCU_FUSE_HIGH` | Intended High Fuse byte |
| `MCU_FUSE_EXT` | Intended Extended Fuse byte |
| `namespace mcu = atmega328p` | Common namespace used by peripheral libraries |

The example uses the internal calibrated 8 MHz RC oscillator with CKDIV8 enabled, resulting in a nominal 1 MHz CPU clock after reset. The fuse bytes are the factory reference values. Check the actual oscillator circuit, ordering code, and desired boot/reset behavior before using them.

## Why the alias matters

The ATmega8A repository can use `namespace mcu = atmega8a;`. A common GPIO library can continue to use `mcu::gpio` without being rewritten for every MCU.

Only one MCU should be selected in a build. Keep the alias and configuration in one shared header.

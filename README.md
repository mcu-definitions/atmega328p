# atmega328p

A header-only C++11 library containing hardware definitions for the ATmega328P.

The library describes the device, package terminals, logical pins, memory, registers, peripherals, clock sources, interrupts, fuses, electrical limits, and errata.

It contains definitions only. It does not provide peripheral drivers, register access, initialization, or programmer integration.

## Include

```cpp
#include <atmega328p/ATmega328P.h>
```

For a smaller dependency, include only the required module:

```cpp
#include <atmega328p/Pin.h>
#include <atmega328p/GPIO.h>
#include <atmega328p/Memory.h>
```

## MCUConfig.h

The consuming project selects its package and operating grade and records its clock and fuse values:

```cpp
#define MCU_PACKAGE_PDIP28
#define MCU_GRADE_INDUSTRIAL_85C

#define MCU_CLOCK_HZ 1000000UL

#define MCU_FUSE_LOW 0x62
#define MCU_FUSE_HIGH 0xD9
#define MCU_FUSE_EXT 0xFF

#include <atmega328p/ATmega328P.h>

namespace mcu = atmega328p;
```

This is a reference example. Verify the physical device and board configuration before using the values.

## Common MCU interface

Peripheral libraries should use the `mcu` alias:

```cpp
mcu::gpio::port_count
mcu::timer::timer_count
mcu::pwm::channel_count
mcu::memory::flash_size_bytes
```

Other MCU definition repositories should follow the same namespace and member naming conventions. Their configuration header changes the alias, not the common peripheral library.

## Features

- C++11
- Header-only
- No STL or Arduino dependency
- No runtime implementation
- Device and feature macros use the common `MCU_*` prefix
- C++ namespaces and constants are the primary API
- Doxygen comments in public headers
- Compile-only tests and usage examples

## Documentation

Start with [Getting started](docs/getting-started.md), then see the [namespace map](docs/namespaces.md), [MCU configuration](docs/configuration/mcu-config.md), and [module reference](docs/index.md).

## Doxygen

Run `doxygen Doxyfile` at the repository root. Open `docs/doxygen/html/index.html`. Generated output is ignored by Git.

## Validation

Run `tests/run_tests.sh` on Linux/macOS or `tests/run_tests.bat` on Windows with `g++` available in `PATH`.

## Scope

The library does not integrate with AVR-GCC, AVRDUDE, an IDE, or a programmer. It provides the definitions that consuming firmware and peripheral libraries can use.

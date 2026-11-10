# Getting started

## Include the definitions

Add the repository's `include` directory to the compiler include path, then include the aggregate header:

```cpp
#include <atmega328p/ATmega328P.h>
```

For a smaller dependency, include only the required module header.

## Create MCUConfig.h

Keep the selected MCU and board-specific values in one configuration header owned by the consuming firmware:

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

This is an example configuration. Confirm the package, ordering grade, oscillator, clock frequency, and fuse bytes for the actual board.

## Use the common MCU alias

The `mcu` alias gives peripheral libraries a consistent way to access the selected device:

```cpp
#include "MCUConfig.h"

constexpr auto led = mcu::pin::Pin::PB5;
constexpr auto pwm = mcu::pwm::Channel::OC1A;

static_assert(mcu::gpio::port_count == 3, "GPIO ports");
static_assert(mcu::memory::flash_size_bytes == 32768UL, "Flash size");
```

For another device, the configuration header includes that device's definitions and changes the alias:

```cpp
namespace mcu = atmega8a;
```

A common peripheral library can keep using `mcu::gpio`, `mcu::timer`, `mcu::pwm`, and the other agreed namespaces.

## Compile-time checks

The `tests` directory contains compile-only tests for the public headers, package selections, grade selections, and invalid configurations. Run `tests/run_tests.sh` with a C++11 compiler on Linux or macOS, or `tests/run_tests.bat` on Windows with `g++` in `PATH`.

This repository does not configure the build system, program fuses, or upload firmware.

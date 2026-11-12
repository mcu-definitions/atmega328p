# Getting started

## Include

Add `include/` to the compiler's include path and import the aggregate header or the specific modules you need.

```cpp
#define MCU_PACKAGE_PDIP28
#define MCU_GRADE_INDUSTRIAL_85C
#define MCU_CLOCK_HZ 1000000UL

#include <atmega328p/ATmega328P.h>

namespace mcu = atmega328p;
```

The definitions use C++11 and do not require a runtime library.

## Read hardware metadata

```cpp
constexpr auto ports = mcu::gpio::port_count;
constexpr auto flash = mcu::memory::flash_size_bytes;
constexpr auto pin = mcu::pin::Pin::PB5;
constexpr auto port_b_input = mcu::gpio::port::b_input_register;
```

`pin::Pin` identifies a logical MCU signal, not a board connector or package terminal. Register addresses are data-space addresses, not references to volatile registers.

## Configuration

Define the target package, operating grade and board clock before including the device headers. Fuse values are board-specific and should only be supplied when known.

See [MCUConfig.h](configuration/mcu-config.md) and the [Module reference](index.md).

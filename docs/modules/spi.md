# SPI.h

**Purpose:** SPI modes, roles, bit order, and clock divisors.

Namespace: `atmega328p::spi`

The dedicated SPI peripheral supports master and slave operation, full duplex, both bit orders, and double-speed operation.

```cpp
#include <atmega328p/SPI.h>

namespace mcu = atmega328p;

constexpr mcu::spi::Mode mode = mcu::spi::Mode::Mode0;
constexpr mcu::spi::Role role = mcu::spi::Role::Master;
constexpr mcu::spi::ClockDivider divider = mcu::spi::ClockDivider::Divide16;

static_assert(mcu::spi::module_count == 1, "Dedicated SPI module");
```

USART0 can also operate in Master SPI mode; it is not a second dedicated SPI controller.

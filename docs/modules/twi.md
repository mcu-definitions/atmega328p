# TWI.h

**Purpose:** Two-wire interface status codes, prescalers, and bus limits.

Namespace: `atmega328p::twi`

The TWI module supports master and slave operation, multi-master arbitration, and general call. It uses 7-bit addressing.

```cpp
#include <atmega328p/TWI.h>

namespace mcu = atmega328p;

constexpr mcu::twi::Prescaler divider = mcu::twi::Prescaler::Divide4;
constexpr mcu::twi::StatusCode start =
    mcu::twi::StatusCode::StartTransmitted;

static_assert(mcu::twi::standard_mode_max_hz == 100000UL, "Standard mode");
static_assert(mcu::twi::fast_mode_max_hz == 400000UL, "Fast mode");
```

Slave operation has additional CPU-clock requirements. The header describes those limits but does not implement bus transactions.

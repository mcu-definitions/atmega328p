# RegisterMap.h

**Purpose:** Data-space addresses of the ATmega328P registers.

Namespace: `atmega328p::register_map`

Register names are available as integer constants, so normal code does not need a cast.

```cpp
#include <atmega328p/RegisterMap.h>

namespace mcu = atmega328p;

static_assert(mcu::register_map::PORTB == 0x25, "PORTB address");
static_assert(mcu::register_map::TCCR1A == 0x80, "TCCR1A address");
static_assert(mcu::register_map::UDR0 == 0xC6, "UDR0 address");
```

Addresses are in the AVR data-space map. This header does not declare volatile register objects or replace the compiler's device header.

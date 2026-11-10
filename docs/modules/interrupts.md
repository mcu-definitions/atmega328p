# Interrupts.h

**Purpose:** Interrupt sources, vector numbers, and vector word addresses.

Namespace: `atmega328p::interrupts`

The vector table contains 26 slots, including Reset, followed by 25 interrupt sources.

```cpp
#include <atmega328p/Interrupts.h>

namespace mcu = atmega328p;

constexpr mcu::interrupts::Vector vector =
    mcu::interrupts::Vector::INT0;
constexpr mcu::interrupts::WordAddress address =
    mcu::interrupts::WordAddress::INT0;

static_assert(mcu::interrupts::vector_count == 26, "Vector count");
```

This header describes vector positions only. It does not declare ISR functions or move the vector table.

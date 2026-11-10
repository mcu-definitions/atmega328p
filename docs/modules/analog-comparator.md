# AnalogComparator.h

**Purpose:** Analog comparator input and interrupt definitions.

Namespace: `atmega328p::analog_comparator`

The header describes comparator input pins, interrupt modes, internal bandgap support, and the ADC multiplexer interaction.

```cpp
#include <atmega328p/AnalogComparator.h>

namespace mcu = atmega328p;

constexpr mcu::analog_comparator::InterruptMode trigger =
    mcu::analog_comparator::InterruptMode::RisingEdge;

static_assert(mcu::analog_comparator::count == 1, "One comparator");
```

The ADC multiplexer path has configuration restrictions. Follow the datasheet before enabling that path.

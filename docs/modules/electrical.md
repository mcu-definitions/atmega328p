# Electrical.h

**Purpose:** Absolute maximum ratings, operating grades, current limits, and pull-up ranges.

Namespace: `atmega328p::electrical`

Operating-grade data is grouped by profile. `electrical::selected` refers to the grade selected before including the library.

```cpp
#define MCU_GRADE_INDUSTRIAL_85C
#include <atmega328p/Electrical.h>

namespace mcu = atmega328p;

static_assert(mcu::electrical::selected::min_voltage_mv == 1800,
              "Industrial minimum voltage");
static_assert(mcu::electrical::selected::max_temperature_c == 85,
              "Industrial temperature limit");
```

Absolute maximum ratings are stress limits, not design targets. Observe per-pin, per-port, and aggregate current limits.

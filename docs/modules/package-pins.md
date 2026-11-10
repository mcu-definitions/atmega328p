# PackagePins.h

**Purpose:** Physical terminal numbers for each package.

Namespace: `atmega328p::package`

Each package has a `Terminal` enum. The enum values are terminal numbers, so they can be used directly without `static_cast`.

```cpp
#define MCU_PACKAGE_PDIP28
#include <atmega328p/PackagePins.h>

namespace mcu = atmega328p;

static_assert(mcu::package::pdip28::PB5 == 19, "PDIP-28 PB5");
static_assert(mcu::package::pdip28::PC6 == 1, "PDIP-28 PC6");
```

For code that uses the selected package, use `mcu::package::selected::PB5`.

Logical pin identifiers in `Pin.h` are independent of physical package terminals. ADC6 and ADC7 are bonded out only in the 32-terminal packages.

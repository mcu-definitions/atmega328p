# DebugWire.h

**Purpose:** debugWIRE pin and fuse characteristics.

Namespace: `atmega328p::debugwire`

debugWIRE shares the external RESET pin and is controlled by the DWEN fuse.

```cpp
#include <atmega328p/DebugWire.h>

namespace mcu = atmega328p;

static_assert(mcu::debugwire::data_reset_pin_value == 0x16,
              "debugWIRE uses PC6/RESET");
static_assert(mcu::debugwire::enabled_by_dwen_fuse == 1, "DWEN fuse");
```

Changing DWEN affects normal reset/debug behavior and should be planned with the available recovery method.

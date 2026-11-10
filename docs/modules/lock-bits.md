# LockBits.h

**Purpose:** Flash and boot lock-bit masks.

Namespace: `atmega328p::lock_bits`

The header names LB1, LB2, BLB01, BLB02, BLB11, and BLB12, and provides the default lock-bit byte.

```cpp
#include <atmega328p/LockBits.h>

namespace mcu = atmega328p;

static_assert(mcu::lock_bits::count == 6, "Lock-bit count");
static_assert(mcu::lock_bits::default_value == 0xFF, "Default lock byte");
```

Lock bits can restrict access to Flash and boot sections. Chip Erase restores them.

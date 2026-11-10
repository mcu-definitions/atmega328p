# Reset.h

**Purpose:** Reset causes and brown-out fuse characteristics.

Namespace: `atmega328p::reset`

The header identifies power-on, external, brown-out, and watchdog reset sources. It also describes the BODLEVEL fuse encodings and documented voltage references.

```cpp
#include <atmega328p/Reset.h>

namespace mcu = atmega328p;

constexpr mcu::reset::BrownOutFuseCode bod =
    mcu::reset::BrownOutFuseCode::Code100;

static_assert(mcu::reset::has_brown_out_reset == 1, "Brown-out reset");
```

Typical voltage values are not guaranteed limits. The meaning of code `110` differs between the family and automotive documentation.

# QTouch.h

**Purpose:** QTouch software-support characteristics.

Namespace: `atmega328p::qtouch`

The device can be used with QTouch software, but has no dedicated QTouch hardware peripheral. Acquisition uses general-purpose I/O.

```cpp
#include <atmega328p/QTouch.h>

namespace mcu = atmega328p;

static_assert(mcu::qtouch::supported == 1, "QTouch software support");
static_assert(mcu::qtouch::has_dedicated_hardware == 0,
              "No dedicated QTouch peripheral");
```

This header does not implement capacitive-touch acquisition or processing.

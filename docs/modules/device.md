# Device.h

**Purpose:** Device signature and resource counts.

Namespace: `atmega328p::device`

```cpp
#include <atmega328p/Device.h>

namespace mcu = atmega328p;

static_assert(mcu::device::signature_byte_0 == 0x1E, "Signature byte 0");
static_assert(mcu::device::signature_byte_1 == 0x95, "Signature byte 1");
static_assert(mcu::device::signature_byte_2 == 0x0F, "Signature byte 2");
static_assert(mcu::device::timer_count == 3, "Timer count");
```

The signature bytes identify the device. The counts summarize resources such as timers, PWM channels, ADC channels, and interrupt vectors.

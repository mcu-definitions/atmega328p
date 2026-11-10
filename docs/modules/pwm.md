# PWM.h

**Purpose:** PWM channels, output pins, and timer resolutions.

Namespace: `atmega328p::pwm`

The six output-compare channels are:

| Channel | Timer | Pin | Resolution |
|---|---|---|---:|
| OC0A | Timer0 | PD6 | 8-bit |
| OC0B | Timer0 | PD5 | 8-bit |
| OC1A | Timer1 | PB1 | 16-bit |
| OC1B | Timer1 | PB2 | 16-bit |
| OC2A | Timer2 | PB3 | 8-bit |
| OC2B | Timer2 | PD3 | 8-bit |

```cpp
#include <atmega328p/PWM.h>

namespace mcu = atmega328p;

constexpr mcu::pwm::Channel output = mcu::pwm::Channel::OC1A;
constexpr mcu::pwm::OutputPin pin = mcu::pwm::OutputPin::OC1A;

static_assert(mcu::pwm::channel_count == 6, "PWM channels");
```

Channels on the same timer share its time base and are not independent PWM generators.

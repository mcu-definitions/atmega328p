# Timer.h

**Purpose:** Timer/counter widths, modes, clock selections, and capabilities.

Namespace: `atmega328p::timer`

| Timer | Counter | Compare channels | Input capture | Async clock |
|---|---:|---:|---|---|
| Timer0 | 8-bit | 2 | No | No |
| Timer1 | 16-bit | 2 | Yes | No |
| Timer2 | 8-bit | 2 | No | Yes |

```cpp
#include <atmega328p/Timer.h>

namespace mcu = atmega328p;

constexpr mcu::timer::Id timer = mcu::timer::Id::Timer1;
constexpr mcu::timer::Timer01Prescaler divider =
    mcu::timer::Timer01Prescaler::Divide64;

static_assert(mcu::timer::timer1::counter_bits == 16, "Timer1 width");
static_assert(mcu::timer::timer2::supports_async_clock == 1, "Timer2 async mode");
```

Timer0 and Timer1 share a prescaler. Timer2 has its own prescaler and can use an asynchronous crystal.

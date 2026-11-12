# GPIO.h

**Purpose:** GPIO port widths, valid bit masks, register addresses and hardware capabilities.

Namespace: `atmega328p::gpio`

The device exposes 3 GPIO ports (B, C, D).

```cpp
#include <atmega328p/GPIO.h>
namespace mcu = atmega328p;

constexpr auto ports = mcu::gpio::port_count;
constexpr auto width = mcu::gpio::port::b_width;
constexpr auto mask = mcu::gpio::port::b_mask;
constexpr auto direction = mcu::gpio::port::b_direction_register;
```

Register metadata uses AVR data-space addresses. This header does not configure GPIO or access registers.

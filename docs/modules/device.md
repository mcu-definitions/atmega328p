# Device.h

**Purpose:** Device resources, peripheral capabilities and signature bytes.

Namespace: `atmega328p::device`

```cpp
#include <atmega328p/Device.h>
namespace mcu = atmega328p;

constexpr auto lines = mcu::device::programmable_io_line_count;
constexpr auto timers = mcu::device::timer_count;
constexpr auto has_adc = mcu::device::has_adc;
```

Count values describe the device's hardware resources; `has_*` flags expose supported features. Board configuration can reserve signals for reset, clocks or other functions.

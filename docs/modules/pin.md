# Pin.h

**Purpose:** Logical GPIO pin and port identifiers.

Namespace: `atmega328p::pin`

`Pin` identifies the silicon signal. It does not identify a package terminal.

```cpp
#include <atmega328p/Pin.h>

namespace mcu = atmega328p;

constexpr mcu::pin::Pin led = mcu::pin::Pin::PB5;
constexpr mcu::pin::Port port = mcu::pin::Port::B;
```

The root aliases `atmega328p::Pin` and `atmega328p::Port` are retained for short existing code. New code can use the explicit `pin` namespace.

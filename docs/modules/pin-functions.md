# PinFunctions.h

**Purpose:** Pin capability flags and alternate-function identifiers.

Namespace: `atmega328p::pin`

`Capability` describes the kinds of functions a pin supports: GPIO, PCINT, ADC, PWM, external interrupts, communication, timer, clock, and analog functions.

Per-pin capability values are in `pin::capabilities`.

```cpp
#include <atmega328p/PinFunctions.h>
#include <atmega328p/PWM.h>
#include <atmega328p/ExternalInterrupts.h>

namespace mcu = atmega328p;

constexpr mcu::pwm::OutputPin pwm_pin = mcu::pwm::OutputPin::OC0A;
constexpr mcu::external_interrupts::LinePin interrupt_pin =
    mcu::external_interrupts::LinePin::INT0;

static_assert(mcu::pin::capabilities::PD6 != 0, "PD6 has alternate functions");
static_assert(mcu::pin::capabilities::PD2 != 0, "PD2 has alternate functions");
```

PC6 is RESET by default. Its GPIO capability depends on the RSTDISBL fuse. ADC6 and ADC7 are analog-only inputs in the 32-terminal packages.

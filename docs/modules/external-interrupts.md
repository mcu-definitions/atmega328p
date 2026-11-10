# ExternalInterrupts.h

**Purpose:** INT0/INT1 pins and pin-change interrupt groups.

Namespace: `atmega328p::external_interrupts`

INT0 is on PD2 and INT1 is on PD3. Pin-change interrupts are grouped by ports B, C, and D; PCINT15 is reserved.

```cpp
#include <atmega328p/ExternalInterrupts.h>

namespace mcu = atmega328p;

constexpr mcu::external_interrupts::Line line =
    mcu::external_interrupts::Line::INT0;
constexpr mcu::external_interrupts::Trigger trigger =
    mcu::external_interrupts::Trigger::FallingEdge;
constexpr mcu::external_interrupts::LinePin pin =
    mcu::external_interrupts::LinePin::INT0;

static_assert(mcu::external_interrupts::line_count == 2, "External interrupt lines");
```

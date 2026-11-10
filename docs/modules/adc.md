# ADC.h

**Purpose:** ADC channels, references, triggers, prescalers, and conversion limits.

Namespace: `atmega328p::adc`

The converter has 10-bit resolution. PDIP-28 and MLF-28 expose ADC0–ADC5; TQFP-32 and MLF-32 also expose ADC6 and ADC7.

```cpp
#define MCU_PACKAGE_TQFP32
#include <atmega328p/ADC.h>

namespace mcu = atmega328p;

constexpr mcu::adc::Channel input = mcu::adc::Channel::ADC6;
constexpr mcu::adc::Reference reference = mcu::adc::Reference::AVCC;
constexpr mcu::adc::InputPin pin = mcu::adc::InputPin::ADC6;

static_assert(mcu::adc::resolution_bits == 10, "ADC resolution");
static_assert(mcu::adc::external_channel_count == 8, "Selected package channels");
```

The recommended ADC clock is 50–200 kHz for full-resolution operation. The recommended source impedance is at most 10 kΩ. ADC6 and ADC7 are analog-only; their `InputPin` value is `0xFF` because they are not GPIO pins.

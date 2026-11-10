# CPU.h

**Purpose:** CPU register identifiers and status flags.

Namespace: `atmega328p::cpu`

The header names R0–R31, the X/Y/Z pointer pairs, and the SREG status flags.

```cpp
#include <atmega328p/CPU.h>

namespace mcu = atmega328p;

constexpr mcu::cpu::GeneralPurposeRegister work_register =
    mcu::cpu::GeneralPurposeRegister::R16;

constexpr mcu::cpu::PointerRegister pointer =
    mcu::cpu::PointerRegister::X;

static_assert(mcu::cpu::x_low_register == 26, "X low register");
static_assert(mcu::cpu::x_high_register == 27, "X high register");
```

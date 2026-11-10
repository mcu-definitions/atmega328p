# Memory.h

**Purpose:** Flash, SRAM, EEPROM, and data-space geometry.

Namespace: `atmega328p::memory`

| Resource | Capacity |
|---|---:|
| Flash | 32,768 bytes |
| SRAM | 2,048 bytes |
| EEPROM | 1,024 bytes |

The header also provides page sizes, page counts, address ranges, and minimum erase/write cycle specifications.

```cpp
#include <atmega328p/Memory.h>

namespace mcu = atmega328p;

static_assert(mcu::memory::flash_size_bytes == 32768UL, "Flash");
static_assert(mcu::memory::sram_size_bytes == 2048UL, "SRAM");
static_assert(mcu::memory::eeprom_size_bytes == 1024UL, "EEPROM");
static_assert(mcu::memory::ramend == 0x08FF, "SRAM end");
```

The data-space size includes the register and I/O regions; it is not additional SRAM.

# Programming.h

**Purpose:** Programming interface metadata and page geometry.

Namespace: `atmega328p::programming`

The interface enum identifies ISP and High-Voltage Serial programming. The module also lists ISP pin identifiers, signature addresses, Flash/EEPROM page sizes, and Read-While-Write support.

```cpp
#include <atmega328p/Programming.h>

namespace mcu = atmega328p;

constexpr mcu::programming::Interface interface_type =
    mcu::programming::Interface::ISP;

static_assert(mcu::programming::flash_page_size_words == 64,
              "Flash page size");
```

This module does not communicate with a programmer or perform programming operations.

# Bootloader.h

**Purpose:** Boot section sizes and Read-While-Write regions.

Namespace: `atmega328p::bootloader`

The header describes the four BOOTSZ choices, their fuse encodings, and the RWW/NRWW Flash boundaries.

```cpp
#include <atmega328p/Bootloader.h>

namespace mcu = atmega328p;

constexpr mcu::bootloader::Size size =
    mcu::bootloader::Size::Words2048;
constexpr mcu::bootloader::SizeCode code =
    mcu::bootloader::SizeCode::Words2048;

static_assert(mcu::bootloader::default_size_words == 2048, "Default boot size");
```

The header does not implement a bootloader or Flash programming.

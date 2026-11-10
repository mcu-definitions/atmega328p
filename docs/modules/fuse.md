# Fuse.h

**Purpose:** Low, High, and Extended Fuse byte fields.

Namespace: `atmega328p::fuse`

The header exposes masks for clock selection, startup time, CKDIV8, reset/debug behavior, boot size, and brown-out level. Fuse bits are active-low: a programmed bit reads as zero.

```cpp
#include <atmega328p/Fuse.h>

namespace mcu = atmega328p;

static_assert(mcu::fuse::default_low == 0x62, "Low fuse reference");
static_assert(mcu::fuse::default_high == 0xD9, "High fuse reference");
static_assert(mcu::fuse::default_ext == 0xFF, "Extended fuse reference");
```

The values above are factory reference values. They are not automatically suitable for every board. The intended bytes for a particular board belong in its `MCUConfig.h`.

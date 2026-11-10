# Package.h

**Purpose:** Package type, dimensions, and package-dependent characteristics.

Namespace: `atmega328p::package`

The supported packages are PDIP-28, MLF-28, TQFP-32, and MLF-32. Each has a namespace containing its dimensions, terminal count, ADC availability, and exposed-pad information.

`package::selected` refers to the package selected in `MCUConfig.h`. If no package is selected, it refers to the `unspecified` profile.

```cpp
#define MCU_PACKAGE_PDIP28
#include <atmega328p/Package.h>

namespace mcu = atmega328p;

static_assert(mcu::package::selected::pin_count == 28, "PDIP-28");
static_assert(mcu::package::selected::has_adc6 == 0, "No ADC6 terminal");
```

MLF32 also requires the punch-singulated or saw-singulated style when its detailed land-pattern dimensions are needed.

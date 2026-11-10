# Config.h

**Purpose:** Identifies the MCU and validates package and operating-grade selections.

The library defines the device identity macro `MCU_ATMEGA328P` and generic feature flags such as `MCU_HAS_GPIO`, `MCU_HAS_ADC`, and `MCU_HAS_SPI`.

The consuming configuration may select one package and one operating grade before including any ATmega328P header:

```cpp
#define MCU_PACKAGE_PDIP28
#define MCU_GRADE_INDUSTRIAL_85C

#include <atmega328p/ATmega328P.h>
```

Available package selectors:

- `MCU_PACKAGE_PDIP28`
- `MCU_PACKAGE_MLF28`
- `MCU_PACKAGE_TQFP32`
- `MCU_PACKAGE_MLF32`

Available grade selectors:

- `MCU_GRADE_INDUSTRIAL_85C`
- `MCU_GRADE_INDUSTRIAL_105C`
- `MCU_GRADE_AUTOMOTIVE_125C`

For MLF32, select `MCU_MLF32_PUNCH` or `MCU_MLF32_SAWN` when the package drawing identifies the manufacturing style.

The optional `MCU_REQUIRE_PACKAGE`, `MCU_REQUIRE_GRADE`, and `MCU_REQUIRE_MLF32_STYLE` macros make a missing selection a compile-time error.

`Config.h` contains selection checks only. Device characteristics are exposed by their corresponding C++ namespaces.

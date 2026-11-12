# ATmega328P

Hardware definitions for the ATmega328P microcontroller.

Header-only C++11 library describing registers, memory, GPIO, peripherals, package pins, clock sources, interrupts, fuses, electrical characteristics and errata.

No hardware access, drivers or initialization code is included.

## Usage

```cpp
#define MCU_PACKAGE_PDIP28
#define MCU_GRADE_INDUSTRIAL_85C
#define MCU_CLOCK_HZ 1000000UL

#include <atmega328p/ATmega328P.h>

namespace mcu = atmega328p;
```

For smaller includes, import the required module directly:

```cpp
#include <atmega328p/Pin.h>
#include <atmega328p/GPIO.h>
#include <atmega328p/RegisterMap.h>
```

The project selects its package, operating grade and clock. Clock and fuse settings must match the physical board.

## Structure

- `include/atmega328p/` — hardware definitions.
- `docs/` — technical reference and module documentation.
- `examples/` — usage examples.
- `Doxyfile` — API documentation configuration.

## Documentation

[Getting started](docs/getting-started.md) · [Module reference](docs/index.md) · [Technical references](docs/references.md)

## License

See [LICENSE](LICENSE).

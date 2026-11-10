#define MCU_PACKAGE_PDIP28
#include <atmega328p/PackagePins.h>

namespace mcu = atmega328p;

static_assert(mcu::package::pdip28::PB5 == 19, "PDIP-28 PB5");
static_assert(mcu::package::pdip28::PC6 == 1, "PDIP-28 PC6");

#define MCU_PACKAGE_PDIP28
#include <atmega328p/Package.h>

namespace mcu = atmega328p;

static_assert(mcu::package::selected::pin_count == 28, "PDIP-28");
static_assert(mcu::package::selected::has_adc6 == 0, "No ADC6 terminal");

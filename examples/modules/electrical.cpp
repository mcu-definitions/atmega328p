#define MCU_GRADE_INDUSTRIAL_85C
#include <atmega328p/Electrical.h>

namespace mcu = atmega328p;

static_assert(mcu::electrical::selected::min_voltage_mv == 1800,
              "Industrial minimum voltage");
static_assert(mcu::electrical::selected::max_temperature_c == 85,
              "Industrial temperature limit");

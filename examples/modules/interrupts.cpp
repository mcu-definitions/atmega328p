#include <atmega328p/Interrupts.h>

namespace mcu = atmega328p;

constexpr mcu::interrupts::Vector vector =
    mcu::interrupts::Vector::INT0;
constexpr mcu::interrupts::WordAddress address =
    mcu::interrupts::WordAddress::INT0;

static_assert(mcu::interrupts::vector_count == 26, "Vector count");

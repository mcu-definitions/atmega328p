#include <atmega328p/SPI.h>

namespace mcu = atmega328p;

constexpr mcu::spi::Mode mode = mcu::spi::Mode::Mode0;
constexpr mcu::spi::Role role = mcu::spi::Role::Master;
constexpr mcu::spi::ClockDivider divider = mcu::spi::ClockDivider::Divide16;

static_assert(mcu::spi::module_count == 1, "Dedicated SPI module");

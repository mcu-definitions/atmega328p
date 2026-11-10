#include <atmega328p/RegisterBits.h>

namespace mcu = atmega328p;

static_assert(mcu::register_bits::adcsra::aden == 7, "ADC enable bit");
static_assert(mcu::register_bits::spcr::spe == 6, "SPI enable bit");
static_assert(mcu::register_bits::tccr1a::com1a1 == 7, "Timer1 compare bit");

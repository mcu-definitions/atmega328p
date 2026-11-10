#define MCU_PACKAGE_TQFP32
#include <atmega328p/ADC.h>

namespace mcu = atmega328p;

constexpr mcu::adc::Channel input = mcu::adc::Channel::ADC6;
constexpr mcu::adc::Reference reference = mcu::adc::Reference::AVCC;
constexpr mcu::adc::InputPin pin = mcu::adc::InputPin::ADC6;

static_assert(mcu::adc::resolution_bits == 10, "ADC resolution");
static_assert(mcu::adc::external_channel_count == 8, "Selected package channels");

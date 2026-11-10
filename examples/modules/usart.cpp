#include <atmega328p/USART.h>

namespace mcu = atmega328p;

constexpr mcu::usart::Mode mode = mcu::usart::Mode::Asynchronous;
constexpr mcu::usart::DataBits data_bits = mcu::usart::DataBits::Eight;
constexpr mcu::usart::Parity parity = mcu::usart::Parity::Disabled;
constexpr mcu::usart::StopBits stop_bits = mcu::usart::StopBits::One;

static_assert(mcu::usart::module_count == 1, "USART count");

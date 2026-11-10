#include <atmega328p/Pin.h>

namespace mcu = atmega328p;

constexpr mcu::pin::Pin led = mcu::pin::Pin::PB5;
constexpr mcu::pin::Port port = mcu::pin::Port::B;

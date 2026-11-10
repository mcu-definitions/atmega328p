#include <atmega328p/PWM.h>

namespace mcu = atmega328p;

constexpr mcu::pwm::Channel output = mcu::pwm::Channel::OC1A;
constexpr mcu::pwm::OutputPin pin = mcu::pwm::OutputPin::OC1A;

static_assert(mcu::pwm::channel_count == 6, "PWM channels");

#include <atmega328p/PinFunctions.h>
#include <atmega328p/PWM.h>
#include <atmega328p/ExternalInterrupts.h>

namespace mcu = atmega328p;

constexpr mcu::pwm::OutputPin pwm_pin = mcu::pwm::OutputPin::OC0A;
constexpr mcu::external_interrupts::LinePin interrupt_pin =
    mcu::external_interrupts::LinePin::INT0;

static_assert(mcu::pin::capabilities::PD6 != 0, "PD6 has alternate functions");
static_assert(mcu::pin::capabilities::PD2 != 0, "PD2 has alternate functions");

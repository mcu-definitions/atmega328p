#include "../configurations/MCUConfig.h"

constexpr mcu::adc::Channel analog_input = mcu::adc::Channel::ADC0;
constexpr mcu::pwm::Channel pwm_output = mcu::pwm::Channel::OC1A;
constexpr mcu::timer::Id pwm_timer = mcu::timer::Id::Timer1;
constexpr mcu::usart::Mode serial_mode = mcu::usart::Mode::Asynchronous;
constexpr mcu::spi::Mode spi_mode = mcu::spi::Mode::Mode0;

static_assert(mcu::pwm::channel_count == 6, "PWM channel count");
static_assert(mcu::timer::timer_count == 3, "Timer count");
static_assert(mcu::usart::module_count == 1, "USART count");
static_assert(mcu::spi::module_count == 1, "SPI count");

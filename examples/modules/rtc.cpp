#include <atmega328p/RTC.h>

namespace mcu = atmega328p;

static_assert(mcu::rtc::recommended_crystal_hz == 32768UL, "Watch crystal");
static_assert(mcu::rtc::uses_timer2 == 1, "Timer2 is used");
static_assert(mcu::rtc::requires_timer2_asynchronous_mode == 1,
              "Asynchronous Timer2 mode");

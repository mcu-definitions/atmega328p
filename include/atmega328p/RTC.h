/**
 * @file RTC.h
 * @brief Timer2 asynchronous clock characteristics for RTC use.
 */

#ifndef ATMEGA328P_DEFINITIONS_RTC_H
#define ATMEGA328P_DEFINITIONS_RTC_H

#include <stdint.h>
#include "Config.h"

/** @brief Device-specific definitions for the ATmega328P. */
namespace atmega328p
{
    /** @brief RTC-style Timer2 clock definitions. */
    namespace rtc
    {
        enum : uint32_t
        {
            recommended_crystal_hz = 32768UL, ///< Recommended crystal (Hz).
        };

        enum : uint8_t
        {
            tosc1_pin_value = 0x06U,                               ///< Tosc1 logical pin encoding.
            tosc2_pin_value = 0x07U,                               ///< Tosc2 logical pin encoding.
            uses_timer2 = 1,                                       ///< Uses timer2.
            requires_timer2_asynchronous_mode = 1,                 ///< Requires timer2 asynchronous mode.
            tosc_pins_disconnect_from_port_when_async_enabled = 1, ///< TOSC pins disconnect from port when async enabled.
            cpu_clock_must_exceed_4x_tosc = 1,                     ///< CPU clock must exceed 4x TOSC.
            requires_internal_calibrated_rc_system_clock = 1,      ///< Requires internal calibrated RC system clock.
            supports_external_clock_on_tosc1 = 1,                  ///< External clock on tosc1 supported.
        };
    }
}

#endif

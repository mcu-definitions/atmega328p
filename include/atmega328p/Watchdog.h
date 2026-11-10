/**
 * @file Watchdog.h
 * @brief Watchdog oscillator and timeout characteristics.
 */

#ifndef ATMEGA328P_DEFINITIONS_WATCHDOG_H
#define ATMEGA328P_DEFINITIONS_WATCHDOG_H

#include <stdint.h>
#include "Config.h"

/** @brief Device-specific definitions for the ATmega328P. */
namespace atmega328p
{
    /** @brief Watchdog timer definitions. */
    namespace watchdog
    {
        /** @brief Nominal watchdog timeout selections in milliseconds. */
        enum class Timeout : uint16_t
        {
            Ms16 = 16,     ///< 16 - Nominal 16 ms watchdog timeout.
            Ms32 = 32,     ///< 32 - Nominal 32 ms watchdog timeout.
            Ms64 = 64,     ///< 64 - Nominal 64 ms watchdog timeout.
            Ms125 = 125,   ///< 125 - Nominal 125 ms watchdog timeout.
            Ms250 = 250,   ///< 250 - Nominal 250 ms watchdog timeout.
            Ms500 = 500,   ///< 500 - Nominal 500 ms watchdog timeout.
            Ms1000 = 1000, ///< 1000 - Nominal 1000 ms watchdog timeout.
            Ms2000 = 2000, ///< 2000 - Nominal 2000 ms watchdog timeout.
            Ms4000 = 4000, ///< 4000 - Nominal 4000 ms watchdog timeout.
            Ms8000 = 8000, ///< 8000 - Nominal 8000 ms watchdog timeout.
        };

        enum : uint32_t
        {
            oscillator_nominal_hz = 128000UL,                            ///< Oscillator nominal (Hz).
            timeout_nominal_reference_hz = 128000UL,                     ///< Timeout nominal reference (Hz).
            uses_separate_oscillator = 1,                                ///< Uses separate oscillator.
            oscillator_frequency_depends_on_voltage_and_temperature = 1, ///< Oscillator frequency depends on voltage and temperature.
            typical_characteristics_published = 1,                       ///< Typical characteristics published.
            timeout_values_are_approximate = 1,                          ///< Timeout values are approximate.
            supports_interrupt_mode = 1,                                 ///< Interrupt mode supported.
            supports_reset_mode = 1,                                     ///< Reset mode supported.
            supports_interrupt_and_reset_mode = 1,                       ///< Interrupt and reset mode supported.
            has_always_on_fuse = 1,                                      ///< Always on fuse available.
        };

        enum : uint16_t
        {
            timeout_count = 10U,            ///< Number of timeout.
            min_nominal_timeout_ms = 16U,   ///< Min nominal timeout (ms).
            max_nominal_timeout_ms = 8000U, ///< Max nominal timeout (ms).
        };
    }
}

#endif

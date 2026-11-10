/**
 * @file Power.h
 * @brief Sleep modes and peripheral power reduction.
 */

#ifndef ATMEGA328P_DEFINITIONS_POWER_H
#define ATMEGA328P_DEFINITIONS_POWER_H

#include <stdint.h>
#include "Config.h"

/** @brief Device-specific definitions for the ATmega328P. */
namespace atmega328p
{
    /** @brief Power management definitions. */
    namespace power
    {
        /** @brief Supported sleep modes. */
        enum class SleepMode : uint8_t
        {
            Idle = 0,              ///< 0 - CPU stopped; peripheral clocks active.
            ADCNoiseReduction = 1, ///< 1 - Reduced noise during ADC conversion.
            PowerDown = 2,         ///< 2 - Oscillator stopped; asynchronous wake-up.
            PowerSave = 3,         ///< 3 - Power-down with asynchronous Timer2 available.
            Standby = 6,           ///< 6 - Crystal oscillator remains running.
            ExtendedStandby = 7,   ///< 7 - Standby with asynchronous Timer2 available.
        };

        /** @brief Peripheral clock-disable masks. */
        enum PowerReduction : uint8_t
        {
            adc = 0x01,    ///< 0x01 - Disable adc peripheral clock.
            usart0 = 0x02, ///< 0x02 - Disable usart0 peripheral clock.
            spi = 0x04,    ///< 0x04 - Disable spi peripheral clock.
            timer1 = 0x08, ///< 0x08 - Disable timer1 peripheral clock.
            timer0 = 0x20, ///< 0x20 - Disable timer0 peripheral clock.
            timer2 = 0x40, ///< 0x40 - Disable timer2 peripheral clock.
            twi = 0x80,    ///< 0x80 - Disable twi peripheral clock.
        };

        enum : uint8_t
        {
            sleep_mode_count = 6U,                ///< Number of sleep mode.
            power_reduction_module_count = 7U,    ///< Number of power reduction module.
            bod_can_be_disabled_during_sleep = 1, ///< BOD can be disabled during sleep.
        };
    }
}

#endif

/**
 * @file PWM.h
 * @brief PWM channels, timers, and resolutions.
 */

#ifndef ATMEGA328P_DEFINITIONS_PWM_H
#define ATMEGA328P_DEFINITIONS_PWM_H

#include <stdint.h>
#include "Config.h"
#include "Pin.h"
#include "Timer.h"

/** @brief Device-specific definitions for the ATmega328P. */
namespace atmega328p
{
    /** @brief PWM channel definitions. */
    namespace pwm
    {
        /** @brief Peripheral channel identifiers. */
        enum class Channel : uint8_t
        {
            OC0A = 0, ///< 0 - Output compare 0A on PD6.
            OC0B = 1, ///< 1 - Output compare 0B on PD5.
            OC1A = 2, ///< 2 - Output compare 1A on PB1.
            OC1B = 3, ///< 3 - Output compare 1B on PB2.
            OC2A = 4, ///< 4 - Output compare 2A on PB3.
            OC2B = 5, ///< 5 - Output compare 2B on PD3.
        };

        /** @brief Peripheral operating modes. */
        enum class Mode : uint8_t
        {
            Fast = 0,                                    ///< Single-slope fast PWM.
            PhaseCorrect = Fast + 1,                     ///< Dual-slope phase-correct PWM.
            PhaseAndFrequencyCorrect = PhaseCorrect + 1, ///< Dual-slope phase/frequency-correct PWM.
        };

        /** @brief Logical pins carrying the output-compare channels. */
        enum class OutputPin : uint8_t
        {
            OC0A = 0x26, ///< 0x26 - PWM signal OC0A on PD6.
            OC0B = 0x25, ///< 0x25 - PWM signal OC0B on PD5.
            OC1A = 0x01, ///< 0x01 - PWM signal OC1A on PB1.
            OC1B = 0x02, ///< 0x02 - PWM signal OC1B on PB2.
            OC2A = 0x03, ///< 0x03 - PWM signal OC2A on PB3.
            OC2B = 0x23, ///< 0x23 - PWM signal OC2B on PD3.
        };

        enum : uint8_t
        {
            channel_count = 6U,                          ///< Number of channel.
            timer0_resolution_bits = 8U,                 ///< Timer0 resolution width (bits).
            timer1_min_resolution_bits = 2U,             ///< Timer1 min resolution width (bits).
            timer1_max_resolution_bits = 16U,            ///< Timer1 max resolution width (bits).
            timer2_resolution_bits = 8U,                 ///< Timer2 resolution width (bits).
            timer0_supports_fast = 1,                    ///< Timer0 supports fast.
            timer0_supports_phase_correct = 1,           ///< Timer0 supports phase correct.
            timer0_supports_phase_frequency_correct = 0, ///< Timer0 supports phase frequency correct.
            timer1_supports_fast = 1,                    ///< Timer1 supports fast.
            timer1_supports_phase_correct = 1,           ///< Timer1 supports phase correct.
            timer1_supports_phase_frequency_correct = 1, ///< Timer1 supports phase frequency correct.
            timer2_supports_fast = 1,                    ///< Timer2 supports fast.
            timer2_supports_phase_correct = 1,           ///< Timer2 supports phase correct.
            timer2_supports_phase_frequency_correct = 0, ///< Timer2 supports phase frequency correct.
        };
    }
}

#endif

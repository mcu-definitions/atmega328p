/**
 * @file Timer.h
 * @brief Timer/counter modes, widths, and clock selections.
 */

#ifndef ATMEGA328P_DEFINITIONS_TIMER_H
#define ATMEGA328P_DEFINITIONS_TIMER_H

#include <stdint.h>
#include "Config.h"
#include "Pin.h"

/** @brief Device-specific definitions for the ATmega328P. */
namespace atmega328p
{
    /** @brief Timer/counter definitions. */
    namespace timer
    {
        /** @brief Hardware timer identifiers. */
        enum class Id : uint8_t
        {
            Timer0 = 0, ///< 0 - Hardware timer 0.
            Timer1 = 1, ///< 1 - Hardware timer 1.
            Timer2 = 2, ///< 2 - Hardware timer 2.
        };

        /** @brief Timer0/Timer1 clock-select encodings. */
        enum class Timer01ClockSelection : uint8_t
        {
            Stopped = 0,             ///< 0 - Stop the counter.
            NoPrescaling = 1,        ///< 1 - Use clock without prescaling.
            Divide8 = 2,             ///< 2 - Divide timer clock by 8.
            Divide64 = 3,            ///< 3 - Divide timer clock by 64.
            Divide256 = 4,           ///< 4 - Divide timer clock by 256.
            Divide1024 = 5,          ///< 5 - Divide timer clock by 1024.
            ExternalFallingEdge = 6, ///< 6 - Count falling edges on external clock pin.
            ExternalRisingEdge = 7,  ///< 7 - Count rising edges on external clock pin.
        };

        /** @brief Timer0 and Timer1 prescaler values. */
        enum class Timer01Prescaler : uint16_t
        {
            Divide1 = 1,       ///< 1 - Divide timer clock by 1.
            Divide8 = 8,       ///< 8 - Divide timer clock by 8.
            Divide64 = 64,     ///< 64 - Divide timer clock by 64.
            Divide256 = 256,   ///< 256 - Divide timer clock by 256.
            Divide1024 = 1024, ///< 1024 - Divide timer clock by 1024.
        };

        /** @brief Timer2 prescaler selections. */
        enum class Timer2Prescaler : uint16_t
        {
            Divide1 = 1,       ///< 1 - Divide timer clock by 1.
            Divide8 = 8,       ///< 8 - Divide timer clock by 8.
            Divide32 = 32,     ///< 32 - Divide timer clock by 32.
            Divide64 = 64,     ///< 64 - Divide timer clock by 64.
            Divide128 = 128,   ///< 128 - Divide timer clock by 128.
            Divide256 = 256,   ///< 256 - Divide timer clock by 256.
            Divide1024 = 1024, ///< 1024 - Divide timer clock by 1024.
        };

        /** @brief Timer2 clock source and prescaler selections. */
        enum class Timer2ClockSelection : uint8_t
        {
            Stopped = 0,      ///< 0 - Stop the counter.
            NoPrescaling = 1, ///< 1 - Use clock without prescaling.
            Divide8 = 2,      ///< 2 - Divide timer clock by 8.
            Divide32 = 3,     ///< 3 - Divide timer clock by 32.
            Divide64 = 4,     ///< 4 - Divide timer clock by 64.
            Divide128 = 5,    ///< 5 - Divide timer clock by 128.
            Divide256 = 6,    ///< 6 - Divide timer clock by 256.
            Divide1024 = 7,   ///< 7 - Divide timer clock by 1024.
        };

        /** @brief Timer0 waveform modes. */
        enum class Timer0WaveformMode : uint8_t
        {
            Normal = 0,                  ///< 0 - Normal counter mode.
            PhaseCorrectPWM = 1,         ///< 1 - Dual-slope phase-correct PWM.
            ClearOnCompare = 2,          ///< 2 - Clear timer on compare match (CTC).
            FastPWM = 3,                 ///< 3 - Fast PWM.
            Reserved4 = 4,               ///< 4 - Reserved; do not select.
            PhaseCorrectPWMTopOCR0A = 5, ///< 5 - Phase-correct PWM with OCR0A as TOP.
            Reserved6 = 6,               ///< 6 - Reserved; do not select.
            FastPWMTopOCR0A = 7,         ///< 7 - Fast PWM with OCRnA as TOP.
        };

        /** @brief Timer2 waveform modes. */
        enum class Timer2WaveformMode : uint8_t
        {
            Normal = 0,                  ///< 0 - Normal counter mode.
            PhaseCorrectPWM = 1,         ///< 1 - Dual-slope phase-correct PWM.
            ClearOnCompare = 2,          ///< 2 - Clear timer on compare match (CTC).
            FastPWM = 3,                 ///< 3 - Fast PWM.
            Reserved4 = 4,               ///< 4 - Reserved; do not select.
            PhaseCorrectPWMTopOCR2A = 5, ///< 5 - Phase-correct PWM with OCR2A as TOP.
            Reserved6 = 6,               ///< 6 - Reserved; do not select.
            FastPWMTopOCR2A = 7,         ///< 7 - Fast PWM with OCRnA as TOP.
        };

        /** @brief Timer1 waveform modes. */
        enum class Timer1WaveformMode : uint8_t
        {
            Normal = 0,                               ///< 0 - Normal counter mode.
            PhaseCorrectPWM8Bit = 1,                  ///< 1 - Phase correct pwm8 bit.
            PhaseCorrectPWM9Bit = 2,                  ///< 2 - Phase correct pwm9 bit.
            PhaseCorrectPWM10Bit = 3,                 ///< 3 - Phase correct pwm10 bit.
            ClearOnCompareOCR1A = 4,                  ///< 4 - CTC with OCR1A as TOP.
            FastPWM8Bit = 5,                          ///< 5 - Fast PWM (8-bit).
            FastPWM9Bit = 6,                          ///< 6 - Fast PWM (9-bit).
            FastPWM10Bit = 7,                         ///< 7 - Fast PWM (0-bit).
            PhaseAndFrequencyCorrectPWMWithICR1 = 8,  ///< 8 - Phase and frequency correct pwm with icr1.
            PhaseAndFrequencyCorrectPWMWithOCR1A = 9, ///< 9 - Phase and frequency correct pwm with ocr1 a.
            PhaseCorrectPWMWithICR1 = 10,             ///< 10 - Phase correct pwm with icr1.
            PhaseCorrectPWMWithOCR1A = 11,            ///< 11 - Phase correct pwm with ocr1 a.
            ClearOnCompareICR1 = 12,                  ///< 12 - CTC with ICR1 as TOP.
            Reserved13 = 13,                          ///< 13 - Reserved; do not select.
            FastPWMWithICR1 = 14,                     ///< 14 - Fast PWM with ICR1 as TOP.
            FastPWMWithOCR1A = 15,                    ///< 15 - Fast PWM with OCRnA as TOP.
        };

        /** @brief Timer0 hardware characteristics. */
        namespace timer0
        {
            enum : uint8_t
            {
                counter_bits = 8,                 ///< Counter width (bits).
                compare_channel_count = 2,        ///< Number of compare channel.
                has_input_capture = 0,            ///< Input capture available.
                supports_async_clock = 0,         ///< Async clock supported.
                shares_prescaler_with_timer1 = 1, ///< Shares prescaler with timer1.
            };
        }

        /** @brief Timer1 hardware characteristics. */
        namespace timer1
        {
            enum : uint8_t
            {
                counter_bits = 16,                    ///< Counter width (bits).
                compare_channel_count = 2,            ///< Number of compare channel.
                has_input_capture = 1,                ///< Input capture available.
                supports_async_clock = 0,             ///< Async clock supported.
                shares_prescaler_with_timer0 = 1,     ///< Shares prescaler with timer0.
                has_input_capture_noise_canceler = 1, ///< Input capture noise canceler available.
                has_selectable_capture_edge = 1,      ///< Selectable capture edge available.
            };
        }

        /** @brief Timer2 hardware characteristics. */
        namespace timer2
        {
            enum : uint8_t
            {
                counter_bits = 8,                           ///< Counter width (bits).
                compare_channel_count = 2,                  ///< Number of compare channel.
                has_input_capture = 0,                      ///< Input capture available.
                supports_async_clock = 1,                   ///< Async clock supported.
                async_requires_internal_rc_clock = 1,       ///< Async requires internal RC clock.
                async_requires_cpu_clock_above_4x_tosc = 1, ///< Async requires CPU clock above 4x TOSC.
                supports_external_clock_on_tosc1 = 1,       ///< External clock on tosc1 supported.
            };
        }

        enum : uint8_t
        {
            timer_count = 3U,
            timer8_count = 2U,
            timer16_count = 1U,
            output_compare_8bit_channel_count = 4U,
            output_compare_16bit_channel_count = 2U, ///< Number of timer.
            timer0_counter_bits = 8U,                ///< Timer0 counter width (bits).
            timer1_counter_bits = 16U,               ///< Timer1 counter width (bits).
            timer2_counter_bits = 8U,                ///< Timer2 counter width (bits).
            timer0_compare_channel_count = 2U,       ///< Number of timer0 compare channel.
            timer1_compare_channel_count = 2U,       ///< Number of timer1 compare channel.
            timer2_compare_channel_count = 2U,       ///< Number of timer2 compare channel.
        };

        enum : uint16_t
        {
            timer01_prescaler_count = 5, ///< Number of timer01 prescaler.
            timer2_prescaler_count = 7,  ///< Number of timer2 prescaler.
        };

        /** @brief Timer input pin identifiers. */
        enum class PinSignal : uint8_t
        {
            Timer0ExternalClock = 0x24, ///< 0x24 - T0 external clock on PD4.
            Timer1ExternalClock = 0x25, ///< 0x25 - T1 external clock on PD5.
            Timer1InputCapture = 0x00,  ///< 0x00 - ICP1 input on PB0.
        };
    }
}

#endif

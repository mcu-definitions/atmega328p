/**
 * @file ADC.h
 * @brief ADC channels, references, timing, and electrical characteristics.
 */

#ifndef ATMEGA328P_DEFINITIONS_ADC_H
#define ATMEGA328P_DEFINITIONS_ADC_H

#include <stdint.h>
#include "Package.h"

/** @brief Device-specific definitions for the ATmega328P. */
namespace atmega328p
{
    /** @brief Analog-to-digital converter definitions. */
    namespace adc
    {
        /** @brief External ADC input channels. */
        enum class Channel : uint8_t
        {
            ADC0 = 0, ///< 0 - External ADC input 0 (PC0).
            ADC1 = 1, ///< 1 - External ADC input 1 (PC1).
            ADC2 = 2, ///< 2 - External ADC input 2 (PC2).
            ADC3 = 3, ///< 3 - External ADC input 3 (PC3).
            ADC4 = 4, ///< 4 - External ADC input 4 (PC4).
            ADC5 = 5, ///< 5 - External ADC input 5 (PC5).
            ADC6 = 6, ///< 6 - External ADC input 6 (32-terminal package only).
            ADC7 = 7, ///< 7 - External ADC input 7 (32-terminal package only).
        };

        /** @brief Logical pin associated with each external ADC channel. */
        enum class InputPin : uint8_t
        {
            ADC0 = 0x10, ///< 0x10 - ADC input 0 on PC0.
            ADC1 = 0x11, ///< 0x11 - ADC input 1 on PC1.
            ADC2 = 0x12, ///< 0x12 - ADC input 2 on PC2.
            ADC3 = 0x13, ///< 0x13 - ADC input 3 on PC3.
            ADC4 = 0x14, ///< 0x14 - ADC input 4 on PC4.
            ADC5 = 0x15, ///< 0x15 - ADC input 5 on PC5.
            ADC6 = 0xFF, ///< 0xFF - Analog-only input; no GPIO pin mapping.
            ADC7 = 0xFF, ///< 0xFF - Analog-only input; no GPIO pin mapping.
        };

        /** @brief Internal ADC multiplexer inputs. */
        enum class InternalInput : uint8_t
        {
            TemperatureSensor = 8, ///< 8 - On-chip temperature sensor.
            Bandgap = 14,          ///< 14 - Internal bandgap voltage.
            Ground = 15,           ///< 15 - Ground for offset measurement.
        };

        /** @brief ADC voltage-reference selections. */
        enum class Reference : uint8_t
        {
            AREF = 0,        ///< 0 - External reference on AREF.
            AVCC = 1,        ///< 1 - Analog supply voltage reference.
            Reserved = 2,    ///< 2 - Reserved; do not select.
            Internal1V1 = 3, ///< 3 - Internal nominal 1.1 V reference.
        };

        /** @brief Automatic conversion trigger sources. */
        enum class TriggerSource : uint8_t
        {
            FreeRunning = 0,         ///< 0 - Convert continuously.
            AnalogComparator = 1,    ///< 1 - Analog comparator event.
            ExternalInterrupt0 = 2,  ///< 2 - INT0 event.
            Timer0CompareMatchA = 3, ///< 3 - Timer0 compare A event.
            Timer0Overflow = 4,      ///< 4 - Timer0 overflow.
            Timer1CompareMatchB = 5, ///< 5 - Timer1 compare B event.
            Timer1Overflow = 6,      ///< 6 - Timer1 overflow.
            Timer1CaptureEvent = 7,  ///< 7 - Timer1 input-capture event.
        };

        /** @brief ADC clock prescaler values. */
        enum class Prescaler : uint16_t
        {
            Divide2 = 2,     ///< 2 - Divide ADC clock by 2.
            Divide4 = 4,     ///< 4 - Divide ADC clock by 4.
            Divide8 = 8,     ///< 8 - Divide ADC clock by 8.
            Divide16 = 16,   ///< 16 - Divide ADC clock by 16.
            Divide32 = 32,   ///< 32 - Divide ADC clock by 32.
            Divide64 = 64,   ///< 64 - Divide ADC clock by 64.
            Divide128 = 128, ///< 128 - Divide ADC clock by 128.
        };

        enum : uint32_t
        {
            resolution_bits = 10,                                          ///< Converter result width (bits).
            max_result = 1023,                                             ///< Maximum 10-bit result.
            max_external_channel_count = 8,                                ///< Maximum external inputs across packages.
            external_channel_count = package::selected::adc_channel_count, ///< External inputs exposed by the selected package.
            normal_conversion_cycles = 13,                                 ///< ADC clock cycles per conversion.
            first_conversion_cycles = 25,                                  ///< ADC cycles for first conversion.
            internal_reference_nominal_mv = 1100,                          ///< Nominal internal reference (mV).
            recommended_clock_min_hz = 50000,                              ///< Recommended clock min (Hz).
            recommended_clock_max_hz = 200000,                             ///< Recommended clock max (Hz).
            electrical_clock_max_hz = 1000000,                             ///< Electrical clock max (Hz).
            recommended_source_impedance_max_ohms = 10000,                 ///< Recommended maximum source impedance (ohms).
            normal_conversion_time_min_us_at_1mhz = 13,                    ///< Normal conversion time min us at 1mhz.
            normal_conversion_time_max_us_at_50khz = 260,                  ///< Normal conversion time max us at 50khz.
            first_conversion_time_min_us_at_1mhz = 25,                     ///< First conversion time min us at 1mhz.
            first_conversion_time_max_us_at_50khz = 500,                   ///< First conversion time max us at 50khz.
            max_sample_rate_at_max_resolution_sps = 15000,                 ///< Max sample rate at max resolution sps.
        };

        enum : uint8_t
        {
            has_internal_temperature_sensor = 1,                ///< Internal temperature sensor available.
            has_internal_bandgap_input = 1,                     ///< Internal bandgap input available.
            has_ground_input = 1,                               ///< Ground input available.
            input_pin_range_starts_at_gnd = 1,                  ///< Input pin range starts at gnd.
            input_pin_range_ends_at_vcc = 1,                    ///< Input pin range ends at VCC.
            conversion_range_starts_at_gnd = 1,                 ///< Conversion range starts at gnd.
            conversion_range_ends_at_vref = 1,                  ///< Conversion range ends at VREF.
            temperature_sensor_calibrated_accuracy_c = 10,      ///< Temperature sensor calibrated accuracy c.
            temperature_sensor_requires_calibration = 1,        ///< Temperature sensor requires calibration.
            temperature_sensor_gain_signature_address = 0x03,   ///< Temperature sensor gain signature address.
            temperature_sensor_offset_signature_address = 0x02, ///< Temperature sensor offset signature address.
        };

        enum : uint16_t
        {
            automotive_temperature_code_minus_40c = 0x010D, ///< Automotive temperature code minus 40c.
            automotive_temperature_code_25c = 0x0160,       ///< Automotive temperature code 25c.
            automotive_temperature_code_125c = 0x01E0,      ///< Automotive temperature code 125c.
            automotive_accuracy_test_vcc_mv = 4000,         ///< Automotive accuracy test VCC (mV).
            automotive_accuracy_test_vref_mv = 4000,        ///< Automotive accuracy test VREF (mV).
        };

        static constexpr float family_absolute_accuracy_lsb = 2.0f;
        static constexpr float family_inl_lsb = 0.5f;
        static constexpr float automotive_typical_absolute_accuracy_lsb_at_200khz = 2.2f;
        static constexpr float automotive_max_absolute_accuracy_lsb_at_200khz = 3.5f;
        static constexpr float automotive_typical_inl_lsb_at_200khz = 0.6f;
        static constexpr float automotive_max_inl_lsb_at_200khz = 1.5f;
        static constexpr float automotive_typical_dnl_lsb_at_200khz = 0.3f;
        static constexpr float automotive_max_dnl_lsb_at_200khz = 0.7f;
        static constexpr float automotive_max_gain_error_lsb = 3.5f;
        static constexpr float automotive_max_offset_error_lsb = 3.5f;
    }
}

#endif

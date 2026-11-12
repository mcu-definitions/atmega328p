/**
 * @file Clock.h
 * @brief Clock sources, startup settings, and prescalers.
 */

#ifndef ATMEGA328P_DEFINITIONS_CLOCK_H
#define ATMEGA328P_DEFINITIONS_CLOCK_H

#include <stdint.h>
#include "Config.h"
#include "Pin.h"

/** @brief Device-specific definitions for the ATmega328P. */
namespace atmega328p
{
    /** @brief Clock source and prescaler definitions. */
    namespace clock
    {
        /** @brief Clock or interrupt source identifiers. */
        enum class Source : uint8_t
        {
            ExternalClock = 0,                              ///< External clock on XTAL1.
            LowPowerCrystal = ExternalClock + 1,            ///< Low-power crystal oscillator.
            FullSwingCrystal = LowPowerCrystal + 1,         ///< Full-swing crystal oscillator.
            LowFrequencyCrystal = FullSwingCrystal + 1,     ///< Low-frequency crystal oscillator.
            InternalCalibratedRC = LowFrequencyCrystal + 1, ///< Calibrated internal RC oscillator.
            Internal128kHzRC = InternalCalibratedRC + 1,    ///< Internal nominal 128 kHz RC oscillator.
        };

        /** @brief Clock domains. */
        enum class Domain : uint8_t
        {
            CPU = 0,         ///< CPU clock domain.
            IO = CPU + 1,    ///< I/O peripheral clock domain.
            Flash = IO + 1,  ///< Flash memory clock domain.
            ADC = Flash + 1, ///< ADC clock domain.
        };

        /** @brief Clock-source fuse encodings. */
        enum class CKSELCode : uint8_t
        {
            ExternalClock = 0x00,              ///< 0x00 - External clock.
            Reserved = 0x01,                   ///< 0x01 - Reserved clock selection.
            InternalCalibratedRC = 0x02,       ///< 0x02 - Calibrated internal RC oscillator.
            Internal128kHzRC = 0x03,           ///< 0x03 - Internal 128 kHz RC oscillator.
            LowFrequencyCrystalMinimum = 0x04, ///< 0x04 - Low-frequency crystal selection, lower code.
            LowFrequencyCrystalMaximum = 0x05, ///< 0x05 - Low-frequency crystal selection, upper code.
            FullSwingCrystalMinimum = 0x06,    ///< 0x06 - Full-swing crystal selection, lower code.
            FullSwingCrystalMaximum = 0x07,    ///< 0x07 - Full-swing crystal selection, upper code.
            LowPowerCrystalMinimum = 0x08,     ///< 0x08 - Low-power crystal selection, lower code.
            LowPowerCrystalMaximum = 0x0F,     ///< 0x0F - Low-power crystal selection, upper code.
        };

        /** @brief Startup-time fuse encodings. */
        enum class SUTCode : uint8_t
        {
            SUT00 = 0, ///< 0 - Startup time encoding 00.
            SUT01 = 1, ///< 1 - Startup time encoding 01.
            SUT10 = 2, ///< 2 - Startup time encoding 10.
            SUT11 = 3, ///< 3 - Startup time encoding 11.
        };

        /** @brief Clock prescaler selections. */
        enum class Prescaler : uint16_t
        {
            Divide1 = 1,     ///< 1 - Divide system clock by 1.
            Divide2 = 2,     ///< 2 - Divide system clock by 2.
            Divide4 = 4,     ///< 4 - Divide system clock by 4.
            Divide8 = 8,     ///< 8 - Divide system clock by 8.
            Divide16 = 16,   ///< 16 - Divide system clock by 16.
            Divide32 = 32,   ///< 32 - Divide system clock by 32.
            Divide64 = 64,   ///< 64 - Divide system clock by 64.
            Divide128 = 128, ///< 128 - Divide system clock by 128.
            Divide256 = 256, ///< 256 - Divide system clock by 256.
        };

        enum : uint32_t
        {
            internal_calibrated_rc_hz = 8000000UL,                           ///< Internal calibrated RC (Hz).
            internal_rc_nominal_hz = 8000000UL,                              ///< Internal RC nominal (Hz).
            family_datasheet_internal_rc_user_calibrated_min_hz = 7300000UL, ///< Family datasheet internal RC user calibrated min (Hz).
            family_datasheet_internal_rc_user_calibrated_max_hz = 8100000UL, ///< Family datasheet internal RC user calibrated max (Hz).
            internal_128khz_rc_hz = 128000UL,                                ///< Internal 128khz RC (Hz).
            timer2_async_crystal_hz = 32768UL,                               ///< Timer2 async crystal (Hz).
            factory_default_oscillator_hz = 8000000UL,                       ///< Factory default oscillator (Hz).
            factory_default_cpu_hz = 1000000UL,                              ///< Factory default CPU (Hz).
        };

        enum : uint16_t
        {
            factory_default_divisor = 8U,                      ///< Factory default divisor.
            system_prescaler_count = 9U,                       ///< Number of system prescaler.
            startup_delay_from_reset_cycles = 19U,             ///< Startup delay from reset (clock cycles).
            factory_default_startup_additional_delay_ms = 65U, ///< Factory default startup additional delay (ms).
            rstdisbl_sut00_additional_delay_ms = 4U,           ///< RSTDISBL sut00 additional delay (ms).
            startup_delay_corrected_from_14_to_19_ck = 1,      ///< Startup delay corrected from 14 to 19 ck.
        };

        enum : uint32_t
        {
            standard_max_cpu_hz_at_1v8 = 4000000UL,    ///< Standard max CPU hz at 1v8.
            standard_max_cpu_hz_at_2v7 = 10000000UL,   ///< Standard max CPU hz at 2v7.
            standard_max_cpu_hz_at_4v5 = 20000000UL,   ///< Standard max CPU hz at 4v5.
            automotive_max_cpu_hz_at_2v7 = 8000000UL,  ///< Automotive max CPU hz at 2v7.
            automotive_max_cpu_hz_at_4v5 = 16000000UL, ///< Automotive max CPU hz at 4v5.
        };

        enum : uint8_t
        {
            timer2_tosc1_pin_value = 0x06U,                               ///< Timer2 tosc1 logical pin encoding.
            timer2_tosc2_pin_value = 0x07U,                               ///< Timer2 tosc2 logical pin encoding.
            clock_output_pin_value = 0x00U,                               ///< Clock output logical pin encoding.
            internal_rc_frequency_depends_on_voltage_and_temperature = 1, ///< Internal RC frequency depends on voltage and temperature.
            internal_rc_factory_calibration_provided = 1,                 ///< Internal RC factory calibration provided.
            internal_rc_user_calibration_supported = 1,                   ///< Internal RC user calibration supported.
            osccal_width_bits = 7U,                                       ///< OSCCAL width width (bits).
            osccal_max_value = 0x7FU,                                     ///< OSCCAL max value.
            internal_rc_factory_accuracy_percent = 10U,                   ///< Internal RC factory accuracy percent.
            internal_rc_user_accuracy_percent = 1U,                       ///< Internal RC user accuracy percent.
        };

        enum : uint16_t
        {
            internal_rc_factory_calibration_vcc_mv = 3000U, ///< Internal RC factory calibration VCC (mV).
            internal_rc_user_min_vcc_mv = 1800U,            ///< Internal RC user min VCC (mV).
            internal_rc_user_max_vcc_mv = 5500U,            ///< Internal RC user max VCC (mV).
            internal_128khz_rc_nominal_vcc_mv = 3000U,      ///< Internal 128khz RC nominal VCC (mV).
        };

        enum : int16_t
        {
            internal_rc_factory_calibration_temperature_c = 25, ///< Internal RC factory calibration temperature c.
            internal_rc_user_min_temperature_c = -40,           ///< Internal RC user min temperature c.
            internal_rc_user_max_temperature_c = 85,            ///< Internal RC user max temperature c.
            internal_128khz_rc_nominal_temperature_c = 25,      ///< Internal 128khz RC nominal temperature c.
        };
    }
}

#endif

/**
 * @file Electrical.h
 * @brief Electrical limits and operating-grade profiles.
 */

#ifndef ATMEGA328P_DEFINITIONS_ELECTRICAL_H
#define ATMEGA328P_DEFINITIONS_ELECTRICAL_H

#include <stdint.h>
#include "Config.h"

/** @brief Device-specific definitions for the ATmega328P. */
namespace atmega328p
{
    /** @brief Electrical characteristics of the ATmega328P. */
    namespace electrical
    {
        /** @brief Supported operating grades. */
        enum class Grade : uint8_t
        {
            Unspecified = 0,                     ///< No operating grade selected.
            Industrial85C = Unspecified + 1,     ///< Industrial grade, up to 85 C.
            Industrial105C = Industrial85C + 1,  ///< Industrial grade, up to 105 C.
            Automotive125C = Industrial105C + 1, ///< Automotive grade, up to 125 C.
        };

        enum : int16_t
        {
            absolute_temperature_min_c = -55, ///< Absolute temperature min (degrees C).
            absolute_temperature_max_c = 125, ///< Absolute temperature max (degrees C).
            storage_temperature_min_c = -65,  ///< Storage temperature min (degrees C).
            storage_temperature_max_c = 150,  ///< Storage temperature max (degrees C).
        };

        enum : uint16_t
        {
            absolute_max_voltage_mv = 6000,        ///< Absolute max voltage (mV).
            absolute_max_io_pin_current_ma = 40,   ///< Absolute max I/O pin current (mA).
            absolute_max_vcc_gnd_current_ma = 200, ///< Absolute max VCC gnd current (mA).
            absolute_max_current_per_port_ma = 30, ///< Absolute max current per port (mA).
            io_test_current_at_5v_ma = 20,         ///< I/O test current at 5v (mA).
            io_test_current_at_3v_ma = 10,         ///< I/O test current at 3v (mA).
            io_sink_group_max_current_ma = 100,    ///< I/O sink group max current (mA).
            io_source_group_max_current_ma = 150,  ///< I/O source group max current (mA).
            avcc_max_difference_from_vcc_mv = 300, ///< AVCC max difference from VCC (mV).
            internal_bandgap_min_mv = 1000,        ///< Internal bandgap min (mV).
            internal_bandgap_typical_mv = 1100,    ///< Internal bandgap typical (mV).
            internal_bandgap_max_mv = 1200,        ///< Internal bandgap max (mV).
            io_pullup_min_kohm = 20,               ///< I/O pullup min (kOhm).
            io_pullup_max_kohm = 50,               ///< I/O pullup max (kOhm).
            reset_pullup_min_kohm = 30,            ///< Reset pullup min (kOhm).
            reset_pullup_max_kohm = 60,            ///< Reset pullup max (kOhm).
        };

        enum : uint8_t
        {
            absolute_max_current_is_not_a_design_target = 1, ///< Absolute max current is not a design target.
        };

        /** @brief Industrial grade up to 85 degrees Celsius. */
        namespace industrial_85c
        {
            enum : uint8_t
            {
                available = 1, ///< Operating profile has defined limits.
            };
            enum : uint16_t
            {
                min_voltage_mv = 1800, ///< Min voltage (mV).
                max_voltage_mv = 5500, ///< Max voltage (mV).
            };
            enum : int16_t
            {
                min_temperature_c = -40, ///< Min temperature (degrees C).
                max_temperature_c = 85,  ///< Max temperature (degrees C).
            };
            enum : uint32_t
            {
                max_clock_hz_at_1v8 = 4000000UL,  ///< Max clock hz at 1v8.
                max_clock_hz_at_2v7 = 10000000UL, ///< Max clock hz at 2v7.
                max_clock_hz_at_4v5 = 20000000UL, ///< Max clock hz at 4v5.
            };
        }

        /** @brief Industrial grade up to 105 degrees Celsius. */
        namespace industrial_105c
        {
            enum : uint8_t
            {
                available = 1, ///< Operating profile has defined limits.
            };
            enum : uint16_t
            {
                min_voltage_mv = 1800, ///< Min voltage (mV).
                max_voltage_mv = 5500, ///< Max voltage (mV).
            };
            enum : int16_t
            {
                min_temperature_c = -40, ///< Min temperature (degrees C).
                max_temperature_c = 105, ///< Max temperature (degrees C).
            };
            enum : uint32_t
            {
                max_clock_hz_at_1v8 = 4000000UL,  ///< Max clock hz at 1v8.
                max_clock_hz_at_2v7 = 10000000UL, ///< Max clock hz at 2v7.
                max_clock_hz_at_4v5 = 20000000UL, ///< Max clock hz at 4v5.
            };
        }

        /** @brief Automotive grade up to 125 degrees Celsius. */
        namespace automotive_125c
        {
            enum : uint8_t
            {
                available = 1, ///< Operating profile has defined limits.
            };
            enum : uint16_t
            {
                min_voltage_mv = 2700, ///< Min voltage (mV).
                max_voltage_mv = 5500, ///< Max voltage (mV).
            };
            enum : int16_t
            {
                min_temperature_c = -40, ///< Min temperature (degrees C).
                max_temperature_c = 125, ///< Max temperature (degrees C).
            };
            enum : uint32_t
            {
                max_clock_hz_at_2v7 = 8000000UL,  ///< Max clock hz at 2v7.
                max_clock_hz_at_4v5 = 16000000UL, ///< Max clock hz at 4v5.
            };
        }

        /** @brief Used when no operating grade has been selected. */
        namespace unspecified
        {
            enum : uint8_t
            {
                available = 0, ///< Operating profile has defined limits.
            };
            enum : uint16_t
            {
                min_voltage_mv = 0, ///< Min voltage (mV).
                max_voltage_mv = 0, ///< Max voltage (mV).
            };
            enum : int16_t
            {
                min_temperature_c = 0, ///< Min temperature (degrees C).
                max_temperature_c = 0, ///< Max temperature (degrees C).
            };
            enum : uint32_t
            {
                max_clock_hz_at_1v8 = 0, ///< Max clock hz at 1v8.
                max_clock_hz_at_2v7 = 0, ///< Max clock hz at 2v7.
                max_clock_hz_at_4v5 = 0, ///< Max clock hz at 4v5.
            };
        }

#if defined(MCU_GRADE_INDUSTRIAL_85C)
        namespace selected = industrial_85c;
        static const Grade selected_grade = Grade::Industrial85C;
#elif defined(MCU_GRADE_INDUSTRIAL_105C)
        namespace selected = industrial_105c;
        static const Grade selected_grade = Grade::Industrial105C;
#elif defined(MCU_GRADE_AUTOMOTIVE_125C)
        namespace selected = automotive_125c;
        static const Grade selected_grade = Grade::Automotive125C;
#else
        namespace selected = unspecified;
        static const Grade selected_grade = Grade::Unspecified;
#endif

        /** @brief Datasheet pin groups used for aggregate current limits. */
        namespace current_group
        {
            enum : uint32_t
            {
                sink_1 = 0x00003F00UL,   ///< Sink 1 pin-group bitmask.
                sink_2 = 0x007000FFUL,   ///< Sink 2 pin-group bitmask.
                sink_3 = 0x000F8000UL,   ///< Sink 3 pin-group bitmask.
                source_1 = 0x000FBF00UL, ///< Source 1 pin-group bitmask.
                source_2 = 0x007000FFUL, ///< Source 2 pin-group bitmask.
            };
        }
    }
}

#endif

/**
 * @file Reset.h
 * @brief Reset sources and brown-out characteristics.
 */

#ifndef ATMEGA328P_DEFINITIONS_RESET_H
#define ATMEGA328P_DEFINITIONS_RESET_H

#include <stdint.h>
#include "Config.h"

/** @brief Device-specific definitions for the ATmega328P. */
namespace atmega328p
{
    /** @brief Reset and brown-out definitions. */
    namespace reset
    {
        /** @brief Reset source flags. */
        enum Cause : uint8_t
        {
            PowerOn = 0x01,  ///< 0x01 - Power-on reset.
            External = 0x02, ///< 0x02 - External RESET pin asserted.
            BrownOut = 0x04, ///< 0x04 - Brown-out detector triggered.
            Watchdog = 0x08, ///< 0x08 - Watchdog reset.
        };

        /** @brief Brown-out fuse encodings. */
        /** @brief Reset sources implemented by the device. */
        enum : uint8_t
        {
            has_power_on_reset = 1,                       ///< Power on reset available.
            has_external_reset = 1,                       ///< External reset available.
            has_brown_out_reset = 1,                      ///< Brown out reset available.
            has_watchdog_reset = 1,                       ///< Watchdog reset available.
            family_bod_code_110_is_1v8 = 1,               ///< Family BOD code 110 is 1v8.
            automotive_bod_code_110_level_documented = 0, ///< Automotive BOD code 110 level documented.
        };

        /** @brief Brown-out fuse threshold encodings. */
        enum class BrownOutFuseCode : uint8_t
        {
            Disabled = 0x07,    ///< 0x07 - Brown-out detection disabled.
            Code110 = 0x06,     ///< 0x06 - 1.8 V level in family specifications; verify grade.
            Code101 = 0x05,     ///< 0x05 - 2.7 V nominal threshold.
            Code100 = 0x04,     ///< 0x04 - 4.3 V nominal threshold.
            Reserved011 = 0x03, ///< 0x03 - Reserved encoding.
            Reserved010 = 0x02, ///< 0x02 - Reserved encoding.
            Reserved001 = 0x01, ///< 0x01 - Reserved encoding.
            Reserved000 = 0x00, ///< 0x00 - Reserved encoding.
        };

        enum : uint16_t
        {
            family_datasheet_brown_out_hysteresis_typical_mv = 50U, ///< Family datasheet brown out hysteresis typical (mV).
            family_datasheet_bod_code_110_typical_mv = 1800U,       ///< Family datasheet BOD code 110 typical (mV).
            family_datasheet_bod_code_110_min_mv = 1700U,           ///< Family datasheet BOD code 110 min (mV).
            family_datasheet_bod_code_110_max_mv = 2000U,           ///< Family datasheet BOD code 110 max (mV).
            brown_out_2v7_typical_mv = 2700U,                       ///< Brown out 2v7 typical (mV).
            brown_out_2v7_min_mv = 2500U,                           ///< Brown out 2v7 min (mV).
            brown_out_2v7_max_mv = 2900U,                           ///< Brown out 2v7 max (mV).
            brown_out_4v3_typical_mv = 4300U,                       ///< Brown out 4v3 typical (mV).
            brown_out_4v3_min_mv = 4100U,                           ///< Brown out 4v3 min (mV).
            brown_out_4v3_max_mv = 4500U,                           ///< Brown out 4v3 max (mV).
        };
    }
}

#endif

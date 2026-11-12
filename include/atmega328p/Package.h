/**
 * @file Package.h
 * @brief Package characteristics and selected physical package.
 */

#ifndef ATMEGA328P_DEFINITIONS_PACKAGE_H
#define ATMEGA328P_DEFINITIONS_PACKAGE_H

#include <stdint.h>
#include "Config.h"
#include "PackagePins.h"

/** @brief Device-specific definitions for the ATmega328P. */
namespace atmega328p
{
    /** @brief Physical package and terminal definitions. */
    namespace package
    {
        /** @brief Supported ATmega328P package types. */
        enum class Type : uint8_t
        {
            Unspecified = 0,          ///< No package selected.
            PDIP28 = Unspecified + 1, ///< 28-pin through-hole package.
            MLF28 = PDIP28 + 1,       ///< 28-pad leadless package.
            TQFP32 = MLF28 + 1,       ///< 32-pin quad flat package.
            MLF32 = TQFP32 + 1,       ///< 32-pad leadless package.
        };

        /** @brief MLF32 manufacturing styles with different land patterns. */
        enum class MLF32Style : uint8_t
        {
            Unspecified = 0,                     ///< Land-pattern style not selected.
            PunchSingulated = Unspecified + 1,   ///< Punch-singulated leadless package.
            SawSingulated = PunchSingulated + 1, ///< Saw-singulated leadless package.
        };

        /** @brief PDIP-28 package characteristics. */
        namespace pdip28
        {
            enum : uint8_t
            {
                type_id = 1,              ///< Selected package type code.
                pin_count = 28,           ///< Physical terminal count.
                adc_channel_count = 6,    ///< External ADC channels on this package.
                has_adc6 = 0,             ///< ADC6 is bonded out.
                has_adc7 = 0,             ///< ADC7 is bonded out.
                has_exposed_pad = 0,      ///< Package has an exposed pad.
                exposed_pad_grounded = 0, ///< Exposed pad connects to ground.
            };
            enum : uint32_t
            {
                body_width_min_um = 7620,          ///< Body width min (micrometres).
                body_width_nominal_um = 0,         ///< Body width nominal (micrometres).
                body_width_max_um = 8255,          ///< Body width max (micrometres).
                overall_height_min_um = 0,         ///< Overall height min (micrometres).
                overall_height_nominal_um = 0,     ///< Overall height nominal (micrometres).
                overall_height_max_um = 4572,      ///< Overall height max (micrometres).
                exposed_pad_width_min_um = 0,      ///< Exposed pad width min (micrometres).
                exposed_pad_width_nominal_um = 0,  ///< Exposed pad width nominal (micrometres).
                exposed_pad_width_max_um = 0,      ///< Exposed pad width max (micrometres).
                exposed_pad_length_min_um = 0,     ///< Exposed pad length min (micrometres).
                exposed_pad_length_nominal_um = 0, ///< Exposed pad length nominal (micrometres).
                exposed_pad_length_max_um = 0,     ///< Exposed pad length max (micrometres).
                land_pad_width_um = 0,             ///< Land pad width (micrometres).
                land_pad_length_um = 0,            ///< Land pad length (micrometres).
                lead_pitch_um = 2540,              ///< Lead pitch (micrometres).
            };
        }

        /** @brief MLF-28 package characteristics. */
        namespace mlf28
        {
            enum : uint8_t
            {
                type_id = 2,              ///< Selected package type code.
                pin_count = 28,           ///< Physical terminal count.
                adc_channel_count = 6,    ///< External ADC channels on this package.
                has_adc6 = 0,             ///< ADC6 is bonded out.
                has_adc7 = 0,             ///< ADC7 is bonded out.
                has_exposed_pad = 1,      ///< Package has an exposed pad.
                exposed_pad_grounded = 1, ///< Exposed pad connects to ground.
            };
            enum : uint32_t
            {
                body_width_min_um = 3950,             ///< Body width min (micrometres).
                body_width_nominal_um = 4000,         ///< Body width nominal (micrometres).
                body_width_max_um = 4050,             ///< Body width max (micrometres).
                overall_height_min_um = 800,          ///< Overall height min (micrometres).
                overall_height_nominal_um = 900,      ///< Overall height nominal (micrometres).
                overall_height_max_um = 1000,         ///< Overall height max (micrometres).
                exposed_pad_width_min_um = 2350,      ///< Exposed pad width min (micrometres).
                exposed_pad_width_nominal_um = 2400,  ///< Exposed pad width nominal (micrometres).
                exposed_pad_width_max_um = 2450,      ///< Exposed pad width max (micrometres).
                exposed_pad_length_min_um = 2350,     ///< Exposed pad length min (micrometres).
                exposed_pad_length_nominal_um = 2400, ///< Exposed pad length nominal (micrometres).
                exposed_pad_length_max_um = 2450,     ///< Exposed pad length max (micrometres).
                land_pad_width_um = 0,                ///< Land pad width (micrometres).
                land_pad_length_um = 0,               ///< Land pad length (micrometres).
                lead_pitch_um = 450,                  ///< Lead pitch (micrometres).
            };
        }

        /** @brief TQFP-32 package characteristics. */
        namespace tqfp32
        {
            enum : uint8_t
            {
                type_id = 3,              ///< Selected package type code.
                pin_count = 32,           ///< Physical terminal count.
                adc_channel_count = 8,    ///< External ADC channels on this package.
                has_adc6 = 1,             ///< ADC6 is bonded out.
                has_adc7 = 1,             ///< ADC7 is bonded out.
                has_exposed_pad = 0,      ///< Package has an exposed pad.
                exposed_pad_grounded = 0, ///< Exposed pad connects to ground.
            };
            enum : uint32_t
            {
                body_width_min_um = 6900,          ///< Body width min (micrometres).
                body_width_nominal_um = 7000,      ///< Body width nominal (micrometres).
                body_width_max_um = 7100,          ///< Body width max (micrometres).
                overall_height_min_um = 1000,      ///< Overall height min (micrometres).
                overall_height_max_um = 1200,      ///< Overall height max (micrometres).
                exposed_pad_width_min_um = 0,      ///< Exposed pad width min (micrometres).
                exposed_pad_width_nominal_um = 0,  ///< Exposed pad width nominal (micrometres).
                exposed_pad_width_max_um = 0,      ///< Exposed pad width max (micrometres).
                exposed_pad_length_min_um = 0,     ///< Exposed pad length min (micrometres).
                exposed_pad_length_nominal_um = 0, ///< Exposed pad length nominal (micrometres).
                exposed_pad_length_max_um = 0,     ///< Exposed pad length max (micrometres).
                land_pad_width_um = 0,             ///< Land pad width (micrometres).
                land_pad_length_um = 0,            ///< Land pad length (micrometres).
                lead_pitch_um = 800,               ///< Lead pitch (micrometres).
            };
        }

        /** @brief MLF-32 package characteristics. */
        namespace mlf32
        {
            enum : uint8_t
            {
                type_id = 4,              ///< Selected package type code.
                pin_count = 32,           ///< Physical terminal count.
                adc_channel_count = 8,    ///< External ADC channels on this package.
                has_adc6 = 1,             ///< ADC6 is bonded out.
                has_adc7 = 1,             ///< ADC7 is bonded out.
                has_exposed_pad = 1,      ///< Package has an exposed pad.
                exposed_pad_grounded = 1, ///< Exposed pad connects to ground.
            };
            enum : uint32_t
            {
                body_width_min_um = 4900,     ///< Body width min (micrometres).
                body_width_nominal_um = 5000, ///< Body width nominal (micrometres).
                body_width_max_um = 5100,     ///< Body width max (micrometres).
                overall_height_min_um = 800,  ///< Overall height min (micrometres).
                lead_pitch_um = 500,          ///< Lead pitch (micrometres).
            };
#if defined(MCU_MLF32_PUNCH)
            enum : uint32_t
            {
                overall_height_nominal_um = 900,      ///< Overall height nominal (micrometres).
                overall_height_max_um = 1000,         ///< Overall height max (micrometres).
                exposed_pad_width_min_um = 2950,      ///< Exposed pad width min (micrometres).
                exposed_pad_width_nominal_um = 3100,  ///< Exposed pad width nominal (micrometres).
                exposed_pad_width_max_um = 3250,      ///< Exposed pad width max (micrometres).
                exposed_pad_length_min_um = 2950,     ///< Exposed pad length min (micrometres).
                exposed_pad_length_nominal_um = 3100, ///< Exposed pad length nominal (micrometres).
                exposed_pad_length_max_um = 3250,     ///< Exposed pad length max (micrometres).
                land_pad_width_um = 3250,             ///< Land pad width (micrometres).
                land_pad_length_um = 3250,            ///< Land pad length (micrometres).
            };
#elif defined(MCU_MLF32_SAWN)
            enum : uint32_t
            {
                overall_height_nominal_um = 850,      ///< Overall height nominal (micrometres).
                overall_height_max_um = 900,          ///< Overall height max (micrometres).
                exposed_pad_width_min_um = 3000,      ///< Exposed pad width min (micrometres).
                exposed_pad_width_nominal_um = 3100,  ///< Exposed pad width nominal (micrometres).
                exposed_pad_width_max_um = 3200,      ///< Exposed pad width max (micrometres).
                exposed_pad_length_min_um = 3000,     ///< Exposed pad length min (micrometres).
                exposed_pad_length_nominal_um = 3100, ///< Exposed pad length nominal (micrometres).
                exposed_pad_length_max_um = 3200,     ///< Exposed pad length max (micrometres).
                land_pad_width_um = 3200,             ///< Land pad width (micrometres).
                land_pad_length_um = 3200,            ///< Land pad length (micrometres).
            };
#else
            enum : uint32_t
            {
                overall_height_nominal_um = 0,        ///< Overall height nominal (micrometres).
                overall_height_max_um = 1000,         ///< Overall height max (micrometres).
                exposed_pad_width_min_um = 2950,      ///< Exposed pad width min (micrometres).
                exposed_pad_width_nominal_um = 3100,  ///< Exposed pad width nominal (micrometres).
                exposed_pad_width_max_um = 3250,      ///< Exposed pad width max (micrometres).
                exposed_pad_length_min_um = 2950,     ///< Exposed pad length min (micrometres).
                exposed_pad_length_nominal_um = 3100, ///< Exposed pad length nominal (micrometres).
                exposed_pad_length_max_um = 3250,     ///< Exposed pad length max (micrometres).
                land_pad_width_um = 0,                ///< Land pad width (micrometres).
                land_pad_length_um = 0,               ///< Land pad length (micrometres).
            };
#endif
        }

        /** @brief Fallback characteristics when no package is selected. */
        namespace unspecified
        {
            enum : uint8_t
            {
                type_id = 0,              ///< Selected package type code.
                pin_count = 0,            ///< Physical terminal count.
                adc_channel_count = 0,    ///< External ADC channels on this package.
                has_adc6 = 0,             ///< ADC6 is bonded out.
                has_adc7 = 0,             ///< ADC7 is bonded out.
                has_exposed_pad = 0,      ///< Package has an exposed pad.
                exposed_pad_grounded = 0, ///< Exposed pad connects to ground.
            };
        }

        enum : uint8_t
        {
            supported_package_count = 4, ///< Supported package count.
        };

#if defined(MCU_PACKAGE_PDIP28)
        namespace selected = pdip28;
        static const Type selected_type = Type::PDIP28;
#elif defined(MCU_PACKAGE_MLF28)
        namespace selected = mlf28;
        static const Type selected_type = Type::MLF28;
#elif defined(MCU_PACKAGE_TQFP32)
        namespace selected = tqfp32;
        static const Type selected_type = Type::TQFP32;
#elif defined(MCU_PACKAGE_MLF32)
        namespace selected = mlf32;
        static const Type selected_type = Type::MLF32;
#else
        namespace selected = unspecified;
        static const Type selected_type = Type::Unspecified;
#endif

#if defined(MCU_MLF32_PUNCH)
        static const MLF32Style selected_mlf32_style = MLF32Style::PunchSingulated;
#elif defined(MCU_MLF32_SAWN)
        static const MLF32Style selected_mlf32_style = MLF32Style::SawSingulated;
#else
        static const MLF32Style selected_mlf32_style = MLF32Style::Unspecified;
#endif
    }
}

#endif

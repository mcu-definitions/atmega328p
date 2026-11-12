/**
 * @file ExternalInterrupts.h
 * @brief External interrupt lines and pin-change groups.
 */

#ifndef ATMEGA328P_DEFINITIONS_EXTERNAL_INTERRUPTS_H
#define ATMEGA328P_DEFINITIONS_EXTERNAL_INTERRUPTS_H

#include <stdint.h>
#include "Config.h"
#include "Pin.h"

/** @brief Device-specific definitions for the ATmega328P. */
namespace atmega328p
{
    /** @brief External interrupt and pin-change definitions. */
    namespace external_interrupts
    {
        /** @brief External interrupt identifiers. */
        enum class Line : uint8_t
        {
            INT0 = 0, ///< 0 - External interrupt 0.
            INT1 = 1, ///< 1 - External interrupt 1.
        };

        /** @brief External interrupt trigger modes. */
        enum class Trigger : uint8_t
        {
            LowLevel = 0,                       ///< Interrupt while input is low.
            AnyLogicalChange = LowLevel + 1,    ///< Interrupt on either transition.
            FallingEdge = AnyLogicalChange + 1, ///< Interrupt on high-to-low transition.
            RisingEdge = FallingEdge + 1,       ///< Interrupt on low-to-high transition.
        };

        /** @brief Logical pin identifiers for INT0 and INT1. */
        enum class LinePin : uint8_t
        {
            INT0 = 0x22, ///< 0x22 - INT0 input on PD2.
            INT1 = 0x23, ///< 0x23 - INT1 input on PD3.
        };

        /** @brief Pin-change interrupt groups. */
        enum class PinChangeGroup : uint8_t
        {
            PCINT0 = 0,          ///< Pin-change interrupt source 0.
            PCINT1 = PCINT0 + 1, ///< Pin-change interrupt source 1.
            PCINT2 = PCINT1 + 1, ///< Pin-change interrupt source 2.
        };

        enum : uint8_t
        {
            line_count = 2U,                  ///< Number of line.
            pin_change_group_count = 3U,      ///< Number of pin change group.
            pcint0_first = 0U,                ///< Pcint0 first.
            pcint0_last = 7U,                 ///< Pcint0 last.
            pcint1_first = 8U,                ///< Pcint1 first.
            pcint1_last = 14U,                ///< Pcint1 last.
            pcint2_first = 16U,               ///< Pcint2 first.
            pcint2_last = 23U,                ///< Pcint2 last.
            reserved_pin_change_number = 15U, ///< Reserved pin change number.
        };
    }
}

#endif

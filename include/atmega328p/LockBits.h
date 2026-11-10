/**
 * @file LockBits.h
 * @brief Flash and boot lock-bit definitions.
 */

#ifndef ATMEGA328P_DEFINITIONS_LOCK_BITS_H
#define ATMEGA328P_DEFINITIONS_LOCK_BITS_H

#include <stdint.h>
#include "Config.h"

/** @brief Device-specific definitions for the ATmega328P. */
namespace atmega328p
{
    /** @brief Lock-bit definitions. */
    namespace lock_bits
    {
        /** @brief Flash and boot lock-bit masks. */
        enum Mask : uint8_t
        {
            lb1 = 0x01,   ///< 0x01 - Lock bit lb1; programmed low.
            lb2 = 0x02,   ///< 0x02 - Lock bit lb2; programmed low.
            blb01 = 0x04, ///< 0x04 - Lock bit blb01; programmed low.
            blb02 = 0x08, ///< 0x08 - Lock bit blb02; programmed low.
            blb11 = 0x10, ///< 0x10 - Lock bit blb11; programmed low.
            blb12 = 0x20, ///< 0x20 - Lock bit blb12; programmed low.
        };

        enum : uint8_t
        {
            count = 6U,                        ///< Count.
            default_value = 0xFFU,             ///< Default value.
            programmed_value_is_zero = 1,      ///< Programmed value is zero.
            chip_erase_restores_lock_bits = 1, ///< Chip erase restores lock width (bits).
        };
    }
}

#endif

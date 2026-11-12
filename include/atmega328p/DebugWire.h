/**
 * @file DebugWire.h
 * @brief debugWIRE pin and fuse characteristics.
 */

#ifndef ATMEGA328P_DEFINITIONS_DEBUG_WIRE_H
#define ATMEGA328P_DEFINITIONS_DEBUG_WIRE_H

#include <stdint.h>
#include "Config.h"

/** @brief Device-specific definitions for the ATmega328P. */
namespace atmega328p
{
    /** @brief debugWIRE characteristics. */
    namespace debugwire
    {
        enum : uint8_t
        {
            data_reset_pin_value = 0x16U,     ///< Data reset logical pin encoding.
            enabled_by_dwen_fuse = 1,         ///< Enabled by DWEN fuse.
            shares_external_reset_pin = 1,    ///< Shares external reset pin.
            requires_compatible_debugger = 1, ///< Requires compatible debugger.
        };
    }
}

#endif

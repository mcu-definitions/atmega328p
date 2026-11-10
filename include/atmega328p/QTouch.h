/**
 * @file QTouch.h
 * @brief QTouch software-support characteristics.
 */

#ifndef ATMEGA328P_DEFINITIONS_QTOUCH_H
#define ATMEGA328P_DEFINITIONS_QTOUCH_H

#include <stdint.h>

#include "Config.h"

/** @brief Device-specific definitions for the ATmega328P. */
namespace atmega328p
{
    /** @brief QTouch support characteristics. */
    namespace qtouch
    {
        enum : uint8_t
        {
            supported = 1,                     ///< Supported.
            has_dedicated_hardware = 0,        ///< Dedicated hardware available.
            uses_general_purpose_io = 1,       ///< Uses general purpose I/O.
            requires_software_acquisition = 1, ///< Requires software acquisition.
        };
    }
}

#endif

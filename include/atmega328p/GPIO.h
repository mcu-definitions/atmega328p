/**
 * @file GPIO.h
 * @brief GPIO port characteristics and hardware limitations.
 */

#ifndef ATMEGA328P_DEFINITIONS_GPIO_H
#define ATMEGA328P_DEFINITIONS_GPIO_H

#include <stdint.h>
#include "Pin.h"

/** @brief Device-specific definitions for the ATmega328P. */
namespace atmega328p
{
    /** @brief GPIO characteristics of the ATmega328P. */
    namespace gpio
    {
        enum : uint8_t
        {
            port_count = 3,                             ///< Number of GPIO ports.
            has_internal_pullups = 1,                   ///< Internal pullups available.
            pullups_selectable_per_pin = 1,             ///< Pullups selectable per pin.
            has_global_pullup_disable = 1,              ///< Global pullup disable available.
            ports_tristated_during_reset = 1,           ///< Ports tristated during reset.
            has_digital_input_disable_adc0_to_adc5 = 1, ///< Digital input disable adc0 to adc5 available.
            has_digital_input_disable_ain0_ain1 = 1,    ///< Digital input disable ain0 ain1 available.
            has_adc6_adc7_digital_input_buffer = 0,     ///< Adc6 adc7 digital input buffer available.
            pc6_requires_rstdisbl = 1,                  ///< PC6 requires RSTDISBL.
            pc6_is_reset_by_default = 1,                ///< PC6 is reset by default.
            pb6_pb7_may_be_used_by_system_clock = 1,    ///< PB6 PB7 may be used by system clock.
        };

        typedef pin::Port Port;

        /** @brief Port widths and bit masks. */
        namespace port
        {
            enum : uint8_t
            {
                b_width = 8,   ///< B width.
                c_width = 7,   ///< C width.
                d_width = 8,   ///< D width.
                b_mask = 0xFF, ///< B mask.
                c_mask = 0x7F, ///< C mask.
                d_mask = 0xFF, ///< D mask.
            };
        }
    }
}

#endif

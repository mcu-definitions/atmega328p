/**
 * @file GPIO.h
 * @brief GPIO port characteristics and register addresses.
 */

#ifndef ATMEGA328P_DEFINITIONS_GPIO_H
#define ATMEGA328P_DEFINITIONS_GPIO_H

#include <stdint.h>
#include "Pin.h"
#include "RegisterMap.h"

namespace atmega328p
{
    /** @brief GPIO characteristics. */
    namespace gpio
    {
        enum : uint8_t
        {
            port_count = 3,
            has_internal_pullups = 1,
            pullups_selectable_per_pin = 1,
            has_global_pullup_disable = 1,
            ports_tristated_during_reset = 1,
            has_adc_digital_input_disable = 1,
            has_digital_input_disable_adc0_to_adc5 = 1,
            has_digital_input_disable_ain0_ain1 = 1,
            has_adc6_adc7_digital_input_buffer = 0,
            pc6_requires_rstdisbl = 1,
            pc6_is_reset_by_default = 1,
            pb6_pb7_may_be_used_by_system_clock = 1
        };

        typedef pin::Port Port;

        /** @brief Port widths, valid masks and data-space addresses. */
        namespace port
        {
            enum : uint8_t
            {
                b_width = 8,
                c_width = 7,
                d_width = 8,
                b_mask = 0xFF,
                c_mask = 0x7F,
                d_mask = 0xFF
            };

            enum : uint16_t
            {
                b_input_register = register_map::PINB,
                b_direction_register = register_map::DDRB,
                b_output_register = register_map::PORTB,
                c_input_register = register_map::PINC,
                c_direction_register = register_map::DDRC,
                c_output_register = register_map::PORTC,
                d_input_register = register_map::PIND,
                d_direction_register = register_map::DDRD,
                d_output_register = register_map::PORTD
            };
        }
    }
}

#endif

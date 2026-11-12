/**
 * @file Device.h
 * @brief Hardware resources, capabilities and device signature.
 */

#ifndef ATMEGA328P_DEFINITIONS_DEVICE_H
#define ATMEGA328P_DEFINITIONS_DEVICE_H

#include <stdint.h>
#include "Config.h"

namespace atmega328p
{
    /** @brief Device information. */
    namespace device
    {
        /** @brief Hardware resource counts. */
        enum : uint8_t
        {
            programmable_io_line_count = 23,
            gpio_line_count = 23,
            gpio_line_count_default = 22,
            gpio_line_count_with_pc6_as_reset = 22,
            gpio_line_count_with_pc6_as_gpio = 23,
            timer_count = 3,
            pwm_channel_count = 6,
            adc_max_external_channel_count = 8,
            adc_resolution_bits = 10,
            usart_count = 1,
            spi_count = 1,
            spi_capable_peripheral_count = 2,
            twi_count = 1,
            external_interrupt_count = 2,
            interrupt_vector_count = 26,
            pin_change_source_count = 23
        };

        /** @brief Peripheral availability flags. */
        enum : uint8_t
        {
            has_gpio = 1,
            has_adc = 1,
            has_pwm = 1,
            has_timer0 = 1,
            has_timer1 = 1,
            has_timer2 = 1,
            has_timer3 = 0,
            has_timer4 = 0,
            has_timer5 = 0,
            has_usart = 1,
            has_spi = 1,
            has_twi = 1,
            has_analog_comparator = 1,
            has_watchdog = 1,
            has_external_interrupts = 1,
            has_pin_change_interrupts = 1,
            has_debugwire = 1,
            has_jtag = 0,
            has_external_memory_interface = 0,
            has_self_programmable_flash = 1
        };

        /** @brief Device signature and identification. */
        enum : uint16_t
        {
            signature_byte_0 = 0x1E,
            signature_byte_1 = 0x95,
            signature_byte_2 = 0x0F
        };
    }
}

#endif

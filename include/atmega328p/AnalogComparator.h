/**
 * @file AnalogComparator.h
 * @brief Analog comparator inputs and operating modes.
 */

#ifndef ATMEGA328P_DEFINITIONS_ANALOG_COMPARATOR_H
#define ATMEGA328P_DEFINITIONS_ANALOG_COMPARATOR_H

#include <stdint.h>
#include "Config.h"
#include "Pin.h"

/** @brief Device-specific definitions for the ATmega328P. */
namespace atmega328p
{
    /** @brief Analog comparator definitions. */
    namespace analog_comparator
    {
        /** @brief Analog comparator interrupt modes. */
        enum class InterruptMode : uint8_t
        {
            Toggle = 0,      ///< 0 - Interrupt on output change.
            Reserved = 1,    ///< 1 - Reserved; do not select.
            FallingEdge = 2, ///< 2 - Interrupt on falling output edge.
            RisingEdge = 3,  ///< 3 - Interrupt on rising output edge.
        };

        enum : uint8_t
        {
            count = 1U,                        ///< Count.
            positive_input_pin_value = 0x26U,  ///< Positive input logical pin encoding.
            negative_input_pin_value = 0x27U,  ///< Negative input logical pin encoding.
            adc_mux_input_count = 8U,          ///< Number of adc mux input.
            has_internal_bandgap_input = 1,    ///< Internal bandgap input available.
            has_adc_mux_negative_input = 1,    ///< ADC mux negative input available.
            adc_mux_requires_adc_disabled = 1, ///< ADC mux requires ADC disabled.
            can_trigger_timer1_capture = 1,    ///< Can trigger timer1 capture.
            interrupt_mode_count = 3U,         ///< Number of interrupt mode.
        };
    }
}

#endif

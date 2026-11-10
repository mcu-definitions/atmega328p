/**
 * @file Pin.h
 * @brief Logical GPIO pin and port identifiers.
 */

#ifndef ATMEGA328P_DEFINITIONS_PIN_H
#define ATMEGA328P_DEFINITIONS_PIN_H

#include <stdint.h>
#include "Config.h"

/** @brief Device-specific definitions for the ATmega328P. */
namespace atmega328p
{
    /** @brief Logical pin and alternate-function definitions. */
    namespace pin
    {
        /** @brief GPIO port identifiers. */
        enum class Port : uint8_t
        {
            B = 0, ///< 0 - Port B.
            C = 1, ///< 1 - Port C.
            D = 2, ///< 2 - Port D.
        };

        /** @brief Logical pin identifiers, independent of package terminals. */
        enum class Pin : uint8_t
        {
            PB0 = 0x00, ///< 0x00 - Port B, bit 0.
            PB1 = 0x01, ///< 0x01 - Port B, bit 1.
            PB2 = 0x02, ///< 0x02 - Port B, bit 2.
            PB3 = 0x03, ///< 0x03 - Port B, bit 3.
            PB4 = 0x04, ///< 0x04 - Port B, bit 4.
            PB5 = 0x05, ///< 0x05 - Port B, bit 5.
            PB6 = 0x06, ///< 0x06 - Port B, bit 6.
            PB7 = 0x07, ///< 0x07 - Port B, bit 7.
            PC0 = 0x10, ///< 0x10 - Port C, bit 0.
            PC1 = 0x11, ///< 0x11 - Port C, bit 1.
            PC2 = 0x12, ///< 0x12 - Port C, bit 2.
            PC3 = 0x13, ///< 0x13 - Port C, bit 3.
            PC4 = 0x14, ///< 0x14 - Port C, bit 4.
            PC5 = 0x15, ///< 0x15 - Port C, bit 5.
            PC6 = 0x16, ///< 0x16 - Port C, bit 6. RESET by default.
            PD0 = 0x20, ///< 0x20 - Port D, bit 0.
            PD1 = 0x21, ///< 0x21 - Port D, bit 1.
            PD2 = 0x22, ///< 0x22 - Port D, bit 2.
            PD3 = 0x23, ///< 0x23 - Port D, bit 3.
            PD4 = 0x24, ///< 0x24 - Port D, bit 4.
            PD5 = 0x25, ///< 0x25 - Port D, bit 5.
            PD6 = 0x26, ///< 0x26 - Port D, bit 6.
            PD7 = 0x27, ///< 0x27 - Port D, bit 7.
        };

        enum : uint8_t
        {
            port_shift = 4,     ///< Port shift count.
            port_mask = 0xF0,   ///< Port mask.
            bit_mask = 0x0F,    ///< Bit mask.
            port_b_code = 0,    ///< Port b code.
            port_c_code = 1,    ///< Port c code.
            port_d_code = 2,    ///< Port d code.
            port_b_width = 8,   ///< Port b width.
            port_c_width = 7,   ///< Port c width.
            port_d_width = 8,   ///< Port d width.
            port_b_mask = 0xFF, ///< Port b mask.
            port_c_mask = 0x7F, ///< Port c mask.
            port_d_mask = 0xFF, ///< Port d mask.
            pin_count = 23,     ///< Number of pin.
        };
    }

    using pin::Pin;
    using pin::Port;
}

#endif

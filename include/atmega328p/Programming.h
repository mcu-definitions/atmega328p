/**
 * @file Programming.h
 * @brief Programming interfaces and device programming metadata.
 */

#ifndef ATMEGA328P_DEFINITIONS_PROGRAMMING_H
#define ATMEGA328P_DEFINITIONS_PROGRAMMING_H

#include <stdint.h>
#include "Config.h"
#include "Pin.h"

/** @brief Device-specific definitions for the ATmega328P. */
namespace atmega328p
{
    /** @brief Programming interface definitions. */
    namespace programming
    {
        /** @brief Supported programming interfaces. */
        enum class Interface : uint8_t
        {
            ISP,               ///< In-system serial programming.
            HighVoltageSerial, ///< High-voltage serial programming.
        };

        enum : uint8_t
        {
            isp_reset_pin_value = 0x16U, ///< ISP reset logical pin encoding.
            isp_mosi_pin_value = 0x03U,  ///< ISP mosi logical pin encoding.
            isp_miso_pin_value = 0x04U,  ///< ISP miso logical pin encoding.
            isp_sck_pin_value = 0x05U,   ///< ISP sck logical pin encoding.
            signature_address_0 = 0x00U, ///< Signature address 0.
            signature_address_1 = 0x01U, ///< Signature address 1.
            signature_address_2 = 0x02U, ///< Signature address 2.
        };

        enum : uint16_t
        {
            flash_page_size_words = 64U,   ///< Flash page size (words).
            eeprom_page_size_bytes = 4U,   ///< EEPROM page size (bytes).
            supports_read_while_write = 1, ///< Read while write supported.
        };
    }
}

#endif

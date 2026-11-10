/**
 * @file EEPROM.h
 * @brief EEPROM geometry and programming modes.
 */

#ifndef ATMEGA328P_DEFINITIONS_EEPROM_H
#define ATMEGA328P_DEFINITIONS_EEPROM_H

#include <stdint.h>
#include "Config.h"
#include "Memory.h"

/** @brief Device-specific definitions for the ATmega328P. */
namespace atmega328p
{
    /** @brief EEPROM characteristics. */
    namespace eeprom
    {
        /** @brief EEPROM programming modes. */
        enum class ProgrammingMode : uint8_t
        {
            EraseAndWrite = 0U, ///< 0 - Erase and write in one operation.
            EraseOnly = 1U,     ///< 1 - Erase the selected EEPROM location.
            WriteOnly = 2U,     ///< 2 - Write without erasing.
            Reserved = 3U,      ///< 3 - Reserved; do not select.
        };

        enum : uint16_t
        {
            address_bits = 10U,                 ///< Address width (bits).
            data_width_bits = 8U,               ///< Data width width (bits).
            page_size_bytes = 4U,               ///< Page size (bytes).
            page_count = 256U,                  ///< Number of page.
            programming_mode_count = 3U,        ///< Number of programming mode.
            ready_interrupt_supported = 1,      ///< Ready interrupt supported.
            eempe_to_eepe_max_cpu_cycles = 4U,  ///< Eempe to eepe max CPU (clock cycles).
            write_is_self_timed = 1,            ///< Write is self timed.
            serial_programming_auto_erases = 1, ///< Serial programming auto erases.
        };
    }
}

#endif

/**
 * @file Memory.h
 * @brief Flash, SRAM, EEPROM, and data-space geometry.
 */

#ifndef ATMEGA328P_DEFINITIONS_MEMORY_H
#define ATMEGA328P_DEFINITIONS_MEMORY_H

#include <stdint.h>
#include "Config.h"

/** @brief Device-specific definitions for the ATmega328P. */
namespace atmega328p
{
    /** @brief Memory sizes and address ranges. */
    namespace memory
    {
        enum : uint32_t
        {
            flash_size_bytes = 32768UL,               ///< Flash capacity (bytes).
            flash_size_words = 16384UL,               ///< Flash capacity (words).
            flash_page_size_words = 64,               ///< Flash page capacity (words).
            flash_page_size_bytes = 128,              ///< Flash page capacity (bytes).
            flash_page_count = 256,                   ///< Number of flash page entries.
            flash_min_erase_write_cycles = 10000UL,   ///< Flash min erase write (clock cycles).
            sram_size_bytes = 2048UL,                 ///< SRAM capacity (bytes).
            sram_start_address = 0x0100,              ///< SRAM start address.
            sram_end_address = 0x08FF,                ///< SRAM end address.
            ramend = 0x08FF,                          ///< Ramend.
            eeprom_size_bytes = 1024UL,               ///< EEPROM capacity (bytes).
            eeprom_start_address = 0x0000,            ///< EEPROM start address.
            eeprom_end_address = 0x03FF,              ///< EEPROM end address.
            eeprom_page_size_bytes = 4,               ///< EEPROM page capacity (bytes).
            eeprom_page_count = 256,                  ///< Number of eeprom page entries.
            eeprom_min_erase_write_cycles = 100000UL, ///< EEPROM min erase write (clock cycles).
            data_space_start_address = 0x0000,        ///< Data space start address.
            data_space_end_address = 0x08FF,          ///< Data space end address.
            data_space_size_bytes = 2304,             ///< Data space capacity (bytes).
        };
    }
}

#endif

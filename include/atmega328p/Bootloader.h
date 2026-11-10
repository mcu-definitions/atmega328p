/**
 * @file Bootloader.h
 * @brief Boot section and Flash region definitions.
 */

#ifndef ATMEGA328P_DEFINITIONS_BOOTLOADER_H
#define ATMEGA328P_DEFINITIONS_BOOTLOADER_H

#include <stdint.h>
#include "Config.h"

/** @brief Device-specific definitions for the ATmega328P. */
namespace atmega328p
{
    /** @brief Boot section and Flash region definitions. */
    namespace bootloader
    {
        /** @brief Supported boot section sizes in Flash words. */
        enum class Size : uint16_t
        {
            Words256 = 256,   ///< 256 - Boot section size: 256 words.
            Words512 = 512,   ///< 512 - Boot section size: 512 words.
            Words1024 = 1024, ///< 1024 - Boot section size: 1024 words.
            Words2048 = 2048, ///< 2048 - Boot section size: 2048 words.
        };

        /** @brief BOOTSZ fuse encodings for each boot section size. */
        enum class SizeCode : uint8_t
        {
            Words256 = 0x03,  ///< 0x03 - Boot-size fuse encoding for 256 words.
            Words512 = 0x02,  ///< 0x02 - Boot-size fuse encoding for 512 words.
            Words1024 = 0x01, ///< 0x01 - Boot-size fuse encoding for 1024 words.
            Words2048 = 0x00, ///< 0x00 - Boot-size fuse encoding for 2048 words.
        };

        enum : uint8_t
        {
            size_option_count = 4U,                          ///< Number of size option.
            rww_page_count = 224U,                           ///< Number of rww page.
            nrww_page_count = 32U,                           ///< Number of nrww page.
            reset_vector_selected_by_bootrst = 1,            ///< Reset vector selected by bootrst.
            interrupt_vector_location_selected_by_ivsel = 1, ///< Interrupt vector location selected by ivsel.
        };

        enum : uint16_t
        {
            default_size_words = 2048U,           ///< Default size (words).
            default_start_word_address = 0x3800U, ///< Default start word address.
            rww_start_word_address = 0x0000U,     ///< RWW start word address.
            rww_end_word_address = 0x37FFU,       ///< RWW end word address.
            nrww_start_word_address = 0x3800U,    ///< NRWW start word address.
            nrww_end_word_address = 0x3FFFU,      ///< NRWW end word address.
        };
    }
}

#endif

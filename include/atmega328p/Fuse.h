/**
 * @file Fuse.h
 * @brief Fuse byte fields and factory reference values.
 */

#ifndef ATMEGA328P_DEFINITIONS_FUSE_H
#define ATMEGA328P_DEFINITIONS_FUSE_H

#include <stdint.h>
#include "Config.h"

/** @brief Device-specific definitions for the ATmega328P. */
namespace atmega328p
{
    /** @brief Fuse byte identifiers and bit masks. */
    namespace fuse
    {
        /** @brief Fuse byte identifiers. */
        enum class Byte : uint8_t
        {
            Low = 0,             ///< Low fuse byte.
            High = Low + 1,      ///< High fuse byte.
            Extended = High + 1, ///< Extended fuse byte.
        };

        /** @brief Bit masks in the Low Fuse byte. */
        enum LowMask : uint8_t
        {
            ckdiv8 = 0x80, ///< 0x80 - Divide startup clock by eight.
            ckout = 0x40,  ///< 0x40 - Output system clock on CLKO.
            sut1 = 0x20,   ///< 0x20 - Startup-time selection bit 1.
            sut0 = 0x10,   ///< 0x10 - Startup-time selection bit 0.
            cksel3 = 0x08, ///< 0x08 - Clock-source selection bit 3.
            cksel2 = 0x04, ///< 0x04 - Clock-source selection bit 2.
            cksel1 = 0x02, ///< 0x02 - Clock-source selection bit 1.
            cksel0 = 0x01, ///< 0x01 - Clock-source selection bit 0.
        };

        /** @brief Bit masks in the High Fuse byte. */
        enum HighMask : uint8_t
        {
            rstdisbl = 0x80, ///< 0x80 - Disable external RESET pin.
            dwen = 0x40,     ///< 0x40 - Enable debugWIRE.
            spien = 0x20,    ///< 0x20 - Enable serial programming.
            wdton = 0x10,    ///< 0x10 - Force watchdog always on.
            eesave = 0x08,   ///< 0x08 - Preserve EEPROM during chip erase.
            bootsz1 = 0x04,  ///< 0x04 - Boot size selection bit 1.
            bootsz0 = 0x02,  ///< 0x02 - Boot size selection bit 0.
            bootrst = 0x01,  ///< 0x01 - Start execution in boot section.
        };

        /** @brief Bit masks in the Extended Fuse byte. */
        enum ExtendedMask : uint8_t
        {
            bodlevel2 = 0x04, ///< 0x04 - Brown-out level bit 2.
            bodlevel1 = 0x02, ///< 0x02 - Brown-out level bit 1.
            bodlevel0 = 0x01, ///< 0x01 - Brown-out level bit 0.
        };

        enum : uint8_t
        {
            default_low = 0x62,           ///< Default low.
            default_high = 0xD9,          ///< Default high.
            default_ext = 0xFF,           ///< Default ext.
            programmed_value = 0,         ///< Programmed value.
            programmed_value_is_zero = 1, ///< Programmed value is zero.
        };
    }
}

#endif

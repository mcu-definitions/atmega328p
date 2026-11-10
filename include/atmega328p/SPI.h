/**
 * @file SPI.h
 * @brief SPI modes, roles, and clock settings.
 */

#ifndef ATMEGA328P_DEFINITIONS_SPI_H
#define ATMEGA328P_DEFINITIONS_SPI_H

#include <stdint.h>
#include "Config.h"
#include "Pin.h"

/** @brief Device-specific definitions for the ATmega328P. */
namespace atmega328p
{
    /** @brief SPI interface definitions. */
    namespace spi
    {
        /** @brief Peripheral operating modes. */
        enum class Mode : uint8_t
        {
            Mode0 = 0, ///< 0 - CPOL=0, CPHA=0.
            Mode1 = 1, ///< 1 - CPOL=0, CPHA=1.
            Mode2 = 2, ///< 2 - CPOL=1, CPHA=0.
            Mode3 = 3, ///< 3 - CPOL=1, CPHA=1.
        };

        /** @brief SPI bit-transfer order. */
        enum class BitOrder : uint8_t
        {
            MostSignificantFirst,  ///< Transmit most-significant bit first.
            LeastSignificantFirst, ///< Transmit least-significant bit first.
        };

        /** @brief SPI controller roles. */
        enum class Role : uint8_t
        {
            Master, ///< Controller provides SPI clock.
            Slave,  ///< Peripheral receives SPI clock.
        };

        /** @brief Supported SPI clock divisors. */
        enum class ClockDivider : uint16_t
        {
            Divide2 = 2,     ///< 2 - Divide SPI clock by 2.
            Divide4 = 4,     ///< 4 - Divide SPI clock by 4.
            Divide8 = 8,     ///< 8 - Divide SPI clock by 8.
            Divide16 = 16,   ///< 16 - Divide SPI clock by 16.
            Divide32 = 32,   ///< 32 - Divide SPI clock by 32.
            Divide64 = 64,   ///< 64 - Divide SPI clock by 64.
            Divide128 = 128, ///< 128 - Divide SPI clock by 128.
        };

        enum : uint8_t
        {
            module_count = 1U,             ///< Number of module.
            data_width_bits = 8U,          ///< Data width width (bits).
            ss_pin_value = 0x02U,          ///< Ss logical pin encoding.
            mosi_pin_value = 0x03U,        ///< Mosi logical pin encoding.
            miso_pin_value = 0x04U,        ///< Miso logical pin encoding.
            sck_pin_value = 0x05U,         ///< Sck logical pin encoding.
            clock_divisor_count = 7U,      ///< Number of clock divisor.
            supports_full_duplex = 1,      ///< Full duplex supported.
            supports_master_and_slave = 1, ///< Master and slave supported.
            supports_lsb_first = 1,        ///< Lsb first supported.
            supports_msb_first = 1,        ///< Msb first supported.
            supports_double_speed = 1,     ///< Double speed supported.
        };
    }
}

#endif

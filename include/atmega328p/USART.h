/**
 * @file USART.h
 * @brief USART modes and frame-format definitions.
 */

#ifndef ATMEGA328P_DEFINITIONS_USART_H
#define ATMEGA328P_DEFINITIONS_USART_H

#include <stdint.h>
#include "Config.h"
#include "Pin.h"

/** @brief Device-specific definitions for the ATmega328P. */
namespace atmega328p
{
    /** @brief USART interface definitions. */
    namespace usart
    {
        /** @brief Peripheral operating modes. */
        enum class Mode : uint8_t
        {
            Asynchronous, ///< Asynchronous serial communication.
            Synchronous,  ///< Clocked synchronous communication.
            MasterSPI,    ///< USART in SPI master mode.
        };

        /** @brief USART frame data-bit counts. */
        enum class DataBits : uint8_t
        {
            Five = 5,  ///< 5 - 5 data bits.
            Six = 6,   ///< 6 - 6 data bits.
            Seven = 7, ///< 7 - 7 data bits.
            Eight = 8, ///< 8 - 8 data bits.
            Nine = 9,  ///< 9 - 9 data bits.
        };

        /** @brief USART parity modes. */
        enum class Parity : uint8_t
        {
            Disabled, ///< No parity bit.
            Even,     ///< Even parity.
            Odd,      ///< Odd parity.
        };

        /** @brief USART frame stop-bit counts. */
        enum class StopBits : uint8_t
        {
            One = 1, ///< 1 - One stop bit.
            Two = 2, ///< 2 - Two stop bits.
        };

        enum : uint8_t
        {
            module_count = 1U,                          ///< Number of USART controllers.
            module_number = 0U,                         ///< USART hardware index.
            rx_pin_value = 0x20U,                       ///< Logical RX pin (PD0).
            tx_pin_value = 0x21U,                       ///< Logical TX pin (PD1).
            xck_pin_value = 0x24U,                      ///< Logical Xck pin (PD4).
            baud_register_bits = 12U,                   ///< Baud-rate divisor register width.
            async_oversampling = 16U,                   ///< Samples per bit in asynchronous mode.
            async_double_speed_oversampling = 8U,       ///< Samples per bit in double-speed mode.
            sync_clock_divisor = 2U,                    ///< Sync clock divisor.
            supports_full_duplex = 1,                   ///< Full duplex supported.
            supports_multiprocessor_mode = 1,           ///< Multiprocessor mode supported.
            supports_double_speed_async = 1,            ///< Double speed async supported.
            supports_master_spi_mode = 1,               ///< Master SPI mode supported.
            supports_rx_complete_interrupt = 1,         ///< RX complete interrupt supported.
            supports_data_register_empty_interrupt = 1, ///< Data register empty interrupt supported.
            supports_tx_complete_interrupt = 1,         ///< TX complete interrupt supported.
        };

        enum : uint16_t
        {
            baud_register_max = 4095U, ///< Maximum baud-rate register value.
        };
    }
}

#endif

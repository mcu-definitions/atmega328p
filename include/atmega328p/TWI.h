/**
 * @file TWI.h
 * @brief Two-wire interface status codes and bus limits.
 */

#ifndef ATMEGA328P_DEFINITIONS_TWI_H
#define ATMEGA328P_DEFINITIONS_TWI_H

#include <stdint.h>
#include "Config.h"
#include "Pin.h"

/** @brief Device-specific definitions for the ATmega328P. */
namespace atmega328p
{
    /** @brief Two-wire interface definitions. */
    namespace twi
    {
        /** @brief TWI clock prescaler values. */
        enum class Prescaler : uint8_t
        {
            Divide1 = 1,   ///< 1 - TWI prescaler factor 1.
            Divide4 = 4,   ///< 4 - TWI prescaler factor 4.
            Divide16 = 16, ///< 16 - TWI prescaler factor 16.
            Divide64 = 64, ///< 64 - TWI prescaler factor 64.
        };

        /** @brief TWI bus status codes. */
        enum class StatusCode : uint8_t
        {
            BusError = 0x00,                          ///< 0x00 - Illegal START or STOP condition.
            StartTransmitted = 0x08,                  ///< 0x08 - START sent.
            RepeatedStartTransmitted = 0x10,          ///< 0x10 - Repeated START sent.
            AddressWriteAck = 0x18,                   ///< 0x18 - SLA+W sent, ACK received.
            AddressWriteNack = 0x20,                  ///< 0x20 - SLA+W sent, NACK received.
            DataWriteAck = 0x28,                      ///< 0x28 - Data sent, ACK received.
            DataWriteNack = 0x30,                     ///< 0x30 - Data sent, NACK received.
            ArbitrationLost = 0x38,                   ///< 0x38 - Bus arbitration lost.
            AddressReadAck = 0x40,                    ///< 0x40 - SLA+R sent, ACK received.
            AddressReadNack = 0x48,                   ///< 0x48 - SLA+R sent, NACK received.
            DataReadAck = 0x50,                       ///< 0x50 - Data received, ACK returned.
            DataReadNack = 0x58,                      ///< 0x58 - Data received, NACK returned.
            OwnAddressWriteAck = 0x60,                ///< 0x60 - Own SLA+W received; ACK sent.
            ArbitrationLostOwnAddressWriteAck = 0x68, ///< 0x68 - Arbitration lost; own SLA+W received.
            GeneralCallAck = 0x70,                    ///< 0x70 - General call received; ACK sent.
            ArbitrationLostGeneralCallAck = 0x78,     ///< 0x78 - Arbitration lost; general call received.
            OwnAddressDataAck = 0x80,                 ///< 0x80 - Data received after own SLA+W; ACK sent.
            OwnAddressDataNack = 0x88,                ///< 0x88 - Data received after own SLA+W; NACK sent.
            GeneralCallDataAck = 0x90,                ///< 0x90 - General-call data received; ACK sent.
            GeneralCallDataNack = 0x98,               ///< 0x98 - General-call data received; NACK sent.
            StopOrRepeatedStartReceived = 0xA0,       ///< 0xA0 - STOP or repeated START received.
            OwnAddressReadAck = 0xA8,                 ///< 0xA8 - Own SLA+R received; ACK sent.
            ArbitrationLostOwnAddressReadAck = 0xB0,  ///< 0xB0 - Arbitration lost; own SLA+R received.
            OwnAddressReadDataAck = 0xB8,             ///< 0xB8 - Data transmitted; ACK received.
            OwnAddressReadDataNack = 0xC0,            ///< 0xC0 - Data transmitted; NACK received.
            LastDataByteAck = 0xC8,                   ///< 0xC8 - Final data byte sent; ACK received.
            NoRelevantStateInformation = 0xF8,        ///< 0xF8 - No relevant TWI state.
        };

        enum : uint8_t
        {
            module_count = 1U,                                   ///< Number of module.
            address_bits = 7U,                                   ///< Address width (bits).
            address_count = 128U,                                ///< Number of address.
            prescaler_count = 4U,                                ///< Number of prescaler.
            sda_pin_value = 0x14U,                               ///< SDA logical pin encoding.
            scl_pin_value = 0x15U,                               ///< SCL logical pin encoding.
            supports_master = 1,                                 ///< Master supported.
            supports_slave = 1,                                  ///< Slave supported.
            supports_multi_master_arbitration = 1,               ///< Multi master arbitration supported.
            supports_general_call = 1,                           ///< General call supported.
            cpu_clock_must_exceed_max_of_16x_scl_and_250khz = 1, ///< CPU clock must exceed max of 16x SCL and 250khz.
        };

        /** @brief TWI timing limits. */
        enum : uint16_t
        {
            min_cpu_clocks_per_scl_in_slave_mode = 16U, ///< Min CPU clocks per SCL in slave mode.
        };

        enum : uint32_t
        {
            min_cpu_clock_hz = 250000UL,     ///< Min CPU clock (Hz).
            standard_mode_max_hz = 100000UL, ///< Standard mode max (Hz).
            fast_mode_max_hz = 400000UL,     ///< Fast mode max (Hz).
        };
    }
}

#endif

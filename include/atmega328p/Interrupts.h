/**
 * @file Interrupts.h
 * @brief Interrupt sources, vector numbers, and program addresses.
 */

#ifndef ATMEGA328P_DEFINITIONS_INTERRUPTS_H
#define ATMEGA328P_DEFINITIONS_INTERRUPTS_H

#include <stdint.h>
#include "Config.h"

/** @brief Device-specific definitions for the ATmega328P. */
namespace atmega328p
{
    /** @brief Interrupt vector table definitions. */
    namespace interrupts
    {
        /** @brief Interrupt sources supported by the device. */
        enum class Source : uint8_t
        {
            INT0,                   ///< External interrupt 0.
            INT1,                   ///< External interrupt 1.
            PCINT0,                 ///< Pin-change interrupt source 0.
            PCINT1,                 ///< Pin-change interrupt source 1.
            PCINT2,                 ///< Pin-change interrupt source 2.
            Watchdog,               ///< Watchdog timeout.
            Timer2CompareA,         ///< Timer2 compare a.
            Timer2CompareB,         ///< Timer2 compare b.
            Timer2Overflow,         ///< Timer2 overflow.
            Timer1Capture,          ///< Timer1 capture.
            Timer1CompareA,         ///< Timer1 compare a.
            Timer1CompareB,         ///< Timer1 compare b.
            Timer1Overflow,         ///< Timer1 overflow.
            Timer0CompareA,         ///< Timer0 compare a.
            Timer0CompareB,         ///< Timer0 compare b.
            Timer0Overflow,         ///< Timer0 overflow.
            SPITransferComplete,    ///< SPI transfer complete.
            USARTReceiveComplete,   ///< USART receive complete.
            USARTDataRegisterEmpty, ///< USART transmit data register empty.
            USARTTransmitComplete,  ///< USART transmission complete.
            ADCConversionComplete,  ///< ADC conversion complete.
            EEPROMReady,            ///< EEPROM ready.
            AnalogComparator,       ///< Analog comparator output event.
            TWI,                    ///< TWI interrupt event.
            SPMReady,               ///< Store-program-memory ready.
        };

        /** @brief Vector slot numbers, including Reset. */
        enum class Vector : uint8_t
        {
            Reset = 1,                   ///< 1 - Reset vector.
            INT0 = 2,                    ///< 2 - Int0 vector number.
            INT1 = 3,                    ///< 3 - Int1 vector number.
            PCINT0 = 4,                  ///< 4 - Pin-change interrupt source 0.
            PCINT1 = 5,                  ///< 5 - Pin-change interrupt source 1.
            PCINT2 = 6,                  ///< 6 - Pin-change interrupt source 2.
            Watchdog = 7,                ///< 7 - Watchdog vector number.
            Timer2CompareA = 8,          ///< 8 - Timer2 compare a.
            Timer2CompareB = 9,          ///< 9 - Timer2 compare b.
            Timer2Overflow = 10,         ///< 10 - Timer2 overflow.
            Timer1Capture = 11,          ///< 11 - Timer1 capture.
            Timer1CompareA = 12,         ///< 12 - Timer1 compare a.
            Timer1CompareB = 13,         ///< 13 - Timer1 compare b.
            Timer1Overflow = 14,         ///< 14 - Timer1 overflow.
            Timer0CompareA = 15,         ///< 15 - Timer0 compare a.
            Timer0CompareB = 16,         ///< 16 - Timer0 compare b.
            Timer0Overflow = 17,         ///< 17 - Timer0 overflow.
            SPITransferComplete = 18,    ///< 18 - Spi transfer complete vector number.
            USARTReceiveComplete = 19,   ///< 19 - Usart receive complete vector number.
            USARTDataRegisterEmpty = 20, ///< 20 - Usart data register empty vector number.
            USARTTransmitComplete = 21,  ///< 21 - Usart transmit complete vector number.
            ADCConversionComplete = 22,  ///< 22 - Adc conversion complete vector number.
            EEPROMReady = 23,            ///< 23 - Eeprom ready vector number.
            AnalogComparator = 24,       ///< 24 - Analog comparator vector number.
            TWI = 25,                    ///< 25 - Twi vector number.
            SPMReady = 26,               ///< 26 - Spm ready vector number.
        };

        /** @brief Word addresses of the interrupt vectors. */
        enum class WordAddress : uint8_t
        {
            Reset = 0x00,                  ///< 0x00 - Reset vector.
            INT0 = 0x02,                   ///< 0x02 - Int0 vector word address.
            INT1 = 0x04,                   ///< 0x04 - Int1 vector word address.
            PCINT0 = 0x06,                 ///< 0x06 - Pin-change interrupt source 0.
            PCINT1 = 0x08,                 ///< 0x08 - Pin-change interrupt source 1.
            PCINT2 = 0x0A,                 ///< 0x0A - Pin-change interrupt source 2.
            Watchdog = 0x0C,               ///< 0x0C - Watchdog vector word address.
            Timer2CompareA = 0x0E,         ///< 0x0E - Timer2 compare a.
            Timer2CompareB = 0x10,         ///< 0x10 - Timer2 compare b.
            Timer2Overflow = 0x12,         ///< 0x12 - Timer2 overflow.
            Timer1Capture = 0x14,          ///< 0x14 - Timer1 capture.
            Timer1CompareA = 0x16,         ///< 0x16 - Timer1 compare a.
            Timer1CompareB = 0x18,         ///< 0x18 - Timer1 compare b.
            Timer1Overflow = 0x1A,         ///< 0x1A - Timer1 overflow.
            Timer0CompareA = 0x1C,         ///< 0x1C - Timer0 compare a.
            Timer0CompareB = 0x1E,         ///< 0x1E - Timer0 compare b.
            Timer0Overflow = 0x20,         ///< 0x20 - Timer0 overflow.
            SPITransferComplete = 0x22,    ///< 0x22 - Spi transfer complete vector word address.
            USARTReceiveComplete = 0x24,   ///< 0x24 - Usart receive complete vector word address.
            USARTDataRegisterEmpty = 0x26, ///< 0x26 - Usart data register empty vector word address.
            USARTTransmitComplete = 0x28,  ///< 0x28 - Usart transmit complete vector word address.
            ADCConversionComplete = 0x2A,  ///< 0x2A - Adc conversion complete vector word address.
            EEPROMReady = 0x2C,            ///< 0x2C - Eeprom ready vector word address.
            AnalogComparator = 0x2E,       ///< 0x2E - Analog comparator vector word address.
            TWI = 0x30,                    ///< 0x30 - Twi vector word address.
            SPMReady = 0x32,               ///< 0x32 - Spm ready vector word address.
        };

        enum : uint8_t
        {
            vector_count = 26,     ///< Number of vector.
            source_count = 25,     ///< Number of source.
            vector_size_words = 2, ///< Vector size (words).
            vector_size_bytes = 4, ///< Vector size (bytes).
        };
    }
}

#endif

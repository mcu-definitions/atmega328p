/**
 * @file PackagePins.h
 * @brief Physical terminal numbers for each ATmega328P package.
 */

#ifndef ATMEGA328P_DEFINITIONS_PACKAGE_PINS_H
#define ATMEGA328P_DEFINITIONS_PACKAGE_PINS_H

#include <stdint.h>

/** @brief Device-specific definitions for the ATmega328P. */
namespace atmega328p
{
    /** @brief Physical package and terminal definitions. */
    namespace package
    {
        /** @brief PDIP-28 terminal numbers. */
        namespace pdip28
        {
            /** @brief Physical package terminal numbers. */
            enum Terminal : uint8_t
            {
                PC6 = 1,   ///< 1 - PC6 signal, terminal 1.
                PD0 = 2,   ///< 2 - PD0 signal, terminal 2.
                PD1 = 3,   ///< 3 - PD1 signal, terminal 3.
                PD2 = 4,   ///< 4 - PD2 signal, terminal 4.
                PD3 = 5,   ///< 5 - PD3 signal, terminal 5.
                PD4 = 6,   ///< 6 - PD4 signal, terminal 6.
                VCC1 = 7,  ///< 7 - Digital supply terminal 7.
                GND1 = 8,  ///< 8 - Ground terminal 8.
                PB6 = 9,   ///< 9 - PB6 signal, terminal 9.
                PB7 = 10,  ///< 10 - PB7 signal, terminal 10.
                PD5 = 11,  ///< 11 - PD5 signal, terminal 11.
                PD6 = 12,  ///< 12 - PD6 signal, terminal 12.
                PD7 = 13,  ///< 13 - PD7 signal, terminal 13.
                PB0 = 14,  ///< 14 - PB0 signal, terminal 14.
                PB1 = 15,  ///< 15 - PB1 signal, terminal 15.
                PB2 = 16,  ///< 16 - PB2 signal, terminal 16.
                PB3 = 17,  ///< 17 - PB3 signal, terminal 17.
                PB4 = 18,  ///< 18 - PB4 signal, terminal 18.
                PB5 = 19,  ///< 19 - PB5 signal, terminal 19.
                AVCC = 20, ///< 20 - Analog supply terminal 20.
                AREF = 21, ///< 21 - ADC reference terminal 21.
                GND2 = 22, ///< 22 - Ground terminal 22.
                PC0 = 23,  ///< 23 - PC0 signal, terminal 23.
                PC1 = 24,  ///< 24 - PC1 signal, terminal 24.
                PC2 = 25,  ///< 25 - PC2 signal, terminal 25.
                PC3 = 26,  ///< 26 - PC3 signal, terminal 26.
                PC4 = 27,  ///< 27 - PC4 signal, terminal 27.
                PC5 = 28,  ///< 28 - PC5 signal, terminal 28.
            };
        }

        /** @brief MLF-28 terminal numbers. */
        namespace mlf28
        {
            /** @brief Physical package terminal numbers. */
            enum Terminal : uint8_t
            {
                PD3 = 1,   ///< 1 - PD3 signal, terminal 1.
                PD4 = 2,   ///< 2 - PD4 signal, terminal 2.
                VCC1 = 3,  ///< 3 - Digital supply terminal 3.
                GND1 = 4,  ///< 4 - Ground terminal 4.
                PB6 = 5,   ///< 5 - PB6 signal, terminal 5.
                PB7 = 6,   ///< 6 - PB7 signal, terminal 6.
                PD5 = 7,   ///< 7 - PD5 signal, terminal 7.
                PD6 = 8,   ///< 8 - PD6 signal, terminal 8.
                PD7 = 9,   ///< 9 - PD7 signal, terminal 9.
                PB0 = 10,  ///< 10 - PB0 signal, terminal 10.
                PB1 = 11,  ///< 11 - PB1 signal, terminal 11.
                PB2 = 12,  ///< 12 - PB2 signal, terminal 12.
                PB3 = 13,  ///< 13 - PB3 signal, terminal 13.
                PB4 = 14,  ///< 14 - PB4 signal, terminal 14.
                PB5 = 15,  ///< 15 - PB5 signal, terminal 15.
                AVCC = 16, ///< 16 - Analog supply terminal 16.
                AREF = 17, ///< 17 - ADC reference terminal 17.
                GND2 = 18, ///< 18 - Ground terminal 18.
                PC0 = 19,  ///< 19 - PC0 signal, terminal 19.
                PC1 = 20,  ///< 20 - PC1 signal, terminal 20.
                PC2 = 21,  ///< 21 - PC2 signal, terminal 21.
                PC3 = 22,  ///< 22 - PC3 signal, terminal 22.
                PC4 = 23,  ///< 23 - PC4 signal, terminal 23.
                PC5 = 24,  ///< 24 - PC5 signal, terminal 24.
                PC6 = 25,  ///< 25 - PC6 signal, terminal 25.
                PD0 = 26,  ///< 26 - PD0 signal, terminal 26.
                PD1 = 27,  ///< 27 - PD1 signal, terminal 27.
                PD2 = 28,  ///< 28 - PD2 signal, terminal 28.
            };
        }

        /** @brief TQFP-32 terminal numbers. */
        namespace tqfp32
        {
            /** @brief Physical package terminal numbers. */
            enum Terminal : uint8_t
            {
                PD3 = 1,   ///< 1 - PD3 signal, terminal 1.
                PD4 = 2,   ///< 2 - PD4 signal, terminal 2.
                GND1 = 3,  ///< 3 - Ground terminal 3.
                VCC1 = 4,  ///< 4 - Digital supply terminal 4.
                GND2 = 5,  ///< 5 - Ground terminal 5.
                VCC2 = 6,  ///< 6 - Digital supply terminal 6.
                PB6 = 7,   ///< 7 - PB6 signal, terminal 7.
                PB7 = 8,   ///< 8 - PB7 signal, terminal 8.
                PD5 = 9,   ///< 9 - PD5 signal, terminal 9.
                PD6 = 10,  ///< 10 - PD6 signal, terminal 10.
                PD7 = 11,  ///< 11 - PD7 signal, terminal 11.
                PB0 = 12,  ///< 12 - PB0 signal, terminal 12.
                PB1 = 13,  ///< 13 - PB1 signal, terminal 13.
                PB2 = 14,  ///< 14 - PB2 signal, terminal 14.
                PB3 = 15,  ///< 15 - PB3 signal, terminal 15.
                PB4 = 16,  ///< 16 - PB4 signal, terminal 16.
                PB5 = 17,  ///< 17 - PB5 signal, terminal 17.
                AVCC = 18, ///< 18 - Analog supply terminal 18.
                ADC6 = 19, ///< 19 - Analog-only input ADC6, terminal 19.
                AREF = 20, ///< 20 - ADC reference terminal 20.
                GND3 = 21, ///< 21 - Ground terminal 21.
                ADC7 = 22, ///< 22 - Analog-only input ADC7, terminal 22.
                PC0 = 23,  ///< 23 - PC0 signal, terminal 23.
                PC1 = 24,  ///< 24 - PC1 signal, terminal 24.
                PC2 = 25,  ///< 25 - PC2 signal, terminal 25.
                PC3 = 26,  ///< 26 - PC3 signal, terminal 26.
                PC4 = 27,  ///< 27 - PC4 signal, terminal 27.
                PC5 = 28,  ///< 28 - PC5 signal, terminal 28.
                PC6 = 29,  ///< 29 - PC6 signal, terminal 29.
                PD0 = 30,  ///< 30 - PD0 signal, terminal 30.
                PD1 = 31,  ///< 31 - PD1 signal, terminal 31.
                PD2 = 32,  ///< 32 - PD2 signal, terminal 32.
            };
        }

        /** @brief MLF-32 terminal numbers. */
        namespace mlf32
        {
            /** @brief Physical package terminal numbers. */
            enum Terminal : uint8_t
            {
                PD3 = 1,   ///< 1 - PD3 signal, terminal 1.
                PD4 = 2,   ///< 2 - PD4 signal, terminal 2.
                GND1 = 3,  ///< 3 - Ground terminal 3.
                VCC1 = 4,  ///< 4 - Digital supply terminal 4.
                GND2 = 5,  ///< 5 - Ground terminal 5.
                VCC2 = 6,  ///< 6 - Digital supply terminal 6.
                PB6 = 7,   ///< 7 - PB6 signal, terminal 7.
                PB7 = 8,   ///< 8 - PB7 signal, terminal 8.
                PD5 = 9,   ///< 9 - PD5 signal, terminal 9.
                PD6 = 10,  ///< 10 - PD6 signal, terminal 10.
                PD7 = 11,  ///< 11 - PD7 signal, terminal 11.
                PB0 = 12,  ///< 12 - PB0 signal, terminal 12.
                PB1 = 13,  ///< 13 - PB1 signal, terminal 13.
                PB2 = 14,  ///< 14 - PB2 signal, terminal 14.
                PB3 = 15,  ///< 15 - PB3 signal, terminal 15.
                PB4 = 16,  ///< 16 - PB4 signal, terminal 16.
                PB5 = 17,  ///< 17 - PB5 signal, terminal 17.
                AVCC = 18, ///< 18 - Analog supply terminal 18.
                ADC6 = 19, ///< 19 - Analog-only input ADC6, terminal 19.
                AREF = 20, ///< 20 - ADC reference terminal 20.
                GND3 = 21, ///< 21 - Ground terminal 21.
                ADC7 = 22, ///< 22 - Analog-only input ADC7, terminal 22.
                PC0 = 23,  ///< 23 - PC0 signal, terminal 23.
                PC1 = 24,  ///< 24 - PC1 signal, terminal 24.
                PC2 = 25,  ///< 25 - PC2 signal, terminal 25.
                PC3 = 26,  ///< 26 - PC3 signal, terminal 26.
                PC4 = 27,  ///< 27 - PC4 signal, terminal 27.
                PC5 = 28,  ///< 28 - PC5 signal, terminal 28.
                PC6 = 29,  ///< 29 - PC6 signal, terminal 29.
                PD0 = 30,  ///< 30 - PD0 signal, terminal 30.
                PD1 = 31,  ///< 31 - PD1 signal, terminal 31.
                PD2 = 32,  ///< 32 - PD2 signal, terminal 32.
            };
        }

        /** @brief No physical package has been selected. */
        namespace unspecified
        {
            /** @brief Physical package terminal numbers. */
            enum Terminal : uint8_t
            {
                None = 0, ///< 0 - No terminal available without a package selection.
            };
        }
    }
}

#endif

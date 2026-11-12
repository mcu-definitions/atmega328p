/**
 * @file PinFunctions.h
 * @brief Pin capabilities and alternate peripheral functions.
 */

#ifndef ATMEGA328P_DEFINITIONS_PIN_FUNCTIONS_H
#define ATMEGA328P_DEFINITIONS_PIN_FUNCTIONS_H

#include <stdint.h>
#include "Config.h"
#include "Pin.h"

/** @brief Device-specific definitions for the ATmega328P. */
namespace atmega328p
{
    /** @brief Logical pin and alternate-function definitions. */
    namespace pin
    {
        /** @brief Bit flags describing a pin's available hardware functions. */
        enum Capability : uint16_t
        {
            None = 0x0000U,                ///< 0x0000 - No alternate functions.
            GPIO = 0x0001U,                ///< 0x0001 - Digital input/output.
            PinChangeInterrupt = 0x0002U,  ///< 0x0002 - Pin-change interrupt source.
            ADC = 0x0004U,                 ///< 0x0004 - Analog-to-digital input.
            PWM = 0x0008U,                 ///< 0x0008 - Timer output-compare PWM.
            ExternalInterrupt = 0x0010U,   ///< 0x0010 - Dedicated external interrupt input.
            SPI = 0x0020U,                 ///< 0x0020 - SPI interface signal.
            USART = 0x0040U,               ///< 0x0040 - USART interface signal.
            TWI = 0x0080U,                 ///< 0x0080 - Two-wire interface signal.
            TimerExternalClock = 0x0100U,  ///< 0x0100 - External clock input for timer.
            InputCapture = 0x0200U,        ///< 0x0200 - Timer1 input capture.
            ClockOutput = 0x0400U,         ///< 0x0400 - System clock output.
            Reset = 0x0800U,               ///< 0x0800 - External reset input.
            AnalogComparator = 0x1000U,    ///< 0x1000 - Analog comparator input.
            TimerOscillator = 0x2000U,     ///< 0x2000 - Timer2 oscillator connection.
            MainClockOscillator = 0x4000U, ///< 0x4000 - Main oscillator connection.
        };

        /** @brief Alternate pin function identifiers. */
        enum class Function : uint8_t
        {
            GPIO = 0,              ///< Digital input/output.
            PCINT0 = GPIO + 1,     ///< Pin-change interrupt source 0.
            PCINT1 = PCINT0 + 1,   ///< Pin-change interrupt source 1.
            PCINT2 = PCINT1 + 1,   ///< Pin-change interrupt source 2.
            PCINT3 = PCINT2 + 1,   ///< Pin-change interrupt source 3.
            PCINT4 = PCINT3 + 1,   ///< Pin-change interrupt source 4.
            PCINT5 = PCINT4 + 1,   ///< Pin-change interrupt source 5.
            PCINT6 = PCINT5 + 1,   ///< Pin-change interrupt source 6.
            PCINT7 = PCINT6 + 1,   ///< Pin-change interrupt source 7.
            PCINT8 = PCINT7 + 1,   ///< Pin-change interrupt source 8.
            PCINT9 = PCINT8 + 1,   ///< Pin-change interrupt source 9.
            PCINT10 = PCINT9 + 1,  ///< Pin-change interrupt source 10.
            PCINT11 = PCINT10 + 1, ///< Pin-change interrupt source 11.
            PCINT12 = PCINT11 + 1, ///< Pin-change interrupt source 12.
            PCINT13 = PCINT12 + 1, ///< Pin-change interrupt source 13.
            PCINT14 = PCINT13 + 1, ///< Pin-change interrupt source 14.
            PCINT16 = PCINT14 + 1, ///< Pin-change interrupt source 16.
            PCINT17 = PCINT16 + 1, ///< Pin-change interrupt source 17.
            PCINT18 = PCINT17 + 1, ///< Pin-change interrupt source 18.
            PCINT19 = PCINT18 + 1, ///< Pin-change interrupt source 19.
            PCINT20 = PCINT19 + 1, ///< Pin-change interrupt source 20.
            PCINT21 = PCINT20 + 1, ///< Pin-change interrupt source 21.
            PCINT22 = PCINT21 + 1, ///< Pin-change interrupt source 22.
            PCINT23 = PCINT22 + 1, ///< Pin-change interrupt source 23.
            CLKO = PCINT23 + 1,    ///< System clock output.
            ICP1 = CLKO + 1,       ///< Timer1 input capture.
            OC1A = ICP1 + 1,       ///< Timer output-compare OC1A.
            SS = OC1A + 1,         ///< SPI slave select.
            OC1B = SS + 1,         ///< Timer output-compare OC1B.
            MOSI = OC1B + 1,       ///< SPI master-out/slave-in.
            OC2A = MOSI + 1,       ///< Timer output-compare OC2A.
            MISO = OC2A + 1,       ///< SPI master-in/slave-out.
            SCK = MISO + 1,        ///< SPI serial clock.
            XTAL1 = SCK + 1,       ///< Main oscillator input.
            TOSC1 = XTAL1 + 1,     ///< Timer2 oscillator input.
            XTAL2 = TOSC1 + 1,     ///< Main oscillator output.
            TOSC2 = XTAL2 + 1,     ///< Timer2 oscillator output.
            ADC0 = TOSC2 + 1,      ///< ADC input 0.
            ADC1 = ADC0 + 1,       ///< ADC input 1.
            ADC2 = ADC1 + 1,       ///< ADC input 2.
            ADC3 = ADC2 + 1,       ///< ADC input 3.
            ADC4 = ADC3 + 1,       ///< ADC input 4.
            ADC5 = ADC4 + 1,       ///< ADC input 5.
            SDA = ADC5 + 1,        ///< TWI serial data.
            SCL = SDA + 1,         ///< TWI serial clock.
            RESET = SCL + 1,       ///< External reset.
            RXD = RESET + 1,       ///< USART receive.
            TXD = RXD + 1,         ///< USART transmit.
            INT0 = TXD + 1,        ///< External interrupt 0.
            INT1 = INT0 + 1,       ///< External interrupt 1.
            OC2B = INT1 + 1,       ///< Timer output-compare OC2B.
            XCK = OC2B + 1,        ///< USART external clock.
            T0 = XCK + 1,          ///< Timer0 external clock.
            OC0B = T0 + 1,         ///< Timer output-compare OC0B.
            T1 = OC0B + 1,         ///< Timer1 external clock.
            OC0A = T1 + 1,         ///< Timer output-compare OC0A.
            AIN0 = OC0A + 1,       ///< Analog comparator positive input.
            AIN1 = AIN0 + 1,       ///< Analog comparator negative input.
        };

        /** @brief Capability masks for individual logical pins. */
        namespace capabilities
        {
            enum : uint16_t
            {
                PB0 = 0x0603U,             ///< Capabilities of PB0.
                PB1 = 0x000BU,             ///< Capabilities of PB1.
                PB2 = 0x002BU,             ///< Capabilities of PB2.
                PB3 = 0x002BU,             ///< Capabilities of PB3.
                PB4 = 0x0023U,             ///< Capabilities of PB4.
                PB5 = 0x0023U,             ///< Capabilities of PB5.
                PB6 = 0x6003U,             ///< Capabilities of PB6.
                PB7 = 0x6003U,             ///< Capabilities of PB7.
                PC0 = 0x0007U,             ///< Capabilities of PC0.
                PC1 = 0x0007U,             ///< Capabilities of PC1.
                PC2 = 0x0007U,             ///< Capabilities of PC2.
                PC3 = 0x0007U,             ///< Capabilities of PC3.
                PC4 = 0x0087U,             ///< Capabilities of PC4.
                PC5 = 0x0087U,             ///< Capabilities of PC5.
                PC6 = 0x0802U,             ///< Capabilities of PC6.
                PC6WithRSTDISBL = 0x0003U, ///< Capabilities of PC6 with RSTDISBL.
                PD0 = 0x0043U,             ///< Capabilities of PD0.
                PD1 = 0x0043U,             ///< Capabilities of PD1.
                PD2 = 0x0013U,             ///< Capabilities of PD2.
                PD3 = 0x001BU,             ///< Capabilities of PD3.
                PD4 = 0x0143U,             ///< Capabilities of PD4.
                PD5 = 0x010BU,             ///< Capabilities of PD5.
                PD6 = 0x100BU,             ///< Capabilities of PD6.
                PD7 = 0x1003U,             ///< Capabilities of PD7.
            };
        }
    }

}

#endif

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
            GPIO,    ///< Digital input/output.
            PCINT0,  ///< Pin-change interrupt source 0.
            PCINT1,  ///< Pin-change interrupt source 1.
            PCINT2,  ///< Pin-change interrupt source 2.
            PCINT3,  ///< Pin-change interrupt source 3.
            PCINT4,  ///< Pin-change interrupt source 4.
            PCINT5,  ///< Pin-change interrupt source 5.
            PCINT6,  ///< Pin-change interrupt source 6.
            PCINT7,  ///< Pin-change interrupt source 7.
            PCINT8,  ///< Pin-change interrupt source 8.
            PCINT9,  ///< Pin-change interrupt source 9.
            PCINT10, ///< Pin-change interrupt source 10.
            PCINT11, ///< Pin-change interrupt source 11.
            PCINT12, ///< Pin-change interrupt source 12.
            PCINT13, ///< Pin-change interrupt source 13.
            PCINT14, ///< Pin-change interrupt source 14.
            PCINT16, ///< Pin-change interrupt source 16.
            PCINT17, ///< Pin-change interrupt source 17.
            PCINT18, ///< Pin-change interrupt source 18.
            PCINT19, ///< Pin-change interrupt source 19.
            PCINT20, ///< Pin-change interrupt source 20.
            PCINT21, ///< Pin-change interrupt source 21.
            PCINT22, ///< Pin-change interrupt source 22.
            PCINT23, ///< Pin-change interrupt source 23.
            CLKO,    ///< System clock output.
            ICP1,    ///< Timer1 input capture.
            OC1A,    ///< Timer output-compare OC1A.
            SS,      ///< SPI slave select.
            OC1B,    ///< Timer output-compare OC1B.
            MOSI,    ///< SPI master-out/slave-in.
            OC2A,    ///< Timer output-compare OC2A.
            MISO,    ///< SPI master-in/slave-out.
            SCK,     ///< SPI serial clock.
            XTAL1,   ///< Main oscillator input.
            TOSC1,   ///< Timer2 oscillator input.
            XTAL2,   ///< Main oscillator output.
            TOSC2,   ///< Timer2 oscillator output.
            ADC0,    ///< ADC input 0.
            ADC1,    ///< ADC input 1.
            ADC2,    ///< ADC input 2.
            ADC3,    ///< ADC input 3.
            ADC4,    ///< ADC input 4.
            ADC5,    ///< ADC input 5.
            SDA,     ///< TWI serial data.
            SCL,     ///< TWI serial clock.
            RESET,   ///< External reset.
            RXD,     ///< USART receive.
            TXD,     ///< USART transmit.
            INT0,    ///< External interrupt 0.
            INT1,    ///< External interrupt 1.
            OC2B,    ///< Timer output-compare OC2B.
            XCK,     ///< USART external clock.
            T0,      ///< Timer0 external clock.
            OC0B,    ///< Timer output-compare OC0B.
            T1,      ///< Timer1 external clock.
            OC0A,    ///< Timer output-compare OC0A.
            AIN0,    ///< Analog comparator positive input.
            AIN1,    ///< Analog comparator negative input.
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

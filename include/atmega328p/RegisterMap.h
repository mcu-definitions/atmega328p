/**
 * @file RegisterMap.h
 * @brief Data-space addresses of the ATmega328P registers.
 */

#ifndef ATMEGA328P_DEFINITIONS_REGISTER_MAP_H
#define ATMEGA328P_DEFINITIONS_REGISTER_MAP_H

#include <stdint.h>
#include "Config.h"

/** @brief Device-specific definitions for the ATmega328P. */
namespace atmega328p
{
    /** @brief Register addresses and memory-space boundaries. */
    namespace register_map
    {
        enum : uint16_t
        {
            register_file_start = 0x0000,  ///< Register file start.
            register_file_end = 0x001F,    ///< Register file end.
            io_space_start = 0x0020,       ///< I/O space start.
            io_space_end = 0x005F,         ///< I/O space end.
            extended_io_start = 0x0060,    ///< Extended I/O start.
            extended_io_end = 0x00FF,      ///< Extended I/O end.
            sram_start = 0x0100,           ///< SRAM start.
            sram_end = 0x08FF,             ///< SRAM end.
            io_offset = 0x20,              ///< I/O offset.
            sbi_cbi_last_address = 0x003F, ///< Sbi cbi last address.
            in_out_last_address = 0x005F,  ///< In out last address.
            invalid_io_address = 0xFFFF,   ///< Invalid I/O address.
        };

        /** @brief Data-space addresses of special-function registers. */
        enum Register : uint16_t
        {
            PINB = 0x23,   ///< 0x23 - Input pin states.
            DDRB = 0x24,   ///< 0x24 - Data direction.
            PORTB = 0x25,  ///< 0x25 - Output latch / pull-up.
            PINC = 0x26,   ///< 0x26 - Input pin states.
            DDRC = 0x27,   ///< 0x27 - Data direction.
            PORTC = 0x28,  ///< 0x28 - Output latch / pull-up.
            PIND = 0x29,   ///< 0x29 - Input pin states.
            DDRD = 0x2A,   ///< 0x2A - Data direction.
            PORTD = 0x2B,  ///< 0x2B - Output latch / pull-up.
            TIFR0 = 0x35,  ///< 0x35 - Timer interrupt flags.
            TIFR1 = 0x36,  ///< 0x36 - Timer interrupt flags.
            TIFR2 = 0x37,  ///< 0x37 - Timer interrupt flags.
            PCIFR = 0x3B,  ///< 0x3B - Pin-change interrupt flags.
            EIFR = 0x3C,   ///< 0x3C - External interrupt flags.
            EIMSK = 0x3D,  ///< 0x3D - External interrupt mask.
            GPIOR0 = 0x3E, ///< 0x3E - General-purpose I/O register.
            EECR = 0x3F,   ///< 0x3F - EEPROM control.
            EEDR = 0x40,   ///< 0x40 - EEPROM data.
            EEARL = 0x41,  ///< 0x41 - EEPROM address.
            EEARH = 0x42,  ///< 0x42 - EEPROM address.
            GTCCR = 0x43,  ///< 0x43 - General timer control.
            TCCR0A = 0x44, ///< 0x44 - Timer control.
            TCCR0B = 0x45, ///< 0x45 - Timer control.
            TCNT0 = 0x46,  ///< 0x46 - Timer counter.
            OCR0A = 0x47,  ///< 0x47 - Output compare register.
            OCR0B = 0x48,  ///< 0x48 - Output compare register.
            GPIOR1 = 0x4A, ///< 0x4A - General-purpose I/O register.
            GPIOR2 = 0x4B, ///< 0x4B - General-purpose I/O register.
            SPCR = 0x4C,   ///< 0x4C - SPI control.
            SPSR = 0x4D,   ///< 0x4D - SPI status.
            SPDR = 0x4E,   ///< 0x4E - SPI data.
            ACSR = 0x50,   ///< 0x50 - Analog comparator control/status.
            SMCR = 0x53,   ///< 0x53 - Sleep-mode control.
            MCUSR = 0x54,  ///< 0x54 - MCU status / reset flags.
            MCUCR = 0x55,  ///< 0x55 - MCU control.
            SPMCSR = 0x57, ///< 0x57 - Flash self-programming control.
            SPL = 0x5D,    ///< 0x5D - Stack pointer low byte.
            SPH = 0x5E,    ///< 0x5E - Stack pointer high byte.
            SREG = 0x5F,   ///< 0x5F - CPU status register.
            WDTCSR = 0x60, ///< 0x60 - Watchdog control/status.
            CLKPR = 0x61,  ///< 0x61 - Clock prescaler.
            PRR = 0x64,    ///< 0x64 - Peripheral power-reduction.
            OSCCAL = 0x66, ///< 0x66 - Internal oscillator calibration.
            PCICR = 0x68,  ///< 0x68 - Pin-change interrupt control.
            EICRA = 0x69,  ///< 0x69 - External interrupt control A.
            PCMSK0 = 0x6B, ///< 0x6B - Pin-change interrupt mask.
            PCMSK1 = 0x6C, ///< 0x6C - Pin-change interrupt mask.
            PCMSK2 = 0x6D, ///< 0x6D - Pin-change interrupt mask.
            TIMSK0 = 0x6E, ///< 0x6E - Timer interrupt mask.
            TIMSK1 = 0x6F, ///< 0x6F - Timer interrupt mask.
            TIMSK2 = 0x70, ///< 0x70 - Timer interrupt mask.
            ADC = 0x78,    ///< 0x78 - ADC conversion result.
            ADCL = 0x78,   ///< 0x78 - ADC result low byte.
            ADCH = 0x79,   ///< 0x79 - ADC result high byte.
            ADCSRA = 0x7A, ///< 0x7A - ADC control/status A.
            ADCSRB = 0x7B, ///< 0x7B - ADC control/status B.
            ADMUX = 0x7C,  ///< 0x7C - ADC multiplexer selection.
            DIDR0 = 0x7E,  ///< 0x7E - Digital-input disable.
            DIDR1 = 0x7F,  ///< 0x7F - Digital-input disable.
            TCCR1A = 0x80, ///< 0x80 - Timer control.
            TCCR1B = 0x81, ///< 0x81 - Timer control.
            TCCR1C = 0x82, ///< 0x82 - Timer control.
            TCNT1L = 0x84, ///< 0x84 - Timer counter.
            TCNT1H = 0x85, ///< 0x85 - Timer counter.
            ICR1L = 0x86,  ///< 0x86 - Input capture register.
            ICR1H = 0x87,  ///< 0x87 - Input capture register.
            OCR1AL = 0x88, ///< 0x88 - Output compare register.
            OCR1AH = 0x89, ///< 0x89 - Output compare register.
            OCR1BL = 0x8A, ///< 0x8A - Output compare register.
            OCR1BH = 0x8B, ///< 0x8B - Output compare register.
            TCCR2A = 0xB0, ///< 0xB0 - Timer control.
            TCCR2B = 0xB1, ///< 0xB1 - Timer control.
            TCNT2 = 0xB2,  ///< 0xB2 - Timer counter.
            OCR2A = 0xB3,  ///< 0xB3 - Output compare register.
            OCR2B = 0xB4,  ///< 0xB4 - Output compare register.
            ASSR = 0xB6,   ///< 0xB6 - Asynchronous timer status.
            TWBR = 0xB8,   ///< 0xB8 - TWI bit-rate.
            TWSR = 0xB9,   ///< 0xB9 - TWI status.
            TWAR = 0xBA,   ///< 0xBA - TWI address.
            TWDR = 0xBB,   ///< 0xBB - TWI data.
            TWCR = 0xBC,   ///< 0xBC - TWI control.
            TWAMR = 0xBD,  ///< 0xBD - TWI address mask.
            UCSR0A = 0xC0, ///< 0xC0 - USART control/status.
            UCSR0B = 0xC1, ///< 0xC1 - USART control/status.
            UCSR0C = 0xC2, ///< 0xC2 - USART control/status.
            UBRR0L = 0xC4, ///< 0xC4 - USART baud-rate.
            UBRR0H = 0xC5, ///< 0xC5 - USART baud-rate.
            UDR0 = 0xC6,   ///< 0xC6 - USART data.
        };
    }
}

#endif

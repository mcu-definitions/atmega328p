/**
 * @file RegisterBits.h
 * @brief Register bit positions and field masks.
 */

#ifndef ATMEGA328P_DEFINITIONS_REGISTER_BITS_H
#define ATMEGA328P_DEFINITIONS_REGISTER_BITS_H

#include <stdint.h>

#include "Config.h"

/** @brief Device-specific definitions for the ATmega328P. */
namespace atmega328p
{
    /** @brief Register bit positions and masks. */
    namespace register_bits
    {
        /** @brief Bit positions for the PINB register. */
        namespace pinb
        {
            enum : uint8_t
            {
                pinb0 = 0U, ///< PINB PINB0 bit position.
                pinb1 = 1U, ///< PINB PINB1 bit position.
                pinb2 = 2U, ///< PINB PINB2 bit position.
                pinb3 = 3U, ///< PINB PINB3 bit position.
                pinb4 = 4U, ///< PINB PINB4 bit position.
                pinb5 = 5U, ///< PINB PINB5 bit position.
                pinb6 = 6U, ///< PINB PINB6 bit position.
                pinb7 = 7U, ///< PINB PINB7 bit position.
            };
        }

        /** @brief Bit positions for the DDRB register. */
        namespace ddrb
        {
            enum : uint8_t
            {
                ddb0 = 0U, ///< DDRB DDB0 bit position.
                ddb1 = 1U, ///< DDRB DDB1 bit position.
                ddb2 = 2U, ///< DDRB DDB2 bit position.
                ddb3 = 3U, ///< DDRB DDB3 bit position.
                ddb4 = 4U, ///< DDRB DDB4 bit position.
                ddb5 = 5U, ///< DDRB DDB5 bit position.
                ddb6 = 6U, ///< DDRB DDB6 bit position.
                ddb7 = 7U, ///< DDRB DDB7 bit position.
            };
        }

        /** @brief Bit positions for the PORTB register. */
        namespace portb
        {
            enum : uint8_t
            {
                portb0 = 0U, ///< PORTB PORTB0 bit position.
                portb1 = 1U, ///< PORTB PORTB1 bit position.
                portb2 = 2U, ///< PORTB PORTB2 bit position.
                portb3 = 3U, ///< PORTB PORTB3 bit position.
                portb4 = 4U, ///< PORTB PORTB4 bit position.
                portb5 = 5U, ///< PORTB PORTB5 bit position.
                portb6 = 6U, ///< PORTB PORTB6 bit position.
                portb7 = 7U, ///< PORTB PORTB7 bit position.
            };
        }

        /** @brief Bit positions for the PINC register. */
        namespace pinc
        {
            enum : uint8_t
            {
                pinc0 = 0U, ///< PINC PINC0 bit position.
                pinc1 = 1U, ///< PINC PINC1 bit position.
                pinc2 = 2U, ///< PINC PINC2 bit position.
                pinc3 = 3U, ///< PINC PINC3 bit position.
                pinc4 = 4U, ///< PINC PINC4 bit position.
                pinc5 = 5U, ///< PINC PINC5 bit position.
                pinc6 = 6U, ///< PINC PINC6 bit position.
            };
        }

        /** @brief Bit positions for the DDRC register. */
        namespace ddrc
        {
            enum : uint8_t
            {
                ddc0 = 0U, ///< DDRC DDC0 bit position.
                ddc1 = 1U, ///< DDRC DDC1 bit position.
                ddc2 = 2U, ///< DDRC DDC2 bit position.
                ddc3 = 3U, ///< DDRC DDC3 bit position.
                ddc4 = 4U, ///< DDRC DDC4 bit position.
                ddc5 = 5U, ///< DDRC DDC5 bit position.
                ddc6 = 6U, ///< DDRC DDC6 bit position.
            };
        }

        /** @brief Bit positions for the PORTC register. */
        namespace portc
        {
            enum : uint8_t
            {
                portc0 = 0U, ///< PORTC PORTC0 bit position.
                portc1 = 1U, ///< PORTC PORTC1 bit position.
                portc2 = 2U, ///< PORTC PORTC2 bit position.
                portc3 = 3U, ///< PORTC PORTC3 bit position.
                portc4 = 4U, ///< PORTC PORTC4 bit position.
                portc5 = 5U, ///< PORTC PORTC5 bit position.
                portc6 = 6U, ///< PORTC PORTC6 bit position.
            };
        }

        /** @brief Bit positions for the PIND register. */
        namespace pind
        {
            enum : uint8_t
            {
                pind0 = 0U, ///< PIND PIND0 bit position.
                pind1 = 1U, ///< PIND PIND1 bit position.
                pind2 = 2U, ///< PIND PIND2 bit position.
                pind3 = 3U, ///< PIND PIND3 bit position.
                pind4 = 4U, ///< PIND PIND4 bit position.
                pind5 = 5U, ///< PIND PIND5 bit position.
                pind6 = 6U, ///< PIND PIND6 bit position.
                pind7 = 7U, ///< PIND PIND7 bit position.
            };
        }

        /** @brief Bit positions for the DDRD register. */
        namespace ddrd
        {
            enum : uint8_t
            {
                ddd0 = 0U, ///< DDRD DDD0 bit position.
                ddd1 = 1U, ///< DDRD DDD1 bit position.
                ddd2 = 2U, ///< DDRD DDD2 bit position.
                ddd3 = 3U, ///< DDRD DDD3 bit position.
                ddd4 = 4U, ///< DDRD DDD4 bit position.
                ddd5 = 5U, ///< DDRD DDD5 bit position.
                ddd6 = 6U, ///< DDRD DDD6 bit position.
                ddd7 = 7U, ///< DDRD DDD7 bit position.
            };
        }

        /** @brief Bit positions for the PORTD register. */
        namespace portd
        {
            enum : uint8_t
            {
                portd0 = 0U, ///< PORTD PORTD0 bit position.
                portd1 = 1U, ///< PORTD PORTD1 bit position.
                portd2 = 2U, ///< PORTD PORTD2 bit position.
                portd3 = 3U, ///< PORTD PORTD3 bit position.
                portd4 = 4U, ///< PORTD PORTD4 bit position.
                portd5 = 5U, ///< PORTD PORTD5 bit position.
                portd6 = 6U, ///< PORTD PORTD6 bit position.
                portd7 = 7U, ///< PORTD PORTD7 bit position.
            };
        }

        /** @brief Bit positions for the MCUCR register. */
        namespace mcucr
        {
            enum : uint8_t
            {
                bods = 6U,  ///< MCUCR BODS bit position.
                bodse = 5U, ///< MCUCR BODSE bit position.
                pud = 4U,   ///< MCUCR PUD bit position.
                ivsel = 1U, ///< MCUCR IVSEL bit position.
                ivce = 0U,  ///< MCUCR IVCE bit position.
            };
        }

        /** @brief Bit positions for the ADMUX register. */
        namespace admux
        {
            enum : uint8_t
            {
                refs1 = 7U,         ///< ADMUX REFS1 bit position.
                refs0 = 6U,         ///< ADMUX REFS0 bit position.
                adlar = 5U,         ///< ADMUX ADLAR bit position.
                mux3 = 3U,          ///< ADMUX MUX3 bit position.
                mux2 = 2U,          ///< ADMUX MUX2 bit position.
                mux1 = 1U,          ///< ADMUX MUX1 bit position.
                mux0 = 0U,          ///< ADMUX MUX0 bit position.
                refs_mask = 0xC0U,  ///< ADMUX REFS field mask.
                mux_mask = 0x0FU,   ///< ADMUX MUX field mask.
                adlar_mask = 0x20U, ///< ADMUX ADLAR field mask.
            };
        }

        /** @brief Bit positions for the ADCSRA register. */
        namespace adcsra
        {
            enum : uint8_t
            {
                aden = 7U,                  ///< ADCSRA ADEN bit position.
                adsc = 6U,                  ///< ADCSRA ADSC bit position.
                adate = 5U,                 ///< ADCSRA ADATE bit position.
                adif = 4U,                  ///< ADCSRA ADIF bit position.
                adie = 3U,                  ///< ADCSRA ADIE bit position.
                adps2 = 2U,                 ///< ADCSRA ADPS2 bit position.
                adps1 = 1U,                 ///< ADCSRA ADPS1 bit position.
                adps0 = 0U,                 ///< ADCSRA ADPS0 bit position.
                adps_mask = 0x07U,          ///< ADCSRA ADPS field mask.
                control_flags_mask = 0xF8U, ///< ADCSRA CONTROL_FLAGS field mask.
            };
        }

        /** @brief Bit positions for the ADCSRB register. */
        namespace adcsrb
        {
            enum : uint8_t
            {
                acme = 6U,         ///< ADCSRB ACME bit position.
                adts2 = 2U,        ///< ADCSRB ADTS2 bit position.
                adts1 = 1U,        ///< ADCSRB ADTS1 bit position.
                adts0 = 0U,        ///< ADCSRB ADTS0 bit position.
                adts_mask = 0x07U, ///< ADCSRB ADTS field mask.
            };
        }

        /** @brief Bit positions for the DIDR0 register. */
        namespace didr0
        {
            enum : uint8_t
            {
                adc0d = 0U, ///< DIDR0 ADC0D bit position.
                adc1d = 1U, ///< DIDR0 ADC1D bit position.
                adc2d = 2U, ///< DIDR0 ADC2D bit position.
                adc3d = 3U, ///< DIDR0 ADC3D bit position.
                adc4d = 4U, ///< DIDR0 ADC4D bit position.
                adc5d = 5U, ///< DIDR0 ADC5D bit position.
            };
        }

        /** @brief Bit positions for the DIDR1 register. */
        namespace didr1
        {
            enum : uint8_t
            {
                ain0d = 0U, ///< DIDR1 AIN0D bit position.
                ain1d = 1U, ///< DIDR1 AIN1D bit position.
            };
        }

        /** @brief Bit positions for the TCCR0A register. */
        namespace tccr0a
        {
            enum : uint8_t
            {
                com0a1 = 7U,        ///< TCCR0A COM0A1 bit position.
                com0a0 = 6U,        ///< TCCR0A COM0A0 bit position.
                com0b1 = 5U,        ///< TCCR0A COM0B1 bit position.
                com0b0 = 4U,        ///< TCCR0A COM0B0 bit position.
                wgm01 = 1U,         ///< TCCR0A WGM01 bit position.
                wgm00 = 0U,         ///< TCCR0A WGM00 bit position.
                com0a_mask = 0xC0U, ///< TCCR0A COM0A field mask.
                com0b_mask = 0x30U, ///< TCCR0A COM0B field mask.
                wgm_mask = 0x03U,   ///< TCCR0A WGM field mask.
            };
        }

        /** @brief Bit positions for the TCCR0B register. */
        namespace tccr0b
        {
            enum : uint8_t
            {
                foc0a = 7U,      ///< TCCR0B FOC0A bit position.
                foc0b = 6U,      ///< TCCR0B FOC0B bit position.
                wgm02 = 3U,      ///< TCCR0B WGM02 bit position.
                cs02 = 2U,       ///< TCCR0B CS02 bit position.
                cs01 = 1U,       ///< TCCR0B CS01 bit position.
                cs00 = 0U,       ///< TCCR0B CS00 bit position.
                cs_mask = 0x07U, ///< TCCR0B CS field mask.
            };
        }

        /** @brief Bit positions for the TIMSK0 register. */
        namespace timsk0
        {
            enum : uint8_t
            {
                ocie0b = 2U, ///< TIMSK0 OCIE0B bit position.
                ocie0a = 1U, ///< TIMSK0 OCIE0A bit position.
                toie0 = 0U,  ///< TIMSK0 TOIE0 bit position.
            };
        }

        /** @brief Bit positions for the TIFR0 register. */
        namespace tifr0
        {
            enum : uint8_t
            {
                ocf0b = 2U, ///< TIFR0 OCF0B bit position.
                ocf0a = 1U, ///< TIFR0 OCF0A bit position.
                tov0 = 0U,  ///< TIFR0 TOV0 bit position.
            };
        }

        /** @brief Bit positions for the TCCR1A register. */
        namespace tccr1a
        {
            enum : uint8_t
            {
                com1a1 = 7U,        ///< TCCR1A COM1A1 bit position.
                com1a0 = 6U,        ///< TCCR1A COM1A0 bit position.
                com1b1 = 5U,        ///< TCCR1A COM1B1 bit position.
                com1b0 = 4U,        ///< TCCR1A COM1B0 bit position.
                wgm11 = 1U,         ///< TCCR1A WGM11 bit position.
                wgm10 = 0U,         ///< TCCR1A WGM10 bit position.
                com1a_mask = 0xC0U, ///< TCCR1A COM1A field mask.
                com1b_mask = 0x30U, ///< TCCR1A COM1B field mask.
                wgm_mask = 0x03U,   ///< TCCR1A WGM field mask.
            };
        }

        /** @brief Bit positions for the TCCR1B register. */
        namespace tccr1b
        {
            enum : uint8_t
            {
                icnc1 = 7U,       ///< TCCR1B ICNC1 bit position.
                ices1 = 6U,       ///< TCCR1B ICES1 bit position.
                wgm13 = 4U,       ///< TCCR1B WGM13 bit position.
                wgm12 = 3U,       ///< TCCR1B WGM12 bit position.
                cs12 = 2U,        ///< TCCR1B CS12 bit position.
                cs11 = 1U,        ///< TCCR1B CS11 bit position.
                cs10 = 0U,        ///< TCCR1B CS10 bit position.
                wgm_mask = 0x18U, ///< TCCR1B WGM field mask.
                cs_mask = 0x07U,  ///< TCCR1B CS field mask.
            };
        }

        /** @brief Bit positions for the TCCR1C register. */
        namespace tccr1c
        {
            enum : uint8_t
            {
                foc1a = 7U, ///< TCCR1C FOC1A bit position.
                foc1b = 6U, ///< TCCR1C FOC1B bit position.
            };
        }

        /** @brief Bit positions for the TIMSK1 register. */
        namespace timsk1
        {
            enum : uint8_t
            {
                icie1 = 5U,  ///< TIMSK1 ICIE1 bit position.
                ocie1b = 2U, ///< TIMSK1 OCIE1B bit position.
                ocie1a = 1U, ///< TIMSK1 OCIE1A bit position.
                toie1 = 0U,  ///< TIMSK1 TOIE1 bit position.
            };
        }

        /** @brief Bit positions for the TIFR1 register. */
        namespace tifr1
        {
            enum : uint8_t
            {
                icf1 = 5U,  ///< TIFR1 ICF1 bit position.
                ocf1b = 2U, ///< TIFR1 OCF1B bit position.
                ocf1a = 1U, ///< TIFR1 OCF1A bit position.
                tov1 = 0U,  ///< TIFR1 TOV1 bit position.
            };
        }

        /** @brief Bit positions for the TCCR2A register. */
        namespace tccr2a
        {
            enum : uint8_t
            {
                com2a1 = 7U,        ///< TCCR2A COM2A1 bit position.
                com2a0 = 6U,        ///< TCCR2A COM2A0 bit position.
                com2b1 = 5U,        ///< TCCR2A COM2B1 bit position.
                com2b0 = 4U,        ///< TCCR2A COM2B0 bit position.
                wgm21 = 1U,         ///< TCCR2A WGM21 bit position.
                wgm20 = 0U,         ///< TCCR2A WGM20 bit position.
                com2a_mask = 0xC0U, ///< TCCR2A COM2A field mask.
                com2b_mask = 0x30U, ///< TCCR2A COM2B field mask.
                wgm_mask = 0x03U,   ///< TCCR2A WGM field mask.
            };
        }

        /** @brief Bit positions for the TCCR2B register. */
        namespace tccr2b
        {
            enum : uint8_t
            {
                foc2a = 7U,      ///< TCCR2B FOC2A bit position.
                foc2b = 6U,      ///< TCCR2B FOC2B bit position.
                wgm22 = 3U,      ///< TCCR2B WGM22 bit position.
                cs22 = 2U,       ///< TCCR2B CS22 bit position.
                cs21 = 1U,       ///< TCCR2B CS21 bit position.
                cs20 = 0U,       ///< TCCR2B CS20 bit position.
                cs_mask = 0x07U, ///< TCCR2B CS field mask.
            };
        }

        /** @brief Bit positions for the TIMSK2 register. */
        namespace timsk2
        {
            enum : uint8_t
            {
                ocie2b = 2U, ///< TIMSK2 OCIE2B bit position.
                ocie2a = 1U, ///< TIMSK2 OCIE2A bit position.
                toie2 = 0U,  ///< TIMSK2 TOIE2 bit position.
            };
        }

        /** @brief Bit positions for the TIFR2 register. */
        namespace tifr2
        {
            enum : uint8_t
            {
                ocf2b = 2U, ///< TIFR2 OCF2B bit position.
                ocf2a = 1U, ///< TIFR2 OCF2A bit position.
                tov2 = 0U,  ///< TIFR2 TOV2 bit position.
            };
        }

        /** @brief Bit positions for the ASSR register. */
        namespace assr
        {
            enum : uint8_t
            {
                exclk = 6U,   ///< ASSR EXCLK bit position.
                as2 = 5U,     ///< ASSR AS2 bit position.
                tcn2ub = 4U,  ///< ASSR TCN2UB bit position.
                ocr2aub = 3U, ///< ASSR OCR2AUB bit position.
                ocr2bub = 2U, ///< ASSR OCR2BUB bit position.
                tcr2aub = 1U, ///< ASSR TCR2AUB bit position.
                tcr2bub = 0U, ///< ASSR TCR2BUB bit position.
            };
        }

        /** @brief Bit positions for the GTCCR register. */
        namespace gtccr
        {
            enum : uint8_t
            {
                tsm = 7U,     ///< GTCCR TSM bit position.
                psrasy = 1U,  ///< GTCCR PSRASY bit position.
                psrsync = 0U, ///< GTCCR PSRSYNC bit position.
            };
        }

        /** @brief Bit positions for the SPCR register. */
        namespace spcr
        {
            enum : uint8_t
            {
                spie = 7U, ///< SPCR SPIE bit position.
                spe = 6U,  ///< SPCR SPE bit position.
                dord = 5U, ///< SPCR DORD bit position.
                mstr = 4U, ///< SPCR MSTR bit position.
                cpol = 3U, ///< SPCR CPOL bit position.
                cpha = 2U, ///< SPCR CPHA bit position.
                spr1 = 1U, ///< SPCR SPR1 bit position.
                spr0 = 0U, ///< SPCR SPR0 bit position.
            };
        }

        /** @brief Bit positions for the SPSR register. */
        namespace spsr
        {
            enum : uint8_t
            {
                spif = 7U,  ///< SPSR SPIF bit position.
                wcol = 6U,  ///< SPSR WCOL bit position.
                spi2x = 0U, ///< SPSR SPI2X bit position.
            };
        }

        /** @brief Bit positions for the UCSR0A register. */
        namespace ucsr0a
        {
            enum : uint8_t
            {
                rxc0 = 7U,  ///< UCSR0A RXC0 bit position.
                txc0 = 6U,  ///< UCSR0A TXC0 bit position.
                udre0 = 5U, ///< UCSR0A UDRE0 bit position.
                fe0 = 4U,   ///< UCSR0A FE0 bit position.
                dor0 = 3U,  ///< UCSR0A DOR0 bit position.
                upe0 = 2U,  ///< UCSR0A UPE0 bit position.
                u2x0 = 1U,  ///< UCSR0A U2X0 bit position.
                mpcm0 = 0U, ///< UCSR0A MPCM0 bit position.
            };
        }

        /** @brief Bit positions for the UCSR0B register. */
        namespace ucsr0b
        {
            enum : uint8_t
            {
                rxcie0 = 7U, ///< UCSR0B RXCIE0 bit position.
                txcie0 = 6U, ///< UCSR0B TXCIE0 bit position.
                udrie0 = 5U, ///< UCSR0B UDRIE0 bit position.
                rxen0 = 4U,  ///< UCSR0B RXEN0 bit position.
                txen0 = 3U,  ///< UCSR0B TXEN0 bit position.
                ucsz02 = 2U, ///< UCSR0B UCSZ02 bit position.
                rxb80 = 1U,  ///< UCSR0B RXB80 bit position.
                txb80 = 0U,  ///< UCSR0B TXB80 bit position.
            };
        }

        /** @brief Bit positions for the UCSR0C register. */
        namespace ucsr0c
        {
            enum : uint8_t
            {
                umsel01 = 7U,       ///< UCSR0C UMSEL01 bit position.
                umsel00 = 6U,       ///< UCSR0C UMSEL00 bit position.
                upm01 = 5U,         ///< UCSR0C UPM01 bit position.
                upm00 = 4U,         ///< UCSR0C UPM00 bit position.
                usbs0 = 3U,         ///< UCSR0C USBS0 bit position.
                ucsz01 = 2U,        ///< UCSR0C UCSZ01 bit position.
                ucsz00 = 1U,        ///< UCSR0C UCSZ00 bit position.
                ucpol0 = 0U,        ///< UCSR0C UCPOL0 bit position.
                umsel_mask = 0xC0U, ///< UCSR0C UMSEL field mask.
                upm_mask = 0x30U,   ///< UCSR0C UPM field mask.
                ucsz_mask = 0x06U,  ///< UCSR0C UCSZ field mask.
            };
        }

        /** @brief Bit positions for the TWCR register. */
        namespace twcr
        {
            enum : uint8_t
            {
                twint = 7U, ///< TWCR TWINT bit position.
                twea = 6U,  ///< TWCR TWEA bit position.
                twsta = 5U, ///< TWCR TWSTA bit position.
                twsto = 4U, ///< TWCR TWSTO bit position.
                twwc = 3U,  ///< TWCR TWWC bit position.
                twen = 2U,  ///< TWCR TWEN bit position.
                twie = 0U,  ///< TWCR TWIE bit position.
            };
        }

        /** @brief Bit positions for the TWSR register. */
        namespace twsr
        {
            enum : uint8_t
            {
                tws_shift = 3U,    ///< TWSR TWS field shift.
                tws_mask = 0xF8U,  ///< TWSR TWS field mask.
                twps1 = 1U,        ///< TWSR TWPS1 bit position.
                twps0 = 0U,        ///< TWSR TWPS0 bit position.
                twps_mask = 0x03U, ///< TWSR TWPS field mask.
            };
        }

        /** @brief Bit positions for the TWAR register. */
        namespace twar
        {
            enum : uint8_t
            {
                twgce = 0U,       ///< TWAR TWGCE bit position.
                twa_shift = 1U,   ///< TWAR TWA field shift.
                twa_mask = 0xFEU, ///< TWAR TWA field mask.
            };
        }

        /** @brief Bit positions for the TWAMR register. */
        namespace twamr
        {
            enum : uint8_t
            {
                twam_shift = 1U,   ///< TWAMR TWAM field shift.
                twam_mask = 0xFEU, ///< TWAMR TWAM field mask.
            };
        }

        /** @brief Bit positions for the ACSR register. */
        namespace acsr
        {
            enum : uint8_t
            {
                acd = 7U,   ///< ACSR ACD bit position.
                acbg = 6U,  ///< ACSR ACBG bit position.
                aco = 5U,   ///< ACSR ACO bit position.
                aci = 4U,   ///< ACSR ACI bit position.
                acie = 3U,  ///< ACSR ACIE bit position.
                acic = 2U,  ///< ACSR ACIC bit position.
                acis1 = 1U, ///< ACSR ACIS1 bit position.
                acis0 = 0U, ///< ACSR ACIS0 bit position.
            };
        }

        /** @brief Bit positions for the EICRA register. */
        namespace eicra
        {
            enum : uint8_t
            {
                isc11 = 3U, ///< EICRA ISC11 bit position.
                isc10 = 2U, ///< EICRA ISC10 bit position.
                isc01 = 1U, ///< EICRA ISC01 bit position.
                isc00 = 0U, ///< EICRA ISC00 bit position.
            };
        }

        /** @brief Bit positions for the EIMSK register. */
        namespace eimsk
        {
            enum : uint8_t
            {
                int1 = 1U, ///< EIMSK INT1 bit position.
                int0 = 0U, ///< EIMSK INT0 bit position.
            };
        }

        /** @brief Bit positions for the EIFR register. */
        namespace eifr
        {
            enum : uint8_t
            {
                intf1 = 1U, ///< EIFR INTF1 bit position.
                intf0 = 0U, ///< EIFR INTF0 bit position.
            };
        }

        /** @brief Bit positions for the PCICR register. */
        namespace pcicr
        {
            enum : uint8_t
            {
                pcie2 = 2U, ///< PCICR PCIE2 bit position.
                pcie1 = 1U, ///< PCICR PCIE1 bit position.
                pcie0 = 0U, ///< PCICR PCIE0 bit position.
            };
        }

        /** @brief Bit positions for the PCIFR register. */
        namespace pcifr
        {
            enum : uint8_t
            {
                pcif2 = 2U, ///< PCIFR PCIF2 bit position.
                pcif1 = 1U, ///< PCIFR PCIF1 bit position.
                pcif0 = 0U, ///< PCIFR PCIF0 bit position.
            };
        }

        /** @brief Bit positions for the PCMSK0 register. */
        namespace pcmsk0
        {
            enum : uint8_t
            {
                pcint0 = 0U, ///< PCMSK0 PCINT0 bit position.
                pcint1 = 1U, ///< PCMSK0 PCINT1 bit position.
                pcint2 = 2U, ///< PCMSK0 PCINT2 bit position.
                pcint3 = 3U, ///< PCMSK0 PCINT3 bit position.
                pcint4 = 4U, ///< PCMSK0 PCINT4 bit position.
                pcint5 = 5U, ///< PCMSK0 PCINT5 bit position.
                pcint6 = 6U, ///< PCMSK0 PCINT6 bit position.
                pcint7 = 7U, ///< PCMSK0 PCINT7 bit position.
            };
        }

        /** @brief Bit positions for the PCMSK1 register. */
        namespace pcmsk1
        {
            enum : uint8_t
            {
                pcint8 = 0U,  ///< PCMSK1 PCINT8 bit position.
                pcint9 = 1U,  ///< PCMSK1 PCINT9 bit position.
                pcint10 = 2U, ///< PCMSK1 PCINT10 bit position.
                pcint11 = 3U, ///< PCMSK1 PCINT11 bit position.
                pcint12 = 4U, ///< PCMSK1 PCINT12 bit position.
                pcint13 = 5U, ///< PCMSK1 PCINT13 bit position.
                pcint14 = 6U, ///< PCMSK1 PCINT14 bit position.
            };
        }

        /** @brief Bit positions for the PCMSK2 register. */
        namespace pcmsk2
        {
            enum : uint8_t
            {
                pcint16 = 0U, ///< PCMSK2 PCINT16 bit position.
                pcint17 = 1U, ///< PCMSK2 PCINT17 bit position.
                pcint18 = 2U, ///< PCMSK2 PCINT18 bit position.
                pcint19 = 3U, ///< PCMSK2 PCINT19 bit position.
                pcint20 = 4U, ///< PCMSK2 PCINT20 bit position.
                pcint21 = 5U, ///< PCMSK2 PCINT21 bit position.
                pcint22 = 6U, ///< PCMSK2 PCINT22 bit position.
                pcint23 = 7U, ///< PCMSK2 PCINT23 bit position.
            };
        }

        /** @brief Bit positions for the SREG register. */
        namespace sreg
        {
            enum : uint8_t
            {
                i = 7U, ///< SREG I bit position.
                t = 6U, ///< SREG T bit position.
                h = 5U, ///< SREG H bit position.
                s = 4U, ///< SREG S bit position.
                v = 3U, ///< SREG V bit position.
                n = 2U, ///< SREG N bit position.
                z = 1U, ///< SREG Z bit position.
                c = 0U, ///< SREG C bit position.
            };
        }

        /** @brief Bit positions for the WDTCSR register. */
        namespace wdtcsr
        {
            enum : uint8_t
            {
                wdif = 7U,        ///< WDTCSR WDIF bit position.
                wdie = 6U,        ///< WDTCSR WDIE bit position.
                wdp3 = 5U,        ///< WDTCSR WDP3 bit position.
                wdce = 4U,        ///< WDTCSR WDCE bit position.
                wde = 3U,         ///< WDTCSR WDE bit position.
                wdp2 = 2U,        ///< WDTCSR WDP2 bit position.
                wdp1 = 1U,        ///< WDTCSR WDP1 bit position.
                wdp0 = 0U,        ///< WDTCSR WDP0 bit position.
                wdp_mask = 0x27U, ///< WDTCSR WDP field mask.
            };
        }

        /** @brief Bit positions for the SMCR register. */
        namespace smcr
        {
            enum : uint8_t
            {
                sm2 = 3U, ///< SMCR SM2 bit position.
                sm1 = 2U, ///< SMCR SM1 bit position.
                sm0 = 1U, ///< SMCR SM0 bit position.
                se = 0U,  ///< SMCR SE bit position.
            };
        }

        /** @brief Bit positions for the PRR register. */
        namespace prr
        {
            enum : uint8_t
            {
                pradc = 0U,    ///< PRR PRADC bit position.
                prusart0 = 1U, ///< PRR PRUSART0 bit position.
                prspi = 2U,    ///< PRR PRSPI bit position.
                prtim1 = 3U,   ///< PRR PRTIM1 bit position.
                prtim0 = 5U,   ///< PRR PRTIM0 bit position.
                prtim2 = 6U,   ///< PRR PRTIM2 bit position.
                prtwi = 7U,    ///< PRR PRTWI bit position.
            };
        }

        /** @brief Bit positions for the MCUSR register. */
        namespace mcusr
        {
            enum : uint8_t
            {
                wdrf = 3U,  ///< MCUSR WDRF bit position.
                borf = 2U,  ///< MCUSR BORF bit position.
                extrf = 1U, ///< MCUSR EXTRF bit position.
                porf = 0U,  ///< MCUSR PORF bit position.
            };
        }

        /** @brief Bit positions for the CLKPR register. */
        namespace clkpr
        {
            enum : uint8_t
            {
                clkpce = 7U,        ///< CLKPR CLKPCE bit position.
                clkps3 = 3U,        ///< CLKPR CLKPS3 bit position.
                clkps2 = 2U,        ///< CLKPR CLKPS2 bit position.
                clkps1 = 1U,        ///< CLKPR CLKPS1 bit position.
                clkps0 = 0U,        ///< CLKPR CLKPS0 bit position.
                clkps_mask = 0x0FU, ///< CLKPR CLKPS field mask.
            };
        }

        /** @brief Bit positions for the OSCCAL register. */
        namespace osccal
        {
            enum : uint8_t
            {
                cal6 = 6U, ///< OSCCAL CAL6 bit position.
                cal5 = 5U, ///< OSCCAL CAL5 bit position.
                cal4 = 4U, ///< OSCCAL CAL4 bit position.
                cal3 = 3U, ///< OSCCAL CAL3 bit position.
                cal2 = 2U, ///< OSCCAL CAL2 bit position.
                cal1 = 1U, ///< OSCCAL CAL1 bit position.
                cal0 = 0U, ///< OSCCAL CAL0 bit position.
            };
        }

        /** @brief Bit positions for the SPMCSR register. */
        namespace spmcsr
        {
            enum : uint8_t
            {
                spmie = 7U,  ///< SPMCSR SPMIE bit position.
                rwwsb = 6U,  ///< SPMCSR RWWSB bit position.
                sigrd = 5U,  ///< SPMCSR SIGRD bit position.
                rwwsre = 4U, ///< SPMCSR RWWSRE bit position.
                blbset = 3U, ///< SPMCSR BLBSET bit position.
                pgwrt = 2U,  ///< SPMCSR PGWRT bit position.
                pgers = 1U,  ///< SPMCSR PGERS bit position.
                spmen = 0U,  ///< SPMCSR SPMEN bit position.
            };
        }

    }
}
#endif

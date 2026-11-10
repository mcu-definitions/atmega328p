/**
 * @file CPU.h
 * @brief CPU registers, pointer pairs, and status flags.
 */

#ifndef ATMEGA328P_DEFINITIONS_CPU_H
#define ATMEGA328P_DEFINITIONS_CPU_H

#include <stdint.h>
#include "Config.h"

/** @brief Device-specific definitions for the ATmega328P. */
namespace atmega328p
{
    /** @brief CPU register and status flag definitions. */
    namespace cpu
    {
        /** @brief CPU general-purpose registers. */
        enum class GeneralPurposeRegister : uint8_t
        {
            R0 = 0,   ///< 0 - CPU register R0.
            R1 = 1,   ///< 1 - CPU register R1.
            R2 = 2,   ///< 2 - CPU register R2.
            R3 = 3,   ///< 3 - CPU register R3.
            R4 = 4,   ///< 4 - CPU register R4.
            R5 = 5,   ///< 5 - CPU register R5.
            R6 = 6,   ///< 6 - CPU register R6.
            R7 = 7,   ///< 7 - CPU register R7.
            R8 = 8,   ///< 8 - CPU register R8.
            R9 = 9,   ///< 9 - CPU register R9.
            R10 = 10, ///< 10 - CPU register R10.
            R11 = 11, ///< 11 - CPU register R11.
            R12 = 12, ///< 12 - CPU register R12.
            R13 = 13, ///< 13 - CPU register R13.
            R14 = 14, ///< 14 - CPU register R14.
            R15 = 15, ///< 15 - CPU register R15.
            R16 = 16, ///< 16 - CPU register R16.
            R17 = 17, ///< 17 - CPU register R17.
            R18 = 18, ///< 18 - CPU register R18.
            R19 = 19, ///< 19 - CPU register R19.
            R20 = 20, ///< 20 - CPU register R20.
            R21 = 21, ///< 21 - CPU register R21.
            R22 = 22, ///< 22 - CPU register R22.
            R23 = 23, ///< 23 - CPU register R23.
            R24 = 24, ///< 24 - CPU register R24.
            R25 = 25, ///< 25 - CPU register R25.
            R26 = 26, ///< 26 - CPU register R26.
            R27 = 27, ///< 27 - CPU register R27.
            R28 = 28, ///< 28 - CPU register R28.
            R29 = 29, ///< 29 - CPU register R29.
            R30 = 30, ///< 30 - CPU register R30.
            R31 = 31, ///< 31 - CPU register R31.
        };

        /** @brief 16-bit pointer-register pairs. */
        enum class PointerRegister : uint8_t
        {
            X = 0, ///< 0 - R27:R26 pointer pair.
            Y = 1, ///< 1 - R29:R28 pointer pair.
            Z = 2, ///< 2 - R31:R30 pointer pair.
        };

        /** @brief Status-register flags. */
        enum class StatusFlag : uint8_t
        {
            Carry = 0,           ///< 0 - Carry flag (C).
            Zero = 1,            ///< 1 - Zero flag (Z).
            Negative = 2,        ///< 2 - Negative flag (N).
            Overflow = 3,        ///< 3 - Two's-complement overflow flag (V).
            Sign = 4,            ///< 4 - Sign flag (S).
            HalfCarry = 5,       ///< 5 - Half-carry flag (H).
            Transfer = 6,        ///< 6 - Bit-copy flag (T).
            GlobalInterrupt = 7, ///< 7 - Global interrupt enable (I).
        };

        enum : uint8_t
        {
            x_low_register = 26,  ///< X low register.
            x_high_register = 27, ///< X high register.
            y_low_register = 28,  ///< Y low register.
            y_high_register = 29, ///< Y high register.
            z_low_register = 30,  ///< Z low register.
            z_high_register = 31, ///< Z high register.
        };

        enum : uint8_t
        {
            status_flag_carry = 0,            ///< Status flag carry.
            status_flag_zero = 1,             ///< Status flag zero.
            status_flag_negative = 2,         ///< Status flag negative.
            status_flag_overflow = 3,         ///< Status flag overflow.
            status_flag_sign = 4,             ///< Status flag sign.
            status_flag_half_carry = 5,       ///< Status flag half carry.
            status_flag_transfer = 6,         ///< Status flag transfer.
            status_flag_global_interrupt = 7, ///< Status flag global interrupt.
        };
    }
}

#endif

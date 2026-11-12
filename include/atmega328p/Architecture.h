/**
 * @file Architecture.h
 * @brief AVR8 architecture characteristics.
 */

#ifndef ATMEGA328P_DEFINITIONS_ARCHITECTURE_H
#define ATMEGA328P_DEFINITIONS_ARCHITECTURE_H

#include <stdint.h>
#include "Config.h"

/** @brief Device-specific definitions for the ATmega328P. */
namespace atmega328p
{
    /** @brief AVR8 architecture characteristics. */
    namespace architecture
    {
        enum : uint8_t
        {
            cpu_word_bits = 8U,
            data_bus_bits = 8U,
            general_purpose_register_count = 32U,
            general_purpose_register_bits = 8U,
            instruction_count = 131U,
            program_counter_bits = 14U,
            stack_pointer_register_pair_bits = 16U,
            status_register_bits = 8U,
            pipeline_stages = 2U,
            multiplier_cycles = 2U,
            harvard_architecture = 1,
            maximum_throughput_mips_per_mhz = 1U
        };
    }
}

#endif

#include <atmega328p/Architecture.h>

namespace mcu = atmega328p;

static_assert(mcu::architecture::cpu_word_bits == 8, "CPU word width");
static_assert(mcu::architecture::general_purpose_register_count == 32,
              "General-purpose registers");
static_assert(mcu::architecture::harvard_architecture == 1,
              "Harvard architecture");

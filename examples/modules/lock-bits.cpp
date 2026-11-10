#include <atmega328p/LockBits.h>

namespace mcu = atmega328p;

static_assert(mcu::lock_bits::count == 6, "Lock-bit count");
static_assert(mcu::lock_bits::default_value == 0xFF, "Default lock byte");

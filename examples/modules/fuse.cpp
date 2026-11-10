#include <atmega328p/Fuse.h>

namespace mcu = atmega328p;

static_assert(mcu::fuse::default_low == 0x62, "Low fuse reference");
static_assert(mcu::fuse::default_high == 0xD9, "High fuse reference");
static_assert(mcu::fuse::default_ext == 0xFF, "Extended fuse reference");

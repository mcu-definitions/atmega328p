#include "../configurations/MCUConfig.h"

constexpr unsigned long cpu_clock_hz = MCU_CLOCK_HZ;
constexpr unsigned char fuse_low = MCU_FUSE_LOW;
constexpr unsigned char fuse_high = MCU_FUSE_HIGH;
constexpr unsigned char fuse_ext = MCU_FUSE_EXT;

constexpr mcu::clock::Source clock_source =
    mcu::clock::Source::InternalCalibratedRC;

static_assert(cpu_clock_hz == 1000000UL, "Configured CPU clock");
static_assert(fuse_low == mcu::fuse::default_low, "Low fuse reference");
static_assert(fuse_high == mcu::fuse::default_high, "High fuse reference");
static_assert(fuse_ext == mcu::fuse::default_ext, "Extended fuse reference");

#include <atmega328p/Bootloader.h>

namespace mcu = atmega328p;

constexpr mcu::bootloader::Size size =
    mcu::bootloader::Size::Words2048;
constexpr mcu::bootloader::SizeCode code =
    mcu::bootloader::SizeCode::Words2048;

static_assert(mcu::bootloader::default_size_words == 2048, "Default boot size");

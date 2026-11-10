#include <atmega328p/Programming.h>

namespace mcu = atmega328p;

constexpr mcu::programming::Interface interface_type =
    mcu::programming::Interface::ISP;

static_assert(mcu::programming::flash_page_size_words == 64,
              "Flash page size");

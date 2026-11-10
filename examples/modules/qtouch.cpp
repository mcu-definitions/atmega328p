#include <atmega328p/QTouch.h>

namespace mcu = atmega328p;

static_assert(mcu::qtouch::supported == 1, "QTouch software support");
static_assert(mcu::qtouch::has_dedicated_hardware == 0,
              "No dedicated QTouch peripheral");

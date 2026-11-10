#include <atmega328p/Reset.h>

namespace mcu = atmega328p;

constexpr mcu::reset::BrownOutFuseCode bod =
    mcu::reset::BrownOutFuseCode::Code100;

static_assert(mcu::reset::has_brown_out_reset == 1, "Brown-out reset");

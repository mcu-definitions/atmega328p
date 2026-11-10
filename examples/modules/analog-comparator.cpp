#include <atmega328p/AnalogComparator.h>

namespace mcu = atmega328p;

constexpr mcu::analog_comparator::InterruptMode trigger =
    mcu::analog_comparator::InterruptMode::RisingEdge;

static_assert(mcu::analog_comparator::count == 1, "One comparator");

#include <atmega328p/ExternalInterrupts.h>

namespace mcu = atmega328p;

constexpr mcu::external_interrupts::Line line =
    mcu::external_interrupts::Line::INT0;
constexpr mcu::external_interrupts::Trigger trigger =
    mcu::external_interrupts::Trigger::FallingEdge;
constexpr mcu::external_interrupts::LinePin pin =
    mcu::external_interrupts::LinePin::INT0;

static_assert(mcu::external_interrupts::line_count == 2, "External interrupt lines");

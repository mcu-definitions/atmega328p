#include "../configurations/MCUConfig.h"

constexpr mcu::pin::Pin status_led = mcu::pin::Pin::PB5;
constexpr mcu::pin::Port status_led_port = mcu::pin::Port::B;

constexpr unsigned char status_led_terminal = mcu::package::selected::PB5;
constexpr unsigned char package_terminal_count = mcu::package::selected::pin_count;

static_assert(status_led_terminal == 19U, "PB5 terminal in PDIP-28");
static_assert(package_terminal_count == 28U, "Selected package terminal count");

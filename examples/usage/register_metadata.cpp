#include "../configurations/MCUConfig.h"

constexpr unsigned int portb_data_address = mcu::register_map::PORTB;
constexpr unsigned char portb5_bit = mcu::register_bits::portb::portb5;

static_assert(portb_data_address == 0x25U, "PORTB data-space address");
static_assert(portb5_bit == 5U, "PORTB5 bit position");

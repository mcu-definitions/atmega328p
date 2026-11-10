#include "../configurations/MCUConfig.h"

constexpr unsigned long flash_capacity = mcu::memory::flash_size_bytes;
constexpr unsigned int sram_capacity = mcu::memory::sram_size_bytes;
constexpr unsigned int eeprom_capacity = mcu::memory::eeprom_size_bytes;

constexpr unsigned char timer_count = mcu::timer::timer_count;
constexpr unsigned char adc_resolution = mcu::adc::resolution_bits;

static_assert(flash_capacity == 32768UL, "Flash capacity");
static_assert(sram_capacity == 2048U, "SRAM capacity");
static_assert(eeprom_capacity == 1024U, "EEPROM capacity");
static_assert(timer_count == 3U, "Timer count");
static_assert(adc_resolution == 10U, "ADC resolution");

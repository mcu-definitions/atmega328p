# Macros

Macros are limited to device selection, feature detection, and preprocessor checks. C++ namespaces and constants are the primary interface.

## Defined by the ATmega328P definitions

`Config.h` identifies the device:

```cpp
MCU_ATMEGA328P
```

It also defines generic feature flags:

- `MCU_HAS_GPIO`
- `MCU_HAS_ADC`
- `MCU_HAS_PWM`
- `MCU_HAS_TIMER0`, `MCU_HAS_TIMER1`, `MCU_HAS_TIMER2`
- `MCU_HAS_USART`
- `MCU_HAS_SPI`
- `MCU_HAS_TWI`
- `MCU_HAS_ANALOG_COMPARATOR`
- `MCU_HAS_WATCHDOG`
- `MCU_HAS_EXTERNAL_INTERRUPTS`
- `MCU_HAS_PIN_CHANGE_INTERRUPTS`
- `MCU_HAS_DEBUGWIRE`
- `MCU_HAS_SELF_PROGRAMMABLE_FLASH`

These macros are useful in `#if` conditions. In C++ code, prefer the matching namespace constants.

## Selected by MCUConfig.h

Define at most one package:

- `MCU_PACKAGE_PDIP28`
- `MCU_PACKAGE_MLF28`
- `MCU_PACKAGE_TQFP32`
- `MCU_PACKAGE_MLF32`

Define at most one operating grade:

- `MCU_GRADE_INDUSTRIAL_85C`
- `MCU_GRADE_INDUSTRIAL_105C`
- `MCU_GRADE_AUTOMOTIVE_125C`

For MLF32, optionally define `MCU_MLF32_PUNCH` or `MCU_MLF32_SAWN`.

Optional checks:

- `MCU_REQUIRE_PACKAGE`
- `MCU_REQUIRE_GRADE`
- `MCU_REQUIRE_MLF32_STYLE`

## Board configuration values

The example `MCUConfig.h` also uses:

- `MCU_CLOCK_HZ`
- `MCU_FUSE_LOW`
- `MCU_FUSE_HIGH`
- `MCU_FUSE_EXT`

These values belong to the consuming board configuration. The definitions library does not calculate fuse bytes or use these macros internally.

## C++ constants instead of macros

Use `mcu::gpio::port_count`, `mcu::memory::flash_size_bytes`, `mcu::pwm::channel_count`, and `mcu::register_bits::...` instead of creating another macro for each hardware value.

There are no public per-register `ATMEGA328P_*` macros or long `*_MAP(X)` lists in the module headers.

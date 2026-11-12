# Macros

The device definitions expose `MCU_ATMEGA328P` and preprocessor feature flags for available peripherals.

## Available hardware flags

- `MCU_HAS_GPIO`
- `MCU_HAS_ADC`
- `MCU_HAS_PWM`
- `MCU_HAS_TIMER0`
- `MCU_HAS_TIMER1`
- `MCU_HAS_TIMER2`
- `MCU_HAS_USART`
- `MCU_HAS_SPI`
- `MCU_HAS_TWI`
- `MCU_HAS_ANALOG_COMPARATOR`
- `MCU_HAS_WATCHDOG`
- `MCU_HAS_EXTERNAL_INTERRUPTS`
- `MCU_HAS_PIN_CHANGE_INTERRUPTS`
- `MCU_HAS_DEBUGWIRE`
- `MCU_HAS_SELF_PROGRAMMABLE_FLASH`

## Package selection

- `MCU_PACKAGE_PDIP28`
- `MCU_PACKAGE_MLF28`
- `MCU_PACKAGE_TQFP32`
- `MCU_PACKAGE_MLF32`

## Operating grade

- `MCU_GRADE_INDUSTRIAL_85C`
- `MCU_GRADE_INDUSTRIAL_105C`
- `MCU_GRADE_AUTOMOTIVE_125C`

## Configuration checks

- `MCU_REQUIRE_PACKAGE` — require explicit package selection.
- `MCU_REQUIRE_GRADE` — require explicit grade selection.
- `MCU_MLF32_PUNCH`
- `MCU_MLF32_SAWN`

`MCU_CLOCK_HZ` and optional fuse settings belong to the consuming firmware. They do not configure the device by themselves.

For C++ code, prefer the typed namespace constants such as `mcu::gpio::port_count` and `mcu::device::has_gpio`.

# atmega328p

ATmega328P hardware definitions.

This repository contains hardware definitions for the ATmega328P. The C++ namespace interface is the primary API; macros are used for MCU selection and preprocessor feature checks.

## Start here

- [Getting started](getting-started.md)
- [Namespaces](namespaces.md)
- [Macros](macros.md)
- [Definitions model](definitions.md)

## MCU configuration

- [Configuration file](configuration/mcu-config.md)
- [Clock configuration](configuration/clock.md)
- [Fuse bytes](configuration/fuses.md)

## Module reference

Each public header has one dedicated page.

| Header | Documentation |
|---|---|
| `ATmega328P.h` | [Aggregate header](modules/aggregate-header.md) |
| `Config.h` | [Config](modules/config.md) |
| `Device.h` | [Device](modules/device.md) |
| `Architecture.h` | [Architecture](modules/architecture.md) |
| `CPU.h` | [CPU](modules/cpu.md) |
| `Memory.h` | [Memory](modules/memory.md) |
| `EEPROM.h` | [EEPROM](modules/eeprom.md) |
| `RegisterBits.h` | [Register bits](modules/register-bits.md) |
| `RegisterMap.h` | [Register map](modules/register-map.md) |
| `Package.h` | [Package](modules/package.md) |
| `PackagePins.h` | [Package pins](modules/package-pins.md) |
| `Pin.h` | [Pins](modules/pin.md) |
| `PinFunctions.h` | [Pin functions](modules/pin-functions.md) |
| `GPIO.h` | [GPIO](modules/gpio.md) |
| `Clock.h` | [Clock](modules/clock.md) |
| `Timer.h` | [Timers](modules/timer.md) |
| `RTC.h` | [RTC-style Timer2](modules/rtc.md) |
| `PWM.h` | [PWM](modules/pwm.md) |
| `ADC.h` | [ADC](modules/adc.md) |
| `AnalogComparator.h` | [Analog comparator](modules/analog-comparator.md) |
| `USART.h` | [USART](modules/usart.md) |
| `SPI.h` | [SPI](modules/spi.md) |
| `TWI.h` | [TWI](modules/twi.md) |
| `Interrupts.h` | [Interrupt vectors](modules/interrupts.md) |
| `ExternalInterrupts.h` | [External interrupts](modules/external-interrupts.md) |
| `Watchdog.h` | [Watchdog](modules/watchdog.md) |
| `Power.h` | [Power](modules/power.md) |
| `Reset.h` | [Reset](modules/reset.md) |
| `Fuse.h` | [Fuses](modules/fuse.md) |
| `LockBits.h` | [Lock bits](modules/lock-bits.md) |
| `Bootloader.h` | [Bootloader](modules/bootloader.md) |
| `Programming.h` | [Programming](modules/programming.md) |
| `DebugWire.h` | [debugWIRE](modules/debugwire.md) |
| `QTouch.h` | [QTouch](modules/qtouch.md) |
| `Electrical.h` | [Electrical characteristics](modules/electrical.md) |
| `Errata.h` | [Errata](modules/errata.md) |

## Doxygen

Public headers include concise Doxygen comments. The repository contains a `Doxyfile` for generating HTML API documentation when Doxygen is installed.

## Reference

- [No runtime implementation](no-runtime-code.md)
- [Technical references](references.md)

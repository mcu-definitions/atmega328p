# ATmega328P reference

Hardware definitions for the ATmega328P.

## Getting started

- [Usage](getting-started.md)
- [Namespaces](namespaces.md)
- [Definitions model](definitions.md)
- [Preprocessor macros](macros.md)

## Configuration

- [MCUConfig.h](configuration/mcu-config.md)
- [Clock](configuration/clock.md)
- [Fuses](configuration/fuses.md)

## Modules

| Header | Reference | Description |
|---|---|---|
| `ATmega328P.h` | [All modules](modules/aggregate-header.md) | Aggregate include |
| `Config.h` | [Configuration](modules/config.md) | Device identification, package and grade selection |
| `Device.h` | [Device](modules/device.md) | Hardware resources and capabilities |
| `Architecture.h` | [Architecture](modules/architecture.md) | AVR8 architecture characteristics |
| `CPU.h` | [CPU](modules/cpu.md) | Core registers and status flags |
| `Memory.h` | [Memory](modules/memory.md) | Flash, SRAM and EEPROM geometry |
| `EEPROM.h` | [EEPROM](modules/eeprom.md) | EEPROM organization |
| `RegisterBits.h` | [Register bits](modules/register-bits.md) | Bit positions and register masks |
| `Package.h` | [Package](modules/package.md) | Physical package characteristics |
| `PackagePins.h` | [Package pins](modules/package-pins.md) | Terminal assignments and package mapping |
| `Pin.h` | [Pins](modules/pin.md) | Logical port and pin identifiers |
| `PinFunctions.h` | [Pin functions](modules/pin-functions.md) | Peripheral signal mapping |
| `GPIO.h` | [GPIO](modules/gpio.md) | Port widths, masks and capabilities |
| `Clock.h` | [Clock](modules/clock.md) | Oscillator and clock characteristics |
| `Timer.h` | [Timers](modules/timer.md) | Timer/counter modes and characteristics |
| `RTC.h` | [RTC](modules/rtc.md) | Asynchronous timer characteristics |
| `PWM.h` | [PWM](modules/pwm.md) | Output-compare channels and modes |
| `ADC.h` | [ADC](modules/adc.md) | Conversion channels and references |
| `AnalogComparator.h` | [Analog comparator](modules/analog-comparator.md) | Analog comparator characteristics |
| `USART.h` | [USART](modules/usart.md) | Serial controller characteristics |
| `SPI.h` | [SPI](modules/spi.md) | SPI hardware definitions |
| `TWI.h` | [TWI](modules/twi.md) | Two-wire interface characteristics |
| `Interrupts.h` | [Interrupts](modules/interrupts.md) | Interrupt sources and vectors |
| `ExternalInterrupts.h` | [External interrupts](modules/external-interrupts.md) | External and pin-change sources |
| `Watchdog.h` | [Watchdog](modules/watchdog.md) | Watchdog timing and control definitions |
| `Power.h` | [Power](modules/power.md) | Sleep and power-control definitions |
| `Reset.h` | [Reset](modules/reset.md) | Reset sources and brownout detection |
| `Fuse.h` | [Fuses](modules/fuse.md) | Fuse bit encodings |
| `LockBits.h` | [Lock bits](modules/lock-bits.md) | Lock-bit encodings |
| `Bootloader.h` | [Bootloader](modules/bootloader.md) | Boot-section layout |
| `Programming.h` | [Programming](modules/programming.md) | Programming interface characteristics |
| `DebugWire.h` | [debugWIRE](modules/debugwire.md) | debugWIRE interface characteristics |
| `QTouch.h` | [QTouch](modules/qtouch.md) | Capacitive touch support metadata |
| `RegisterMap.h` | [Register map](modules/register-map.md) | Data-space register addresses |
| `Electrical.h` | [Electrical](modules/electrical.md) | Operating limits and electrical characteristics |
| `Errata.h` | [Errata](modules/errata.md) | Silicon revisions and errata information |

## Reference

- [No runtime behavior](no-runtime-code.md)
- [Technical references](references.md)

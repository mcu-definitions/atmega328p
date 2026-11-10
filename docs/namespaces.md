# Namespace map

All device-specific definitions are inside `atmega328p`.

The repository provides 32 module namespaces:

| Namespace | Header | Main contents |
|---|---|---|
| `adc` | `ADC.h` | ADC channels, references, triggers |
| `analog_comparator` | `AnalogComparator.h` | Comparator inputs and modes |
| `architecture` | `Architecture.h` | AVR8 architecture |
| `bootloader` | `Bootloader.h` | Boot section geometry |
| `clock` | `Clock.h` | Clock sources and prescalers |
| `cpu` | `CPU.h` | CPU registers and flags |
| `debugwire` | `DebugWire.h` | debugWIRE characteristics |
| `device` | `Device.h` | Signature and resource counts |
| `eeprom` | `EEPROM.h` | EEPROM geometry |
| `electrical` | `Electrical.h` | Electrical limits and grades |
| `errata` | `Errata.h` | Errata and silicon revisions |
| `external_interrupts` | `ExternalInterrupts.h` | INT0/INT1 and PCINT |
| `fuse` | `Fuse.h` | Fuse fields and masks |
| `gpio` | `GPIO.h` | GPIO port characteristics |
| `interrupts` | `Interrupts.h` | Vector table |
| `lock_bits` | `LockBits.h` | Lock-bit masks |
| `memory` | `Memory.h` | Flash, SRAM, EEPROM |
| `package` | `Package.h`, `PackagePins.h` | Package and terminal data |
| `pin` | `Pin.h`, `PinFunctions.h` | Logical pins and capabilities |
| `power` | `Power.h` | Sleep and power reduction |
| `programming` | `Programming.h` | Programming interface metadata |
| `pwm` | `PWM.h` | PWM channels |
| `qtouch` | `QTouch.h` | QTouch support |
| `register_bits` | `RegisterBits.h` | Register bit positions |
| `register_map` | `RegisterMap.h` | Register addresses |
| `reset` | `Reset.h` | Reset and BOD |
| `rtc` | `RTC.h` | Timer2 asynchronous clock |
| `spi` | `SPI.h` | SPI modes and divisors |
| `timer` | `Timer.h` | Timer/counter modes |
| `twi` | `TWI.h` | Two-wire interface |
| `usart` | `USART.h` | USART modes and frame format |
| `watchdog` | `Watchdog.h` | Watchdog timeouts |

## Nested namespaces

- `gpio::port` contains port widths and masks.
- `pin::capabilities` contains capability values for individual pins.
- `package::pdip28`, `mlf28`, `tqfp32`, and `mlf32` contain package-specific data.
- `package::selected` refers to the package selected in `MCUConfig.h`.
- `electrical::industrial_85c`, `industrial_105c`, and `automotive_125c` contain operating profiles.
- `electrical::selected` refers to the selected operating grade.
- `timer::timer0`, `timer1`, and `timer2` describe individual timer units.
- `register_bits` contains one nested namespace per register.

The root aliases `atmega328p::Pin` and `atmega328p::Port` remain available. Prefer the explicit `atmega328p::pin` namespace in new code.

## Common interface across MCU repositories

Each MCU repository keeps its own root namespace (`atmega328p`, `atmega8a`, `attiny85`, and so on), but should use the same module namespaces and common member names where the hardware supports them.

The consuming project's `MCUConfig.h` defines one alias:

```cpp
namespace mcu = atmega328p;
```

A different MCU changes only the alias:

```cpp
namespace mcu = atmega8a;
```

Common peripheral libraries then use the same interface, for example `mcu::gpio::port_count`, `mcu::timer::timer_count`, and `mcu::memory::flash_size_bytes`.

When a device does not contain a peripheral, its definitions repository should expose a zero count or a false capability where appropriate. This lets shared libraries check hardware support without depending on a device-specific namespace.

# Namespaces

All public definitions are under `atmega328p`. The consuming application may define `namespace mcu = atmega328p;` for concise access.

| Namespace | Header | Contents |
|---|---|---|
| `atmega328p::device` | `Device.h` | Hardware resource counts and capabilities |
| `atmega328p::architecture` | `Architecture.h` | AVR8 architecture metadata |
| `atmega328p::cpu` | `CPU.h` | CPU registers and flags |
| `atmega328p::memory` | `Memory.h` | Memory geometry |
| `atmega328p::eeprom` | `EEPROM.h` | EEPROM geometry |
| `atmega328p::register_bits` | `RegisterBits.h` | Register bit fields |
| `atmega328p::register_map` | `RegisterMap.h` | Register data-space addresses |
| `atmega328p::package` | `Package.h` | Physical packages |
| `atmega328p::pin` | `Pin.h` | Logical pins and ports |
| `atmega328p::gpio` | `GPIO.h` | GPIO capabilities and registers |
| `atmega328p::clock` | `Clock.h` | Clock sources and prescalers |
| `atmega328p::timer` | `Timer.h` | Timers and modes |
| `atmega328p::rtc` | `RTC.h` | Asynchronous counter |
| `atmega328p::pwm` | `PWM.h` | PWM channels |
| `atmega328p::adc` | `ADC.h` | ADC channels and references |
| `atmega328p::analog_comparator` | `AnalogComparator.h` | Comparator characteristics |
| `atmega328p::usart` | `USART.h` | Serial channels |
| `atmega328p::spi` | `SPI.h` | SPI modes and capabilities |
| `atmega328p::twi` | `TWI.h` | Two-wire interface |
| `atmega328p::interrupts` | `Interrupts.h` | Interrupt vectors |
| `atmega328p::external_interrupts` | `ExternalInterrupts.h` | External and pin-change interrupts |
| `atmega328p::watchdog` | `Watchdog.h` | Watchdog timer |
| `atmega328p::power` | `Power.h` | Power and sleep modes |
| `atmega328p::reset` | `Reset.h` | Reset and brownout |
| `atmega328p::fuse` | `Fuse.h` | Fuse fields |
| `atmega328p::lock_bits` | `LockBits.h` | Protection bits |
| `atmega328p::bootloader` | `Bootloader.h` | Boot section geometry |
| `atmega328p::programming` | `Programming.h` | Programming metadata |
| `atmega328p::qtouch` | `QTouch.h` | Touch metadata |
| `atmega328p::electrical` | `Electrical.h` | Electrical limits |
| `atmega328p::errata` | `Errata.h` | Silicon errata |
| `atmega328p::debugwire` | `DebugWire.h` | debugWIRE characteristics |

## Nested namespaces

Modules may include subnamespaces for individual peripherals, ports, registers, package variants or operating grades. The available names reflect the hardware of the ATmega328P.

`package::selected` identifies the package configured by the application. Logical pins remain independent of package terminal numbers.

# Definitions model

This repository describes the ATmega328P. It does not implement peripheral behavior.

## Primary interface

The public C++ interface uses:

- the root namespace `atmega328p`;
- short module namespaces such as `gpio`, `pin`, `timer`, `pwm`, `adc`, and `memory`;
- lowercase `snake_case` names for numeric characteristics;
- typed enums for hardware selections such as pins, channels, modes, and clock sources.

The consuming project creates a common alias:

```cpp
namespace mcu = atmega328p;
```

Shared peripheral libraries use `mcu::gpio`, `mcu::timer`, and other common namespaces. Another MCU repository should expose the same module names and common member names where the hardware supports them.

## Macros

Macros are reserved for package/grade selection, feature detection, and preprocessor checks. Ordinary C++ code should use namespace constants.

## Package-dependent data

A logical pin such as `PB5` identifies the silicon signal. Its terminal number depends on the physical package. Select the package in `MCUConfig.h` and use `mcu::package::selected::PB5` for the terminal number.

The same approach is used for operating grades: `mcu::electrical::selected` refers to the selected grade profile.

## No runtime implementation

Headers contain compile-time values and enums. They do not access hardware registers, initialize peripherals, declare interrupt handlers, or allocate runtime tables.

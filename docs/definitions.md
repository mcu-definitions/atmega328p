# Definitions model

The ATmega328P headers describe device-specific hardware facts only. They do not access registers or implement peripheral operations.

## Interface

```cpp
#include <atmega328p/ATmega328P.h>
namespace mcu = atmega328p;
```

The library uses namespaces for hardware modules, strongly typed enums for identifiers and modes, and fixed-width integer types for register addresses and limits.

## Register addresses

`register_map` stores AVR data-space addresses. Low I/O-space instruction operands use a different offset. Register constants are not pointers and perform no reads or writes.

## Logical pins and packages

Logical pin identifiers are independent of physical package terminals. The package selected by the application controls terminal mapping through `package::selected`.

## Scope

Hardware metadata, including capabilities and limitations, is provided at compile time. Firmware and peripheral libraries remain responsible for validating board wiring and performing hardware access.

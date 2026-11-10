# No runtime implementation

This repository contains definitions only:

- namespaces, enums, and compile-time constants;
- device identity and feature macros;
- package and operating-grade selections;
- register addresses and bit positions;
- peripheral capabilities and hardware limits;
- Doxygen comments and documentation.

It does not contain:

- peripheral drivers or initialization;
- register reads or writes;
- inline or ordinary functions;
- interrupt handlers;
- startup code;
- dynamic allocation or runtime lookup tables;
- build-system or programmer integration.

A consuming library uses these definitions to implement behavior. That behavior and any runtime storage belong to the consuming library.

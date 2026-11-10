# Errata.h

**Purpose:** Errata and silicon-revision information.

Namespace: `atmega328p::errata`

The header records the referenced family and automotive errata status and selected datasheet clarifications.

```cpp
#include <atmega328p/Errata.h>

namespace mcu = atmega328p;

static_assert(mcu::errata::errata_document_available == 1,
              "Errata documentation available");
static_assert(mcu::errata::errata_must_be_checked_against_silicon_revision == 1,
              "Check silicon revision");
```

The package code does not identify the silicon revision. Check the exact ordering code and current errata before applying a workaround.

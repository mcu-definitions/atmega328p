#include <atmega328p/Errata.h>

namespace mcu = atmega328p;

static_assert(mcu::errata::errata_document_available == 1,
              "Errata documentation available");
static_assert(mcu::errata::errata_must_be_checked_against_silicon_revision == 1,
              "Check silicon revision");

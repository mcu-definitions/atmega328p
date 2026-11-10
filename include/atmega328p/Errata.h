/**
 * @file Errata.h
 * @brief Silicon revision and errata references.
 */

#ifndef ATMEGA328P_DEFINITIONS_ERRATA_H
#define ATMEGA328P_DEFINITIONS_ERRATA_H

#include <stdint.h>
#include "Config.h"

/** @brief Device-specific definitions for the ATmega328P. */
namespace atmega328p
{
    /** @brief Silicon revision and errata information. */
    namespace errata
    {
        static const char *const family_datasheet_revision = "DS40002061B";
        static const char *const automotive_datasheet_revision = "7810D-AVR-01/15";
        static const char *const family_errata_document = "DS80000855C";
        static const char *const automotive_errata_document = "DS80001060B";

        enum : uint32_t
        {
            errata_document_available = 1,                           ///< Errata document available.
            errata_must_be_checked_against_silicon_revision = 1,     ///< Errata must be checked against silicon revision.
            family_silicon_revision_a_acme_mux_erratum = 1,          ///< Family silicon revision a ACME mux erratum.
            family_silicon_revision_b_acme_mux_erratum = 1,          ///< Family silicon revision b ACME mux erratum.
            family_silicon_revision_d_acme_mux_erratum = 1,          ///< Family silicon revision d ACME mux erratum.
            family_silicon_revision_d_twi_slave_setup_erratum = 1,   ///< Family silicon revision d TWI slave setup erratum.
            family_silicon_revision_a_32khz_oscillator_erratum = 1,  ///< Family silicon revision a 32khz oscillator erratum.
            family_silicon_revision_b_32khz_oscillator_erratum = 1,  ///< Family silicon revision b 32khz oscillator erratum.
            family_silicon_revision_c_production_released = 0,       ///< Family silicon revision c production released.
            family_acme_mux_workaround_required = 1,                 ///< Family ACME mux workaround required.
            family_twi_slave_workaround_required = 1,                ///< Family TWI slave workaround required.
            family_revision_a_b_32khz_oscillator_no_workaround = 1,  ///< Family revision a b 32khz oscillator no workaround.
            automotive_revision_d_known_silicon_errata_count = 0U,   ///< Number of automotive revision d known silicon errata.
            automotive_revisions_a_to_c_production_released = 0,     ///< Automotive revisions a to c production released.
            family_startup_delay_from_reset_cycles = 19U,            ///< Family startup delay from reset (clock cycles).
            automotive_startup_delay_from_reset_cycles = 19U,        ///< Automotive startup delay from reset (clock cycles).
            startup_delay_datasheet_correction_from_14_to_19_ck = 1, ///< Startup delay datasheet correction from 14 to 19 ck.
        };

    }
}
#endif

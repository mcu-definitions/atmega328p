/**
 * @file Config.h
 * @brief Selects the ATmega328P package and operating grade.
 */

#ifndef ATMEGA328P_DEFINITIONS_CONFIG_H
#define ATMEGA328P_DEFINITIONS_CONFIG_H

/** @brief Identifies the selected device. */
#define MCU_ATMEGA328P 1

/** @brief Generic hardware feature flags for preprocessor checks. */
#define MCU_HAS_GPIO 1
#define MCU_HAS_ADC 1
#define MCU_HAS_PWM 1
#define MCU_HAS_TIMER0 1
#define MCU_HAS_TIMER1 1
#define MCU_HAS_TIMER2 1
#define MCU_HAS_USART 1
#define MCU_HAS_SPI 1
#define MCU_HAS_TWI 1
#define MCU_HAS_ANALOG_COMPARATOR 1
#define MCU_HAS_WATCHDOG 1
#define MCU_HAS_EXTERNAL_INTERRUPTS 1
#define MCU_HAS_PIN_CHANGE_INTERRUPTS 1
#define MCU_HAS_DEBUGWIRE 1
#define MCU_HAS_SELF_PROGRAMMABLE_FLASH 1

#if (defined(MCU_PACKAGE_PDIP28) + defined(MCU_PACKAGE_MLF28) + \
     defined(MCU_PACKAGE_TQFP32) + defined(MCU_PACKAGE_MLF32)) > 1
#error "Select only one MCU package."
#endif

#if (defined(MCU_GRADE_INDUSTRIAL_85C) +  \
     defined(MCU_GRADE_INDUSTRIAL_105C) + \
     defined(MCU_GRADE_AUTOMOTIVE_125C)) > 1
#error "Select only one MCU operating grade."
#endif

#if (defined(MCU_MLF32_PUNCH) + defined(MCU_MLF32_SAWN)) > 1
#error "Select only one MLF32 package style."
#endif

#if (defined(MCU_MLF32_PUNCH) || defined(MCU_MLF32_SAWN)) && \
    !defined(MCU_PACKAGE_MLF32)
#error "An MLF32 style requires MCU_PACKAGE_MLF32."
#endif

#if defined(MCU_REQUIRE_PACKAGE) &&                                \
    !defined(MCU_PACKAGE_PDIP28) && !defined(MCU_PACKAGE_MLF28) && \
    !defined(MCU_PACKAGE_TQFP32) && !defined(MCU_PACKAGE_MLF32)
#error "Select the physical MCU package."
#endif

#if defined(MCU_REQUIRE_GRADE) &&          \
    !defined(MCU_GRADE_INDUSTRIAL_85C) &&  \
    !defined(MCU_GRADE_INDUSTRIAL_105C) && \
    !defined(MCU_GRADE_AUTOMOTIVE_125C)
#error "Select the MCU operating grade."
#endif

#if defined(MCU_REQUIRE_MLF32_STYLE) && defined(MCU_PACKAGE_MLF32) && \
    !defined(MCU_MLF32_PUNCH) && !defined(MCU_MLF32_SAWN)
#error "Select the MLF32 package style."
#endif

#if defined(MCU_PACKAGE_MLF28) && defined(MCU_GRADE_INDUSTRIAL_105C)
#error "The selected MLF28 ordering is not listed for the 105C grade."
#endif

#if defined(MCU_GRADE_AUTOMOTIVE_125C) && \
    !defined(MCU_PACKAGE_TQFP32) && !defined(MCU_PACKAGE_MLF32)
#error "The automotive 125C grade is listed only for 32-terminal packages."
#endif

#endif

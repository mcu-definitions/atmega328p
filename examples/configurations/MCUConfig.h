#ifndef MCU_CONFIG_H
#define MCU_CONFIG_H

/* Physical package and ordering grade. */
#define MCU_PACKAGE_PDIP28
#define MCU_GRADE_INDUSTRIAL_85C

/* Internal RC at 8 MHz with CKDIV8: 1 MHz CPU after reset. */
#define MCU_CLOCK_HZ 1000000UL

/* Low, High, and Extended fuse bytes for this configuration. */
#define MCU_FUSE_LOW 0x62
#define MCU_FUSE_HIGH 0xD9
#define MCU_FUSE_EXT 0xFF

#include <atmega328p/ATmega328P.h>

namespace mcu = atmega328p;

#endif

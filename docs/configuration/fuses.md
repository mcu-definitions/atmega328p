# Fuse configuration

Fuse definitions are in `atmega328p::fuse`. The selected byte values for a board belong in its `MCUConfig.h`.

## Example

```cpp
#define MCU_FUSE_LOW 0x62
#define MCU_FUSE_HIGH 0xD9
#define MCU_FUSE_EXT 0xFF
```

These are the documented factory reference bytes, not universal settings for every board.

## Fuse definitions

The library names the fields in the Low, High, and Extended bytes. For example:

- Low: `ckdiv8`, `ckout`, `sut1`, `sut0`, `cksel3`–`cksel0`
- High: `rstdisbl`, `dwen`, `spien`, `wdton`, `eesave`, `bootsz1`, `bootsz0`, `bootrst`
- Extended: `bodlevel2`–`bodlevel0`

Fuse bits are active-low. A programmed bit reads as zero.

## Keep values explicit

The configuration file should contain the actual intended byte values. Do not reconstruct them with shifts, masks, or `static_cast` expressions in `MCUConfig.h`.

This repository only defines the device's fuse fields and reference values. It does not generate programming commands, write fuses, or integrate with a programmer.

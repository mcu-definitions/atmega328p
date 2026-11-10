# Clock configuration

Clock hardware definitions are in `atmega328p::clock`. The selected board frequency belongs in `MCUConfig.h`.

## Expected CPU frequency

```cpp
#define MCU_CLOCK_HZ 1000000UL
```

This is the expected CPU frequency immediately after reset. It is not necessarily the oscillator's raw frequency: CKDIV8 or another clock prescaler may divide the source.

For the documented factory reference, the internal calibrated RC oscillator is nominally 8 MHz and CKDIV8 is programmed, giving a nominal 1 MHz CPU clock after reset.

## Available definitions

Use `mcu::clock::Source`, `CKSELCode`, `SUTCode`, and `Prescaler` to identify the clock choices. Constants such as `internal_calibrated_rc_hz`, `internal_128khz_rc_hz`, and `factory_default_cpu_hz` describe the device.

The library does not calculate fuse bytes from the selected clock, configure CLKPR, or change the physical clock. Keep `MCU_CLOCK_HZ` consistent with the intended fuse bytes and board oscillator.

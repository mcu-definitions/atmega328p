# Technical references

## Primary datasheets

1. **ATmega48A/PA/88A/PA/168A/PA/328/P Data Sheet**, Microchip DS40002061B. Used for package pinouts, standard industrial ordering grades, peripherals, memory, pin multiplexing, timers/PWM, ADC, register summary, and package drawings.
   - [Official datasheet (PDF)](https://ww1.microchip.com/downloads/aemDocuments/documents/MCU08/ProductDocuments/DataSheets/ATmega48A-PA-88A-PA-168A-PA-328-P-DS-DS40002061B.pdf)
   - [Microchip ATmega328P product page](https://www.microchip.com/en-us/product/atmega328p)
2. **ATmega328P Automotive Datasheet**, 7810D–AVR–01/15. Used for automotive electrical/speed limits and automotive package characteristics.
   - [Automotive datasheet (PDF)](https://ww1.microchip.com/downloads/en/DeviceDoc/Atmel-7810-Automotive-Microcontrollers-ATmega328P_Datasheet.pdf)

## Errata

- ATmega328/P family errata and datasheet clarifications: DS80000855C.
  - [Family errata (PDF)](https://ww1.microchip.com/downloads/aemDocuments/documents/MCU08/ProductDocuments/Errata/DS80000855C.pdf)
- ATmega328P automotive errata: DS80001060B.
  - [Automotive errata (PDF)](https://ww1.microchip.com/downloads/aemDocuments/documents/MCU08/ProductDocuments/Errata/ATmega328P-Auto-SilConErrataClarif-DS80001060.pdf)

## Source handling

- Physical terminal numbers are package-specific; use the drawing for the exact package.
- Industrial and automotive electrical limits are kept separate.
- Typical values remain labelled as typical.
- Errata applicability depends on the exact silicon revision and ordering code.

The repository records definitions from these sources. Confirm the current datasheet and errata for the exact device before using safety, electrical, timing, or programming limits in a design.

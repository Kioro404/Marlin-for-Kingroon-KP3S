#ifndef _BOOTSCREEN_H_
#define _BOOTSCREEN_H_

#include "Configuration.h" // required

#if ENABLED(SHOW_CUSTOM_BOOTSCREEN)

  #define CUSTOM_BOOTSCREEN_TIMEOUT 3000 // (ms) Total Duration to display the boot screen(s)
  #define CUSTOM_BOOTSCREEN_BMPWIDTH 240
  #define CUSTOM_BOOTSCREEN_BMPHEIGHT 320

	// Get the custom boot logo from the Marlin website https://marlinfw.org/tools/u8g2converter/
	
  const unsigned char custom_boot_logo[] PROGMEM = {
    // Aquí pega el array de bytes que generaste con la herramienta de conversión
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    // ... más líneas de código ...
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
  };

#endif // SHOW_CUSTOM_BOOTSCREEN

#endif // _BOOTSCREEN_H_
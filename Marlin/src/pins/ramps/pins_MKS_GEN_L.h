/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * MKS GEN L – Arduino Mega2560 with RAMPS v1.4 pin assignments
 */

#if HOTENDS > 2 || E_STEPPERS > 2
  #error "MKS GEN L supports up to 2 hotends / E-steppers. Comment out this line to continue."
#endif

#define BOARD_INFO_NAME "MKS GEN L"

//
// Heaters / Fans
//
// Power outputs EFBF or EFBE
#define MOSFET_D_PIN 7

//
// CS Pins wired to avoid conflict with the LCD
// See https://www.thingiverse.com/asset:66604
//

/**
#ifndef X_CS_PIN
  #define X_CS_PIN 59
#endif

#ifndef Y_CS_PIN
  #define Y_CS_PIN 63
#endif


/////Misc pins added by SilverCyrex
//
// Servos
//
#define SERVO0_PIN       11
#define SERVO1_PIN        6
#define SERVO2_PIN        5
#define SERVO3_PIN        4

//
// Limit Switches
//
#ifndef X_STOP_PIN
  #ifndef X_MIN_PIN
    #define X_MIN_PIN       3
  #endif
  #ifndef X_MAX_PIN
    #define X_MAX_PIN       2
  #endif
#endif
#ifndef Y_STOP_PIN
  //#ifndef Y_MIN_PIN
    //#define Y_MIN_PIN      14
  //#endif
  #ifndef Y_MAX_PIN
    #define Y_MAX_PIN      15
  #endif
#endif
#ifndef Z_STOP_PIN
  #ifndef Z_MIN_PIN
    #define Z_MIN_PIN      18
  #endif
  //#ifndef Z_MAX_PIN
    //#define Z_MAX_PIN      19
  //#endif
#endif

//
// Steppers
//
#define X_STEP_PIN         54
#define X_DIR_PIN          55
#define X_ENABLE_PIN       38

#define Y_STEP_PIN         60
#define Y_DIR_PIN          61
#define Y_ENABLE_PIN       56

#define Z_STEP_PIN         46
#define Z_DIR_PIN          48
#define Z_ENABLE_PIN       62

#define E0_STEP_PIN        26
#define E0_DIR_PIN         28
#define E0_ENABLE_PIN      24

#define E1_STEP_PIN        36
#define E1_DIR_PIN         34
#define E1_ENABLE_PIN      30
*/
#define E2_STEP_PIN        40
#define E2_DIR_PIN         42
#define E2_ENABLE_PIN      63
/**
//
// Temperature Sensors
//
#ifndef TEMP_0_PIN
  #define TEMP_0_PIN       13   // Analog Input
#endif
#ifndef TEMP_1_PIN
  #define TEMP_1_PIN       15   // Analog Input
#endif
#ifndef TEMP_BED_PIN
  #define TEMP_BED_PIN     14   // Analog Input
#endif

  #define LCD_PINS_RS     16
  #define LCD_PINS_ENABLE 17
  #define LCD_PINS_D4     23
  #define LCD_PINS_D5     25
  #define LCD_PINS_D6     27
  #define LCD_PINS_D7       29

  #define BEEPER_PIN        37
  #define BTN_ENC           35
  #define SD_DETECT_PIN     49

    #ifndef KILL_PIN
      #define KILL_PIN        41
    #endif

  #define DOGLCD_A0       27
  #define DOGLCD_CS       25

  #define LCD_BACKLIGHT_PIN -1  // 65 (MKS mini12864 can't adjust backlight by software!)

  #define BTN_EN1         31
  #define BTN_EN2         33
*/
  //
  // Heaters / Fans
  //
  //#define HEATER_0_PIN 10
  //#define HEATER_1_PIN 7
  //#define HEATER_BED_PIN 8
    #define FAN_PIN 9
    #define FAN1_PIN 65
    #define FAN2_PIN 66
/**
  #define SDSS               53
  #define LED_PIN            13

    #ifndef FILWIDTH_PIN
     #define FILWIDTH_PIN      5   // Analog Input on AUX2
    #endif
*/
// Filament sensor
#ifndef FIL_RUNOUT_PIN
  #define FIL_RUNOUT_PIN 14 // Use Y_MIN limit switch interface
#endif
#ifndef FIL_RUNOUT2_PIN
  #define FIL_RUNOUT2_PIN 19 // Use Z_MAX limit switch interface
#endif



#include "pins_RAMPS.h"

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
 * This File has been modified to make marlin work with Climber 7
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

//Misc pins added by SilverCyrex
//
// Steppers
//

#define E2_STEP_PIN        40
#define E2_DIR_PIN         42
#define E2_ENABLE_PIN      63

//
// Heaters / Fans
//
#define FAN_PIN 9
#define FAN1_PIN 65
#define FAN2_PIN 66

// Filament sensor
#ifndef FIL_RUNOUT_PIN
  #define FIL_RUNOUT_PIN 14 // Use Y_MIN limit switch interface
#endif
#ifndef FIL_RUNOUT2_PIN
  #define FIL_RUNOUT2_PIN 19 // Use Z_MAX limit switch interface
#endif



#include "pins_RAMPS.h"

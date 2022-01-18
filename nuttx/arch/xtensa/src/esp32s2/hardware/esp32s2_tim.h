/****************************************************************************
 * arch/xtensa/src/esp32s2/hardware/esp32s2_tim.h
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

#ifndef __ARCH_XTENSA_SRC_ESP32S2_HARDWARE_ESP32S2_TIMG_H
#define __ARCH_XTENSA_SRC_ESP32S2_HARDWARE_ESP32S2_TIMG_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "esp32s2_soc.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define SHIFT_32           		32

/* TIMG_T0CONFIG_REG(i) register
 * Timer 0 configuration register
 */

#define TIMG_T0CONFIG_REG(i) (REG_TIMG_BASE(i) + 0x0)

/* TIMG_T0_EN : R/W; bitpos: [31]; default: 0;
 * When set, the timer 0 time-base counter is enabled.
 */

#define TIMG_T0_EN    (BIT(31))
#define TIMG_T0_EN_M  (TIMG_T0_EN_V << TIMG_T0_EN_S)
#define TIMG_T0_EN_V  0x00000001
#define TIMG_T0_EN_S  31

/* TIMG_T0_INCREASE : R/W; bitpos: [30]; default: 1;
 * When set, the timer 0 time-base counter will increment every clock tick.
 * When
 *
 * cleared, the timer 0 time-base counter will decrement.
 */

#define TIMG_T0_INCREASE    (BIT(30))
#define TIMG_T0_INCREASE_M  (TIMG_T0_INCREASE_V << TIMG_T0_INCREASE_S)
#define TIMG_T0_INCREASE_V  0x00000001
#define TIMG_T0_INCREASE_S  30

/* TIMG_T0_AUTORELOAD : R/W; bitpos: [29]; default: 1;
 * When set, timer 0 auto-reload at alarm is enabled.
 */

#define TIMG_T0_AUTORELOAD    (BIT(29))
#define TIMG_T0_AUTORELOAD_M  (TIMG_T0_AUTORELOAD_V << TIMG_T0_AUTORELOAD_S)
#define TIMG_T0_AUTORELOAD_V  0x00000001
#define TIMG_T0_AUTORELOAD_S  29

/* TIMG_T0_DIVIDER : R/W; bitpos: [28:13]; default: 1;
 * Timer 0 clock (T0_clk) prescaler value.
 */

#define TIMG_T0_DIVIDER    0x0000FFFF
#define TIMG_T0_DIVIDER_M  (TIMG_T0_DIVIDER_V << TIMG_T0_DIVIDER_S)
#define TIMG_T0_DIVIDER_V  0x0000FFFF
#define TIMG_T0_DIVIDER_S  13

/* TIMG_T0_EDGE_INT_EN : R/W; bitpos: [12]; default: 0;
 * When set, an alarm will generate an edge type interrupt.
 */

#define TIMG_T0_EDGE_INT_EN    (BIT(12))
#define TIMG_T0_EDGE_INT_EN_M  (TIMG_T0_EDGE_INT_EN_V << TIMG_T0_EDGE_INT_EN_S)
#define TIMG_T0_EDGE_INT_EN_V  0x00000001
#define TIMG_T0_EDGE_INT_EN_S  12

/* TIMG_T0_LEVEL_INT_EN : R/W; bitpos: [11]; default: 0;
 * When set, an alarm will generate a level type interrupt.
 */

#define TIMG_T0_LEVEL_INT_EN    (BIT(11))
#define TIMG_T0_LEVEL_INT_EN_M  (TIMG_T0_LEVEL_INT_EN_V << TIMG_T0_LEVEL_INT_EN_S)
#define TIMG_T0_LEVEL_INT_EN_V  0x00000001
#define TIMG_T0_LEVEL_INT_EN_S  11

/* TIMG_T0_ALARM_EN : R/W; bitpos: [10]; default: 0;
 * When set, the alarm is enabled. This bit is automatically cleared once an
 *
 * alarm occurs.
 */

#define TIMG_T0_ALARM_EN    (BIT(10))
#define TIMG_T0_ALARM_EN_M  (TIMG_T0_ALARM_EN_V << TIMG_T0_ALARM_EN_S)
#define TIMG_T0_ALARM_EN_V  0x00000001
#define TIMG_T0_ALARM_EN_S  10

/* TIMG_T0_USE_XTAL : R/W; bitpos: [9]; default: 0;
 * 1: Use XTAL_CLK as the source clock of timer group. 0: Use APB_CLK as the
 * source clock of timer group.
 */

#define TIMG_T0_USE_XTAL    (BIT(9))
#define TIMG_T0_USE_XTAL_M  (TIMG_T0_USE_XTAL_V << TIMG_T0_USE_XTAL_S)
#define TIMG_T0_USE_XTAL_V  0x00000001
#define TIMG_T0_USE_XTAL_S  9

/* TIMG_T0LO_REG(i) register
 * Timer 0 current value, low 32 bits
 */

#define TIMG_T0LO_REG(i) (REG_TIMG_BASE(i) + 0x4)

/* TIMG_T0_LO : RO; bitpos: [31:0]; default: 0;
 * After writing to TIMG_T0UPDATE_REG(i), the low 32 bits of the time-base
 * counter
 *
 * of timer 0 can be read here.
 */

#define TIMG_T0_LO    0xFFFFFFFF
#define TIMG_T0_LO_M  (TIMG_T0_LO_V << TIMG_T0_LO_S)
#define TIMG_T0_LO_V  0xFFFFFFFF
#define TIMG_T0_LO_S  0

/* TIMG_T0HI_REG(i) register
 * Timer 0 current value, high 32 bits
 */

#define TIMG_T0HI_REG(i) (REG_TIMG_BASE(i) + 0x8)

/* TIMG_T0_HI : RO; bitpos: [31:0]; default: 0;
 * After writing to TIMG_T0UPDATE_REG(i), the high 32 bits of the time-base
 * counter
 *
 * of timer 0 can be read here.
 */

#define TIMG_T0_HI    0xFFFFFFFF
#define TIMG_T0_HI_M  (TIMG_T0_HI_V << TIMG_T0_HI_S)
#define TIMG_T0_HI_V  0xFFFFFFFF
#define TIMG_T0_HI_S  0

/* TIMG_T0UPDATE_REG(i) register
 * Write to copy current timer value to TIMGn_T0_(LO/HI)_REG(i)
 */

#define TIMG_T0UPDATE_REG(i) (REG_TIMG_BASE(i) + 0xc)

/* TIMG_T0_UPDATE : R/W; bitpos: [31]; default: 0;
 * After writing 0 or 1 to TIMG_T0UPDATE_REG(i), the counter value
 * is latched.
 */

#define TIMG_T0_UPDATE    (BIT(31))
#define TIMG_T0_UPDATE_M  (TIMG_T0_UPDATE_V << TIMG_T0_UPDATE_S)
#define TIMG_T0_UPDATE_V  0x00000001
#define TIMG_T0_UPDATE_S  31

/* TIMG_T0ALARMLO_REG(i) register
 * Timer 0 alarm value, low 32 bits
 */

#define TIMG_T0ALARMLO_REG(i) (REG_TIMG_BASE(i) + 0x10)

/* TIMG_T0_ALARM_LO : R/W; bitpos: [31:0]; default: 0;
 * Timer 0 alarm trigger time-base counter value, low 32 bits.
 */

#define TIMG_T0_ALARM_LO    0xFFFFFFFF
#define TIMG_T0_ALARM_LO_M  (TIMG_T0_ALARM_LO_V << TIMG_T0_ALARM_LO_S)
#define TIMG_T0_ALARM_LO_V  0xFFFFFFFF
#define TIMG_T0_ALARM_LO_S  0

/* TIMG_T0ALARMHI_REG(i) register
 * Timer 0 alarm value, high bits
 */

#define TIMG_T0ALARMHI_REG(i) (REG_TIMG_BASE(i) + 0x14)

/* TIMG_T0_ALARM_HI : R/W; bitpos: [31:0]; default: 0;
 *
 *
 * Timer 0 alarm trigger time-base counter value, high 32 bits.
 */

#define TIMG_T0_ALARM_HI    0xFFFFFFFF
#define TIMG_T0_ALARM_HI_M  (TIMG_T0_ALARM_HI_V << TIMG_T0_ALARM_HI_S)
#define TIMG_T0_ALARM_HI_V  0xFFFFFFFF
#define TIMG_T0_ALARM_HI_S  0

/* TIMG_T0LOADLO_REG(i) register
 * Timer 0 reload value, low 32 bits
 */

#define TIMG_T0LOADLO_REG(i) (REG_TIMG_BASE(i) + 0x18)

/* TIMG_T0_LOAD_LO : R/W; bitpos: [31:0]; default: 0;
 *
 *
 * Low 32 bits of the value that a reload will load onto timer 0 time-base
 *
 * Counter.
 */

#define TIMG_T0_LOAD_LO    0xFFFFFFFF
#define TIMG_T0_LOAD_LO_M  (TIMG_T0_LOAD_LO_V << TIMG_T0_LOAD_LO_S)
#define TIMG_T0_LOAD_LO_V  0xFFFFFFFF
#define TIMG_T0_LOAD_LO_S  0

/* TIMG_T0LOADHI_REG(i) register
 * Timer 0 reload value, high 32 bits
 */

#define TIMG_T0LOADHI_REG(i) (REG_TIMG_BASE(i) + 0x1c)

/* TIMG_T0_LOAD_HI : R/W; bitpos: [31:0]; default: 0;
 *
 *
 * High 32 bits of the value that a reload will load onto timer 0 time-base
 *
 * counter.
 */

#define TIMG_T0_LOAD_HI    0xFFFFFFFF
#define TIMG_T0_LOAD_HI_M  (TIMG_T0_LOAD_HI_V << TIMG_T0_LOAD_HI_S)
#define TIMG_T0_LOAD_HI_V  0xFFFFFFFF
#define TIMG_T0_LOAD_HI_S  0

/* TIMG_T0LOAD_REG(i) register
 * Write to reload timer from TIMG_T0_(LOADLOLOADHI)_REG(i)
 */

#define TIMG_T0LOAD_REG(i) (REG_TIMG_BASE(i) + 0x20)

/* TIMG_T0_LOAD : WO; bitpos: [31:0]; default: 0;
 *
 *
 * Write any value to trigger a timer 0 time-base counter reload.
 */

#define TIMG_T0_LOAD    0xFFFFFFFF
#define TIMG_T0_LOAD_M  (TIMG_T0_LOAD_V << TIMG_T0_LOAD_S)
#define TIMG_T0_LOAD_V  0xFFFFFFFF
#define TIMG_T0_LOAD_S  0

/* TIMG_T1CONFIG_REG(i) register
 * Timer 1 configuration register
 */

#define TIMG_T1CONFIG_REG(i) (REG_TIMG_BASE(i) + 0x24)

/* TIMG_T1_EN : R/W; bitpos: [31]; default: 0;
 * When set, the timer 1 time-base counter is enabled.
 */

#define TIMG_T1_EN    (BIT(31))
#define TIMG_T1_EN_M  (TIMG_T1_EN_V << TIMG_T1_EN_S)
#define TIMG_T1_EN_V  0x00000001
#define TIMG_T1_EN_S  31

/* TIMG_T1_INCREASE : R/W; bitpos: [30]; default: 1;
 * When set, the timer 1 time-base counter will increment every clock tick.
 * When
 *
 * cleared, the timer 1 time-base counter will decrement.
 */

#define TIMG_T1_INCREASE    (BIT(30))
#define TIMG_T1_INCREASE_M  (TIMG_T1_INCREASE_V << TIMG_T1_INCREASE_S)
#define TIMG_T1_INCREASE_V  0x00000001
#define TIMG_T1_INCREASE_S  30

/* TIMG_T1_AUTORELOAD : R/W; bitpos: [29]; default: 1;
 * When set, timer 1 auto-reload at alarm is enabled.
 */

#define TIMG_T1_AUTORELOAD    (BIT(29))
#define TIMG_T1_AUTORELOAD_M  (TIMG_T1_AUTORELOAD_V << TIMG_T1_AUTORELOAD_S)
#define TIMG_T1_AUTORELOAD_V  0x00000001
#define TIMG_T1_AUTORELOAD_S  29

/* TIMG_T1_DIVIDER : R/W; bitpos: [28:13]; default: 1;
 * Timer 1 clock (T1_clk) prescaler value.
 */

#define TIMG_T1_DIVIDER    0x0000FFFF
#define TIMG_T1_DIVIDER_M  (TIMG_T1_DIVIDER_V << TIMG_T1_DIVIDER_S)
#define TIMG_T1_DIVIDER_V  0x0000FFFF
#define TIMG_T1_DIVIDER_S  13

/* TIMG_T1_EDGE_INT_EN : R/W; bitpos: [12]; default: 0;
 * When set, an alarm will generate an edge type interrupt.
 */

#define TIMG_T1_EDGE_INT_EN    (BIT(12))
#define TIMG_T1_EDGE_INT_EN_M  (TIMG_T1_EDGE_INT_EN_V << TIMG_T1_EDGE_INT_EN_S)
#define TIMG_T1_EDGE_INT_EN_V  0x00000001
#define TIMG_T1_EDGE_INT_EN_S  12

/* TIMG_T1_LEVEL_INT_EN : R/W; bitpos: [11]; default: 0;
 * When set, an alarm will generate a level type interrupt.
 */

#define TIMG_T1_LEVEL_INT_EN    (BIT(11))
#define TIMG_T1_LEVEL_INT_EN_M  (TIMG_T1_LEVEL_INT_EN_V << TIMG_T1_LEVEL_INT_EN_S)
#define TIMG_T1_LEVEL_INT_EN_V  0x00000001
#define TIMG_T1_LEVEL_INT_EN_S  11

/* TIMG_T1_ALARM_EN : R/W; bitpos: [10]; default: 0;
 * When set, the alarm is enabled. This bit is automatically cleared once an
 *
 * alarm occurs.
 */

#define TIMG_T1_ALARM_EN    (BIT(10))
#define TIMG_T1_ALARM_EN_M  (TIMG_T1_ALARM_EN_V << TIMG_T1_ALARM_EN_S)
#define TIMG_T1_ALARM_EN_V  0x00000001
#define TIMG_T1_ALARM_EN_S  10

/* TIMG_T1_USE_XTAL : R/W; bitpos: [9]; default: 0;
 * 1: Use XTAL_CLK as the source clock of timer group. 0: Use APB_CLK as the
 * source clock of timer group.
 */

#define TIMG_T1_USE_XTAL    (BIT(9))
#define TIMG_T1_USE_XTAL_M  (TIMG_T1_USE_XTAL_V << TIMG_T1_USE_XTAL_S)
#define TIMG_T1_USE_XTAL_V  0x00000001
#define TIMG_T1_USE_XTAL_S  9

/* TIMG_T1LO_REG(i) register
 * Timer 1 current value, low 32 bits
 */

#define TIMG_T1LO_REG(i) (REG_TIMG_BASE(i) + 0x28)

/* TIMG_T1_LO : RO; bitpos: [31:0]; default: 0;
 * After writing to TIMG_T1UPDATE_REG(i), the low 32 bits of the time-base
 * counter
 *
 * of timer 1 can be read here.
 */

#define TIMG_T1_LO    0xFFFFFFFF
#define TIMG_T1_LO_M  (TIMG_T1_LO_V << TIMG_T1_LO_S)
#define TIMG_T1_LO_V  0xFFFFFFFF
#define TIMG_T1_LO_S  0

/* TIMG_T1HI_REG(i) register
 * Timer 1 current value, high 32 bits
 */

#define TIMG_T1HI_REG(i) (REG_TIMG_BASE(i) + 0x2c)

/* TIMG_T1_HI : RO; bitpos: [31:0]; default: 0;
 * After writing to TIMG_T1UPDATE_REG(i), the high 32 bits of the time-base
 * counter
 *
 * of timer 1 can be read here.
 */

#define TIMG_T1_HI    0xFFFFFFFF
#define TIMG_T1_HI_M  (TIMG_T1_HI_V << TIMG_T1_HI_S)
#define TIMG_T1_HI_V  0xFFFFFFFF
#define TIMG_T1_HI_S  0

/* TIMG_T1UPDATE_REG(i) register
 * Write to copy current timer value to TIMGn_T1_(LO/HI)_REG(i)
 */

#define TIMG_T1UPDATE_REG(i) (REG_TIMG_BASE(i) + 0x30)

/* TIMG_T1_UPDATE : R/W; bitpos: [31]; default: 0;
 * After writing 0 or 1 to TIMG_T1UPDATE_REG(i), the counter value
 * is latched.
 */

#define TIMG_T1_UPDATE    (BIT(31))
#define TIMG_T1_UPDATE_M  (TIMG_T1_UPDATE_V << TIMG_T1_UPDATE_S)
#define TIMG_T1_UPDATE_V  0x00000001
#define TIMG_T1_UPDATE_S  31

/* TIMG_T1ALARMLO_REG(i) register
 * Timer 1 alarm value, low 32 bits
 */

#define TIMG_T1ALARMLO_REG(i) (REG_TIMG_BASE(i) + 0x34)

/* TIMG_T1_ALARM_LO : R/W; bitpos: [31:0]; default: 0;
 * Timer 1 alarm trigger time-base counter value, low 32 bits.
 */

#define TIMG_T1_ALARM_LO    0xFFFFFFFF
#define TIMG_T1_ALARM_LO_M  (TIMG_T1_ALARM_LO_V << TIMG_T1_ALARM_LO_S)
#define TIMG_T1_ALARM_LO_V  0xFFFFFFFF
#define TIMG_T1_ALARM_LO_S  0

/* TIMG_T1ALARMHI_REG(i) register
 * Timer 1 alarm value, high bits
 */

#define TIMG_T1ALARMHI_REG(i) (REG_TIMG_BASE(i) + 0x38)

/* TIMG_T1_ALARM_HI : R/W; bitpos: [31:0]; default: 0;
 *
 *
 * Timer 1 alarm trigger time-base counter value, high 32 bits.
 */

#define TIMG_T1_ALARM_HI    0xFFFFFFFF
#define TIMG_T1_ALARM_HI_M  (TIMG_T1_ALARM_HI_V << TIMG_T1_ALARM_HI_S)
#define TIMG_T1_ALARM_HI_V  0xFFFFFFFF
#define TIMG_T1_ALARM_HI_S  0

/* TIMG_T1LOADLO_REG(i) register
 * Timer 1 reload value, low 32 bits
 */

#define TIMG_T1LOADLO_REG(i) (REG_TIMG_BASE(i) + 0x3c)

/* TIMG_T1_LOAD_LO : R/W; bitpos: [31:0]; default: 0;
 *
 *
 * Low 32 bits of the value that a reload will load onto timer 1 time-base
 *
 * Counter.
 */

#define TIMG_T1_LOAD_LO    0xFFFFFFFF
#define TIMG_T1_LOAD_LO_M  (TIMG_T1_LOAD_LO_V << TIMG_T1_LOAD_LO_S)
#define TIMG_T1_LOAD_LO_V  0xFFFFFFFF
#define TIMG_T1_LOAD_LO_S  0

/* TIMG_T1LOADHI_REG(i) register
 * Timer 1 reload value, high 32 bits
 */

#define TIMG_T1LOADHI_REG(i) (REG_TIMG_BASE(i) + 0x40)

/* TIMG_T1_LOAD_HI : R/W; bitpos: [31:0]; default: 0;
 *
 *
 * High 32 bits of the value that a reload will load onto timer 1 time-base
 *
 * counter.
 */

#define TIMG_T1_LOAD_HI    0xFFFFFFFF
#define TIMG_T1_LOAD_HI_M  (TIMG_T1_LOAD_HI_V << TIMG_T1_LOAD_HI_S)
#define TIMG_T1_LOAD_HI_V  0xFFFFFFFF
#define TIMG_T1_LOAD_HI_S  0

/* TIMG_T1LOAD_REG(i) register
 * Write to reload timer from TIMG_T0_(LOADLOLOADHI)_REG(i)
 */

#define TIMG_T1LOAD_REG(i) (REG_TIMG_BASE(i) + 0x44)

/* TIMG_T1_LOAD : WO; bitpos: [31:0]; default: 0;
 *
 *
 * Write any value to trigger a timer 1 time-base counter reload.
 */

#define TIMG_T1_LOAD    0xFFFFFFFF
#define TIMG_T1_LOAD_M  (TIMG_T1_LOAD_V << TIMG_T1_LOAD_S)
#define TIMG_T1_LOAD_V  0xFFFFFFFF
#define TIMG_T1_LOAD_S  0

/* TIMG_WDTCONFIG0_REG(i) register
 * Watchdog timer configuration register
 */

#define TIMG_WDTCONFIG0_REG(i) (REG_TIMG_BASE(i) + 0x48)

/* TIMG_WDT_EN : R/W; bitpos: [31]; default: 0;
 * When set, MWDT is enabled.
 */

#define TIMG_WDT_EN    (BIT(31))
#define TIMG_WDT_EN_M  (TIMG_WDT_EN_V << TIMG_WDT_EN_S)
#define TIMG_WDT_EN_V  0x00000001
#define TIMG_WDT_EN_S  31

/* TIMG_WDT_STG0 : R/W; bitpos: [30:29]; default: 0;
 * Stage 0 configuration. 0: off, 1: interrupt, 2: reset CPU, 3: reset
 * system.
 *
 */

#define TIMG_WDT_STG0    0x00000003
#define TIMG_WDT_STG0_M  (TIMG_WDT_STG0_V << TIMG_WDT_STG0_S)
#define TIMG_WDT_STG0_V  0x00000003
#define TIMG_WDT_STG0_S  29

/* TIMG_WDT_STG1 : R/W; bitpos: [28:27]; default: 0;
 * Stage 1 configuration. 0: off, 1: interrupt, 2: reset CPU, 3: reset
 * system.
 *
 */

#define TIMG_WDT_STG1    0x00000003
#define TIMG_WDT_STG1_M  (TIMG_WDT_STG1_V << TIMG_WDT_STG1_S)
#define TIMG_WDT_STG1_V  0x00000003
#define TIMG_WDT_STG1_S  27

/* TIMG_WDT_STG2 : R/W; bitpos: [26:25]; default: 0;
 * Stage 2 configuration. 0: off, 1: interrupt, 2: reset CPU, 3: reset
 * system.
 *
 */

#define TIMG_WDT_STG2    0x00000003
#define TIMG_WDT_STG2_M  (TIMG_WDT_STG2_V << TIMG_WDT_STG2_S)
#define TIMG_WDT_STG2_V  0x00000003
#define TIMG_WDT_STG2_S  25

/* TIMG_WDT_STG3 : R/W; bitpos: [24:23]; default: 0;
 * Stage 3 configuration. 0: off, 1: interrupt, 2: reset CPU, 3: reset
 * system.
 *
 */

#define TIMG_WDT_STG3    0x00000003
#define TIMG_WDT_STG3_M  (TIMG_WDT_STG3_V << TIMG_WDT_STG3_S)
#define TIMG_WDT_STG3_V  0x00000003
#define TIMG_WDT_STG3_S  23

/* TIMG_WDT_EDGE_INT_EN : R/W; bitpos: [22]; default: 0;
 * When set, an edge type interrupt will occur at the timeout of a stage
 *
 * configured to generate an interrupt.
 */

#define TIMG_WDT_EDGE_INT_EN    (BIT(22))
#define TIMG_WDT_EDGE_INT_EN_M  (TIMG_WDT_EDGE_INT_EN_V << TIMG_WDT_EDGE_INT_EN_S)
#define TIMG_WDT_EDGE_INT_EN_V  0x00000001
#define TIMG_WDT_EDGE_INT_EN_S  22

/* TIMG_WDT_LEVEL_INT_EN : R/W; bitpos: [21]; default: 0;
 * When set, a level type interrupt will occur at the timeout of a stage
 *
 * configured to generate an interrupt.
 */

#define TIMG_WDT_LEVEL_INT_EN    (BIT(21))
#define TIMG_WDT_LEVEL_INT_EN_M  (TIMG_WDT_LEVEL_INT_EN_V << TIMG_WDT_LEVEL_INT_EN_S)
#define TIMG_WDT_LEVEL_INT_EN_V  0x00000001
#define TIMG_WDT_LEVEL_INT_EN_S  21

/* TIMG_WDT_CPU_RESET_LENGTH : R/W; bitpos: [20:18]; default: 1;
 * CPU reset signal length selection. 0: 100 ns, 1: 200 ns,
 *
 * 2: 300 ns, 3: 400 ns, 4: 500 ns, 5: 800 ns, 6: 1.6 us, 7: 3.2 us.
 */

#define TIMG_WDT_CPU_RESET_LENGTH    0x00000007
#define TIMG_WDT_CPU_RESET_LENGTH_M  (TIMG_WDT_CPU_RESET_LENGTH_V << TIMG_WDT_CPU_RESET_LENGTH_S)
#define TIMG_WDT_CPU_RESET_LENGTH_V  0x00000007
#define TIMG_WDT_CPU_RESET_LENGTH_S  18

/* TIMG_WDT_SYS_RESET_LENGTH : R/W; bitpos: [17:15]; default: 1;
 * System reset signal length selection. 0: 100 ns, 1: 200 ns,
 *
 * 2: 300 ns, 3: 400 ns, 4: 500 ns, 5: 800 ns, 6: 1.6 us, 7: 3.2 us.
 */

#define TIMG_WDT_SYS_RESET_LENGTH    0x00000007
#define TIMG_WDT_SYS_RESET_LENGTH_M  (TIMG_WDT_SYS_RESET_LENGTH_V << TIMG_WDT_SYS_RESET_LENGTH_S)
#define TIMG_WDT_SYS_RESET_LENGTH_V  0x00000007
#define TIMG_WDT_SYS_RESET_LENGTH_S  15

/* TIMG_WDT_FLASHBOOT_MOD_EN : R/W; bitpos: [14]; default: 1;
 * When set, Flash boot protection is enabled.
 */

#define TIMG_WDT_FLASHBOOT_MOD_EN    (BIT(14))
#define TIMG_WDT_FLASHBOOT_MOD_EN_M  (TIMG_WDT_FLASHBOOT_MOD_EN_V << TIMG_WDT_FLASHBOOT_MOD_EN_S)
#define TIMG_WDT_FLASHBOOT_MOD_EN_V  0x00000001
#define TIMG_WDT_FLASHBOOT_MOD_EN_S  14

/* TIMG_WDT_PROCPU_RESET_EN : R/W; bitpos: [13]; default: 0;
 * WDT reset CPU enable.
 */

#define TIMG_WDT_PROCPU_RESET_EN    (BIT(13))
#define TIMG_WDT_PROCPU_RESET_EN_M  (TIMG_WDT_PROCPU_RESET_EN_V << TIMG_WDT_PROCPU_RESET_EN_S)
#define TIMG_WDT_PROCPU_RESET_EN_V  0x00000001
#define TIMG_WDT_PROCPU_RESET_EN_S  13

/* TIMG_WDT_APPCPU_RESET_EN : R/W; bitpos: [12]; default: 0;
 * Reserved
 */

#define TIMG_WDT_APPCPU_RESET_EN    (BIT(12))
#define TIMG_WDT_APPCPU_RESET_EN_M  (TIMG_WDT_APPCPU_RESET_EN_V << TIMG_WDT_APPCPU_RESET_EN_S)
#define TIMG_WDT_APPCPU_RESET_EN_V  0x00000001
#define TIMG_WDT_APPCPU_RESET_EN_S  12

/* TIMG_WDTCONFIG1_REG(i) register
 * Watchdog timer prescaler register
 */

#define TIMG_WDTCONFIG1_REG(i) (REG_TIMG_BASE(i) + 0x4c)

/* TIMG_WDT_CLK_PRESCALER : R/W; bitpos: [31:16]; default: 1;
 * MWDT clock prescaler value. MWDT clock period = 12.5 ns *
 *
 * TIMG_WDT_CLK_PRESCALE.
 */

#define TIMG_WDT_CLK_PRESCALER    0x0000FFFF
#define TIMG_WDT_CLK_PRESCALER_M  (TIMG_WDT_CLK_PRESCALER_V << TIMG_WDT_CLK_PRESCALER_S)
#define TIMG_WDT_CLK_PRESCALER_V  0x0000FFFF
#define TIMG_WDT_CLK_PRESCALER_S  16

/* TIMG_WDTCONFIG2_REG(i) register
 * Watchdog timer stage 0 timeout value
 */

#define TIMG_WDTCONFIG2_REG(i) (REG_TIMG_BASE(i) + 0x50)

/* TIMG_WDT_STG0_HOLD : R/W; bitpos: [31:0]; default: 26000000;
 * Stage 0 timeout value, in MWDT clock cycles.
 */

#define TIMG_WDT_STG0_HOLD    0xFFFFFFFF
#define TIMG_WDT_STG0_HOLD_M  (TIMG_WDT_STG0_HOLD_V << TIMG_WDT_STG0_HOLD_S)
#define TIMG_WDT_STG0_HOLD_V  0xFFFFFFFF
#define TIMG_WDT_STG0_HOLD_S  0

/* TIMG_WDTCONFIG3_REG(i) register
 * Watchdog timer stage 1 timeout value
 */

#define TIMG_WDTCONFIG3_REG(i) (REG_TIMG_BASE(i) + 0x54)

/* TIMG_WDT_STG1_HOLD : R/W; bitpos: [31:0]; default: 134217727;
 * Stage 1 timeout value, in MWDT clock cycles.
 */

#define TIMG_WDT_STG1_HOLD    0xFFFFFFFF
#define TIMG_WDT_STG1_HOLD_M  (TIMG_WDT_STG1_HOLD_V << TIMG_WDT_STG1_HOLD_S)
#define TIMG_WDT_STG1_HOLD_V  0xFFFFFFFF
#define TIMG_WDT_STG1_HOLD_S  0

/* TIMG_WDTCONFIG4_REG(i) register
 * Watchdog timer stage 2 timeout value
 */

#define TIMG_WDTCONFIG4_REG(i) (REG_TIMG_BASE(i) + 0x58)

/* TIMG_WDT_STG2_HOLD : R/W; bitpos: [31:0]; default: 1048575;
 * Stage 2 timeout value, in MWDT clock cycles.
 */

#define TIMG_WDT_STG2_HOLD    0xFFFFFFFF
#define TIMG_WDT_STG2_HOLD_M  (TIMG_WDT_STG2_HOLD_V << TIMG_WDT_STG2_HOLD_S)
#define TIMG_WDT_STG2_HOLD_V  0xFFFFFFFF
#define TIMG_WDT_STG2_HOLD_S  0

/* TIMG_WDTCONFIG5_REG(i) register
 * Watchdog timer stage 3 timeout value
 */

#define TIMG_WDTCONFIG5_REG(i) (REG_TIMG_BASE(i) + 0x5c)

/* TIMG_WDT_STG3_HOLD : R/W; bitpos: [31:0]; default: 1048575;
 * Stage 3 timeout value, in MWDT clock cycles.
 */

#define TIMG_WDT_STG3_HOLD    0xFFFFFFFF
#define TIMG_WDT_STG3_HOLD_M  (TIMG_WDT_STG3_HOLD_V << TIMG_WDT_STG3_HOLD_S)
#define TIMG_WDT_STG3_HOLD_V  0xFFFFFFFF
#define TIMG_WDT_STG3_HOLD_S  0

/* TIMG_WDTFEED_REG(i) register
 * Write to feed the watchdog timer
 */

#define TIMG_WDTFEED_REG(i) (REG_TIMG_BASE(i) + 0x60)

/* TIMG_WDT_FEED : WO; bitpos: [31:0]; default: 0;
 * Write any value to feed the MWDT. (WO)
 */

#define TIMG_WDT_FEED    0xFFFFFFFF
#define TIMG_WDT_FEED_M  (TIMG_WDT_FEED_V << TIMG_WDT_FEED_S)
#define TIMG_WDT_FEED_V  0xFFFFFFFF
#define TIMG_WDT_FEED_S  0

/* TIMG_WDTWPROTECT_REG(i) register
 * Watchdog write protect register
 */

#define TIMG_WDTWPROTECT_REG(i) (REG_TIMG_BASE(i) + 0x64)

/* TIMG_WDT_WKEY : R/W; bitpos: [31:0]; default: 1356348065;
 * If the register contains a different value than its reset value, write
 *
 * protection is enabled.
 */

#define TIMG_WDT_WKEY    0xFFFFFFFF
#define TIMG_WDT_WKEY_M  (TIMG_WDT_WKEY_V << TIMG_WDT_WKEY_S)
#define TIMG_WDT_WKEY_V  0xFFFFFFFF
#define TIMG_WDT_WKEY_S  0

/* TIMG_LACTCONFIG_REG(i) register
 * LACT configuration register
 */

#define TIMG_LACTCONFIG_REG(i) (REG_TIMG_BASE(i) + 0x70)

/* TIMG_LACT_EN : R/W; bitpos: [31]; default: 0;
 * Reserved
 */

#define TIMG_LACT_EN    (BIT(31))
#define TIMG_LACT_EN_M  (TIMG_LACT_EN_V << TIMG_LACT_EN_S)
#define TIMG_LACT_EN_V  0x00000001
#define TIMG_LACT_EN_S  31

/* TIMG_LACT_INCREASE : R/W; bitpos: [30]; default: 1;
 * Reserved
 */

#define TIMG_LACT_INCREASE    (BIT(30))
#define TIMG_LACT_INCREASE_M  (TIMG_LACT_INCREASE_V << TIMG_LACT_INCREASE_S)
#define TIMG_LACT_INCREASE_V  0x00000001
#define TIMG_LACT_INCREASE_S  30

/* TIMG_LACT_AUTORELOAD : R/W; bitpos: [29]; default: 1;
 * Reserved
 */

#define TIMG_LACT_AUTORELOAD    (BIT(29))
#define TIMG_LACT_AUTORELOAD_M  (TIMG_LACT_AUTORELOAD_V << TIMG_LACT_AUTORELOAD_S)
#define TIMG_LACT_AUTORELOAD_V  0x00000001
#define TIMG_LACT_AUTORELOAD_S  29

/* TIMG_LACT_DIVIDER : R/W; bitpos: [28:13]; default: 1;
 * Reserved
 */

#define TIMG_LACT_DIVIDER    0x0000FFFF
#define TIMG_LACT_DIVIDER_M  (TIMG_LACT_DIVIDER_V << TIMG_LACT_DIVIDER_S)
#define TIMG_LACT_DIVIDER_V  0x0000FFFF
#define TIMG_LACT_DIVIDER_S  13

/* TIMG_LACT_EDGE_INT_EN : R/W; bitpos: [12]; default: 0;
 * Reserved
 */

#define TIMG_LACT_EDGE_INT_EN    (BIT(12))
#define TIMG_LACT_EDGE_INT_EN_M  (TIMG_LACT_EDGE_INT_EN_V << TIMG_LACT_EDGE_INT_EN_S)
#define TIMG_LACT_EDGE_INT_EN_V  0x00000001
#define TIMG_LACT_EDGE_INT_EN_S  12

/* TIMG_LACT_LEVEL_INT_EN : R/W; bitpos: [11]; default: 0;
 * Reserved
 */

#define TIMG_LACT_LEVEL_INT_EN    (BIT(11))
#define TIMG_LACT_LEVEL_INT_EN_M  (TIMG_LACT_LEVEL_INT_EN_V << TIMG_LACT_LEVEL_INT_EN_S)
#define TIMG_LACT_LEVEL_INT_EN_V  0x00000001
#define TIMG_LACT_LEVEL_INT_EN_S  11

/* TIMG_LACT_ALARM_EN : R/W; bitpos: [10]; default: 0;
 * Reserved
 */

#define TIMG_LACT_ALARM_EN    (BIT(10))
#define TIMG_LACT_ALARM_EN_M  (TIMG_LACT_ALARM_EN_V << TIMG_LACT_ALARM_EN_S)
#define TIMG_LACT_ALARM_EN_V  0x00000001
#define TIMG_LACT_ALARM_EN_S  10

/* TIMG_LACT_LAC_EN : R/W; bitpos: [9]; default: 1;
 * Reserved
 */

#define TIMG_LACT_LAC_EN    (BIT(9))
#define TIMG_LACT_LAC_EN_M  (TIMG_LACT_LAC_EN_V << TIMG_LACT_LAC_EN_S)
#define TIMG_LACT_LAC_EN_V  0x00000001
#define TIMG_LACT_LAC_EN_S  9

/* TIMG_LACT_CPST_EN : R/W; bitpos: [8]; default: 1;
 * Reserved
 */

#define TIMG_LACT_CPST_EN    (BIT(8))
#define TIMG_LACT_CPST_EN_M  (TIMG_LACT_CPST_EN_V << TIMG_LACT_CPST_EN_S)
#define TIMG_LACT_CPST_EN_V  0x00000001
#define TIMG_LACT_CPST_EN_S  8

/* TIMG_LACT_RTC_ONLY : R/W; bitpos: [7]; default: 0;
 * Reserved
 */

#define TIMG_LACT_RTC_ONLY    (BIT(7))
#define TIMG_LACT_RTC_ONLY_M  (TIMG_LACT_RTC_ONLY_V << TIMG_LACT_RTC_ONLY_S)
#define TIMG_LACT_RTC_ONLY_V  0x00000001
#define TIMG_LACT_RTC_ONLY_S  7

/* TIMG_LACT_USE_REFTICK : R/W; bitpos: [6]; default: 0;
 * Reserved
 */

#define TIMG_LACT_USE_REFTICK    (BIT(6))
#define TIMG_LACT_USE_REFTICK_M  (TIMG_LACT_USE_REFTICK_V << TIMG_LACT_USE_REFTICK_S)
#define TIMG_LACT_USE_REFTICK_V  0x00000001
#define TIMG_LACT_USE_REFTICK_S  6

/* TIMG_LACTRTC_REG(i) register
 * LACT RTC register
 */

#define TIMG_LACTRTC_REG(i) (REG_TIMG_BASE(i) + 0x74)

/* TIMG_LACT_RTC_STEP_LEN : R/W; bitpos: [31:6]; default: 0;
 * Reserved
 */

#define TIMG_LACT_RTC_STEP_LEN    0x03FFFFFF
#define TIMG_LACT_RTC_STEP_LEN_M  (TIMG_LACT_RTC_STEP_LEN_V << TIMG_LACT_RTC_STEP_LEN_S)
#define TIMG_LACT_RTC_STEP_LEN_V  0x03FFFFFF
#define TIMG_LACT_RTC_STEP_LEN_S  6

/* TIMG_LACTLO_REG(i) register
 * LACT low register
 */

#define TIMG_LACTLO_REG(i) (REG_TIMG_BASE(i) + 0x78)

/* TIMG_LACT_LO : RO; bitpos: [31:0]; default: 0;
 * Reserved
 */

#define TIMG_LACT_LO    0xFFFFFFFF
#define TIMG_LACT_LO_M  (TIMG_LACT_LO_V << TIMG_LACT_LO_S)
#define TIMG_LACT_LO_V  0xFFFFFFFF
#define TIMG_LACT_LO_S  0

/* TIMG_LACTHI_REG(i) register
 * LACT high register
 */

#define TIMG_LACTHI_REG(i) (REG_TIMG_BASE(i) + 0x7c)

/* TIMG_LACT_HI : RO; bitpos: [31:0]; default: 0;
 * Reserved
 */

#define TIMG_LACT_HI    0xFFFFFFFF
#define TIMG_LACT_HI_M  (TIMG_LACT_HI_V << TIMG_LACT_HI_S)
#define TIMG_LACT_HI_V  0xFFFFFFFF
#define TIMG_LACT_HI_S  0

/* TIMG_LACTUPDATE_REG(i) register
 * LACT update register
 */

#define TIMG_LACTUPDATE_REG(i) (REG_TIMG_BASE(i) + 0x80)

/* TIMG_LACT_UPDATE : WO; bitpos: [31:0]; default: 0;
 * Reserved
 */

#define TIMG_LACT_UPDATE    0xFFFFFFFF
#define TIMG_LACT_UPDATE_M  (TIMG_LACT_UPDATE_V << TIMG_LACT_UPDATE_S)
#define TIMG_LACT_UPDATE_V  0xFFFFFFFF
#define TIMG_LACT_UPDATE_S  0

/* TIMG_LACTALARMLO_REG(i) register
 * LACT alarm low register
 */

#define TIMG_LACTALARMLO_REG(i) (REG_TIMG_BASE(i) + 0x84)

/* TIMG_LACT_ALARM_LO : R/W; bitpos: [31:0]; default: 0;
 * Reserved
 */

#define TIMG_LACT_ALARM_LO    0xFFFFFFFF
#define TIMG_LACT_ALARM_LO_M  (TIMG_LACT_ALARM_LO_V << TIMG_LACT_ALARM_LO_S)
#define TIMG_LACT_ALARM_LO_V  0xFFFFFFFF
#define TIMG_LACT_ALARM_LO_S  0

/* TIMG_LACTALARMHI_REG(i) register
 * LACT alarm high register
 */

#define TIMG_LACTALARMHI_REG(i) (REG_TIMG_BASE(i) + 0x88)

/* TIMG_LACT_ALARM_HI : R/W; bitpos: [31:0]; default: 0;
 * Reserved
 */

#define TIMG_LACT_ALARM_HI    0xFFFFFFFF
#define TIMG_LACT_ALARM_HI_M  (TIMG_LACT_ALARM_HI_V << TIMG_LACT_ALARM_HI_S)
#define TIMG_LACT_ALARM_HI_V  0xFFFFFFFF
#define TIMG_LACT_ALARM_HI_S  0

/* TIMG_LACTLOADLO_REG(i) register
 * LACT load low register
 */

#define TIMG_LACTLOADLO_REG(i) (REG_TIMG_BASE(i) + 0x8c)

/* TIMG_LACT_LOAD_LO : R/W; bitpos: [31:0]; default: 0;
 * Reserved
 */

#define TIMG_LACT_LOAD_LO    0xFFFFFFFF
#define TIMG_LACT_LOAD_LO_M  (TIMG_LACT_LOAD_LO_V << TIMG_LACT_LOAD_LO_S)
#define TIMG_LACT_LOAD_LO_V  0xFFFFFFFF
#define TIMG_LACT_LOAD_LO_S  0

/* TIMG_LACTLOADHI_REG(i) register
 * Timer LACT load high register
 */

#define TIMG_LACTLOADHI_REG(i) (REG_TIMG_BASE(i) + 0x90)

/* TIMG_LACT_LOAD_HI : R/W; bitpos: [31:0]; default: 0;
 * Reserved
 */

#define TIMG_LACT_LOAD_HI    0xFFFFFFFF
#define TIMG_LACT_LOAD_HI_M  (TIMG_LACT_LOAD_HI_V << TIMG_LACT_LOAD_HI_S)
#define TIMG_LACT_LOAD_HI_V  0xFFFFFFFF
#define TIMG_LACT_LOAD_HI_S  0

/* TIMG_LACTLOAD_REG(i) register
 * Timer LACT load register
 */

#define TIMG_LACTLOAD_REG(i) (REG_TIMG_BASE(i) + 0x94)

/* TIMG_LACT_LOAD : WO; bitpos: [31:0]; default: 0;
 * Reserved
 */

#define TIMG_LACT_LOAD    0xFFFFFFFF
#define TIMG_LACT_LOAD_M  (TIMG_LACT_LOAD_V << TIMG_LACT_LOAD_S)
#define TIMG_LACT_LOAD_V  0xFFFFFFFF
#define TIMG_LACT_LOAD_S  0

/* TIMG_INT_ENA_TIMERS_REG(i) register
 * Interrupt enable bits
 */

#define TIMG_INT_ENA_TIMERS_REG(i) (REG_TIMG_BASE(i) + 0x98)

/* TIMG_LACT_INT_ENA : R/W; bitpos: [3]; default: 0;
 * The interrupt enable bit for the TIMG_LACT_INT interrupt.
 */

#define TIMG_LACT_INT_ENA    (BIT(3))
#define TIMG_LACT_INT_ENA_M  (TIMG_LACT_INT_ENA_V << TIMG_LACT_INT_ENA_S)
#define TIMG_LACT_INT_ENA_V  0x00000001
#define TIMG_LACT_INT_ENA_S  3

/* TIMG_WDT_INT_ENA : R/W; bitpos: [2]; default: 0;
 * The interrupt enable bit for the TIMG_WDT_INT interrupt.
 */

#define TIMG_WDT_INT_ENA    (BIT(2))
#define TIMG_WDT_INT_ENA_M  (TIMG_WDT_INT_ENA_V << TIMG_WDT_INT_ENA_S)
#define TIMG_WDT_INT_ENA_V  0x00000001
#define TIMG_WDT_INT_ENA_S  2

/* TIMG_T1_INT_ENA : R/W; bitpos: [1]; default: 0;
 * The interrupt enable bit for the TIMG_T1_INT interrupt.
 */

#define TIMG_T1_INT_ENA    (BIT(1))
#define TIMG_T1_INT_ENA_M  (TIMG_T1_INT_ENA_V << TIMG_T1_INT_ENA_S)
#define TIMG_T1_INT_ENA_V  0x00000001
#define TIMG_T1_INT_ENA_S  1

/* TIMG_T0_INT_ENA : R/W; bitpos: [0]; default: 0;
 * The interrupt enable bit for the TIMG_T0_INT interrupt.
 */

#define TIMG_T0_INT_ENA    (BIT(0))
#define TIMG_T0_INT_ENA_M  (TIMG_T0_INT_ENA_V << TIMG_T0_INT_ENA_S)
#define TIMG_T0_INT_ENA_V  0x00000001
#define TIMG_T0_INT_ENA_S  0

/* TIMG_INT_RAW_TIMERS_REG(i) register
 * Raw interrupt status
 */

#define TIMG_INT_RAW_TIMERS_REG(i) (REG_TIMG_BASE(i) + 0x9c)

/* TIMG_LACT_INT_RAW : RO; bitpos: [3]; default: 0;
 * The raw interrupt status bit for the TIMG_LACT_INT interrupt.
 */

#define TIMG_LACT_INT_RAW    (BIT(3))
#define TIMG_LACT_INT_RAW_M  (TIMG_LACT_INT_RAW_V << TIMG_LACT_INT_RAW_S)
#define TIMG_LACT_INT_RAW_V  0x00000001
#define TIMG_LACT_INT_RAW_S  3

/* TIMG_WDT_INT_RAW : RO; bitpos: [2]; default: 0;
 * The raw interrupt status bit for the TIMG_WDT_INT interrupt.
 */

#define TIMG_WDT_INT_RAW    (BIT(2))
#define TIMG_WDT_INT_RAW_M  (TIMG_WDT_INT_RAW_V << TIMG_WDT_INT_RAW_S)
#define TIMG_WDT_INT_RAW_V  0x00000001
#define TIMG_WDT_INT_RAW_S  2

/* TIMG_T1_INT_RAW : RO; bitpos: [1]; default: 0;
 * The raw interrupt status bit for the TIMG_T1_INT interrupt.
 */

#define TIMG_T1_INT_RAW    (BIT(1))
#define TIMG_T1_INT_RAW_M  (TIMG_T1_INT_RAW_V << TIMG_T1_INT_RAW_S)
#define TIMG_T1_INT_RAW_V  0x00000001
#define TIMG_T1_INT_RAW_S  1

/* TIMG_T0_INT_RAW : RO; bitpos: [0]; default: 0;
 * The raw interrupt status bit for the TIMG_T0_INT interrupt.
 */

#define TIMG_T0_INT_RAW    (BIT(0))
#define TIMG_T0_INT_RAW_M  (TIMG_T0_INT_RAW_V << TIMG_T0_INT_RAW_S)
#define TIMG_T0_INT_RAW_V  0x00000001
#define TIMG_T0_INT_RAW_S  0

/* TIMG_INT_ST_TIMERS_REG(i) register
 * Masked interrupt status
 */

#define TIMG_INT_ST_TIMERS_REG(i) (REG_TIMG_BASE(i) + 0xa0)

/* TIMG_LACT_INT_ST : RO; bitpos: [3]; default: 0;
 * The masked interrupt status bit for the TIMG_LACT_INT interrupt.
 */

#define TIMG_LACT_INT_ST    (BIT(3))
#define TIMG_LACT_INT_ST_M  (TIMG_LACT_INT_ST_V << TIMG_LACT_INT_ST_S)
#define TIMG_LACT_INT_ST_V  0x00000001
#define TIMG_LACT_INT_ST_S  3

/* TIMG_WDT_INT_ST : RO; bitpos: [2]; default: 0;
 * The masked interrupt status bit for the TIMG_WDT_INT interrupt.
 */

#define TIMG_WDT_INT_ST    (BIT(2))
#define TIMG_WDT_INT_ST_M  (TIMG_WDT_INT_ST_V << TIMG_WDT_INT_ST_S)
#define TIMG_WDT_INT_ST_V  0x00000001
#define TIMG_WDT_INT_ST_S  2

/* TIMG_T1_INT_ST : RO; bitpos: [1]; default: 0;
 * The masked interrupt status bit for the TIMG_T1_INT interrupt.
 */

#define TIMG_T1_INT_ST    (BIT(1))
#define TIMG_T1_INT_ST_M  (TIMG_T1_INT_ST_V << TIMG_T1_INT_ST_S)
#define TIMG_T1_INT_ST_V  0x00000001
#define TIMG_T1_INT_ST_S  1

/* TIMG_T0_INT_ST : RO; bitpos: [0]; default: 0;
 * The masked interrupt status bit for the TIMG_T0_INT interrupt.
 */

#define TIMG_T0_INT_ST    (BIT(0))
#define TIMG_T0_INT_ST_M  (TIMG_T0_INT_ST_V << TIMG_T0_INT_ST_S)
#define TIMG_T0_INT_ST_V  0x00000001
#define TIMG_T0_INT_ST_S  0

/* TIMG_INT_CLR_TIMERS_REG(i) register
 * Interrupt clear bits
 */

#define TIMG_INT_CLR_TIMERS_REG(i) (REG_TIMG_BASE(i) + 0xa4)

/* TIMG_LACT_INT_CLR : WO; bitpos: [3]; default: 0;
 * Set this bit to clear the TIMG_LACT_INT interrupt.
 */

#define TIMG_LACT_INT_CLR    (BIT(3))
#define TIMG_LACT_INT_CLR_M  (TIMG_LACT_INT_CLR_V << TIMG_LACT_INT_CLR_S)
#define TIMG_LACT_INT_CLR_V  0x00000001
#define TIMG_LACT_INT_CLR_S  3

/* TIMG_WDT_INT_CLR : WO; bitpos: [2]; default: 0;
 * Set this bit to clear the TIMG_WDT_INT interrupt.
 */

#define TIMG_WDT_INT_CLR    (BIT(2))
#define TIMG_WDT_INT_CLR_M  (TIMG_WDT_INT_CLR_V << TIMG_WDT_INT_CLR_S)
#define TIMG_WDT_INT_CLR_V  0x00000001
#define TIMG_WDT_INT_CLR_S  2

/* TIMG_T1_INT_CLR : WO; bitpos: [1]; default: 0;
 * Set this bit to clear the TIMG_T1_INT interrupt.
 */

#define TIMG_T1_INT_CLR    (BIT(1))
#define TIMG_T1_INT_CLR_M  (TIMG_T1_INT_CLR_V << TIMG_T1_INT_CLR_S)
#define TIMG_T1_INT_CLR_V  0x00000001
#define TIMG_T1_INT_CLR_S  1

/* TIMG_T0_INT_CLR : WO; bitpos: [0]; default: 0;
 * Set this bit to clear the TIMG_T0_INT interrupt.
 */

#define TIMG_T0_INT_CLR    (BIT(0))
#define TIMG_T0_INT_CLR_M  (TIMG_T0_INT_CLR_V << TIMG_T0_INT_CLR_S)
#define TIMG_T0_INT_CLR_V  0x00000001
#define TIMG_T0_INT_CLR_S  0

/* TIMG_RTCCALICFG2_REG(i) register
 * Timer group calibration register
 */

#define TIMG_RTCCALICFG2_REG(i) (REG_TIMG_BASE(i) + 0xa8)

/* TIMG_RTC_CALI_TIMEOUT_THRES : R/W; bitpos: [31:7]; default: 33554431;
 * Threshold value for the RTC calibration timer. If the calibration timer's
 * value exceeds this threshold, a timeout is triggered.
 */

#define TIMG_RTC_CALI_TIMEOUT_THRES    0x01FFFFFF
#define TIMG_RTC_CALI_TIMEOUT_THRES_M  (TIMG_RTC_CALI_TIMEOUT_THRES_V << TIMG_RTC_CALI_TIMEOUT_THRES_S)
#define TIMG_RTC_CALI_TIMEOUT_THRES_V  0x01FFFFFF
#define TIMG_RTC_CALI_TIMEOUT_THRES_S  7

/* TIMG_RTC_CALI_TIMEOUT_RST_CNT : R/W; bitpos: [6:3]; default: 3;
 * Cycles that release calibration timeout reset
 */

#define TIMG_RTC_CALI_TIMEOUT_RST_CNT    0x0000000F
#define TIMG_RTC_CALI_TIMEOUT_RST_CNT_M  (TIMG_RTC_CALI_TIMEOUT_RST_CNT_V << TIMG_RTC_CALI_TIMEOUT_RST_CNT_S)
#define TIMG_RTC_CALI_TIMEOUT_RST_CNT_V  0x0000000F
#define TIMG_RTC_CALI_TIMEOUT_RST_CNT_S  3

/* TIMG_RTC_CALI_TIMEOUT : RO; bitpos: [0]; default: 0;
 * RTC calibration timeout indicator
 */

#define TIMG_RTC_CALI_TIMEOUT    (BIT(0))
#define TIMG_RTC_CALI_TIMEOUT_M  (TIMG_RTC_CALI_TIMEOUT_V << TIMG_RTC_CALI_TIMEOUT_S)
#define TIMG_RTC_CALI_TIMEOUT_V  0x00000001
#define TIMG_RTC_CALI_TIMEOUT_S  0

/* TIMG_TIMERS_DATE_REG(i) register
 * Version control register
 */

#define TIMG_TIMERS_DATE_REG(i) (REG_TIMG_BASE(i) + 0xf8)

/* TIMG_TIMERS_DATE : R/W; bitpos: [27:0]; default: 26243681;
 * Version control register.
 */

#define TIMG_TIMERS_DATE    0x0FFFFFFF
#define TIMG_TIMERS_DATE_M  (TIMG_TIMERS_DATE_V << TIMG_TIMERS_DATE_S)
#define TIMG_TIMERS_DATE_V  0x0FFFFFFF
#define TIMG_TIMERS_DATE_S  0

/* TIMG_REG(i)CLK_REG(i) register
 * Timer group clock gate register
 */

#define TIMG_REG(i)CLK_REG(i) (REG_TIMG_BASE(i) + 0xfc)

/* TIMG_CLK_EN : R/W; bitpos: [31]; default: 0;
 * Register clock gate signal. 1: Registers can be read and written to by
 * software. 0: Registers can not be read or written to by software.
 */

#define TIMG_CLK_EN    (BIT(31))
#define TIMG_CLK_EN_M  (TIMG_CLK_EN_V << TIMG_CLK_EN_S)
#define TIMG_CLK_EN_V  0x00000001
#define TIMG_CLK_EN_S  31

#endif /* __ARCH_XTENSA_SRC_ESP32S2_HARDWARE_ESP32S2_TIMG_H */

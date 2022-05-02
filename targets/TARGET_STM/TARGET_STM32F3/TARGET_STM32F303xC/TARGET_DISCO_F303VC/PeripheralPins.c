/* mbed Microcontroller Library
 *******************************************************************************
 * Copyright (c) 2018, STMicroelectronics
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 3. Neither the name of STMicroelectronics nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *******************************************************************************
 */

#include "PeripheralPins.h"
#include "mbed_toolchain.h"

//==============================================================================
// Notes
//
// - The pins mentioned Px_y_ALTz are alternative possibilities which use other
//   HW peripheral instances. You can use them the same way as any other "normal"
//   pin (i.e. PwmOut pwm(PA_7_ALT0);). These pins are not displayed on the board
//   pinout image on mbed.org.
//
// - The pins which are connected to other components present on the board have
//   the comment "Connected to xxx". The pin function may not work properly in this
//   case. These pins may not be displayed on the board pinout image on mbed.org.
//   Please read the board reference manual and schematic for more information.
//
// - Warning: pins connected to the default STDIO_UART_TX and STDIO_UART_RX pins are commented
//   See https://os.mbed.com/teams/ST/wiki/STDIO for more information.
//
//==============================================================================


//*** ADC ***

MBED_WEAK const PinMap PinMap_ADC[] = {
    {PA_0,       ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 1, 0)}, // ADC1_IN1 // Connected to B1 [Blue PushButton]
    {PA_1,       ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 2, 0)}, // ADC1_IN2
//  {PA_2,       ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 3, 0)}, // ADC1_IN3 // Connected to STDIO_UART_TX
//  {PA_3,       ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 4, 0)}, // ADC1_IN4 // Connected to STDIO_UART_RX
    {PA_4,       ADC_2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 1, 0)}, // ADC2_IN1
    {PA_5,       ADC_2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 2, 0)}, // ADC2_IN2 // Connected to SPI1_SCK [L3GD20_SCL/SPC]
    {PA_6,       ADC_2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 3, 0)}, // ADC2_IN3 // Connected to SPI1_MISO [L3GD20_SA0/SDO]
    {PA_7,       ADC_2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 4, 0)}, // ADC2_IN4 // Connected to SPI1_MISO [L3GD20_SDA/SDI/SDO]
    {PB_0,       ADC_3, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 12, 0)}, // ADC3_IN12
    {PB_1,       ADC_3, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 1, 0)}, // ADC3_IN1
    {PB_2,       ADC_2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 12, 0)}, // ADC2_IN12
    {PB_12,      ADC_4, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 3, 0)}, // ADC4_IN3
    {PB_13,      ADC_3, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 5, 0)}, // ADC3_IN5
    {PB_14,      ADC_4, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 4, 0)}, // ADC4_IN4
    {PB_15,      ADC_4, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 5, 0)}, // ADC4_IN5
    {PC_0,       ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 6, 0)}, // ADC1_IN6
    {PC_0_ALT0,  ADC_2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 6, 0)}, // ADC2_IN6
    {PC_1,       ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 7, 0)}, // ADC1_IN7
    {PC_1_ALT0,  ADC_2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 7, 0)}, // ADC2_IN7
    {PC_2,       ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 8, 0)}, // ADC1_IN8
    {PC_2_ALT0,  ADC_2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 8, 0)}, // ADC2_IN8
    {PC_3,       ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 9, 0)}, // ADC1_IN9
    {PC_3_ALT0,  ADC_2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 9, 0)}, // ADC2_IN9
    {PC_4,       ADC_2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 5, 0)}, // ADC2_IN5
    {PC_5,       ADC_2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 11, 0)}, // ADC2_IN11
    {PD_8,       ADC_4, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 12, 0)}, // ADC4_IN12
    {PD_9,       ADC_4, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 13, 0)}, // ADC4_IN13
    {PD_10,      ADC_3, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 7, 0)}, // ADC3_IN7
    {PD_10_ALT0, ADC_4, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 7, 0)}, // ADC4_IN7
    {PD_11,      ADC_3, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 8, 0)}, // ADC3_IN8
    {PD_11_ALT0, ADC_4, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 8, 0)}, // ADC4_IN8
    {PD_12,      ADC_3, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 9, 0)}, // ADC3_IN9
    {PD_12_ALT0, ADC_4, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 9, 0)}, // ADC4_IN9
    {PD_13,      ADC_3, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 10, 0)}, // ADC3_IN10
    {PD_13_ALT0, ADC_4, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 10, 0)}, // ADC4_IN10
    {PD_14,      ADC_3, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 11, 0)}, // ADC3_IN11
    {PD_14_ALT0, ADC_4, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 11, 0)}, // ADC4_IN11
    {PE_7,       ADC_3, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 13, 0)}, // ADC3_IN13
    {PE_8,       ADC_3, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 6, 0)}, // ADC3_IN6 // Connected to LD4 [Blue Led]
    {PE_8_ALT0,  ADC_4, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 6, 0)}, // ADC4_IN6 // Connected to LD4 [Blue Led]
    {PE_9,       ADC_3, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 2, 0)}, // ADC3_IN2 // Connected to LD3 [Red Led]
    {PE_10,      ADC_3, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 14, 0)}, // ADC3_IN14 // Connected to LD5 [Orange Led]
    {PE_11,      ADC_3, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 15, 0)}, // ADC3_IN15 // Connected to LD7 [Green Led]
    {PE_12,      ADC_3, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 16, 0)}, // ADC3_IN16 // Connected to LD9 [Blue Led]
    {PE_13,      ADC_3, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 3, 0)}, // ADC3_IN3 // Connected to LD10 [Red Led]
    {PE_14,      ADC_4, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 1, 0)}, // ADC4_IN1 // Connected to LD8 [Orange Led]
    {PE_15,      ADC_4, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 2, 0)}, // ADC4_IN2 // Connected to LD6 [Green Led]
    {PF_2,       ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 10, 0)}, // ADC1_IN10
    {PF_2_ALT0,  ADC_2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 10, 0)}, // ADC2_IN10
    {PF_4,       ADC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 5, 0)}, // ADC1_IN5
    {NC, NC, 0}
};

MBED_WEAK const PinMap PinMap_ADC_Internal[] = {
    {ADC_TEMP,   ADC_1,    STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 16, 0)},
    {ADC_VREF1,  ADC_1,    STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 18, 0)},
    {ADC_VREF2,  ADC_2,    STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 18, 0)},
    {ADC_VREF3,  ADC_3,    STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 18, 0)},
    {ADC_VREF4,  ADC_4,    STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 18, 0)},
    {ADC_VBAT,   ADC_1,    STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 17, 0)},
    {ADC_VOPAMP1, ADC_1,   STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 15, 0)},
    {ADC_VOPAMP2, ADC_2,   STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 17, 0)},
    {ADC_VOPAMP3, ADC_3,   STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 17, 0)},
    {ADC_VOPAMP4, ADC_4,   STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 17, 0)},
    {NC, NC, 0}
};

//*** DAC ***

MBED_WEAK const PinMap PinMap_DAC[] = {
    {PA_4,       DAC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 1, 0)}, // DAC_OUT1
    {PA_5,       DAC_1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 2, 0)}, // DAC_OUT2 // Connected to SPI1_SCK [L3GD20_SCL/SPC]
    {NC, NC, 0}
};

//*** I2C ***

MBED_WEAK const PinMap PinMap_I2C_SDA[] = {
    {PA_10,      I2C_2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C2)},
    {PA_14,      I2C_1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C1)}, // Connected to SWCLK
    {PB_7,       I2C_1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C1)}, // Connected to I2C1_SDA [LSM303DLHC_SDA]
    {PB_9,       I2C_1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C1)},
    {PF_0,       I2C_2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C2)}, // Connected to OSC_IN
    {NC, NC, 0}
};

MBED_WEAK const PinMap PinMap_I2C_SCL[] = {
    {PA_9,       I2C_2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C2)},
    {PA_15,      I2C_1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C1)},
    {PB_6,       I2C_1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C1)}, // Connected to I2C1_SCL [LSM303DLHC_SCL]
    {PB_8,       I2C_1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C1)},
    {PF_1,       I2C_2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C2)}, // Connected to OSC_OUT
    {PF_6,       I2C_2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C2)},
    {NC, NC, 0}
};

//*** PWM ***

// TIM2 cannot be used because already used by the us_ticker
MBED_WEAK const PinMap PinMap_PWM[] = {
//  {PA_0,       PWM_2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 1, 0)}, // TIM2_CH1 // Connected to B1 [Blue PushButton]
//  {PA_1,       PWM_2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 2, 0)}, // TIM2_CH2
    {PA_1,       PWM_15, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_TIM15, 1, 1)}, // TIM15_CH1N
//  {PA_2,       PWM_2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 3, 0)}, // TIM2_CH3 // Connected to STDIO_UART_TX
//  {PA_2,       PWM_15, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_TIM15, 1, 0)}, // TIM15_CH1 // Connected to STDIO_UART_TX
//  {PA_3,       PWM_2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 4, 0)}, // TIM2_CH4 // Connected to STDIO_UART_RX
//  {PA_3,       PWM_15, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_TIM15, 2, 0)}, // TIM15_CH2 // Connected to STDIO_UART_RX
    {PA_4,       PWM_3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 2, 0)}, // TIM3_CH2
//  {PA_5,       PWM_2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 1, 0)}, // TIM2_CH1 // Connected to SPI1_SCK [L3GD20_SCL/SPC]
    {PA_6,       PWM_3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 1, 0)}, // TIM3_CH1 // Connected to SPI1_MISO [L3GD20_SA0/SDO]
    {PA_6_ALT0,  PWM_16, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM16, 1, 0)}, // TIM16_CH1 // Connected to SPI1_MISO [L3GD20_SA0/SDO]
    {PA_7,       PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_TIM1, 1, 1)}, // TIM1_CH1N // Connected to SPI1_MISO [L3GD20_SDA/SDI/SDO]
    {PA_7_ALT0,  PWM_3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 2, 0)}, // TIM3_CH2 // Connected to SPI1_MISO [L3GD20_SDA/SDI/SDO]
    {PA_7_ALT1,  PWM_8,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_TIM8, 1, 1)}, // TIM8_CH1N // Connected to SPI1_MISO [L3GD20_SDA/SDI/SDO]
    {PA_7_ALT2,  PWM_17, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM17, 1, 0)}, // TIM17_CH1 // Connected to SPI1_MISO [L3GD20_SDA/SDI/SDO]
    {PA_8,       PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_TIM1, 1, 0)}, // TIM1_CH1
    {PA_9,       PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_TIM1, 2, 0)}, // TIM1_CH2
//  {PA_9,       PWM_2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_TIM2, 3, 0)}, // TIM2_CH3
    {PA_10,      PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_TIM1, 3, 0)}, // TIM1_CH3
//  {PA_10,      PWM_2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_TIM2, 4, 0)}, // TIM2_CH4
    {PA_11,      PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_TIM1, 1, 1)}, // TIM1_CH1N // Connected to DM
    {PA_11_ALT0, PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF11_TIM1, 4, 0)}, // TIM1_CH4 // Connected to DM
    {PA_11_ALT1, PWM_4,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_TIM4, 1, 0)}, // TIM4_CH1 // Connected to DM
    {PA_12,      PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_TIM1, 2, 1)}, // TIM1_CH2N // Connected to DP
    {PA_12_ALT0, PWM_4,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_TIM4, 2, 0)}, // TIM4_CH2 // Connected to DP
    {PA_12_ALT1, PWM_16, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM16, 1, 0)}, // TIM16_CH1 // Connected to DP
    {PA_13,      PWM_4,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_TIM4, 3, 0)}, // TIM4_CH3 // Connected to SWDIO
    {PA_13_ALT0, PWM_16, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM16, 1, 1)}, // TIM16_CH1N // Connected to SWDIO
    {PA_14,      PWM_8,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_TIM8, 2, 0)}, // TIM8_CH2 // Connected to SWCLK
//  {PA_15,      PWM_2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 1, 0)}, // TIM2_CH1
    {PA_15,      PWM_8,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM8, 1, 0)}, // TIM8_CH1
    {PB_0,       PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_TIM1, 2, 1)}, // TIM1_CH2N
    {PB_0_ALT0,  PWM_3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 3, 0)}, // TIM3_CH3
    {PB_0_ALT1,  PWM_8,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_TIM8, 2, 1)}, // TIM8_CH2N
    {PB_1,       PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_TIM1, 3, 1)}, // TIM1_CH3N
    {PB_1_ALT0,  PWM_3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 4, 0)}, // TIM3_CH4
    {PB_1_ALT1,  PWM_8,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_TIM8, 3, 1)}, // TIM8_CH3N
//  {PB_3,       PWM_2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 2, 0)}, // TIM2_CH2 // Connected to SWO
    {PB_3,       PWM_8,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_TIM8, 1, 1)}, // TIM8_CH1N // Connected to SWO
    {PB_4,       PWM_3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 1, 0)}, // TIM3_CH1
    {PB_4_ALT0,  PWM_8,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_TIM8, 2, 1)}, // TIM8_CH2N
    {PB_4_ALT1,  PWM_16, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM16, 1, 0)}, // TIM16_CH1
    {PB_5,       PWM_3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 2, 0)}, // TIM3_CH2
    {PB_5_ALT0,  PWM_8,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM8, 3, 1)}, // TIM8_CH3N
    {PB_5_ALT1,  PWM_17, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_TIM17, 1, 0)}, // TIM17_CH1
    {PB_6,       PWM_4,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM4, 1, 0)}, // TIM4_CH1 // Connected to I2C1_SCL [LSM303DLHC_SCL]
    {PB_6_ALT0,  PWM_8,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_TIM8, 1, 0)}, // TIM8_CH1 // Connected to I2C1_SCL [LSM303DLHC_SCL]
    {PB_6_ALT1,  PWM_16, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM16, 1, 1)}, // TIM16_CH1N // Connected to I2C1_SCL [LSM303DLHC_SCL]
    {PB_7,       PWM_3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_TIM3, 4, 0)}, // TIM3_CH4 // Connected to I2C1_SDA [LSM303DLHC_SDA]
    {PB_7_ALT0,  PWM_4,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM4, 2, 0)}, // TIM4_CH2 // Connected to I2C1_SDA [LSM303DLHC_SDA]
    {PB_7_ALT1,  PWM_17, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM17, 1, 1)}, // TIM17_CH1N // Connected to I2C1_SDA [LSM303DLHC_SDA]
    {PB_8,       PWM_4,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM4, 3, 0)}, // TIM4_CH3
    {PB_8_ALT0,  PWM_8,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_TIM8, 2, 0)}, // TIM8_CH2
    {PB_8_ALT1,  PWM_16, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM16, 1, 0)}, // TIM16_CH1
    {PB_9,       PWM_4,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM4, 4, 0)}, // TIM4_CH4
    {PB_9_ALT0,  PWM_8,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_TIM8, 3, 0)}, // TIM8_CH3
    {PB_9_ALT1,  PWM_17, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM17, 1, 0)}, // TIM17_CH1
//  {PB_10,      PWM_2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 3, 0)}, // TIM2_CH3
//  {PB_11,      PWM_2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 4, 0)}, // TIM2_CH4
    {PB_13,      PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_TIM1, 1, 1)}, // TIM1_CH1N
    {PB_14,      PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_TIM1, 2, 1)}, // TIM1_CH2N
    {PB_14_ALT0, PWM_15, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM15, 1, 0)}, // TIM15_CH1
    {PB_15,      PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_TIM1, 3, 1)}, // TIM1_CH3N
    {PB_15_ALT0, PWM_15, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM15, 1, 1)}, // TIM15_CH1N
    {PB_15_ALT1, PWM_15, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM15, 2, 0)}, // TIM15_CH2
    {PC_6,       PWM_3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 1, 0)}, // TIM3_CH1
    {PC_6_ALT0,  PWM_8,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_TIM8, 1, 0)}, // TIM8_CH1
    {PC_7,       PWM_3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 2, 0)}, // TIM3_CH2
    {PC_7_ALT0,  PWM_8,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_TIM8, 2, 0)}, // TIM8_CH2
    {PC_8,       PWM_3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 3, 0)}, // TIM3_CH3
    {PC_8_ALT0,  PWM_8,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_TIM8, 3, 0)}, // TIM8_CH3
    {PC_9,       PWM_3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 4, 0)}, // TIM3_CH4
    {PC_9_ALT0,  PWM_8,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_TIM8, 4, 0)}, // TIM8_CH4
    {PC_10,      PWM_8,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_TIM8, 1, 1)}, // TIM8_CH1N
    {PC_11,      PWM_8,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_TIM8, 2, 1)}, // TIM8_CH2N
    {PC_12,      PWM_8,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_TIM8, 3, 1)}, // TIM8_CH3N
    {PC_13,      PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_TIM1, 1, 1)}, // TIM1_CH1N
    {PD_1,       PWM_8,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_TIM8, 4, 0)}, // TIM8_CH4
//  {PD_3,       PWM_2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2, 1, 0)}, // TIM2_CH1
//  {PD_4,       PWM_2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2, 2, 0)}, // TIM2_CH2
//  {PD_6,       PWM_2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2, 4, 0)}, // TIM2_CH4
//  {PD_7,       PWM_2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2, 3, 0)}, // TIM2_CH3
    {PD_12,      PWM_4,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM4, 1, 0)}, // TIM4_CH1
    {PD_13,      PWM_4,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM4, 2, 0)}, // TIM4_CH2
    {PD_14,      PWM_4,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM4, 3, 0)}, // TIM4_CH3
    {PD_15,      PWM_4,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM4, 4, 0)}, // TIM4_CH4
    {PE_0,       PWM_16, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_TIM16, 1, 0)}, // TIM16_CH1 // Connected to MEMS_INT1 [L3GD20_INT1]
    {PE_1,       PWM_17, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_TIM17, 1, 0)}, // TIM17_CH1 // Connected to MEMS_INT2 [L3GD20_DRDY/INT2]
    {PE_2,       PWM_3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 1, 0)}, // TIM3_CH1 // Connected to DRDY [LSM303DLHC_DRDY]
    {PE_3,       PWM_3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 2, 0)}, // TIM3_CH2 // Connected to CS_I2C/SPI [L3GD20_CS_I2C/SPI]
    {PE_4,       PWM_3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 3, 0)}, // TIM3_CH3 // Connected to MEMS_INT3 [LSM303DLHC_INT1]
    {PE_5,       PWM_3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 4, 0)}, // TIM3_CH4 // Connected to MEMS_INT4 [LSM303DLHC_INT2]
    {PE_8,       PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM1, 1, 1)}, // TIM1_CH1N // Connected to LD4 [Blue Led]
    {PE_9,       PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM1, 1, 0)}, // TIM1_CH1 // Connected to LD3 [Red Led]
    {PE_10,      PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM1, 2, 1)}, // TIM1_CH2N // Connected to LD5 [Orange Led]
    {PE_11,      PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM1, 2, 0)}, // TIM1_CH2 // Connected to LD7 [Green Led]
    {PE_12,      PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM1, 3, 1)}, // TIM1_CH3N // Connected to LD9 [Blue Led]
    {PE_13,      PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM1, 3, 0)}, // TIM1_CH3 // Connected to LD10 [Red Led]
    {PE_14,      PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM1, 4, 0)}, // TIM1_CH4 // Connected to LD8 [Orange Led]
    {PF_0,       PWM_1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_TIM1, 3, 1)}, // TIM1_CH3N // Connected to OSC_IN
    {PF_6,       PWM_4,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM4, 4, 0)}, // TIM4_CH4
    {PF_9,       PWM_15, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM15, 1, 0)}, // TIM15_CH1
    {PF_10,      PWM_15, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM15, 2, 0)}, // TIM15_CH2
    {NC, NC, 0}
};

//*** SERIAL ***

MBED_WEAK const PinMap PinMap_UART_TX[] = {
    {PA_2,       UART_2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)}, // Connected to STDIO_UART_TX
    {PA_9,       UART_1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
    {PA_14,      UART_2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)}, // Connected to SWCLK
    {PB_3,       UART_2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)}, // Connected to SWO
    {PB_6,       UART_1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)}, // Connected to I2C1_SCL [LSM303DLHC_SCL]
    {PB_10,      UART_3,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
    {PC_4,       UART_1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
    {PC_10,      UART_3,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
    {PC_10_ALT0, UART_4,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_UART4)},
    {PC_12,      UART_5,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_UART5)},
    {PD_5,       UART_2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
    {PD_8,       UART_3,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
    {PE_0,       UART_1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)}, // Connected to MEMS_INT1 [L3GD20_INT1]
    {NC, NC, 0}
};

MBED_WEAK const PinMap PinMap_UART_RX[] = {
    {PA_3,       UART_2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)}, // Connected to STDIO_UART_RX
    {PA_10,      UART_1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
    {PA_15,      UART_2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
    {PB_4,       UART_2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
    {PB_7,       UART_1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)}, // Connected to I2C1_SDA [LSM303DLHC_SDA]
    {PB_11,      UART_3,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
    {PC_5,       UART_1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
    {PC_11,      UART_3,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
    {PC_11_ALT0, UART_4,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_UART4)},
    {PD_2,       UART_5,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_UART5)},
    {PD_6,       UART_2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
    {PD_9,       UART_3,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
    {PE_1,       UART_1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)}, // Connected to MEMS_INT2 [L3GD20_DRDY/INT2]
    {PE_15,      UART_3,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)}, // Connected to LD6 [Green Led]
    {NC, NC, 0}
};

MBED_WEAK const PinMap PinMap_UART_RTS[] = {
    {PA_1,       UART_2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
    {PA_12,      UART_1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)}, // Connected to DP
    {PB_14,      UART_3,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
    {PD_4,       UART_2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
    {PD_12,      UART_3,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
    {PF_6,       UART_3,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
    {NC, NC, 0}
};

MBED_WEAK const PinMap PinMap_UART_CTS[] = {
    {PA_0,       UART_2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)}, // Connected to B1 [Blue PushButton]
    {PA_11,      UART_1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)}, // Connected to DM
    {PA_13,      UART_3,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)}, // Connected to SWDIO
    {PB_13,      UART_3,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
    {PD_3,       UART_2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
    {PD_11,      UART_3,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
    {NC, NC, 0}
};

//*** SPI ***

MBED_WEAK const PinMap PinMap_SPI_MOSI[] = {
    {PA_7,       SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI1)}, // Connected to SPI1_MISO [L3GD20_SDA/SDI/SDO]
    {PB_5,       SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI1)},
    {PB_5_ALT0,  SPI_3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF6_SPI3)},
    {PB_15,      SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI2)},
    {PC_12,      SPI_3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF6_SPI3)},
    {NC, NC, 0}
};

MBED_WEAK const PinMap PinMap_SPI_MISO[] = {
    {PA_6,       SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI1)}, // Connected to SPI1_MISO [L3GD20_SA0/SDO]
    {PB_4,       SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI1)},
    {PB_4_ALT0,  SPI_3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF6_SPI3)},
    {PB_14,      SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI2)},
    {PC_11,      SPI_3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF6_SPI3)},
    {NC, NC, 0}
};

MBED_WEAK const PinMap PinMap_SPI_SCLK[] = {
    {PA_5,       SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI1)}, // Connected to SPI1_SCK [L3GD20_SCL/SPC]
    {PB_3,       SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI1)}, // Connected to SWO
    {PB_3_ALT0,  SPI_3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF6_SPI3)}, // Connected to SWO
    {PB_13,      SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI2)},
    {PC_10,      SPI_3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF6_SPI3)},
    {PF_9,       SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI2)},
    {PF_10,      SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI2)},
    {NC, NC, 0}
};

MBED_WEAK const PinMap PinMap_SPI_SSEL[] = {
    {PA_4,       SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI1)},
    {PA_4_ALT0,  SPI_3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF6_SPI3)},
    {PA_15,      SPI_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI1)},
    {PA_15_ALT0, SPI_3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF6_SPI3)},
    {PB_12,      SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF5_SPI2)},
    {PD_15,      SPI_2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF6_SPI2)},
    {NC, NC, 0}
};

//*** CAN ***

MBED_WEAK const PinMap PinMap_CAN_RD[] = {
    {PA_11,      CAN_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_CAN)}, // Connected to DM
    {PB_8,       CAN_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_CAN)},
    {PD_0,       CAN_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF7_CAN)},
    {NC, NC, 0}
};

MBED_WEAK const PinMap PinMap_CAN_TD[] = {
    {PA_12,      CAN_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_CAN)}, // Connected to DP
    {PB_9,       CAN_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_CAN)},
    {PD_1,       CAN_1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF7_CAN)},
    {NC, NC, 0}
};

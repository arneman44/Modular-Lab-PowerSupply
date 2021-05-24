/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f3xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define VOUT_ADC_Pin GPIO_PIN_0
#define VOUT_ADC_GPIO_Port GPIOA
#define VOUT_ADCA1_Pin GPIO_PIN_1
#define VOUT_ADCA1_GPIO_Port GPIOA
#define TEMP1_Pin GPIO_PIN_2
#define TEMP1_GPIO_Port GPIOA
#define TEMP2_Pin GPIO_PIN_3
#define TEMP2_GPIO_Port GPIOA
#define Interrupt_Pin GPIO_PIN_4
#define Interrupt_GPIO_Port GPIOA
#define Vout_DAC_Pin GPIO_PIN_5
#define Vout_DAC_GPIO_Port GPIOA
#define Iout_DAC_Pin GPIO_PIN_6
#define Iout_DAC_GPIO_Port GPIOA
#define Relay1_Pin GPIO_PIN_7
#define Relay1_GPIO_Port GPIOA
#define ADDR1_Pin GPIO_PIN_0
#define ADDR1_GPIO_Port GPIOB
#define ADDR2_Pin GPIO_PIN_1
#define ADDR2_GPIO_Port GPIOB
#define Relay2_Pin GPIO_PIN_8
#define Relay2_GPIO_Port GPIOA
#define Relay3_Pin GPIO_PIN_9
#define Relay3_GPIO_Port GPIOA
#define Relay4_Pin GPIO_PIN_10
#define Relay4_GPIO_Port GPIOA
#define Enable_Pin GPIO_PIN_11
#define Enable_GPIO_Port GPIOA
#define En_Vout_Pin GPIO_PIN_12
#define En_Vout_GPIO_Port GPIOA
#define I2C_SCL_Pin GPIO_PIN_15
#define I2C_SCL_GPIO_Port GPIOA
#define ADDR3_Pin GPIO_PIN_3
#define ADDR3_GPIO_Port GPIOB
#define RGB_R_Pin GPIO_PIN_4
#define RGB_R_GPIO_Port GPIOB
#define RGB_G_Pin GPIO_PIN_5
#define RGB_G_GPIO_Port GPIOB
#define RGB_B_Pin GPIO_PIN_6
#define RGB_B_GPIO_Port GPIOB
#define I2C_SDA_Pin GPIO_PIN_7
#define I2C_SDA_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

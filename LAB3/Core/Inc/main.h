/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
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
#include "stm32f1xx_hal.h"

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
#define BT1_Pin GPIO_PIN_13
#define BT1_GPIO_Port GPIOC
#define BT2_Pin GPIO_PIN_14
#define BT2_GPIO_Port GPIOC
#define BT3_Pin GPIO_PIN_15
#define BT3_GPIO_Port GPIOC
#define EN0_Pin GPIO_PIN_1
#define EN0_GPIO_Port GPIOA
#define EN1_Pin GPIO_PIN_2
#define EN1_GPIO_Port GPIOA
#define EN2_Pin GPIO_PIN_3
#define EN2_GPIO_Port GPIOA
#define EN3_Pin GPIO_PIN_4
#define EN3_GPIO_Port GPIOA
#define REDNS_Pin GPIO_PIN_5
#define REDNS_GPIO_Port GPIOA
#define YELLOWNS_Pin GPIO_PIN_6
#define YELLOWNS_GPIO_Port GPIOA
#define GREENNS_Pin GPIO_PIN_7
#define GREENNS_GPIO_Port GPIOA
#define SEG0_Pin GPIO_PIN_0
#define SEG0_GPIO_Port GPIOB
#define SEG1_Pin GPIO_PIN_1
#define SEG1_GPIO_Port GPIOB
#define SEG2_Pin GPIO_PIN_2
#define SEG2_GPIO_Port GPIOB
#define SEG10_Pin GPIO_PIN_10
#define SEG10_GPIO_Port GPIOB
#define SEG11_Pin GPIO_PIN_11
#define SEG11_GPIO_Port GPIOB
#define SEG12_Pin GPIO_PIN_12
#define SEG12_GPIO_Port GPIOB
#define SEG13_Pin GPIO_PIN_13
#define SEG13_GPIO_Port GPIOB
#define REDWE_Pin GPIO_PIN_8
#define REDWE_GPIO_Port GPIOA
#define YELLOWWE_Pin GPIO_PIN_9
#define YELLOWWE_GPIO_Port GPIOA
#define GREENWE_Pin GPIO_PIN_10
#define GREENWE_GPIO_Port GPIOA
#define SEG3_Pin GPIO_PIN_3
#define SEG3_GPIO_Port GPIOB
#define SEG4_Pin GPIO_PIN_4
#define SEG4_GPIO_Port GPIOB
#define SEG5_Pin GPIO_PIN_5
#define SEG5_GPIO_Port GPIOB
#define SEG6_Pin GPIO_PIN_6
#define SEG6_GPIO_Port GPIOB
#define SEG7_Pin GPIO_PIN_7
#define SEG7_GPIO_Port GPIOB
#define SEG8_Pin GPIO_PIN_8
#define SEG8_GPIO_Port GPIOB
#define SEG9_Pin GPIO_PIN_9
#define SEG9_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

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
#include "stm32g4xx_hal.h"

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
#define T1_Pin GPIO_PIN_3
#define T1_GPIO_Port GPIOA
#define TRIG_ERROR_Pin GPIO_PIN_5
#define TRIG_ERROR_GPIO_Port GPIOA
#define T_ERROR_Pin GPIO_PIN_7
#define T_ERROR_GPIO_Port GPIOA
#define COMM_ERROR_Pin GPIO_PIN_0
#define COMM_ERROR_GPIO_Port GPIOB
#define T3_Pin GPIO_PIN_12
#define T3_GPIO_Port GPIOB
#define T2_Pin GPIO_PIN_14
#define T2_GPIO_Port GPIOB
#define S_Pin GPIO_PIN_15
#define S_GPIO_Port GPIOB
#define S0_Pin GPIO_PIN_8
#define S0_GPIO_Port GPIOA
#define S1_Pin GPIO_PIN_9
#define S1_GPIO_Port GPIOA
#define S2_Pin GPIO_PIN_10
#define S2_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

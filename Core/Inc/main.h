/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
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
#include "stm32h7xx_hal.h"
#include "stm32h7xx_hal.h"

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
#define GPS_IT_Pin GPIO_PIN_2
#define GPS_IT_GPIO_Port GPIOA
#define SX_TXEN_Pin GPIO_PIN_5
#define SX_TXEN_GPIO_Port GPIOC
#define SX_RXEN_Pin GPIO_PIN_0
#define SX_RXEN_GPIO_Port GPIOB
#define SX_RST_Pin GPIO_PIN_1
#define SX_RST_GPIO_Port GPIOB
#define SX_BUSY_Pin GPIO_PIN_2
#define SX_BUSY_GPIO_Port GPIOB
#define LED_DCMI_Pin GPIO_PIN_12
#define LED_DCMI_GPIO_Port GPIOB
#define LED_SX_Pin GPIO_PIN_13
#define LED_SX_GPIO_Port GPIOB
#define LED_GPS_Pin GPIO_PIN_14
#define LED_GPS_GPIO_Port GPIOB
#define LED_LOOP_Pin GPIO_PIN_15
#define LED_LOOP_GPIO_Port GPIOB
#define DCMI_RESET_Pin GPIO_PIN_6
#define DCMI_RESET_GPIO_Port GPIOD
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

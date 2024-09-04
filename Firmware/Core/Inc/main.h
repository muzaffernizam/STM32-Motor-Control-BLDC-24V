/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define W_Drive_H_Pin GPIO_PIN_0
#define W_Drive_H_GPIO_Port GPIOC
#define V_Drive_H_Pin GPIO_PIN_1
#define V_Drive_H_GPIO_Port GPIOC
#define U_Drive_H_Pin GPIO_PIN_2
#define U_Drive_H_GPIO_Port GPIOC
#define Potentiometer_Read_Pin GPIO_PIN_3
#define Potentiometer_Read_GPIO_Port GPIOC
#define ADC_Shunt_W_Pin GPIO_PIN_6
#define ADC_Shunt_W_GPIO_Port GPIOA
#define W_Drive_L_Pin GPIO_PIN_7
#define W_Drive_L_GPIO_Port GPIOA
#define ADC_Shunt_V_Pin GPIO_PIN_4
#define ADC_Shunt_V_GPIO_Port GPIOC
#define ADC_Shunt_U_Pin GPIO_PIN_5
#define ADC_Shunt_U_GPIO_Port GPIOC
#define V_Drive_L_Pin GPIO_PIN_0
#define V_Drive_L_GPIO_Port GPIOB
#define U_Drive_L_Pin GPIO_PIN_1
#define U_Drive_L_GPIO_Port GPIOB
#define ADC_BUS_Voltage_Read_Pin GPIO_PIN_2
#define ADC_BUS_Voltage_Read_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

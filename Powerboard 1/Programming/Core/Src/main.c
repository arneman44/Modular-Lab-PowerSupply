/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "adc.h"
#include "dac.h"
#include "i2c.h"
#include "gpio.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */
uint8_t I2CAddress;
uint16_t SetVoltage, SetAmprage, CalibrationVolate, CalibrationAmprage;
uint16_t ReadVoltage, ReadAmprage;
uint8_t Enable = 0, ContolReg, Identify;

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

uint8_t Buff[10];
uint8_t DataBuff[14];
enum State
{
  GetReg,
  GettingData
};
enum State TransferState = GetReg;
uint8_t SelectedReg;

void HAL_I2C_AddrCallback(I2C_HandleTypeDef *hi2c, uint8_t direction, uint16_t addrMatchCode)
{
  switch (direction)
  {
  case I2C_DIRECTION_TRANSMIT:
    if (HAL_I2C_Slave_Seq_Receive_IT(hi2c, Buff, 1, I2C_FIRST_FRAME) != HAL_OK)
    {
      //	I2C_Error_Handler();
    }

    break;
  case I2C_DIRECTION_RECEIVE:
    DataBuff[0] = ContolReg;
    DataBuff[1] = Enable;
    DataBuff[2] = SetVoltage & 0xff;
    DataBuff[3] = (SetVoltage & 0xff00) >> 8;
    DataBuff[4] = SetAmprage & 0xff;
    DataBuff[5] = (SetAmprage & 0xff00) >> 8;
    DataBuff[6] = CalibrationVolate & 0xff;
    DataBuff[7] = (CalibrationVolate & 0xff00) >> 8;
    DataBuff[8] = CalibrationAmprage & 0xff;
    DataBuff[9] = (CalibrationAmprage & 0xff00) >> 8;
    DataBuff[10] = ReadVoltage & 0xff;
    DataBuff[11] = (ReadVoltage & 0xff00) >> 8;
    DataBuff[12] = ReadAmprage & 0xff;
    DataBuff[13] = (ReadAmprage & 0xff00) >> 8;
    if (HAL_I2C_Slave_Seq_Transmit_IT(hi2c, &DataBuff, 14, I2C_FIRST_AND_LAST_FRAME) != HAL_OK)
    {
      //I2C_Error_Handler();
    }
    break;
  default:
    //I2C_Error_Handler();
    break;
  }
}

void HAL_I2C_SlaveRxCpltCallback(I2C_HandleTypeDef *HI2C)
{
  //I2Chandler(HI2C);
  if (TransferState == GetReg)
  {
    switch (Buff[0])
    {
    case 0x01:
      HAL_I2C_Slave_Seq_Receive_IT(HI2C, Buff, 1, I2C_LAST_FRAME);
      SelectedReg = 0x01;
      break;
    case 0x02:
      HAL_I2C_Slave_Seq_Receive_IT(HI2C, Buff, 1, I2C_LAST_FRAME);
      SelectedReg = 0x02;
      break;
    case 0x10:
      HAL_I2C_Slave_Seq_Receive_IT(HI2C, Buff, 2, I2C_LAST_FRAME);
      SelectedReg = 0x10;
      break;
    case 0x11:
      HAL_I2C_Slave_Seq_Receive_IT(HI2C, Buff, 2, I2C_LAST_FRAME);
      SelectedReg = 0x11;
      break;
    case 0x12:
      HAL_I2C_Slave_Seq_Receive_IT(HI2C, Buff, 2, I2C_LAST_FRAME);
      SelectedReg = 0x12;
      break;
    case 0x13:
      HAL_I2C_Slave_Seq_Receive_IT(HI2C, Buff, 2, I2C_LAST_FRAME);
      SelectedReg = 0x13;
      break;
    default:
      HAL_I2C_ErrorCallback(HI2C);
      break;
    }
    TransferState = GettingData;
  }
  else
  {
    switch (SelectedReg)
    {
    case 0x01:
      if (Buff[0] < 250)
      {
        Enable = 0;
      }
      else
      {
        Enable = 1;
      }
      break;
    case 0x02:
      if (Buff[0] < 250)
      {
        Identify = 0;
      }
      else
      {
        Identify = 1;
      }
      break;
    case 0x10:
      SetVoltage = Buff[0] || (Buff[1] << 8);
      break;
    case 0x11:
      CalibrationVolate = Buff[0] || (Buff[1] << 8);
      break;
    case 0x12:
      SetAmprage = Buff[0] || (Buff[1] << 8);
      break;
    case 0x13:
      CalibrationAmprage = Buff[0] || (Buff[1] << 8);
      break;
    default:
      HAL_I2C_ErrorCallback(HI2C);
      break;
    }
    TransferState = GetReg;
  }
}

void HAL_I2C_ListenCpltCallback(I2C_HandleTypeDef *hi2c)
{
  HAL_I2C_EnableListen_IT(hi2c);
}

void HAL_I2C_ErrorCallback(I2C_HandleTypeDef *hi2c)
{
  if (HAL_I2C_GetError(hi2c) != HAL_I2C_ERROR_AF)
  {
    I2C_Error_Handler();
  }
}

void I2C_Error_Handler()
{
  //_error_handler();
}
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_ADC1_Init();
  MX_ADC2_Init();
  MX_DAC1_Init();
  MX_DAC2_Init();
  MX_I2C1_Init();
  /* USER CODE BEGIN 2 */
  //HAL_Delay(1000);
  //HAL_DAC_Start(&hdac1,DAC_CHANNEL_2);
  //HAL_DAC_SetValue(&hdac1,DAC_CHANNEL_2,DAC_ALIGN_12B_R,200);
  //HAL_DAC_Start(&hdac2,DAC_CHANNEL_1);
  HAL_DAC_SetValue(&hdac2,DAC_CHANNEL_1,DAC_ALIGN_12B_R,1000);
  //HAL_GPIO_WritePin(En_Vout_GPIO_Port,En_Vout_Pin,GPIO_PIN_SET);

  ReadVoltage = 2222;
  HAL_I2C_EnableListen_IT(&hi2c1);
  //HAL_I2C_Slave_Receive_IT(&hi2c1,Buff,1);

  //I2CStart(&hi2c1);
  uint8_t Read1, Read2;
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */
    if (Enable == 1)
    {
      HAL_GPIO_WritePin(En_Vout_GPIO_Port, En_Vout_Pin, GPIO_PIN_SET);
    }
    else
    {
      HAL_GPIO_WritePin(En_Vout_GPIO_Port, En_Vout_Pin, GPIO_PIN_RESET);
    }
    if(SetVoltage < 2000){
    HAL_DAC_SetValue(&hdac1,DAC_CHANNEL_2,DAC_ALIGN_12B_R,SetVoltage);
    }
    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};
  RCC_PeriphCLKInitTypeDef PeriphClkInit = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI | RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.HSEPredivValue = RCC_HSE_PREDIV_DIV1;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLMUL = RCC_PLL_MUL9;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) != HAL_OK)
  {
    Error_Handler();
  }
  PeriphClkInit.PeriphClockSelection = RCC_PERIPHCLK_I2C1 | RCC_PERIPHCLK_ADC12;
  PeriphClkInit.Adc12ClockSelection = RCC_ADC12PLLCLK_DIV1;
  PeriphClkInit.I2c1ClockSelection = RCC_I2C1CLKSOURCE_HSI;
  if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInit) != HAL_OK)
  {
    Error_Handler();
  }
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

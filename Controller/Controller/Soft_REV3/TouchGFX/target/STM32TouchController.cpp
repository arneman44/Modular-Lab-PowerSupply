/**
  ******************************************************************************
  * File Name          : STM32TouchController.cpp
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */

/* USER CODE BEGIN STM32TouchController */

#include <STM32TouchController.hpp>

extern I2C_HandleTypeDef hi2c3;

typedef enum
{
    CTPressDown,
    CTLiftUp,
    CTContact,
    CTNoEvent
}CTTouchType;


const uint8_t TouchPointBaseAddr[10] = {
    0x03,
    0x09,
    0x0F,
    0x15,
    0x1B,
    0x21,
    0x27,
    0x2D,
    0x33,
    0x39
};

void GetTouchPoint(I2C_HandleTypeDef* hi2c,uint8_t I2Caddr,uint8_t PointNR,uint16_t* TouchPointY,uint16_t* TouchPointX,uint8_t* TouchType,uint8_t* TouchPressure){
  uint8_t I2CBuffer[5],I2CTransmit;
	I2CTransmit = TouchPointBaseAddr[PointNR-1];
  HAL_I2C_Master_Transmit(hi2c,I2Caddr*2,&I2CTransmit,1,100);
  HAL_I2C_Master_Receive(hi2c,(I2Caddr*2)+1,I2CBuffer,5,100);
	//Get Event Flag from Buffer
	*TouchType = (I2CBuffer[0] & 0xC0) >> 6;
	*TouchPointY = ((I2CBuffer[0] & 0x0F) << 8) | I2CBuffer[1];
	*TouchPointX = ((I2CBuffer[2] & 0x0F) << 8) | I2CBuffer[3];
	*TouchPressure = I2CBuffer[3];
	//Debug
	//printf("TouchPoint:%d X:%d Y%d Type:%d Pressure:%d\n\r",PointNR,*TouchPointX,*TouchPointY,*TouchType,*TouchPressure);
}

void STM32TouchController::init()
{
    /**
     * Initialize touch controller and driver
     *
     */
}

bool STM32TouchController::sampleTouch(int32_t& x, int32_t& y)
{
    uint8_t TouchType,Pressure;
    uint16_t Xpos,Ypos;
    GetTouchPoint(&hi2c3,0x38,1,&Ypos,&Xpos,&TouchType,&Pressure);
    x = Xpos;
    y = Ypos;
    
    if(TouchType==2){
      return true;
    } 
    /**
     * By default sampleTouch returns false,
     * return true if a touch has been detected, otherwise false.
     *
     * Coordinates are passed to the caller by reference by x and y.
     *
     * This function is called by the TouchGFX framework.
     * By default sampleTouch is called every tick, this can be adjusted by HAL::setTouchSampleRate(int8_t);
     *
     */
    return false;
}

/* USER CODE END STM32TouchController */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
